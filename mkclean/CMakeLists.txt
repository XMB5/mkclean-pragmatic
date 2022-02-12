project("mkclean" VERSION 0.9.0)

add_executable("mkclean" mkclean.c)

configure_file(mkclean_project.h.in mkclean_project.h)
target_include_directories("mkclean" PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

# Source packaging script
configure_file(pkg.sh.in pkg.sh)
configure_file(src.br.in src.br)
configure_file(CMakeLists.txt.in CMakeLists.txt)

target_link_libraries("mkclean" PUBLIC "matroska2" "ebml2" "corec")

add_subdirectory("regression")
