#pragma once
// IWYU pragma private; include "System/Net/WebResponseStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__HttpStatusCode_def.hpp"
#include "System/Net/zzzz__WebConnectionStream_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebResponseStream)
namespace GlobalNamespace {
struct WebResponseStream__InitReadAsync_d__52;
}
namespace GlobalNamespace {
struct WebResponseStream__ReadAllAsyncInner_d__47;
}
namespace GlobalNamespace {
struct WebResponseStream__ReadAllAsync_d__48;
}
namespace GlobalNamespace {
struct WebResponseStream__ReadAsync_d__40;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
struct HttpStatusCode;
}
namespace System::Net {
struct ReadState;
}
namespace System::Net {
class WebCompletionSource;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System::Net {
class WebException;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Net {
class WebReadStream;
}
namespace System::Net {
class WebRequestStream;
}
namespace System::Net {
class WebResponseStream___c__DisplayClass41_0;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Version;
}
// Forward declare root types
namespace System::Net {
class WebResponseStream;
}
namespace System::Net {
class WebResponseStream___c__DisplayClass41_0;
}
// Write type traits
MARK_REF_T(::System::Net::WebResponseStream*);
MARK_REF_T(::System::Net::WebResponseStream___c__DisplayClass41_0*);
DEFINE_IL2CPP_CLASS(::System::Net::WebResponseStream*, "System.Net", "WebResponseStream");
DEFINE_IL2CPP_CLASS(::System::Net::WebResponseStream___c__DisplayClass41_0*, "System.Net", "WebResponseStream/<>c__DisplayClass41_0");
// Dependencies System.Net.HttpStatusCode, System.Net.WebConnectionStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebResponseStream
class CORDL_TYPE WebResponseStream : public ::System::Net::WebConnectionStream {
public:
// Declarations
using _InitReadAsync_d__52 = ::GlobalNamespace::WebResponseStream__InitReadAsync_d__52;

using _ReadAllAsyncInner_d__47 = ::GlobalNamespace::WebResponseStream__ReadAllAsyncInner_d__47;

using _ReadAllAsync_d__48 = ::GlobalNamespace::WebResponseStream__ReadAllAsync_d__48;

using _ReadAsync_d__40 = ::GlobalNamespace::WebResponseStream__ReadAsync_d__40;

using __c__DisplayClass41_0 = ::System::Net::WebResponseStream___c__DisplayClass41_0;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_ChunkedRead, put=set_ChunkedRead)) bool  ChunkedRead;

 __declspec(property(get=get_ExpectContent)) bool  ExpectContent;

 __declspec(property(get=get_Headers, put=set_Headers)) ::System::Net::WebHeaderCollection*  Headers;

 __declspec(property(get=get_KeepAlive, put=set_KeepAlive)) bool  KeepAlive;

/// @brief Field ME, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ME, put=__cordl_internal_set_ME)) ::StringW  ME;

 __declspec(property(get=get_RequestStream)) ::System::Net::WebRequestStream*  RequestStream;

 __declspec(property(get=get_StatusCode, put=set_StatusCode)) ::System::Net::HttpStatusCode  StatusCode;

 __declspec(property(get=get_StatusDescription, put=set_StatusDescription)) ::StringW  StatusDescription;

 __declspec(property(get=get_Version, put=set_Version)) ::System::Version*  Version;

/// @brief Field <ChunkedRead>k__BackingField, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__ChunkedRead_k__BackingField, put=__cordl_internal_set__ChunkedRead_k__BackingField)) bool  _ChunkedRead_k__BackingField;

/// @brief Field <Headers>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Headers_k__BackingField, put=__cordl_internal_set__Headers_k__BackingField)) ::System::Net::WebHeaderCollection*  _Headers_k__BackingField;

/// @brief Field <KeepAlive>k__BackingField, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__KeepAlive_k__BackingField, put=__cordl_internal_set__KeepAlive_k__BackingField)) bool  _KeepAlive_k__BackingField;

/// @brief Field <RequestStream>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__RequestStream_k__BackingField, put=__cordl_internal_set__RequestStream_k__BackingField)) ::System::Net::WebRequestStream*  _RequestStream_k__BackingField;

/// @brief Field <StatusCode>k__BackingField, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__StatusCode_k__BackingField, put=__cordl_internal_set__StatusCode_k__BackingField)) ::System::Net::HttpStatusCode  _StatusCode_k__BackingField;

/// @brief Field <StatusDescription>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__StatusDescription_k__BackingField, put=__cordl_internal_set__StatusDescription_k__BackingField)) ::StringW  _StatusDescription_k__BackingField;

/// @brief Field <Version>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Version_k__BackingField, put=__cordl_internal_set__Version_k__BackingField)) ::System::Version*  _Version_k__BackingField;

/// @brief Field bufferedEntireContent, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_bufferedEntireContent, put=__cordl_internal_set_bufferedEntireContent)) bool  bufferedEntireContent;

/// @brief Field innerStream, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_innerStream, put=__cordl_internal_set_innerStream)) ::System::Net::WebReadStream*  innerStream;

/// @brief Field locker, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_locker, put=__cordl_internal_set_locker)) ::System::Object*  locker;

/// @brief Field nestedRead, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_nestedRead, put=__cordl_internal_set_nestedRead)) int32_t  nestedRead;

/// @brief Field nextReadCalled, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_nextReadCalled, put=__cordl_internal_set_nextReadCalled)) bool  nextReadCalled;

/// @brief Field pendingRead, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingRead, put=__cordl_internal_set_pendingRead)) ::System::Net::WebCompletionSource*  pendingRead;

/// @brief Field read_eof, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_read_eof, put=__cordl_internal_set_read_eof)) bool  read_eof;

/// @brief Method CheckAuthHeader, addr 0xacc4550, size 0x78, virtual false, abstract: false, final false
inline bool CheckAuthHeader(::StringW  headerName) ;

/// @brief Method Close_internal, addr 0xacc4e84, size 0xa0, virtual true, abstract: false, final false
inline void Close_internal(::by_ref<bool>  disposed) ;

/// @brief Method GetReadException, addr 0xacc4f24, size 0x28c, virtual false, abstract: false, final false
inline ::System::Net::WebException* GetReadException(::System::Net::WebExceptionStatus  status, ::System::Exception*  error, ::StringW  where) ;

/// @brief Method GetResponse, addr 0xacc51b0, size 0x77c, virtual false, abstract: false, final false
inline bool GetResponse(::System::Net::BufferOffsetSize*  buffer, ::by_ref<int32_t>  pos, ::by_ref<::System::Net::ReadState>  state) ;

/// [AsyncStateMachine(typeof(System.Net.WebResponseStream::<InitReadAsync>d__52))]
/// @brief Method InitReadAsync, addr 0xacbf100, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* InitReadAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Initialize, addr 0xacc4654, size 0x550, virtual false, abstract: false, final false
inline void Initialize(::System::Net::BufferOffsetSize*  buffer) ;

static inline ::System::Net::WebResponseStream* New_ctor(::System::Net::WebRequestStream*  request) ;

/// @brief Method ProcessRead, addr 0xacc41cc, size 0x2b8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ProcessRead(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebResponseStream::<ReadAllAsync>d__48))]
/// @brief Method ReadAllAsync, addr 0xacc4cd8, size 0x110, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ReadAllAsync(bool  resending, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebResponseStream::<ReadAllAsyncInner>d__47))]
/// @brief Method ReadAllAsyncInner, addr 0xacc4ba4, size 0x134, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::ArrayW<uint8_t>>* ReadAllAsyncInner(::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebResponseStream::<ReadAsync>d__40))]
/// @brief Method ReadAsync, addr 0xacc4068, size 0x164, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TryReadFromBufferedContent, addr 0xacc4484, size 0xcc, virtual true, abstract: false, final false
inline bool TryReadFromBufferedContent(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::by_ref<int32_t>  result) ;

/// @brief Method WriteAsync, addr 0xacc4de8, size 0x9c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::StringW const& __cordl_internal_get_ME() const;

constexpr ::StringW& __cordl_internal_get_ME() ;

constexpr bool const& __cordl_internal_get__ChunkedRead_k__BackingField() const;

constexpr bool& __cordl_internal_get__ChunkedRead_k__BackingField() ;

constexpr ::System::Net::WebHeaderCollection* const& __cordl_internal_get__Headers_k__BackingField() const;

constexpr ::System::Net::WebHeaderCollection*& __cordl_internal_get__Headers_k__BackingField() ;

constexpr bool const& __cordl_internal_get__KeepAlive_k__BackingField() const;

constexpr bool& __cordl_internal_get__KeepAlive_k__BackingField() ;

constexpr ::System::Net::WebRequestStream* const& __cordl_internal_get__RequestStream_k__BackingField() const;

constexpr ::System::Net::WebRequestStream*& __cordl_internal_get__RequestStream_k__BackingField() ;

constexpr ::System::Net::HttpStatusCode const& __cordl_internal_get__StatusCode_k__BackingField() const;

constexpr ::System::Net::HttpStatusCode& __cordl_internal_get__StatusCode_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__StatusDescription_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__StatusDescription_k__BackingField() ;

constexpr ::System::Version* const& __cordl_internal_get__Version_k__BackingField() const;

constexpr ::System::Version*& __cordl_internal_get__Version_k__BackingField() ;

constexpr bool const& __cordl_internal_get_bufferedEntireContent() const;

constexpr bool& __cordl_internal_get_bufferedEntireContent() ;

constexpr ::System::Net::WebReadStream* const& __cordl_internal_get_innerStream() const;

constexpr ::System::Net::WebReadStream*& __cordl_internal_get_innerStream() ;

constexpr ::System::Object* const& __cordl_internal_get_locker() const;

constexpr ::System::Object*& __cordl_internal_get_locker() ;

constexpr int32_t const& __cordl_internal_get_nestedRead() const;

constexpr int32_t& __cordl_internal_get_nestedRead() ;

constexpr bool const& __cordl_internal_get_nextReadCalled() const;

constexpr bool& __cordl_internal_get_nextReadCalled() ;

constexpr ::System::Net::WebCompletionSource* const& __cordl_internal_get_pendingRead() const;

constexpr ::System::Net::WebCompletionSource*& __cordl_internal_get_pendingRead() ;

constexpr bool const& __cordl_internal_get_read_eof() const;

constexpr bool& __cordl_internal_get_read_eof() ;

constexpr void __cordl_internal_set_ME(::StringW  value) ;

constexpr void __cordl_internal_set__ChunkedRead_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Headers_k__BackingField(::System::Net::WebHeaderCollection*  value) ;

constexpr void __cordl_internal_set__KeepAlive_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__RequestStream_k__BackingField(::System::Net::WebRequestStream*  value) ;

constexpr void __cordl_internal_set__StatusCode_k__BackingField(::System::Net::HttpStatusCode  value) ;

constexpr void __cordl_internal_set__StatusDescription_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Version_k__BackingField(::System::Version*  value) ;

constexpr void __cordl_internal_set_bufferedEntireContent(bool  value) ;

constexpr void __cordl_internal_set_innerStream(::System::Net::WebReadStream*  value) ;

constexpr void __cordl_internal_set_locker(::System::Object*  value) ;

constexpr void __cordl_internal_set_nestedRead(int32_t  value) ;

constexpr void __cordl_internal_set_nextReadCalled(bool  value) ;

constexpr void __cordl_internal_set_pendingRead(::System::Net::WebCompletionSource*  value) ;

constexpr void __cordl_internal_set_read_eof(bool  value) ;

/// @brief Method .ctor, addr 0xacbf070, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebRequestStream*  request) ;

/// @brief Method get_CanRead, addr 0xacc4048, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanWrite, addr 0xacc4050, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// [CompilerGenerated]
/// @brief Method get_ChunkedRead, addr 0xacc4058, size 0x8, virtual false, abstract: false, final false
inline bool get_ChunkedRead() ;

/// @brief Method get_ExpectContent, addr 0xacc45c8, size 0x8c, virtual false, abstract: false, final false
inline bool get_ExpectContent() ;

/// [CompilerGenerated]
/// @brief Method get_Headers, addr 0xacc3ff8, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::WebHeaderCollection* get_Headers() ;

/// [CompilerGenerated]
/// @brief Method get_KeepAlive, addr 0xacc4038, size 0x8, virtual false, abstract: false, final false
inline bool get_KeepAlive() ;

/// [CompilerGenerated]
/// @brief Method get_RequestStream, addr 0xacc3ff0, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::WebRequestStream* get_RequestStream() ;

/// [CompilerGenerated]
/// @brief Method get_StatusCode, addr 0xacc4008, size 0x8, virtual false, abstract: false, final false
inline ::System::Net::HttpStatusCode get_StatusCode() ;

/// [CompilerGenerated]
/// @brief Method get_StatusDescription, addr 0xacc4018, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_StatusDescription() ;

/// [CompilerGenerated]
/// @brief Method get_Version, addr 0xacc4028, size 0x8, virtual false, abstract: false, final false
inline ::System::Version* get_Version() ;

/// [CompilerGenerated]
/// @brief Method set_ChunkedRead, addr 0xacc4060, size 0x8, virtual false, abstract: false, final false
inline void set_ChunkedRead(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Headers, addr 0xacc4000, size 0x8, virtual false, abstract: false, final false
inline void set_Headers(::System::Net::WebHeaderCollection*  value) ;

/// [CompilerGenerated]
/// @brief Method set_KeepAlive, addr 0xacc4040, size 0x8, virtual false, abstract: false, final false
inline void set_KeepAlive(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_StatusCode, addr 0xacc4010, size 0x8, virtual false, abstract: false, final false
inline void set_StatusCode(::System::Net::HttpStatusCode  value) ;

/// [CompilerGenerated]
/// @brief Method set_StatusDescription, addr 0xacc4020, size 0x8, virtual false, abstract: false, final false
inline void set_StatusDescription(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Version, addr 0xacc4030, size 0x8, virtual false, abstract: false, final false
inline void set_Version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebResponseStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebResponseStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebResponseStream(WebResponseStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebResponseStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebResponseStream(WebResponseStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10763};

/// @brief Field innerStream, offset: 0x60, size: 0x8, def value: None
 ::System::Net::WebReadStream*  ___innerStream;

/// @brief Field nextReadCalled, offset: 0x68, size: 0x1, def value: None
 bool  ___nextReadCalled;

/// @brief Field bufferedEntireContent, offset: 0x69, size: 0x1, def value: None
 bool  ___bufferedEntireContent;

/// @brief Field pendingRead, offset: 0x70, size: 0x8, def value: None
 ::System::Net::WebCompletionSource*  ___pendingRead;

/// @brief Field locker, offset: 0x78, size: 0x8, def value: None
 ::System::Object*  ___locker;

/// @brief Field nestedRead, offset: 0x80, size: 0x4, def value: None
 int32_t  ___nestedRead;

/// @brief Field read_eof, offset: 0x84, size: 0x1, def value: None
 bool  ___read_eof;

/// [CompilerGenerated]
/// @brief Field <RequestStream>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Net::WebRequestStream*  ____RequestStream_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Headers>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::System::Net::WebHeaderCollection*  ____Headers_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <StatusCode>k__BackingField, offset: 0x98, size: 0x4, def value: None
 ::System::Net::HttpStatusCode  ____StatusCode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <StatusDescription>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ____StatusDescription_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Version>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::System::Version*  ____Version_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <KeepAlive>k__BackingField, offset: 0xb0, size: 0x1, def value: None
 bool  ____KeepAlive_k__BackingField;

/// @brief Field ME, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___ME;

/// [CompilerGenerated]
/// @brief Field <ChunkedRead>k__BackingField, offset: 0xc0, size: 0x1, def value: None
 bool  ____ChunkedRead_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebResponseStream, ___innerStream) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ___nextReadCalled) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ___bufferedEntireContent) == 0x69, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ___pendingRead) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ___locker) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ___nestedRead) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ___read_eof) == 0x84, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____RequestStream_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____Headers_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____StatusCode_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____StatusDescription_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____Version_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____KeepAlive_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ___ME) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream, ____ChunkedRead_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebResponseStream) == 0xc8, "Size mismatch!");

} // namespace end def System::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebResponseStream/<>c__DisplayClass41_0
class CORDL_TYPE WebResponseStream___c__DisplayClass41_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::System::Net::WebResponseStream*  __4__this;

/// @brief Field buffer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<uint8_t>  buffer;

/// @brief Field offset, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) int32_t  offset;

/// @brief Field size, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) int32_t  size;

static inline ::System::Net::WebResponseStream___c__DisplayClass41_0* New_ctor() ;

/// @brief Method <ProcessRead>b__0, addr 0xacc63f8, size 0x3c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* _ProcessRead_b__0(::System::Threading::CancellationToken  ct) ;

/// @brief Method <ProcessRead>b__1, addr 0xacc6434, size 0x40, virtual false, abstract: false, final false
inline void _ProcessRead_b__1() ;

/// @brief Method <ProcessRead>b__2, addr 0xacc6474, size 0x24, virtual false, abstract: false, final false
inline bool _ProcessRead_b__2() ;

constexpr ::System::Net::WebResponseStream* const& __cordl_internal_get___4__this() const;

constexpr ::System::Net::WebResponseStream*& __cordl_internal_get___4__this() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buffer() ;

constexpr int32_t const& __cordl_internal_get_offset() const;

constexpr int32_t& __cordl_internal_get_offset() ;

constexpr int32_t const& __cordl_internal_get_size() const;

constexpr int32_t& __cordl_internal_get_size() ;

constexpr void __cordl_internal_set___4__this(::System::Net::WebResponseStream*  value) ;

constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_offset(int32_t  value) ;

constexpr void __cordl_internal_set_size(int32_t  value) ;

/// @brief Method .ctor, addr 0xacc63f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebResponseStream___c__DisplayClass41_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebResponseStream___c__DisplayClass41_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebResponseStream___c__DisplayClass41_0(WebResponseStream___c__DisplayClass41_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebResponseStream___c__DisplayClass41_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebResponseStream___c__DisplayClass41_0(WebResponseStream___c__DisplayClass41_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10759};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::System::Net::WebResponseStream*  _____4__this;

/// @brief Field buffer, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buffer;

/// @brief Field offset, offset: 0x20, size: 0x4, def value: None
 int32_t  ___offset;

/// @brief Field size, offset: 0x24, size: 0x4, def value: None
 int32_t  ___size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebResponseStream___c__DisplayClass41_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream___c__DisplayClass41_0, ___buffer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream___c__DisplayClass41_0, ___offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebResponseStream___c__DisplayClass41_0, ___size) == 0x24, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebResponseStream___c__DisplayClass41_0) == 0x28, "Size mismatch!");

} // namespace end def System::Net
