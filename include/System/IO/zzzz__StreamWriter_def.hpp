#pragma once
// IWYU pragma private; include "System/IO/StreamWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StreamWriter)
namespace GlobalNamespace {
struct StreamWriter__DisposeAsyncCore_d__33;
}
namespace GlobalNamespace {
struct StreamWriter__FlushAsyncInternal_d__74;
}
namespace GlobalNamespace {
struct StreamWriter__WriteAsyncInternal_d__57;
}
namespace GlobalNamespace {
struct StreamWriter__WriteAsyncInternal_d__59;
}
namespace GlobalNamespace {
struct StreamWriter__WriteAsyncInternal_d__62;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading::Tasks {
struct ValueTask;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
struct ReadOnlyMemory_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO {
class StreamWriter;
}
// Write type traits
MARK_REF_T(::System::IO::StreamWriter*);
DEFINE_IL2CPP_CLASS(::System::IO::StreamWriter*, "System.IO", "StreamWriter");
// Dependencies System.IO.TextWriter
namespace System::IO {
// Is value type: false
// CS Name: System.IO.StreamWriter
class CORDL_TYPE StreamWriter : public ::System::IO::TextWriter {
public:
// Declarations
using _DisposeAsyncCore_d__33 = ::GlobalNamespace::StreamWriter__DisposeAsyncCore_d__33;

using _FlushAsyncInternal_d__74 = ::GlobalNamespace::StreamWriter__FlushAsyncInternal_d__74;

using _WriteAsyncInternal_d__57 = ::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__57;

using _WriteAsyncInternal_d__59 = ::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__59;

using _WriteAsyncInternal_d__62 = ::GlobalNamespace::StreamWriter__WriteAsyncInternal_d__62;

 __declspec(property(put=set_AutoFlush)) bool  AutoFlush;

 __declspec(property(get=get_BaseStream)) ::System::IO::Stream*  BaseStream;

 __declspec(property(put=set_CharPos_Prop)) int32_t  CharPos_Prop;

 __declspec(property(get=get_Encoding)) ::System::Text::Encoding*  Encoding;

 __declspec(property(put=set_HaveWrittenPreamble_Prop)) bool  HaveWrittenPreamble_Prop;

 __declspec(property(get=get_LeaveOpen)) bool  LeaveOpen;

/// @brief Field Null, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Null, put=setStaticF_Null)) ::System::IO::StreamWriter*  Null;

/// @brief Field _asyncWriteTask, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__asyncWriteTask, put=__cordl_internal_set__asyncWriteTask)) ::System::Threading::Tasks::Task*  _asyncWriteTask;

/// @brief Field _autoFlush, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__autoFlush, put=__cordl_internal_set__autoFlush)) bool  _autoFlush;

/// @brief Field _byteBuffer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__byteBuffer, put=__cordl_internal_set__byteBuffer)) ::ArrayW<uint8_t>  _byteBuffer;

/// @brief Field _charBuffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__charBuffer, put=__cordl_internal_set__charBuffer)) ::ArrayW<char16_t>  _charBuffer;

/// @brief Field _charLen, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__charLen, put=__cordl_internal_set__charLen)) int32_t  _charLen;

/// @brief Field _charPos, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__charPos, put=__cordl_internal_set__charPos)) int32_t  _charPos;

/// @brief Field _closable, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get__closable, put=__cordl_internal_set__closable)) bool  _closable;

/// @brief Field _encoder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoder, put=__cordl_internal_set__encoder)) ::System::Text::Encoder*  _encoder;

/// @brief Field _encoding, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoding, put=__cordl_internal_set__encoding)) ::System::Text::Encoding*  _encoding;

/// @brief Field _haveWrittenPreamble, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__haveWrittenPreamble, put=__cordl_internal_set__haveWrittenPreamble)) bool  _haveWrittenPreamble;

/// @brief Field _stream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__stream, put=__cordl_internal_set__stream)) ::System::IO::Stream*  _stream;

/// @brief Method CheckAsyncTaskInProgress, addr 0xa28bac8, size 0x6c, virtual false, abstract: false, final false
inline void CheckAsyncTaskInProgress() ;

/// @brief Method Close, addr 0xa28c514, size 0x6c, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method CloseStreamFromDispose, addr 0xa28c9f4, size 0x130, virtual false, abstract: false, final false
inline void CloseStreamFromDispose(bool  disposing) ;

/// @brief Method Dispose, addr 0xa28c580, size 0x90, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method DisposeAsync, addr 0xa28c78c, size 0xa4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask DisposeAsync() ;

/// [AsyncStateMachine(typeof(System.IO.StreamWriter::<DisposeAsyncCore>d__33))]
/// @brief Method DisposeAsyncCore, addr 0xa28c830, size 0xf4, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask DisposeAsyncCore() ;

/// @brief Method Flush, addr 0xa28cb34, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method Flush, addr 0xa28c610, size 0x17c, virtual false, abstract: false, final false
inline void Flush(bool  flushStream, bool  flushEncoder) ;

/// @brief Method FlushAsync, addr 0xa28f578, size 0x130, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsync() ;

/// [AsyncStateMachine(typeof(System.IO.StreamWriter::<FlushAsyncInternal>d__74))]
/// @brief Method FlushAsyncInternal, addr 0xa28fa48, size 0x1a4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* FlushAsyncInternal(::System::IO::StreamWriter*  _this, bool  flushStream, bool  flushEncoder, ::ArrayW<char16_t>  charBuffer, int32_t  charPos, bool  haveWrittenPreamble, ::System::Text::Encoding*  encoding, ::System::Text::Encoder*  encoder, ::ArrayW<uint8_t>  byteBuffer, ::System::IO::Stream*  stream, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method FlushAsyncInternal, addr 0xa28f8a0, size 0x198, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* FlushAsyncInternal(bool  flushStream, bool  flushEncoder, ::ArrayW<char16_t>  sCharBuffer, int32_t  sCharPos, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Init, addr 0xa28bfc8, size 0x184, virtual false, abstract: false, final false
inline void Init(::System::IO::Stream*  streamArg, ::System::Text::Encoding*  encodingArg, int32_t  bufferSize, bool  shouldLeaveOpen) ;

static inline ::System::IO::StreamWriter* New_ctor() ;

static inline ::System::IO::StreamWriter* New_ctor(::StringW  path) ;

static inline ::System::IO::StreamWriter* New_ctor(::StringW  path, bool  append) ;

static inline ::System::IO::StreamWriter* New_ctor(::StringW  path, bool  append, ::System::Text::Encoding*  encoding, int32_t  bufferSize) ;

static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream*  stream) ;

static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding) ;

static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize) ;

static inline ::System::IO::StreamWriter* New_ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize, bool  leaveOpen) ;

/// @brief Method ThrowAsyncIOInProgress, addr 0xa28bb34, size 0x4c, virtual false, abstract: false, final false
static inline void ThrowAsyncIOInProgress() ;

/// @brief Method Write, addr 0xa28cc30, size 0x74, virtual true, abstract: false, final false
inline void Write(::ArrayW<char16_t>  buffer) ;

/// @brief Method Write, addr 0xa28cca4, size 0x1dc, virtual true, abstract: false, final false
inline void Write(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method Write, addr 0xa28ce80, size 0xd0, virtual true, abstract: false, final false
inline void Write(::System::ReadOnlySpan_1<char16_t>  buffer) ;

/// @brief Method Write, addr 0xa28d3d8, size 0x70, virtual true, abstract: false, final false
inline void Write(::StringW  value) ;

/// @brief Method Write, addr 0xa28cba4, size 0x8c, virtual true, abstract: false, final false
inline void Write(char16_t  value) ;

/// @brief Method WriteAsync, addr 0xa28df94, size 0x2fc, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteAsync, addr 0xa28d9ec, size 0x204, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(::StringW  value) ;

/// @brief Method WriteAsync, addr 0xa28d4bc, size 0x19c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteAsync(char16_t  value) ;

/// [AsyncStateMachine(typeof(System.IO.StreamWriter::<WriteAsyncInternal>d__62))]
/// @brief Method WriteAsyncInternal, addr 0xa28e4e8, size 0x178, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WriteAsyncInternal(::System::IO::StreamWriter*  _this, ::System::ReadOnlyMemory_1<char16_t>  source, ::ArrayW<char16_t>  charBuffer, int32_t  charPos, int32_t  charLen, ::ArrayW<char16_t>  coreNewLine, bool  autoFlush, bool  appendNewLine, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.IO.StreamWriter::<WriteAsyncInternal>d__59))]
/// @brief Method WriteAsyncInternal, addr 0xa28de30, size 0x164, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WriteAsyncInternal(::System::IO::StreamWriter*  _this, ::StringW  value, ::ArrayW<char16_t>  charBuffer, int32_t  charPos, int32_t  charLen, ::ArrayW<char16_t>  coreNewLine, bool  autoFlush, bool  appendNewLine) ;

/// [AsyncStateMachine(typeof(System.IO.StreamWriter::<WriteAsyncInternal>d__57))]
/// @brief Method WriteAsyncInternal, addr 0xa28d898, size 0x154, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* WriteAsyncInternal(::System::IO::StreamWriter*  _this, char16_t  value, ::ArrayW<char16_t>  charBuffer, int32_t  charPos, int32_t  charLen, ::ArrayW<char16_t>  coreNewLine, bool  autoFlush, bool  appendNewLine) ;

/// @brief Method WriteLine, addr 0xa28d448, size 0x74, virtual true, abstract: false, final false
inline void WriteLine(::StringW  value) ;

/// @brief Method WriteLineAsync, addr 0xa28e660, size 0x1d4, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteLineAsync() ;

/// @brief Method WriteLineAsync, addr 0xa28f020, size 0x300, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteLineAsync(::ArrayW<char16_t>  buffer, int32_t  index, int32_t  count) ;

/// @brief Method WriteLineAsync, addr 0xa28ec18, size 0x1c8, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteLineAsync(::StringW  value) ;

/// @brief Method WriteLineAsync, addr 0xa28e83c, size 0x19c, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* WriteLineAsync(char16_t  value) ;

/// @brief Method WriteSpan, addr 0xa28d11c, size 0x2bc, virtual false, abstract: false, final false
inline void WriteSpan(::System::ReadOnlySpan_1<char16_t>  buffer, bool  appendNewLine) ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get__asyncWriteTask() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__asyncWriteTask() ;

constexpr bool const& __cordl_internal_get__autoFlush() const;

constexpr bool& __cordl_internal_get__autoFlush() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__byteBuffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__byteBuffer() ;

constexpr ::ArrayW<char16_t> const& __cordl_internal_get__charBuffer() const;

constexpr ::ArrayW<char16_t>& __cordl_internal_get__charBuffer() ;

constexpr int32_t const& __cordl_internal_get__charLen() const;

constexpr int32_t& __cordl_internal_get__charLen() ;

constexpr int32_t const& __cordl_internal_get__charPos() const;

constexpr int32_t& __cordl_internal_get__charPos() ;

constexpr bool const& __cordl_internal_get__closable() const;

constexpr bool& __cordl_internal_get__closable() ;

constexpr ::System::Text::Encoder* const& __cordl_internal_get__encoder() const;

constexpr ::System::Text::Encoder*& __cordl_internal_get__encoder() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get__encoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding() ;

constexpr bool const& __cordl_internal_get__haveWrittenPreamble() const;

constexpr bool& __cordl_internal_get__haveWrittenPreamble() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__stream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__stream() ;

constexpr void __cordl_internal_set__asyncWriteTask(::System::Threading::Tasks::Task*  value) ;

constexpr void __cordl_internal_set__autoFlush(bool  value) ;

constexpr void __cordl_internal_set__byteBuffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__charBuffer(::ArrayW<char16_t>  value) ;

constexpr void __cordl_internal_set__charLen(int32_t  value) ;

constexpr void __cordl_internal_set__charPos(int32_t  value) ;

constexpr void __cordl_internal_set__closable(bool  value) ;

constexpr void __cordl_internal_set__encoder(::System::Text::Encoder*  value) ;

constexpr void __cordl_internal_set__encoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set__haveWrittenPreamble(bool  value) ;

constexpr void __cordl_internal_set__stream(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0xa28bbd0, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa28c14c, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  path) ;

/// @brief Method .ctor, addr 0xa28c404, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::StringW  path, bool  append) ;

/// @brief Method .ctor, addr 0xa28c1c0, size 0x244, virtual false, abstract: false, final false
inline void _ctor(::StringW  path, bool  append, ::System::Text::Encoding*  encoding, int32_t  bufferSize) ;

/// @brief Method .ctor, addr 0xa28bd38, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method .ctor, addr 0xa28bfb4, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding) ;

/// @brief Method .ctor, addr 0xa28bfc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize) ;

/// @brief Method .ctor, addr 0xa28bdac, size 0x208, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::System::Text::Encoding*  encoding, int32_t  bufferSize, bool  leaveOpen) ;

static inline ::System::IO::StreamWriter* getStaticF_Null() ;

/// @brief Method get_BaseStream, addr 0xa28cb94, size 0x8, virtual true, abstract: false, final false
inline ::System::IO::Stream* get_BaseStream() ;

/// @brief Method get_Encoding, addr 0xa28cb9c, size 0x8, virtual true, abstract: false, final false
inline ::System::Text::Encoding* get_Encoding() ;

/// @brief Method get_LeaveOpen, addr 0xa28cb24, size 0x10, virtual false, abstract: false, final false
inline bool get_LeaveOpen() ;

/// @brief Method get_UTF8NoBOM, addr 0xa28bb80, size 0x50, virtual false, abstract: false, final false
static inline ::System::Text::Encoding* get_UTF8NoBOM() ;

static inline void setStaticF_Null(::System::IO::StreamWriter*  value) ;

/// @brief Method set_AutoFlush, addr 0xa28cb54, size 0x40, virtual true, abstract: false, final false
inline void set_AutoFlush(bool  value) ;

/// @brief Method set_CharPos_Prop, addr 0xa28fa38, size 0x8, virtual false, abstract: false, final false
inline void set_CharPos_Prop(int32_t  value) ;

/// @brief Method set_HaveWrittenPreamble_Prop, addr 0xa28fa40, size 0x8, virtual false, abstract: false, final false
inline void set_HaveWrittenPreamble_Prop(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamWriter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamWriter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamWriter(StreamWriter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamWriter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamWriter(StreamWriter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7012};

/// @brief Field _stream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ____stream;

/// @brief Field _encoding, offset: 0x38, size: 0x8, def value: None
 ::System::Text::Encoding*  ____encoding;

/// @brief Field _encoder, offset: 0x40, size: 0x8, def value: None
 ::System::Text::Encoder*  ____encoder;

/// @brief Field _byteBuffer, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____byteBuffer;

/// @brief Field _charBuffer, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<char16_t>  ____charBuffer;

/// @brief Field _charPos, offset: 0x58, size: 0x4, def value: None
 int32_t  ____charPos;

/// @brief Field _charLen, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____charLen;

/// @brief Field _autoFlush, offset: 0x60, size: 0x1, def value: None
 bool  ____autoFlush;

/// @brief Field _haveWrittenPreamble, offset: 0x61, size: 0x1, def value: None
 bool  ____haveWrittenPreamble;

/// @brief Field _closable, offset: 0x62, size: 0x1, def value: None
 bool  ____closable;

/// @brief Field _asyncWriteTask, offset: 0x68, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ____asyncWriteTask;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::StreamWriter, ____stream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____encoding) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____encoder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____byteBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____charBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____charPos) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____charLen) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____autoFlush) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____haveWrittenPreamble) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____closable) == 0x62, "Offset mismatch!");

static_assert(offsetof(::System::IO::StreamWriter, ____asyncWriteTask) == 0x68, "Offset mismatch!");

static_assert(sizeof(::System::IO::StreamWriter) == 0x70, "Size mismatch!");

} // namespace end def System::IO
