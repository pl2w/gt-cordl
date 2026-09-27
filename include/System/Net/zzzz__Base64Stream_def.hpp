#pragma once
// IWYU pragma private; include "System/Net/Base64Stream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__DelegatedStream_def.hpp"
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Base64Stream)
namespace System::IO {
class Stream;
}
namespace System::Net::Mime {
class Base64WriteStateInfo;
}
namespace System::Net::Mime {
class IEncodableStream;
}
namespace System::Net {
class Base64Stream_ReadAsyncResult;
}
namespace System::Net {
class Base64Stream_ReadStateInfo;
}
namespace System::Net {
class Base64Stream_WriteAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class Base64Stream;
}
namespace System::Net {
class Base64Stream_ReadAsyncResult;
}
namespace System::Net {
class Base64Stream_ReadStateInfo;
}
namespace System::Net {
class Base64Stream_WriteAsyncResult;
}
// Write type traits
MARK_REF_T(::System::Net::Base64Stream*);
MARK_REF_T(::System::Net::Base64Stream_ReadAsyncResult*);
MARK_REF_T(::System::Net::Base64Stream_ReadStateInfo*);
MARK_REF_T(::System::Net::Base64Stream_WriteAsyncResult*);
DEFINE_IL2CPP_CLASS(::System::Net::Base64Stream*, "System.Net", "Base64Stream");
DEFINE_IL2CPP_CLASS(::System::Net::Base64Stream_ReadAsyncResult*, "System.Net", "Base64Stream/ReadAsyncResult");
DEFINE_IL2CPP_CLASS(::System::Net::Base64Stream_ReadStateInfo*, "System.Net", "Base64Stream/ReadStateInfo");
DEFINE_IL2CPP_CLASS(::System::Net::Base64Stream_WriteAsyncResult*, "System.Net", "Base64Stream/WriteAsyncResult");
// Dependencies System.Net.DelegatedStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Base64Stream
class CORDL_TYPE Base64Stream : public ::System::Net::DelegatedStream {
public:
// Declarations
using ReadAsyncResult = ::System::Net::Base64Stream_ReadAsyncResult;

using ReadStateInfo = ::System::Net::Base64Stream_ReadStateInfo;

using WriteAsyncResult = ::System::Net::Base64Stream_WriteAsyncResult;

 __declspec(property(get=get_ReadState)) ::System::Net::Base64Stream_ReadStateInfo*  ReadState;

 __declspec(property(get=get_WriteState)) ::System::Net::Mime::Base64WriteStateInfo*  WriteState;

/// @brief Field _lineLength, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__lineLength, put=__cordl_internal_set__lineLength)) int32_t  _lineLength;

/// @brief Field _readState, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__readState, put=__cordl_internal_set__readState)) ::System::Net::Base64Stream_ReadStateInfo*  _readState;

/// @brief Field _writeState, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__writeState, put=__cordl_internal_set__writeState)) ::System::Net::Mime::Base64WriteStateInfo*  _writeState;

/// @brief Field s_base64DecodeMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_base64DecodeMap, put=setStaticF_s_base64DecodeMap)) ::ArrayW<uint8_t>  s_base64DecodeMap;

/// @brief Field s_base64EncodeMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_base64EncodeMap, put=setStaticF_s_base64EncodeMap)) ::ArrayW<uint8_t>  s_base64EncodeMap;

/// @brief Convert operator to "::System::Net::Mime::IEncodableStream"
constexpr operator  ::System::Net::Mime::IEncodableStream*() noexcept;

/// @brief Method BeginRead, addr 0xadad880, size 0x15c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method BeginWrite, addr 0xadadb7c, size 0x15c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method Close, addr 0xadadedc, size 0x224, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method DecodeBytes, addr 0xadae158, size 0x26c, virtual true, abstract: false, final true
inline int32_t DecodeBytes(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method EncodeBytes, addr 0xadae3c4, size 0xc, virtual true, abstract: false, final true
inline int32_t EncodeBytes(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method EncodeBytes, addr 0xadae3d0, size 0x89c, virtual false, abstract: false, final false
inline int32_t EncodeBytes(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, bool  dontDeferFinalBytes, bool  shouldAppendSpaceToCRLF) ;

/// @brief Method EndRead, addr 0xadaecb0, size 0xa0, virtual true, abstract: false, final false
inline int32_t EndRead(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EndWrite, addr 0xadaedc0, size 0xa0, virtual true, abstract: false, final false
inline void EndWrite(::System::IAsyncResult*  asyncResult) ;

/// @brief Method Flush, addr 0xadaeec4, size 0x44, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method FlushInternal, addr 0xadae100, size 0x38, virtual false, abstract: false, final false
inline void FlushInternal() ;

/// @brief Method GetEncodedString, addr 0xadaec70, size 0x40, virtual true, abstract: false, final true
inline ::StringW GetEncodedString() ;

/// @brief Method GetStream, addr 0xadaec6c, size 0x4, virtual true, abstract: false, final true
inline ::System::IO::Stream* GetStream() ;

static inline ::System::Net::Base64Stream* New_ctor(::System::IO::Stream*  stream, ::System::Net::Mime::Base64WriteStateInfo*  writeStateInfo) ;

static inline ::System::Net::Base64Stream* New_ctor(::System::Net::Mime::Base64WriteStateInfo*  writeStateInfo) ;

/// @brief Method Read, addr 0xadaefd4, size 0x11c, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Write, addr 0xadaf19c, size 0x13c, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr int32_t const& __cordl_internal_get__lineLength() const;

constexpr int32_t& __cordl_internal_get__lineLength() ;

constexpr ::System::Net::Base64Stream_ReadStateInfo* const& __cordl_internal_get__readState() const;

constexpr ::System::Net::Base64Stream_ReadStateInfo*& __cordl_internal_get__readState() ;

constexpr ::System::Net::Mime::Base64WriteStateInfo* const& __cordl_internal_get__writeState() const;

constexpr ::System::Net::Mime::Base64WriteStateInfo*& __cordl_internal_get__writeState() ;

constexpr void __cordl_internal_set__lineLength(int32_t  value) ;

constexpr void __cordl_internal_set__readState(::System::Net::Base64Stream_ReadStateInfo*  value) ;

constexpr void __cordl_internal_set__writeState(::System::Net::Mime::Base64WriteStateInfo*  value) ;

/// @brief Method .ctor, addr 0xadad5a8, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Net::Mime::Base64WriteStateInfo*  writeStateInfo) ;

/// @brief Method .ctor, addr 0xadad778, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Mime::Base64WriteStateInfo*  writeStateInfo) ;

static inline ::ArrayW<uint8_t> getStaticF_s_base64DecodeMap() ;

static inline ::ArrayW<uint8_t> getStaticF_s_base64EncodeMap() ;

/// @brief Method get_ReadState, addr 0xadad800, size 0x70, virtual false, abstract: false, final false
inline ::System::Net::Base64Stream_ReadStateInfo* get_ReadState() ;

/// @brief Method get_WriteState, addr 0xadad878, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::Mime::Base64WriteStateInfo* get_WriteState() ;

/// @brief Convert to "::System::Net::Mime::IEncodableStream"
constexpr ::System::Net::Mime::IEncodableStream* i___System__Net__Mime__IEncodableStream() noexcept;

static inline void setStaticF_s_base64DecodeMap(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_s_base64EncodeMap(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Base64Stream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Base64Stream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Base64Stream(Base64Stream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Base64Stream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Base64Stream(Base64Stream const& ) = delete;

/// @brief Field InvalidBase64Value offset 0xffffffff size 0x1
static constexpr uint8_t  InvalidBase64Value{static_cast<uint8_t>(0xffu)};

/// @brief Field SizeOfBase64EncodedChar offset 0xffffffff size 0x4
static constexpr int32_t  SizeOfBase64EncodedChar{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10405};

/// @brief Field _lineLength, offset: 0x38, size: 0x4, def value: None
 int32_t  ____lineLength;

/// @brief Field _writeState, offset: 0x40, size: 0x8, def value: None
 ::System::Net::Mime::Base64WriteStateInfo*  ____writeState;

/// @brief Field _readState, offset: 0x48, size: 0x8, def value: None
 ::System::Net::Base64Stream_ReadStateInfo*  ____readState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Base64Stream, ____lineLength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Net::Base64Stream, ____writeState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Net::Base64Stream, ____readState) == 0x48, "Offset mismatch!");

static_assert(sizeof(::System::Net::Base64Stream) == 0x50, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Base64Stream/ReadStateInfo
class CORDL_TYPE Base64Stream_ReadStateInfo : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Pos, put=set_Pos)) uint8_t  Pos;

 __declspec(property(get=get_Val, put=set_Val)) uint8_t  Val;

/// @brief Field <Pos>k__BackingField, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__Pos_k__BackingField, put=__cordl_internal_set__Pos_k__BackingField)) uint8_t  _Pos_k__BackingField;

/// @brief Field <Val>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__Val_k__BackingField, put=__cordl_internal_set__Val_k__BackingField)) uint8_t  _Val_k__BackingField;

static inline ::System::Net::Base64Stream_ReadStateInfo* New_ctor() ;

constexpr uint8_t const& __cordl_internal_get__Pos_k__BackingField() const;

constexpr uint8_t& __cordl_internal_get__Pos_k__BackingField() ;

constexpr uint8_t const& __cordl_internal_get__Val_k__BackingField() const;

constexpr uint8_t& __cordl_internal_get__Val_k__BackingField() ;

constexpr void __cordl_internal_set__Pos_k__BackingField(uint8_t  value) ;

constexpr void __cordl_internal_set__Val_k__BackingField(uint8_t  value) ;

/// @brief Method .ctor, addr 0xadad870, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Pos, addr 0xadaf9c4, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_Pos() ;

/// [CompilerGenerated]
/// @brief Method get_Val, addr 0xadaf9b4, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_Val() ;

/// [CompilerGenerated]
/// @brief Method set_Pos, addr 0xadaf9cc, size 0x8, virtual false, abstract: false, final false
inline void set_Pos(uint8_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Val, addr 0xadaf9bc, size 0x8, virtual false, abstract: false, final false
inline void set_Val(uint8_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Base64Stream_ReadStateInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Base64Stream_ReadStateInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Base64Stream_ReadStateInfo(Base64Stream_ReadStateInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Base64Stream_ReadStateInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Base64Stream_ReadStateInfo(Base64Stream_ReadStateInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10404};

/// [CompilerGenerated]
/// @brief Field <Val>k__BackingField, offset: 0x10, size: 0x1, def value: None
 uint8_t  ____Val_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Pos>k__BackingField, offset: 0x11, size: 0x1, def value: None
 uint8_t  ____Pos_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Base64Stream_ReadStateInfo, ____Val_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Base64Stream_ReadStateInfo, ____Pos_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(sizeof(::System::Net::Base64Stream_ReadStateInfo) == 0x18, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Net.LazyAsyncResult
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Base64Stream/WriteAsyncResult
class CORDL_TYPE Base64Stream_WriteAsyncResult : public ::System::Net::LazyAsyncResult {
public:
// Declarations
/// @brief Field _buffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<uint8_t>  _buffer;

/// @brief Field _count, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Field _offset, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) int32_t  _offset;

/// @brief Field _parent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::System::Net::Base64Stream*  _parent;

/// @brief Field _written, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__written, put=__cordl_internal_set__written)) int32_t  _written;

/// @brief Field s_onWrite, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_onWrite, put=setStaticF_s_onWrite)) ::System::AsyncCallback*  s_onWrite;

/// @brief Method CompleteWrite, addr 0xadaf6d4, size 0x48, virtual false, abstract: false, final false
inline void CompleteWrite(::System::IAsyncResult*  result) ;

/// @brief Method End, addr 0xadaee60, size 0x64, virtual false, abstract: false, final false
static inline void End(::System::IAsyncResult*  result) ;

static inline ::System::Net::Base64Stream_WriteAsyncResult* New_ctor(::System::Net::Base64Stream*  parent, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method OnWrite, addr 0xadaf71c, size 0x1f8, virtual false, abstract: false, final false
static inline void OnWrite(::System::IAsyncResult*  result) ;

/// @brief Method Write, addr 0xadadd40, size 0x19c, virtual false, abstract: false, final false
inline void Write() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr int32_t const& __cordl_internal_get__offset() const;

constexpr int32_t& __cordl_internal_get__offset() ;

constexpr ::System::Net::Base64Stream* const& __cordl_internal_get__parent() const;

constexpr ::System::Net::Base64Stream*& __cordl_internal_get__parent() ;

constexpr int32_t const& __cordl_internal_get__written() const;

constexpr int32_t& __cordl_internal_get__written() ;

constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

constexpr void __cordl_internal_set__offset(int32_t  value) ;

constexpr void __cordl_internal_set__parent(::System::Net::Base64Stream*  value) ;

constexpr void __cordl_internal_set__written(int32_t  value) ;

/// @brief Method .ctor, addr 0xadadcd8, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Base64Stream*  parent, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

static inline ::System::AsyncCallback* getStaticF_s_onWrite() ;

static inline void setStaticF_s_onWrite(::System::AsyncCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Base64Stream_WriteAsyncResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Base64Stream_WriteAsyncResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Base64Stream_WriteAsyncResult(Base64Stream_WriteAsyncResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Base64Stream_WriteAsyncResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Base64Stream_WriteAsyncResult(Base64Stream_WriteAsyncResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10403};

/// @brief Field _parent, offset: 0x48, size: 0x8, def value: None
 ::System::Net::Base64Stream*  ____parent;

/// @brief Field _buffer, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____buffer;

/// @brief Field _offset, offset: 0x58, size: 0x4, def value: None
 int32_t  ____offset;

/// @brief Field _count, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____count;

/// @brief Field _written, offset: 0x60, size: 0x4, def value: None
 int32_t  ____written;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Base64Stream_WriteAsyncResult, ____parent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Base64Stream_WriteAsyncResult, ____buffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::Base64Stream_WriteAsyncResult, ____offset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::Base64Stream_WriteAsyncResult, ____count) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Base64Stream_WriteAsyncResult, ____written) == 0x60, "Offset mismatch!");

static_assert(sizeof(::System::Net::Base64Stream_WriteAsyncResult) == 0x68, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.Net.LazyAsyncResult
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Base64Stream/ReadAsyncResult
class CORDL_TYPE Base64Stream_ReadAsyncResult : public ::System::Net::LazyAsyncResult {
public:
// Declarations
/// @brief Field _buffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<uint8_t>  _buffer;

/// @brief Field _count, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int32_t  _count;

/// @brief Field _offset, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__offset, put=__cordl_internal_set__offset)) int32_t  _offset;

/// @brief Field _parent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::System::Net::Base64Stream*  _parent;

/// @brief Field _read, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__read, put=__cordl_internal_set__read)) int32_t  _read;

/// @brief Field s_onRead, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_onRead, put=setStaticF_s_onRead)) ::System::AsyncCallback*  s_onRead;

/// @brief Method CompleteRead, addr 0xadaf3bc, size 0x78, virtual false, abstract: false, final false
inline bool CompleteRead(::System::IAsyncResult*  result) ;

/// @brief Method End, addr 0xadaed50, size 0x70, virtual false, abstract: false, final false
static inline int32_t End(::System::IAsyncResult*  result) ;

static inline ::System::Net::Base64Stream_ReadAsyncResult* New_ctor(::System::Net::Base64Stream*  parent, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method OnRead, addr 0xadaf434, size 0x200, virtual false, abstract: false, final false
static inline void OnRead(::System::IAsyncResult*  result) ;

/// @brief Method Read, addr 0xadada44, size 0x138, virtual false, abstract: false, final false
inline void Read() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__buffer() ;

constexpr int32_t const& __cordl_internal_get__count() const;

constexpr int32_t& __cordl_internal_get__count() ;

constexpr int32_t const& __cordl_internal_get__offset() const;

constexpr int32_t& __cordl_internal_get__offset() ;

constexpr ::System::Net::Base64Stream* const& __cordl_internal_get__parent() const;

constexpr ::System::Net::Base64Stream*& __cordl_internal_get__parent() ;

constexpr int32_t const& __cordl_internal_get__read() const;

constexpr int32_t& __cordl_internal_get__read() ;

constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__count(int32_t  value) ;

constexpr void __cordl_internal_set__offset(int32_t  value) ;

constexpr void __cordl_internal_set__parent(::System::Net::Base64Stream*  value) ;

constexpr void __cordl_internal_set__read(int32_t  value) ;

/// @brief Method .ctor, addr 0xadad9dc, size 0x68, virtual false, abstract: false, final false
inline void _ctor(::System::Net::Base64Stream*  parent, ::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

static inline ::System::AsyncCallback* getStaticF_s_onRead() ;

static inline void setStaticF_s_onRead(::System::AsyncCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Base64Stream_ReadAsyncResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Base64Stream_ReadAsyncResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Base64Stream_ReadAsyncResult(Base64Stream_ReadAsyncResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Base64Stream_ReadAsyncResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Base64Stream_ReadAsyncResult(Base64Stream_ReadAsyncResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10402};

/// @brief Field _parent, offset: 0x48, size: 0x8, def value: None
 ::System::Net::Base64Stream*  ____parent;

/// @brief Field _buffer, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____buffer;

/// @brief Field _offset, offset: 0x58, size: 0x4, def value: None
 int32_t  ____offset;

/// @brief Field _count, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____count;

/// @brief Field _read, offset: 0x60, size: 0x4, def value: None
 int32_t  ____read;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Base64Stream_ReadAsyncResult, ____parent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Net::Base64Stream_ReadAsyncResult, ____buffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Net::Base64Stream_ReadAsyncResult, ____offset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Net::Base64Stream_ReadAsyncResult, ____count) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Net::Base64Stream_ReadAsyncResult, ____read) == 0x60, "Offset mismatch!");

static_assert(sizeof(::System::Net::Base64Stream_ReadAsyncResult) == 0x68, "Size mismatch!");

} // namespace end def System::Net
