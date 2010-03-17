/*
 * $Id: legacy.cpp 1319 2008-09-19 16:08:57Z robux4 $
 * Copyright (c) 2010, Steve Lhomme
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the Matroska Foundation nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY The Matroska Foundation ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL The Matroska Foundation BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <cassert>

#include "ebml/EbmlElement.h"
#include "ebml/EbmlMaster.h"
#include "ebml/EbmlString.h"
#include "ebml/EbmlUnicodeString.h"
#include "ebml/EbmlUInteger.h"
#include "ebml/EbmlSInteger.h"
#include "ebml/EbmlFloat.h"
#include "ebml/EbmlDate.h"
#include "ebml/EbmlStream.h"
#include "ebml/EbmlVoid.h"
#include "ebml/EbmlHead.h"
#include "ebml/EbmlSubHead.h"
#include "ebml/EbmlContexts.h"

#include "ebml/ebml.h"

namespace LIBEBML_NAMESPACE
{

const EbmlSemanticContext EbmlCrc32_Context = EbmlSemanticContext(0, NULL, NULL, *GetEbmlGlobal_Context, NULL);
const EbmlSemanticContext EbmlVoid_Context = EbmlSemanticContext(0, NULL, NULL, *GetEbmlGlobal_Context, NULL);

const EbmlSemanticContext EbmlHead_Context            = EbmlSemanticContext(0, NULL, NULL, *GetEbmlGlobal_Context, NULL);
const EbmlSemanticContext EDocType_Context            = EbmlSemanticContext(0, NULL, NULL, *GetEbmlGlobal_Context, NULL);
const EbmlSemanticContext EDocTypeVersion_Context     = EbmlSemanticContext(0, NULL, NULL, *GetEbmlGlobal_Context, NULL);
const EbmlSemanticContext EDocTypeReadVersion_Context = EbmlSemanticContext(0, NULL, NULL, *GetEbmlGlobal_Context, NULL);
const EbmlSemanticContext EMaxSizeLength_Context      = EbmlSemanticContext(0, NULL, NULL, *GetEbmlGlobal_Context, NULL);
const EbmlSemanticContext EMaxIdLength_Context        = EbmlSemanticContext(0, NULL, NULL, *GetEbmlGlobal_Context, NULL);
const EbmlSemanticContext EReadVersion_Context        = EbmlSemanticContext(0, NULL, NULL, *GetEbmlGlobal_Context, NULL);
const EbmlSemanticContext EVersion_Context            = EbmlSemanticContext(0, NULL, NULL, *GetEbmlGlobal_Context, NULL);

size_t CodedSizeLength(filepos_t Length, size_t SizeLength, bool bSizeIsFinite)
{
assert(0);
    return 0;
}

size_t CodedValueLength(filepos_t Length, size_t CodedSize, binary * OutBuffer)
{
assert(0);
    return 0;
}

size_t CodedSizeLengthSigned(filepos_t Length, size_t SizeLength)
{
assert(0);
    return 0;
}

size_t CodedValueLengthSigned(filepos_t Length, size_t CodedSize, binary * OutBuffer)
{
assert(0);
    return 0;
}

filepos_t ReadCodedSizeValue(const binary * InBuffer, uint32_t & BufferSize, uint64_t & SizeUnknown)
{
assert(0);
    return INVALID_FILEPOS_T;
}

filepos_t ReadCodedSizeSignedValue(const binary * InBuffer, uint32_t & BufferSize, uint64_t & SizeUnknown)
{
assert(0);
    return INVALID_FILEPOS_T;
}

const EbmlSemanticContext & GetEbmlGlobal_Context()
{
assert(0);
    return *((EbmlSemanticContext*)NULL);
}

big_int16::big_int16(int16_t)
{
assert(0);
}

big_int16::big_int16()
{
assert(0);
}

big_int16::operator int16() const
{
assert(0);
    return 0;
}

void big_int16::Fill(binary *Buffer) const
{
assert(0);
}

void big_int16::Eval(const binary *Buffer)
{
assert(0);
}



/*****************
 * EbmlElement
 ****************/
EbmlElement::EbmlElement(const EbmlSemanticContext &)
{
assert(0);
    Node = EBML_ElementCreate(NULL,NULL,0);
    if (Node)
    {
        // TODO: throw some error
    }
}

EbmlElement::EbmlElement()
{
assert(0);
    Node = EBML_ElementCreate(NULL,NULL,0);
    if (Node)
    {
        // TODO: throw some error
    }
}

EbmlElement * EbmlElement::SkipData(EbmlStream & DataStream, const EbmlSemanticContext & Context, EbmlElement * TestReadElt, bool AllowDummyElt)
{
assert(0);
    return NULL;
}

bool EbmlElement::IsFiniteSize() const
{
assert(0);
    return false;
}

size_t EbmlElement::GetSizeLength() const
{
assert(0);
    return 0;
}

filepos_t EbmlElement::GetSize() const
{
assert(0);
    return INVALID_FILEPOS_T;
}

bool EbmlElement::SetSizeInfinite(bool bIsInfinite)
{
assert(0);
    return false;
}

void EbmlElement::SetDefaultSize(filepos_t aDefaultSize)
{
assert(0);
}

bool EbmlElement::ForceSize(filepos_t NewSize)
{
assert(0);
    return false;
}

void EbmlElement::SetSizeLength(size_t)
{
assert(0);
}

size_t EbmlElement::HeadSize() const
{
assert(0);
    return 0;
}

filepos_t EbmlElement::ElementSize(bool bKeepIntact) const
{
assert(0);
    return INVALID_FILEPOS_T;
}

filepos_t EbmlElement::GetElementPosition() const
{
    return Node->ElementPosition;
}

uint32 EbmlElement::Render(IOCallback & output, bool bSaveDefault)
{
assert(0);
    return INVALID_FILEPOS_T;
}

filepos_t EbmlElement::OverwriteHead(IOCallback & output, bool bKeepPosition)
{
assert(0);
    return INVALID_FILEPOS_T;
}

void EbmlElement::Read(EbmlStream & inDataStream, const EbmlSemanticContext & Context, int & UpperEltFound, EbmlElement * & FoundElt, bool AllowDummyElt, ScopeMode ReadFully)
{
assert(0);
}

/*****************
 * EbmlSemanticContext
 ****************/
EbmlSemanticContext::EbmlSemanticContext(size_t,const EbmlSemantic*,const EbmlSemanticContext *,const EbmlSemanticContext & (*global)(), const EbmlCallbacks*)
{
}

bool EbmlSemanticContext::operator!=(const EbmlSemanticContext & Elt) const
{
assert(0);
    return false;
}

/*****************
 * EbmlId
 ****************/
EbmlId::EbmlId(uint32_t Id, size_t Size)
{
assert(0);
}

EbmlId::EbmlId(const binary aValue[4], size_t aLength)
{
assert(0);
}

bool EbmlId::operator==(const EbmlId & TestId) const
{
    return (TestId.Value == Value && TestId.Length == Length);
}

bool EbmlId::operator!=(const EbmlId & TestId) const
{
    return (TestId.Value != Value || TestId.Length != Length);
}

void EbmlId::Fill(binary * Buffer) const
{
assert(0);
}


/*****************
 * EbmlMaster
 ****************/
EbmlMaster::EbmlMaster()
{
assert(0);
}

EbmlMaster::EbmlMaster(const EbmlSemanticContext &Context)
:EbmlElement(Context)
{
assert(0);
}

bool EbmlMaster::CheckMandatory() const
{
assert(0);
    return true;
}

uint64 EbmlMaster::ReadData(IOCallback & input, ScopeMode ReadFully)
{
assert(0);
    return INVALID_FILEPOS_T;
}

filepos_t EbmlMaster::WriteHead(IOCallback & output, size_t SizeLength, bool bKeepIntact)
{
assert(0);
    return INVALID_FILEPOS_T;
}

uint64 EbmlMaster::UpdateSize(bool bKeepIntact, bool bForceRender)
{
assert(0);
    return INVALID_FILEPOS_T;
}

void EbmlMaster::Sort()
{
assert(0);
}

bool EbmlMaster::InsertElement(EbmlElement & element, size_t position)
{
assert(0);
    return false;
}

bool EbmlMaster::PushElement(EbmlElement & element)
{
assert(0);
    return false;
}

EbmlElement *EbmlMaster::AddNewElt(const EbmlCallbacks & Callbacks)
{
assert(0);
    return NULL;
}

EbmlElement *EbmlMaster::FindElt(const EbmlCallbacks & Callbacks) const
{
assert(0);
    return NULL;
}

EbmlElement *EbmlMaster::FindFirstElt(const EbmlCallbacks & Callbacks) const
{
assert(0);
    return NULL;
}

EbmlElement *EbmlMaster::FindFirstElt(const EbmlCallbacks & Callbacks, const bool bCreateIfNull)
{
assert(0);
    return NULL;
}

EbmlElement *EbmlMaster::FindNextElt(const EbmlElement & FromElt) const
{
assert(0);
    return NULL;
}

EbmlElement *EbmlMaster::FindNextElt(const EbmlElement & FromElt, const bool bCreateIfNull)
{
assert(0);
    return NULL;
}

void EbmlMaster::Remove(size_t Index)
{
assert(0);
}

EbmlElement * EbmlMaster::Clone() const
{
assert(0);
    return NULL;
}


/*****************
 * EbmlBinary
 ****************/
void EbmlBinary::CopyBuffer(const void *Buffer, const uint32 BufferSize)
{
assert(0);
}

void EbmlBinary::SetBuffer(const binary *Buffer, size_t BufferSize)
{
assert(0);
}

uint64 EbmlBinary::ReadData(IOCallback & input, ScopeMode ReadFully)
{
assert(0);
    return INVALID_FILEPOS_T;
}

uint64 EbmlBinary::UpdateSize(bool bKeepIntact, bool bForceRender)
{
assert(0);
    return INVALID_FILEPOS_T;
}

EbmlElement * EbmlBinary::Clone() const
{
assert(0);
    return NULL;
}


/*****************
 * EbmlString
 ****************/
EbmlString::EbmlString(const char *)
{
assert(0);
}

EbmlString::EbmlString()
{}

uint64 EbmlString::ReadData(IOCallback & input, ScopeMode ReadFully)
{
assert(0);
    return INVALID_FILEPOS_T;
}

uint64 EbmlString::UpdateSize(bool bKeepIntact, bool bForceRender)
{
assert(0);
    return INVALID_FILEPOS_T;
}

EbmlElement * EbmlString::Clone() const
{
assert(0);
    return NULL;
}


/*****************
 * EbmlUnicodeString
 ****************/
EbmlUnicodeString::EbmlUnicodeString()
{}

uint64 EbmlUnicodeString::ReadData(IOCallback & input, ScopeMode ReadFully)
{
assert(0);
    return INVALID_FILEPOS_T;
}

uint64 EbmlUnicodeString::UpdateSize(bool bKeepIntact, bool bForceRender)
{
assert(0);
    return INVALID_FILEPOS_T;
}

EbmlElement * EbmlUnicodeString::Clone() const
{
assert(0);
    return NULL;
}


/*****************
 * UTFstring
 ****************/
UTFstring::UTFstring(const wchar_t*)
{
assert(0);
}

UTFstring::UTFstring()
{
assert(0);
}

const wchar_t* UTFstring::c_str() const
{
assert(0);
    return NULL;
}

UTFstring::operator const wchar_t*() const
{
assert(0);
    return NULL;
}

bool UTFstring::operator==(const UTFstring&) const
{
assert(0);
    return false;
}

size_t UTFstring::length() const
{
assert(0);
    return 0;
}

/*****************
 * EbmlUInteger
 ****************/
EbmlUInteger::EbmlUInteger()
{
}

void EbmlUInteger::SetDefaultSize(filepos_t aDefaultSize)
{
assert(0);
}

uint64 EbmlUInteger::ReadData(IOCallback & input, ScopeMode ReadFully)
{
assert(0);
    return INVALID_FILEPOS_T;
}

uint64 EbmlUInteger::UpdateSize(bool bKeepIntact, bool bForceRender)
{
assert(0);
    return INVALID_FILEPOS_T;
}

EbmlElement * EbmlUInteger::Clone() const
{
assert(0);
    return NULL;
}


/*****************
 * EbmlSInteger
 ****************/
void EbmlSInteger::SetDefaultSize(filepos_t aDefaultSize)
{
assert(0);
}

uint64 EbmlSInteger::ReadData(IOCallback & input, ScopeMode ReadFully)
{
assert(0);
    return INVALID_FILEPOS_T;
}

uint64 EbmlSInteger::UpdateSize(bool bKeepIntact, bool bForceRender)
{
assert(0);
    return INVALID_FILEPOS_T;
}

EbmlElement * EbmlSInteger::Clone() const
{
assert(0);
    return NULL;
}


/*****************
 * EbmlFloat
 ****************/
EbmlFloat::EbmlFloat(double DefaultValue, Precision prec)
{
assert(0);
}

EbmlFloat::EbmlFloat(Precision prec)
{
assert(0);
    SetPrecision(prec);
}

EbmlFloat::operator double() const
{
    return reinterpret_cast<const ebml_float*>(Node)->Value;
}

void EbmlFloat::SetPrecision(Precision prec)
{
assert(0);
    reinterpret_cast<ebml_float*>(Node)->IsSimplePrecision = (prec==FLOAT_32);
}

uint64 EbmlFloat::ReadData(IOCallback & input, ScopeMode ReadFully)
{
assert(0);
    return INVALID_FILEPOS_T;
}

uint64 EbmlFloat::UpdateSize(bool bKeepIntact, bool bForceRender)
{
assert(0);
    return INVALID_FILEPOS_T;
}

EbmlElement * EbmlFloat::Clone() const
{
assert(0);
    return NULL;
}


/*****************
 * EbmlDate
 ****************/
datetime_t EbmlDate::GetEpochDate() const
{
    return EBML_DateTime(reinterpret_cast<const ebml_date*>(Node));
}

void EbmlDate::SetEpochDate(datetime_t NewDate)
{
    EBML_DateSetDateTime(reinterpret_cast<ebml_date*>(Node),NewDate);
}

uint64 EbmlDate::ReadData(IOCallback & input, ScopeMode ReadFully)
{
assert(0);
    return INVALID_FILEPOS_T;
}

uint64 EbmlDate::UpdateSize(bool bKeepIntact, bool bForceRender)
{
assert(0);
    return INVALID_FILEPOS_T;
}

EbmlElement * EbmlDate::Clone() const
{
assert(0);
    return NULL;
}


/*****************
 * EbmlVoid
 ****************/
filepos_t EbmlVoid::ReplaceWith(EbmlElement & EltToReplaceWith, IOCallback & output, bool ComeBackAfterward, bool bKeepIntact)
{
assert(0);
    return INVALID_FILEPOS_T;
}

void EbmlVoid::SetSize(filepos_t)
{
assert(0);
}


/*****************
 * IOCallback
 ****************/
void IOCallback::writeFully(const void* Buffer, size_t Size)
{
assert(0);
}


/*****************
 * EbmlStream
 ****************/
EbmlStream::EbmlStream(IOCallback &)
{
assert(0);
}

IOCallback & EbmlStream::I_O()
{
assert(0);
    return *((IOCallback*)NULL);
}

EbmlElement * EbmlStream::FindNextID(const EbmlCallbacks & ClassInfos, filepos_t MaxDataSize)
{
assert(0);
    return NULL;
}

EbmlElement * EbmlStream::FindNextElement(const EbmlSemanticContext & Context, int & UpperLevel, filepos_t MaxDataSize, bool AllowDummyElt, size_t MaxLowerLevel)
{
assert(0);
    return NULL;
}


/*****************
 * EbmlHead
 ****************/
EbmlHead::EbmlHead()
{
assert(0);
}


};