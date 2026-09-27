#pragma once
// IWYU pragma private; include "System/Net/WebRequestStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__WebConnectionStream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WebRequestStream)
namespace GlobalNamespace {
struct WebRequestStream__FinishWriting_d__31;
}
namespace GlobalNamespace {
struct WebRequestStream__Initialize_d__36;
}
namespace GlobalNamespace {
struct WebRequestStream__ProcessWrite_d__34;
}
namespace GlobalNamespace {
struct WebRequestStream__SetHeadersAsync_d__37;
}
namespace GlobalNamespace {
struct WebRequestStream__WriteAsyncInner_d__33;
}
namespace GlobalNamespace {
struct WebRequestStream__WriteChunkTrailer_d__40;
}
namespace GlobalNamespace {
struct WebRequestStream__WriteChunkTrailer_inner_d__39;
}
namespace GlobalNamespace {
struct WebRequestStream__WriteRequestAsync_d__38;
}
namespace System::IO {
class MemoryStream;
}
namespace System::IO {
class Stream;
}
namespace System::Net {
class BufferOffsetSize;
}
namespace System::Net {
class WebCompletionSource;
}
namespace System::Net {
class WebConnectionTunnel;
}
namespace System::Net {
class WebConnection;
}
namespace System::Net {
class WebOperation;
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
// Forward declare root types
namespace System::Net {
class WebRequestStream;
}
// Write type traits
MARK_REF_T(::System::Net::WebRequestStream*);
DEFINE_IL2CPP_CLASS(::System::Net::WebRequestStream*, "System.Net", "WebRequestStream");
// Dependencies System.Net.WebConnectionStream
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebRequestStream
class CORDL_TYPE WebRequestStream : public ::System::Net::WebConnectionStream {
public:
// Declarations
using _FinishWriting_d__31 = ::GlobalNamespace::WebRequestStream__FinishWriting_d__31;

using _Initialize_d__36 = ::GlobalNamespace::WebRequestStream__Initialize_d__36;

using _ProcessWrite_d__34 = ::GlobalNamespace::WebRequestStream__ProcessWrite_d__34;

using _SetHeadersAsync_d__37 = ::GlobalNamespace::WebRequestStream__SetHeadersAsync_d__37;

using _WriteAsyncInner_d__33 = ::GlobalNamespace::WebRequestStream__WriteAsyncInner_d__33;

using _WriteChunkTrailer_d__40 = ::GlobalNamespace::WebRequestStream__WriteChunkTrailer_d__40;

using _WriteChunkTrailer_inner_d__39 = ::GlobalNamespace::WebRequestStream__WriteChunkTrailer_inner_d__39;

using _WriteRequestAsync_d__38 = ::GlobalNamespace::WebRequestStream__WriteRequestAsync_d__38;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_HasWriteBuffer)) bool  HasWriteBuffer;

 __declspec(property(get=get_InnerStream)) ::System::IO::Stream*  InnerStream;

 __declspec(property(get=get_KeepAlive)) bool  KeepAlive;

/// @brief Field ME, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_ME, put=__cordl_internal_set_ME)) ::StringW  ME;

 __declspec(property(get=get_SendChunked, put=set_SendChunked)) bool  SendChunked;

 __declspec(property(get=get_WriteBufferLength)) int32_t  WriteBufferLength;

/// @brief Field <InnerStream>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__InnerStream_k__BackingField, put=__cordl_internal_set__InnerStream_k__BackingField)) ::System::IO::Stream*  _InnerStream_k__BackingField;

/// @brief Field <KeepAlive>k__BackingField, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__KeepAlive_k__BackingField, put=__cordl_internal_set__KeepAlive_k__BackingField)) bool  _KeepAlive_k__BackingField;

/// @brief Field allowBuffering, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowBuffering, put=__cordl_internal_set_allowBuffering)) bool  allowBuffering;

/// @brief Field chunkTrailerWritten, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_chunkTrailerWritten, put=__cordl_internal_set_chunkTrailerWritten)) int32_t  chunkTrailerWritten;

/// @brief Field completeRequestWritten, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_completeRequestWritten, put=__cordl_internal_set_completeRequestWritten)) int32_t  completeRequestWritten;

/// @brief Field crlf, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_crlf, put=setStaticF_crlf)) ::ArrayW<uint8_t>  crlf;

/// @brief Field headers, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_headers, put=__cordl_internal_set_headers)) ::ArrayW<uint8_t>  headers;

/// @brief Field headersSent, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_headersSent, put=__cordl_internal_set_headersSent)) bool  headersSent;

/// @brief Field pendingWrite, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingWrite, put=__cordl_internal_set_pendingWrite)) ::System::Net::WebCompletionSource*  pendingWrite;

/// @brief Field requestWritten, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_requestWritten, put=__cordl_internal_set_requestWritten)) bool  requestWritten;

/// @brief Field sendChunked, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get_sendChunked, put=__cordl_internal_set_sendChunked)) bool  sendChunked;

/// @brief Field totalWritten, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalWritten, put=__cordl_internal_set_totalWritten)) int64_t  totalWritten;

/// @brief Field writeBuffer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_writeBuffer, put=__cordl_internal_set_writeBuffer)) ::System::IO::MemoryStream*  writeBuffer;

/// @brief Method CheckWriteOverflow, addr 0xacc0b14, size 0x94, virtual false, abstract: false, final false
inline void CheckWriteOverflow(int64_t  contentLength, int64_t  totalWritten, int64_t  size) ;

/// @brief Method Close_internal, addr 0xacc1080, size 0x178, virtual true, abstract: false, final false
inline void Close_internal(::by_ref<bool>  disposed) ;

/// [AsyncStateMachine(typeof(System.Net.WebRequestStream::<FinishWriting>d__31))]
/// @brief Method FinishWriting, addr 0xacc0550, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* FinishWriting(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method GetWriteBuffer, addr 0xacc0478, size 0xd8, virtual false, abstract: false, final false
inline ::System::Net::BufferOffsetSize* GetWriteBuffer() ;

/// [AsyncStateMachine(typeof(System.Net.WebRequestStream::<Initialize>d__36))]
/// @brief Method Initialize, addr 0xacbef78, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* Initialize(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method KillBuffer, addr 0xacc0ba8, size 0xc, virtual false, abstract: false, final false
inline void KillBuffer() ;

static inline ::System::Net::WebRequestStream* New_ctor(::System::Net::WebConnection*  connection, ::System::Net::WebOperation*  operation, ::System::IO::Stream*  stream, ::System::Net::WebConnectionTunnel*  tunnel) ;

/// [AsyncStateMachine(typeof(System.Net.WebRequestStream::<ProcessWrite>d__34))]
/// @brief Method ProcessWrite, addr 0xacc09e4, size 0x130, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* ProcessWrite(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadAsync, addr 0xacc0f98, size 0xb0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebRequestStream::<SetHeadersAsync>d__37))]
/// @brief Method SetHeadersAsync, addr 0xacc0bb4, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SetHeadersAsync(bool  setInternalLength, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method TryReadFromBufferedContent, addr 0xacc1048, size 0x38, virtual true, abstract: false, final false
inline bool TryReadFromBufferedContent(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::by_ref<int32_t>  result) ;

/// @brief Method WriteAsync, addr 0xacc0648, size 0x25c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebRequestStream::<WriteAsyncInner>d__33))]
/// @brief Method WriteAsyncInner, addr 0xacc08a4, size 0x140, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsyncInner(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  size, ::System::Net::WebCompletionSource*  completion, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebRequestStream::<WriteChunkTrailer>d__40))]
/// @brief Method WriteChunkTrailer, addr 0xacc0eb0, size 0xe8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteChunkTrailer() ;

/// [AsyncStateMachine(typeof(System.Net.WebRequestStream::<WriteChunkTrailer_inner>d__39))]
/// @brief Method WriteChunkTrailer_inner, addr 0xacc0db8, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteChunkTrailer_inner(::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Net.WebRequestStream::<WriteRequestAsync>d__38))]
/// @brief Method WriteRequestAsync, addr 0xacc0cc0, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteRequestAsync(::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::StringW const& __cordl_internal_get_ME() const;

constexpr ::StringW& __cordl_internal_get_ME() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__InnerStream_k__BackingField() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__InnerStream_k__BackingField() ;

constexpr bool const& __cordl_internal_get__KeepAlive_k__BackingField() const;

constexpr bool& __cordl_internal_get__KeepAlive_k__BackingField() ;

constexpr bool const& __cordl_internal_get_allowBuffering() const;

constexpr bool& __cordl_internal_get_allowBuffering() ;

constexpr int32_t const& __cordl_internal_get_chunkTrailerWritten() const;

constexpr int32_t& __cordl_internal_get_chunkTrailerWritten() ;

constexpr int32_t const& __cordl_internal_get_completeRequestWritten() const;

constexpr int32_t& __cordl_internal_get_completeRequestWritten() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_headers() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_headers() ;

constexpr bool const& __cordl_internal_get_headersSent() const;

constexpr bool& __cordl_internal_get_headersSent() ;

constexpr ::System::Net::WebCompletionSource* const& __cordl_internal_get_pendingWrite() const;

constexpr ::System::Net::WebCompletionSource*& __cordl_internal_get_pendingWrite() ;

constexpr bool const& __cordl_internal_get_requestWritten() const;

constexpr bool& __cordl_internal_get_requestWritten() ;

constexpr bool const& __cordl_internal_get_sendChunked() const;

constexpr bool& __cordl_internal_get_sendChunked() ;

constexpr int64_t const& __cordl_internal_get_totalWritten() const;

constexpr int64_t& __cordl_internal_get_totalWritten() ;

constexpr ::System::IO::MemoryStream* const& __cordl_internal_get_writeBuffer() const;

constexpr ::System::IO::MemoryStream*& __cordl_internal_get_writeBuffer() ;

constexpr void __cordl_internal_set_ME(::StringW  value) ;

constexpr void __cordl_internal_set__InnerStream_k__BackingField(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__KeepAlive_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_allowBuffering(bool  value) ;

constexpr void __cordl_internal_set_chunkTrailerWritten(int32_t  value) ;

constexpr void __cordl_internal_set_completeRequestWritten(int32_t  value) ;

constexpr void __cordl_internal_set_headers(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_headersSent(bool  value) ;

constexpr void __cordl_internal_set_pendingWrite(::System::Net::WebCompletionSource*  value) ;

constexpr void __cordl_internal_set_requestWritten(bool  value) ;

constexpr void __cordl_internal_set_sendChunked(bool  value) ;

constexpr void __cordl_internal_set_totalWritten(int64_t  value) ;

constexpr void __cordl_internal_set_writeBuffer(::System::IO::MemoryStream*  value) ;

/// @brief Method .ctor, addr 0xacbacb0, size 0x180, virtual false, abstract: false, final false
inline void _ctor(::System::Net::WebConnection*  connection, ::System::Net::WebOperation*  operation, ::System::IO::Stream*  stream, ::System::Net::WebConnectionTunnel*  tunnel) ;

static inline ::ArrayW<uint8_t> getStaticF_crlf() ;

/// @brief Method get_CanRead, addr 0xacc03e4, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanWrite, addr 0xacc03ec, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_HasWriteBuffer, addr 0xacc0404, size 0x30, virtual false, abstract: false, final false
inline bool get_HasWriteBuffer() ;

/// [CompilerGenerated]
/// @brief Method get_InnerStream, addr 0xacc03d4, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_InnerStream() ;

/// [CompilerGenerated]
/// @brief Method get_KeepAlive, addr 0xacc03dc, size 0x8, virtual false, abstract: false, final false
inline bool get_KeepAlive() ;

/// @brief Method get_SendChunked, addr 0xacc03f4, size 0x8, virtual false, abstract: false, final false
inline bool get_SendChunked() ;

/// @brief Method get_WriteBufferLength, addr 0xacc0434, size 0x44, virtual false, abstract: false, final false
inline int32_t get_WriteBufferLength() ;

static inline void setStaticF_crlf(::ArrayW<uint8_t>  value) ;

/// @brief Method set_SendChunked, addr 0xacc03fc, size 0x8, virtual false, abstract: false, final false
inline void set_SendChunked(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebRequestStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebRequestStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebRequestStream(WebRequestStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebRequestStream(WebRequestStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10757};

/// @brief Field writeBuffer, offset: 0x60, size: 0x8, def value: None
 ::System::IO::MemoryStream*  ___writeBuffer;

/// @brief Field requestWritten, offset: 0x68, size: 0x1, def value: None
 bool  ___requestWritten;

/// @brief Field allowBuffering, offset: 0x69, size: 0x1, def value: None
 bool  ___allowBuffering;

/// @brief Field sendChunked, offset: 0x6a, size: 0x1, def value: None
 bool  ___sendChunked;

/// @brief Field pendingWrite, offset: 0x70, size: 0x8, def value: None
 ::System::Net::WebCompletionSource*  ___pendingWrite;

/// @brief Field totalWritten, offset: 0x78, size: 0x8, def value: None
 int64_t  ___totalWritten;

/// @brief Field headers, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___headers;

/// @brief Field headersSent, offset: 0x88, size: 0x1, def value: None
 bool  ___headersSent;

/// @brief Field completeRequestWritten, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___completeRequestWritten;

/// @brief Field chunkTrailerWritten, offset: 0x90, size: 0x4, def value: None
 int32_t  ___chunkTrailerWritten;

/// @brief Field ME, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___ME;

/// [CompilerGenerated]
/// @brief Field <InnerStream>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::System::IO::Stream*  ____InnerStream_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <KeepAlive>k__BackingField, offset: 0xa8, size: 0x1, def value: None
 bool  ____KeepAlive_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebRequestStream, ___writeBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___requestWritten) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___allowBuffering) == 0x69, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___sendChunked) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___pendingWrite) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___totalWritten) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___headers) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___headersSent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___completeRequestWritten) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___chunkTrailerWritten) == 0x90, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ___ME) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ____InnerStream_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebRequestStream, ____KeepAlive_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebRequestStream) == 0xb0, "Size mismatch!");

} // namespace end def System::Net
