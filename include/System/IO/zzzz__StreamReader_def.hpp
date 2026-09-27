#pragma once
// IWYU pragma private; include "System/IO/StreamReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextReader_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamReader)
namespace GlobalNamespace {
class StreamReader_NullStreamReader;
}
namespace GlobalNamespace {
struct StreamReader__ReadAsyncInternal_d__66;
}
namespace GlobalNamespace {
struct StreamReader__ReadBufferAsync_d__69;
}
namespace GlobalNamespace {
struct StreamReader__ReadToEndAsyncInternal_d__63;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
struct Memory_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::IO {
class StreamReader;
}
// Write type traits
MARK_REF_T(::System::IO::StreamReader*);
DEFINE_IL2CPP_CLASS(::System::IO::StreamReader*, "System.IO", "StreamReader");
// Dependencies System.IO.TextReader
namespace System::IO {
// Is value type: false
// CS Name: System.IO.StreamReader
class CORDL_TYPE StreamReader : public ::System::IO::TextReader {
public:
// Declarations
using NullStreamReader = ::GlobalNamespace::StreamReader_NullStreamReader;

using _ReadAsyncInternal_d__66 = ::GlobalNamespace::StreamReader__ReadAsyncInternal_d__66;

using _ReadBufferAsync_d__69 = ::GlobalNamespace::StreamReader__ReadBufferAsync_d__69;

using _ReadToEndAsyncInternal_d__63 = ::GlobalNamespace::StreamReader__ReadToEndAsyncInternal_d__63;

 __declspec(property(get=get_BaseStream)) ::System::IO::Stream*  BaseStream;

 __declspec(property(get=get_CurrentEncoding)) ::System::Text::Encoding*  CurrentEncoding;

 __declspec(property(get=get_EndOfStream)) bool  EndOfStream;

 __declspec(property(get=get_LeaveOpen)) bool  LeaveOpen;

/// @brief Field Null, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::System::IO::StreamReader*  Null;

/// @brief Field _asyncReadTask, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__asyncReadTask, put=__cordl_internal_set__asyncReadTask)) ::System::Threading::Tasks::Task*  _asyncReadTask;

/// @brief Field _byteBuffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__byteBuffer, put=__cordl_internal_set__byteBuffer)) ::ArrayW<uint8_t>  _byteBuffer;

/// @brief Field _byteLen, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__byteLen, put=__cordl_internal_set__byteLen)) int32_t  _byteLen;

/// @brief Field _bytePos, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__bytePos, put=__cordl_internal_set__bytePos)) int32_t  _bytePos;

/// @brief Field _charBuffer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__charBuffer, put=__cordl_internal_set__charBuffer)) ::ArrayW<char16_t>  _charBuffer;

/// @brief Field _charLen, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__charLen, put=__cordl_internal_set__charLen)) int32_t  _charLen;

/// @brief Field _charPos, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__charPos, put=__cordl_internal_set__charPos)) int32_t  _charPos;

/// @brief Field _checkPreamble, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get__checkPreamble, put=__cordl_internal_set__checkPreamble)) bool  _checkPreamble;

/// @brief Field _closable, offset 0x57, size 0x1 
 __declspec(property(get=__cordl_internal_get__closable, put=__cordl_internal_set__closable)) bool  _closable;

/// @brief Field _decoder, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__decoder, put=__cordl_internal_set__decoder)) ::System::Text::Decoder*  _decoder;

/// @brief Field _detectEncoding, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__detectEncoding, put=__cordl_internal_set__detectEncoding)) bool  _detectEncoding;

/// @brief Field _encoding, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoding, put=__cordl_internal_set__encoding)) ::System::Text::Encoding*  _encoding;

/// @brief Field _isBlocked, offset 0x56, size 0x1 
 __declspec(property(get=__cordl_internal_get__isBlocked, put=__cordl_internal_set__isBlocked)) bool  _isBlocked;

/// @brief Field _maxCharsPerBuffer, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxCharsPerBuffer, put=__cordl_internal_set__maxCharsPerBuffer)) int32_t  _maxCharsPerBuffer;

/// @brief Field _stream, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Method CheckAsyncTaskInProgress, addr 0xa287748, size 0x6c, virtual false, abstract: false, final false
inline void CheckAsyncTaskInProgress() ;

/// @brief Method Close, addr 0xa287fcc, size 0x10, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method CompressBuffer, addr 0xa288db4, size 0x44, virtual false, abstract: false, final false
inline void CompressBuffer(int32_t  n) ;

/// @brief Method DataAvailable, addr 0xa28a050, size 0x10, virtual false, abstract: false, final false
inline bool DataAvailable() ;

/// @brief Method DetectEncoding, addr 0xa288df8, size 0x2d8, virtual false, abstract: false, final false
inline void DetectEncoding() ;

/// @brief Method Dispose, addr 0xa287fdc, size 0x94, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Init, addr 0xa287fa8, size 0x24, virtual false, abstract: false, final false
inline void Init(::System::IO::Stream*  stream) ;

/// @brief Method Init, addr 0xa287b7c, size 0x168, virtual false, abstract: false, final false
inline void Init(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize, bool  leaveOpen) ;

/// @brief Method IsPreamble, addr 0xa2890d0, size 0x128, virtual false, abstract: false, final false
inline bool IsPreamble() ;

static inline ::System::IO::StreamReader* New_ctor() ;

static inline ::System::IO::StreamReader* New_ctor(::StringW  path) ;

static inline ::System::IO::StreamReader* New_ctor(::StringW  path, bool  detectEncodingFromByteOrderMarks) ;

static inline ::System::IO::StreamReader* New_ctor(::StringW  path, ::System::Text::Encoding*  encoding) ;

static inline ::System::IO::StreamReader* New_ctor(::StringW  path, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks) ;

static inline ::System::IO::StreamReader* New_ctor(::StringW  path, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize) ;

static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream*  stream) ;

static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream*  stream, bool  detectEncodingFromByteOrderMarks) ;

static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding) ;

static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks) ;

static inline ::System::IO::StreamReader* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize, bool  leaveOpen) ;

/// @brief Method Peek, addr 0xa288128, size 0xc4, virtual true, abstract: false, final false
inline int32_t Peek() ;

/// @brief Method Read, addr 0xa2881ec, size 0xc4, virtual true, abstract: false, final false
inline int32_t Read() ;

/// @brief Method Read, addr 0xa2882b0, size 0x18c, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Read, addr 0xa28865c, size 0xc8, virtual true, abstract: false, final false
inline int32_t Read(::System::Span_1<char16_t>  buffer) ;

/// @brief Method ReadAsync, addr 0xa289910, size 0x2dc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadAsync(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// [AsyncStateMachine(typeof(System.IO.StreamReader::<ReadAsyncInternal>d__66))]
/// @brief Method ReadAsyncInternal, addr 0xa289dd0, size 0x168, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask_1<int32_t> ReadAsyncInternal(::System::Memory_1<char16_t>  buffer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReadBuffer, addr 0xa2891f8, size 0x164, virtual true, abstract: false, final false
inline int32_t ReadBuffer() ;

/// @brief Method ReadBuffer, addr 0xa28898c, size 0x310, virtual false, abstract: false, final false
inline int32_t ReadBuffer(::System::Span_1<char16_t>  userBuffer, ::by_ref<bool>  readToUserBuffer) ;

/// [AsyncStateMachine(typeof(System.IO.StreamReader::<ReadBufferAsync>d__69))]
/// @brief Method ReadBufferAsync, addr 0xa289f38, size 0x118, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<int32_t>* ReadBufferAsync() ;

/// @brief Method ReadLine, addr 0xa28935c, size 0x268, virtual true, abstract: false, final false
inline ::StringW ReadLine() ;

/// @brief Method ReadSpan, addr 0xa28843c, size 0x220, virtual false, abstract: false, final false
inline int32_t ReadSpan(::System::Span_1<char16_t>  buffer) ;

/// @brief Method ReadToEnd, addr 0xa288c9c, size 0x118, virtual true, abstract: false, final false
inline ::StringW ReadToEnd() ;

/// @brief Method ReadToEndAsync, addr 0xa2895c4, size 0x11c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* ReadToEndAsync() ;

/// [AsyncStateMachine(typeof(System.IO.StreamReader::<ReadToEndAsyncInternal>d__63))]
/// @brief Method ReadToEndAsyncInternal, addr 0xa2897f8, size 0x118, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::StringW>* ReadToEndAsyncInternal() ;

/// @brief Method ThrowAsyncIOInProgress, addr 0xa2877b4, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowAsyncIOInProgress() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__asyncReadTask() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__asyncReadTask() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__byteBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__byteBuffer() ;

constexpr int32_t const& __cordl_internal_get__byteLen() const;

constexpr int32_t& __cordl_internal_get__byteLen() ;

constexpr int32_t const& __cordl_internal_get__bytePos() const;

constexpr int32_t& __cordl_internal_get__bytePos() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get__charBuffer() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get__charBuffer() ;

constexpr int32_t const& __cordl_internal_get__charLen() const;

constexpr int32_t& __cordl_internal_get__charLen() ;

constexpr int32_t const& __cordl_internal_get__charPos() const;

constexpr int32_t& __cordl_internal_get__charPos() ;

constexpr bool const& __cordl_internal_get__checkPreamble() const;

constexpr bool& __cordl_internal_get__checkPreamble() ;

constexpr bool const& __cordl_internal_get__closable() const;

constexpr bool& __cordl_internal_get__closable() ;

constexpr ::System::Text::Decoder* const& __cordl_internal_get__decoder() const;

constexpr ::System::Text::Decoder*& __cordl_internal_get__decoder() ;

constexpr bool const& __cordl_internal_get__detectEncoding() const;

constexpr bool& __cordl_internal_get__detectEncoding() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get__encoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding() ;

constexpr bool const& __cordl_internal_get__isBlocked() const;

constexpr bool& __cordl_internal_get__isBlocked() ;

constexpr int32_t const& __cordl_internal_get__maxCharsPerBuffer() const;

constexpr int32_t& __cordl_internal_get__maxCharsPerBuffer() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr void __cordl_internal_set__asyncReadTask(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__byteBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__byteLen(int32_t  value) ;

constexpr void __cordl_internal_set__bytePos(int32_t  value) ;

constexpr void __cordl_internal_set__charBuffer(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set__charLen(int32_t  value) ;

constexpr void __cordl_internal_set__charPos(int32_t  value) ;

constexpr void __cordl_internal_set__checkPreamble(bool  value) ;

constexpr void __cordl_internal_set__closable(bool  value) ;

constexpr void __cordl_internal_set__decoder(::System::Text::Decoder*  value) ;

constexpr void __cordl_internal_set__detectEncoding(bool  value) ;

constexpr void __cordl_internal_set__encoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set__isBlocked(bool  value) ;

constexpr void __cordl_internal_set__maxCharsPerBuffer(int32_t  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0xa287800, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa287ce4, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  path) ;

/// @brief Method .ctor, addr 0xa287d1c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  path, bool  detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor, addr 0xa287f94, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::StringW  path, ::System::Text::Encoding*  encoding) ;

/// @brief Method .ctor, addr 0xa287fa0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::StringW  path, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor, addr 0xa287d58, size 0x23c, virtual false, abstract: false, final false
inline void _ctor(::StringW  path, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize) ;

/// @brief Method .ctor, addr 0xa2878cc, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method .ctor, addr 0xa287908, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, bool  detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor, addr 0xa287b60, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding) ;

/// @brief Method .ctor, addr 0xa287b70, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks) ;

/// @brief Method .ctor, addr 0xa287948, size 0x218, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, bool  detectEncodingFromByteOrderMarks, int32_t  bufferSize, bool  leaveOpen) ;

static inline ::System::IO::StreamReader* getStaticF_Null() ;

/// @brief Method get_BaseStream, addr 0xa288088, size 0x8, virtual true, abstract: false, final false
inline ::System::IO::Stream* get_BaseStream() ;

/// @brief Method get_CurrentEncoding, addr 0xa288080, size 0x8, virtual true, abstract: false, final false
inline ::System::Text::Encoding* get_CurrentEncoding() ;

/// @brief Method get_EndOfStream, addr 0xa288090, size 0x98, virtual false, abstract: false, final false
inline bool get_EndOfStream() ;

/// @brief Method get_LeaveOpen, addr 0xa288070, size 0x10, virtual false, abstract: false, final false
inline bool get_LeaveOpen() ;

static inline void setStaticF_Null(::System::IO::StreamReader*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamReader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamReader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamReader(StreamReader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamReader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamReader(StreamReader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7006};

/// @brief Field _stream, offset: 0x18, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _encoding, offset: 0x20, size: 0x8, def value: None
 ::System::Text::Encoding*  ____encoding;

/// @brief Field _decoder, offset: 0x28, size: 0x8, def value: None
 ::System::Text::Decoder*  ____decoder;

/// @brief Field _byteBuffer, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____byteBuffer;

/// @brief Field _charBuffer, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<char16_t>  ____charBuffer;

/// @brief Field _charPos, offset: 0x40, size: 0x4, def value: None
 int32_t  ____charPos;

/// @brief Field _charLen, offset: 0x44, size: 0x4, def value: None
 int32_t  ____charLen;

/// @brief Field _byteLen, offset: 0x48, size: 0x4, def value: None
 int32_t  ____byteLen;

/// @brief Field _bytePos, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____bytePos;

/// @brief Field _maxCharsPerBuffer, offset: 0x50, size: 0x4, def value: None
 int32_t  ____maxCharsPerBuffer;

/// @brief Field _detectEncoding, offset: 0x54, size: 0x1, def value: None
 bool  ____detectEncoding;

/// @brief Field _checkPreamble, offset: 0x55, size: 0x1, def value: None
 bool  ____checkPreamble;

/// @brief Field _isBlocked, offset: 0x56, size: 0x1, def value: None
 bool  ____isBlocked;

/// @brief Field _closable, offset: 0x57, size: 0x1, def value: None
 bool  ____closable;

/// @brief Field _asyncReadTask, offset: 0x58, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____asyncReadTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::StreamReader, ____stream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____encoding) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____decoder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____byteBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____charBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____charPos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____charLen) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____byteLen) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____bytePos) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____maxCharsPerBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____detectEncoding) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____checkPreamble) == 0x55, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____isBlocked) == 0x56, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____closable) == 0x57, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamReader, ____asyncReadTask) == 0x58, "Offset mismatch!");

static_assert(sizeof(::System::IO::StreamReader) == 0x60, "Size mismatch!");

} // namespace end def System::IO
