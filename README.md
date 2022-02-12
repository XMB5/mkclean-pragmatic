# mkclean-pragmatic

[Matroska mkclean](https://www.matroska.org/downloads/mkclean.html) optimized to produce files for streaming. Only tested with mkv, not webm.

# Background (why we need mkclean in the first place)

In order to stream mkv files, the video player needs to read the [cues element](https://www.matroska.org/technical/cues.html), a part of the file that maps video timestamps to byte offsets. These offsets allow the video player to seek to timestamps throughout the video, without guessing the byte location in the file.

Typically, the cues element is located at the end of a matroska file (see [matroska structure diagram](https://www.matroska.org/technical/diagram.html)). This is because the application that creates the mkv writes all of the video data first, and only afterwords can it know the exact byte locations of the video content.

However, having the cues element at the end of the file is not ideal: the video player must read the seek head at the start of the file, then seek the the end of the file to read the cues information, then seek back to read the video content. With HTTP streaming, this amounts to 3 separate requests, which add a few seconds of delay compared to 1 request.

`mkclean` restructures a mkv file so that the cues element is at the beginning, allowing the video to start playing sooner.

# Usage

```
mkclean v0.9.0-pragmatic, https://github.com/XMB5/mkclean-pragmatic
Usage: mkclean [options] <matroska_src> [matroska_dst]
Options:
  --keep-cues   keep the original Cues content and move it to the front
  --remux       redo the Clusters layout
  --doctype <v> force the doctype version
    1: 'matroska' v1
    2: 'matroska' v2
    3: 'matroska' v3
    4: 'webm'
    5: 'matroska' v1 with DivX extensions
    6: 'matroska' v4
  --live        the output file resembles a live stream
  --timecodescale <v> force the global TimestampScale to <v> (1000000 is a good value)
  --unsafe      don't output elements that are used for file recovery (saves more space)
  --optimize    use all possible optimization for the output file
  --optimize_nv use all possible optimization for the output file, except video tracks
  --regression  the output file is suitable for regression tests
  --alt-3d <t>  the track with ID <v> has alternate 3D fields (left first)
  --quiet       only output errors
  --version     show the version of mkclean
  --help        show this screen
```

## Tips

- It should work without setting any options
  - In my limited testing, the "optimizations" flags (disabled by default) seems to make no improvements
  - `--keep-cues` worked fine for most of my test videos, but for one video it produced many warnings and generated a very small file (<100 bytes)
    - I haven't noticed any video playback difference with regenerated cues vs original (as produced by [mkvmerge](https://mkvtoolnix.download/doc/mkvmerge.html))
- If you don't provide a destination file, it will write to `"clean." + filename` (`test1.mkv` -> `clean.test1.mkv`).

# Technical changes (compared to original mkclean)

- Set doctype version to `matroska v4` by default
  - Set document read version to 2 (for compatibility, otherwise it won't work with vlc, mpv, ffmpeg, etc.)
- Disable optimizations by default (equivalent to normal mkclean `--no-optimize` flag)
- Ignore when cluster timestamps don't go in chronological order
  - Force-changing the timestamps causes mpv to warn "Invalid video timestamp: 10.085000 -> 10.060000"

# Build

```bash
mkdir build
cd build
cmake ..
make -j$(nproc)
```
After building, the executable is located at `build/mkclean/mkclean`.
