#pragma once
// IWYU pragma private; include "Ionic/Zlib/ParallelDeflateOutputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Ionic/Zlib/zzzz__CompressionLevel_def.hpp"
#include "Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "Ionic/Zlib/zzzz__ParallelDeflateOutputStream_TraceBits_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParallelDeflateOutputStream)
namespace GlobalNamespace {
struct ParallelDeflateOutputStream_TraceBits;
}
namespace Ionic::Crc {
class CRC32;
}
namespace Ionic::Zlib {
struct CompressionLevel;
}
namespace Ionic::Zlib {
struct CompressionStrategy;
}
namespace Ionic::Zlib {
class WorkItem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Threading {
class AutoResetEvent;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Ionic::Zlib {
class ParallelDeflateOutputStream;
}
// Write type traits
MARK_REF_T(::Ionic::Zlib::ParallelDeflateOutputStream*);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::ParallelDeflateOutputStream*, "Ionic.Zlib", "ParallelDeflateOutputStream");
// Dependencies Ionic.Zlib.CompressionLevel, Ionic.Zlib.CompressionStrategy, Ionic.Zlib.ParallelDeflateOutputStream::TraceBits, System.IO.Stream
namespace Ionic::Zlib {
// Is value type: false
// CS Name: Ionic.Zlib.ParallelDeflateOutputStream
class CORDL_TYPE ParallelDeflateOutputStream : public ::System::IO::Stream {
public:
// Declarations
using TraceBits = ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits;

/// @brief Field BufferPairsPerCore, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BufferPairsPerCore, put=setStaticF_BufferPairsPerCore)) int32_t  BufferPairsPerCore;

 __declspec(property(get=get_BufferSize, put=set_BufferSize)) int32_t  BufferSize;

 __declspec(property(get=get_BytesProcessed)) int64_t  BytesProcessed;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Crc32)) int32_t  Crc32;

/// @brief Field IO_BUFFER_SIZE_DEFAULT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_IO_BUFFER_SIZE_DEFAULT, put=setStaticF_IO_BUFFER_SIZE_DEFAULT)) int32_t  IO_BUFFER_SIZE_DEFAULT;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_MaxBufferPairs, put=set_MaxBufferPairs)) int32_t  MaxBufferPairs;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_Strategy, put=set_Strategy)) ::Ionic::Zlib::CompressionStrategy  Strategy;

/// @brief Field _Crc32, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Crc32, put=__cordl_internal_set__Crc32)) int32_t  _Crc32;

/// @brief Field _DesiredTrace, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__DesiredTrace, put=__cordl_internal_set__DesiredTrace)) ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  _DesiredTrace;

/// @brief Field <Strategy>k__BackingField, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__Strategy_k__BackingField, put=__cordl_internal_set__Strategy_k__BackingField)) ::Ionic::Zlib::CompressionStrategy  _Strategy_k__BackingField;

/// @brief Field _bufferSize, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__bufferSize, put=__cordl_internal_set__bufferSize)) int32_t  _bufferSize;

/// @brief Field _compressLevel, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__compressLevel, put=__cordl_internal_set__compressLevel)) ::Ionic::Zlib::CompressionLevel  _compressLevel;

/// @brief Field _currentlyFilling, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentlyFilling, put=__cordl_internal_set__currentlyFilling)) int32_t  _currentlyFilling;

/// @brief Field _eLock, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__eLock, put=__cordl_internal_set__eLock)) ::System::Object*  _eLock;

/// @brief Field _firstWriteDone, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__firstWriteDone, put=__cordl_internal_set__firstWriteDone)) bool  _firstWriteDone;

/// @brief Field _handlingException, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__handlingException, put=__cordl_internal_set__handlingException)) bool  _handlingException;

/// @brief Field _isClosed, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__isClosed, put=__cordl_internal_set__isClosed)) bool  _isClosed;

/// @brief Field _lastFilled, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastFilled, put=__cordl_internal_set__lastFilled)) int32_t  _lastFilled;

/// @brief Field _lastWritten, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastWritten, put=__cordl_internal_set__lastWritten)) int32_t  _lastWritten;

/// @brief Field _latestCompressed, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__latestCompressed, put=__cordl_internal_set__latestCompressed)) int32_t  _latestCompressed;

/// @brief Field _latestLock, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__latestLock, put=__cordl_internal_set__latestLock)) ::System::Object*  _latestLock;

/// @brief Field _leaveOpen, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__leaveOpen, put=__cordl_internal_set__leaveOpen)) bool  _leaveOpen;

/// @brief Field _maxBufferPairs, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxBufferPairs, put=__cordl_internal_set__maxBufferPairs)) int32_t  _maxBufferPairs;

/// @brief Field _newlyCompressedBlob, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__newlyCompressedBlob, put=__cordl_internal_set__newlyCompressedBlob)) ::System::Threading::AutoResetEvent*  _newlyCompressedBlob;

/// @brief Field _outStream, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__outStream, put=__cordl_internal_set__outStream)) ::System::IO::Stream*  _outStream;

/// @brief Field _outputLock, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputLock, put=__cordl_internal_set__outputLock)) ::System::Object*  _outputLock;

/// @brief Field _pendingException, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__pendingException, put=__cordl_internal_set__pendingException)) ::System::Exception*  _pendingException;

/// @brief Field _pool, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__pool, put=__cordl_internal_set__pool)) ::System::Collections::Generic::List_1<::Ionic::Zlib::WorkItem*>*  _pool;

/// @brief Field _runningCrc, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__runningCrc, put=__cordl_internal_set__runningCrc)) ::Ionic::Crc::CRC32*  _runningCrc;

/// @brief Field _toFill, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__toFill, put=__cordl_internal_set__toFill)) ::System::Collections::Generic::Queue_1<int32_t>*  _toFill;

/// @brief Field _toWrite, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__toWrite, put=__cordl_internal_set__toWrite)) ::System::Collections::Generic::Queue_1<int32_t>*  _toWrite;

/// @brief Field _totalBytesProcessed, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__totalBytesProcessed, put=__cordl_internal_set__totalBytesProcessed)) int64_t  _totalBytesProcessed;

/// @brief Field emitting, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_emitting, put=__cordl_internal_set_emitting)) bool  emitting;

/// @brief Method Close, addr 0xa79a7d4, size 0xac, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method DeflateOneSegment, addr 0xa79aae4, size 0x90, virtual false, abstract: false, final false
inline bool DeflateOneSegment(::Ionic::Zlib::WorkItem*  workitem) ;

/// @brief Method Dispose, addr 0xa79a880, size 0x44, virtual false, abstract: false, final false
inline void Dispose() ;

/// @brief Method Dispose, addr 0xa79a8c4, size 0x8, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EmitPendingBuffers, addr 0xa799d18, size 0x3b8, virtual false, abstract: false, final false
inline void EmitPendingBuffers(bool  doAll, bool  mustWait) ;

/// @brief Method Flush, addr 0xa79a754, size 0x80, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::Ionic::Zlib::ParallelDeflateOutputStream* New_ctor(::System::IO::Stream*  stream) ;

static inline ::Ionic::Zlib::ParallelDeflateOutputStream* New_ctor(::System::IO::Stream*  stream, bool  leaveOpen) ;

static inline ::Ionic::Zlib::ParallelDeflateOutputStream* New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionLevel  level) ;

static inline ::Ionic::Zlib::ParallelDeflateOutputStream* New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen) ;

static inline ::Ionic::Zlib::ParallelDeflateOutputStream* New_ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionLevel  level, ::Ionic::Zlib::CompressionStrategy  strategy, bool  leaveOpen) ;

/// @brief Method Read, addr 0xa79adc4, size 0x38, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Reset, addr 0xa79a8cc, size 0x218, virtual false, abstract: false, final false
inline void Reset(::System::IO::Stream*  stream) ;

/// @brief Method Seek, addr 0xa79adfc, size 0x38, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa79ae34, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// [Conditional("Trace")]
/// @brief Method TraceOutput, addr 0xa79ab74, size 0x194, virtual false, abstract: false, final false
inline void TraceOutput(::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  bits, ::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  varParams) ;

/// @brief Method Write, addr 0xa799a78, size 0x2a0, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method _DeflateOne, addr 0xa79a368, size 0x3ec, virtual false, abstract: false, final false
inline void _DeflateOne(::System::Object*  wi) ;

/// @brief Method _Flush, addr 0xa79a274, size 0xf4, virtual false, abstract: false, final false
inline void _Flush(bool  lastInput) ;

/// @brief Method _FlushFinish, addr 0xa79a0d0, size 0x1a4, virtual false, abstract: false, final false
inline void _FlushFinish() ;

/// @brief Method _InitializePoolOfWorkItems, addr 0xa79977c, size 0x2fc, virtual false, abstract: false, final false
inline void _InitializePoolOfWorkItems() ;

constexpr int32_t const& __cordl_internal_get__Crc32() const;

constexpr int32_t& __cordl_internal_get__Crc32() ;

constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits const& __cordl_internal_get__DesiredTrace() const;

constexpr ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits& __cordl_internal_get__DesiredTrace() ;

constexpr ::Ionic::Zlib::CompressionStrategy const& __cordl_internal_get__Strategy_k__BackingField() const;

constexpr ::Ionic::Zlib::CompressionStrategy& __cordl_internal_get__Strategy_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__bufferSize() const;

constexpr int32_t& __cordl_internal_get__bufferSize() ;

constexpr ::Ionic::Zlib::CompressionLevel const& __cordl_internal_get__compressLevel() const;

constexpr ::Ionic::Zlib::CompressionLevel& __cordl_internal_get__compressLevel() ;

constexpr int32_t const& __cordl_internal_get__currentlyFilling() const;

constexpr int32_t& __cordl_internal_get__currentlyFilling() ;

constexpr ::System::Object* const& __cordl_internal_get__eLock() const;

constexpr ::System::Object*& __cordl_internal_get__eLock() ;

constexpr bool const& __cordl_internal_get__firstWriteDone() const;

constexpr bool& __cordl_internal_get__firstWriteDone() ;

constexpr bool const& __cordl_internal_get__handlingException() const;

constexpr bool& __cordl_internal_get__handlingException() ;

constexpr bool const& __cordl_internal_get__isClosed() const;

constexpr bool& __cordl_internal_get__isClosed() ;

constexpr int32_t const& __cordl_internal_get__lastFilled() const;

constexpr int32_t& __cordl_internal_get__lastFilled() ;

constexpr int32_t const& __cordl_internal_get__lastWritten() const;

constexpr int32_t& __cordl_internal_get__lastWritten() ;

constexpr int32_t const& __cordl_internal_get__latestCompressed() const;

constexpr int32_t& __cordl_internal_get__latestCompressed() ;

constexpr ::System::Object* const& __cordl_internal_get__latestLock() const;

constexpr ::System::Object*& __cordl_internal_get__latestLock() ;

constexpr bool const& __cordl_internal_get__leaveOpen() const;

constexpr bool& __cordl_internal_get__leaveOpen() ;

constexpr int32_t const& __cordl_internal_get__maxBufferPairs() const;

constexpr int32_t& __cordl_internal_get__maxBufferPairs() ;

constexpr ::System::Threading::AutoResetEvent* const& __cordl_internal_get__newlyCompressedBlob() const;

constexpr ::System::Threading::AutoResetEvent*& __cordl_internal_get__newlyCompressedBlob() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__outStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__outStream() ;

constexpr ::System::Object* const& __cordl_internal_get__outputLock() const;

constexpr ::System::Object*& __cordl_internal_get__outputLock() ;

constexpr ::System::Exception* const& __cordl_internal_get__pendingException() const;

constexpr ::System::Exception*& __cordl_internal_get__pendingException() ;

constexpr ::System::Collections::Generic::List_1<::Ionic::Zlib::WorkItem*>* const& __cordl_internal_get__pool() const;

constexpr ::System::Collections::Generic::List_1<::Ionic::Zlib::WorkItem*>*& __cordl_internal_get__pool() ;

constexpr ::Ionic::Crc::CRC32* const& __cordl_internal_get__runningCrc() const;

constexpr ::Ionic::Crc::CRC32*& __cordl_internal_get__runningCrc() ;

constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& __cordl_internal_get__toFill() const;

constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get__toFill() ;

constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& __cordl_internal_get__toWrite() const;

constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get__toWrite() ;

constexpr int64_t const& __cordl_internal_get__totalBytesProcessed() const;

constexpr int64_t& __cordl_internal_get__totalBytesProcessed() ;

constexpr bool const& __cordl_internal_get_emitting() const;

constexpr bool& __cordl_internal_get_emitting() ;

constexpr void __cordl_internal_set__Crc32(int32_t  value) ;

constexpr void __cordl_internal_set__DesiredTrace(::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  value) ;

constexpr void __cordl_internal_set__Strategy_k__BackingField(::Ionic::Zlib::CompressionStrategy  value) ;

constexpr void __cordl_internal_set__bufferSize(int32_t  value) ;

constexpr void __cordl_internal_set__compressLevel(::Ionic::Zlib::CompressionLevel  value) ;

constexpr void __cordl_internal_set__currentlyFilling(int32_t  value) ;

constexpr void __cordl_internal_set__eLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__firstWriteDone(bool  value) ;

constexpr void __cordl_internal_set__handlingException(bool  value) ;

constexpr void __cordl_internal_set__isClosed(bool  value) ;

constexpr void __cordl_internal_set__lastFilled(int32_t  value) ;

constexpr void __cordl_internal_set__lastWritten(int32_t  value) ;

constexpr void __cordl_internal_set__latestCompressed(int32_t  value) ;

constexpr void __cordl_internal_set__latestLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__leaveOpen(bool  value) ;

constexpr void __cordl_internal_set__maxBufferPairs(int32_t  value) ;

constexpr void __cordl_internal_set__newlyCompressedBlob(::System::Threading::AutoResetEvent*  value) ;

constexpr void __cordl_internal_set__outStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__outputLock(::System::Object*  value) ;

constexpr void __cordl_internal_set__pendingException(::System::Exception*  value) ;

constexpr void __cordl_internal_set__pool(::System::Collections::Generic::List_1<::Ionic::Zlib::WorkItem*>*  value) ;

constexpr void __cordl_internal_set__runningCrc(::Ionic::Crc::CRC32*  value) ;

constexpr void __cordl_internal_set__toFill(::System::Collections::Generic::Queue_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__toWrite(::System::Collections::Generic::Queue_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__totalBytesProcessed(int64_t  value) ;

constexpr void __cordl_internal_set_emitting(bool  value) ;

/// @brief Method .ctor, addr 0xa7994bc, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method .ctor, addr 0xa799644, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, bool  leaveOpen) ;

/// @brief Method .ctor, addr 0xa799638, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionLevel  level) ;

/// @brief Method .ctor, addr 0xa799654, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionLevel  level, bool  leaveOpen) ;

/// @brief Method .ctor, addr 0xa7994cc, size 0x16c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, ::Ionic::Zlib::CompressionLevel  level, ::Ionic::Zlib::CompressionStrategy  strategy, bool  leaveOpen) ;

static inline int32_t getStaticF_BufferPairsPerCore() ;

static inline int32_t getStaticF_IO_BUFFER_SIZE_DEFAULT() ;

/// @brief Method get_BufferSize, addr 0xa7996f0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_BufferSize() ;

/// @brief Method get_BytesProcessed, addr 0xa799774, size 0x8, virtual false, abstract: false, final false
inline int64_t get_BytesProcessed() ;

/// @brief Method get_CanRead, addr 0xa79ad10, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa79ad08, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa79ad18, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Crc32, addr 0xa79976c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Crc32() ;

/// @brief Method get_Length, addr 0xa79ad34, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_MaxBufferPairs, addr 0xa7996e8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxBufferPairs() ;

/// @brief Method get_Position, addr 0xa79ad6c, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// [CompilerGenerated]
/// @brief Method get_Strategy, addr 0xa7996d8, size 0x8, virtual false, abstract: false, final false
inline ::Ionic::Zlib::CompressionStrategy get_Strategy() ;

static inline void setStaticF_BufferPairsPerCore(int32_t  value) ;

static inline void setStaticF_IO_BUFFER_SIZE_DEFAULT(int32_t  value) ;

/// @brief Method set_BufferSize, addr 0xa7996f8, size 0x74, virtual false, abstract: false, final false
inline void set_BufferSize(int32_t  value) ;

/// @brief Method set_MaxBufferPairs, addr 0xa799664, size 0x74, virtual false, abstract: false, final false
inline void set_MaxBufferPairs(int32_t  value) ;

/// @brief Method set_Position, addr 0xa79ad8c, size 0x38, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Strategy, addr 0xa7996e0, size 0x8, virtual false, abstract: false, final false
inline void set_Strategy(::Ionic::Zlib::CompressionStrategy  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ParallelDeflateOutputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ParallelDeflateOutputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ParallelDeflateOutputStream(ParallelDeflateOutputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParallelDeflateOutputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParallelDeflateOutputStream(ParallelDeflateOutputStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19465};

/// @brief Field _pool, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Ionic::Zlib::WorkItem*>*  ____pool;

/// @brief Field _leaveOpen, offset: 0x30, size: 0x1, def value: None
 bool  ____leaveOpen;

/// @brief Field emitting, offset: 0x31, size: 0x1, def value: None
 bool  ___emitting;

/// @brief Field _outStream, offset: 0x38, size: 0x8, def value: None
 ::System::IO::Stream*  ____outStream;

/// @brief Field _maxBufferPairs, offset: 0x40, size: 0x4, def value: None
 int32_t  ____maxBufferPairs;

/// @brief Field _bufferSize, offset: 0x44, size: 0x4, def value: None
 int32_t  ____bufferSize;

/// @brief Field _newlyCompressedBlob, offset: 0x48, size: 0x8, def value: None
 ::System::Threading::AutoResetEvent*  ____newlyCompressedBlob;

/// @brief Field _outputLock, offset: 0x50, size: 0x8, def value: None
 ::System::Object*  ____outputLock;

/// @brief Field _isClosed, offset: 0x58, size: 0x1, def value: None
 bool  ____isClosed;

/// @brief Field _firstWriteDone, offset: 0x59, size: 0x1, def value: None
 bool  ____firstWriteDone;

/// @brief Field _currentlyFilling, offset: 0x5c, size: 0x4, def value: None
 int32_t  ____currentlyFilling;

/// @brief Field _lastFilled, offset: 0x60, size: 0x4, def value: None
 int32_t  ____lastFilled;

/// @brief Field _lastWritten, offset: 0x64, size: 0x4, def value: None
 int32_t  ____lastWritten;

/// @brief Field _latestCompressed, offset: 0x68, size: 0x4, def value: None
 int32_t  ____latestCompressed;

/// @brief Field _Crc32, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____Crc32;

/// @brief Field _runningCrc, offset: 0x70, size: 0x8, def value: None
 ::Ionic::Crc::CRC32*  ____runningCrc;

/// @brief Field _latestLock, offset: 0x78, size: 0x8, def value: None
 ::System::Object*  ____latestLock;

/// @brief Field _toWrite, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<int32_t>*  ____toWrite;

/// @brief Field _toFill, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<int32_t>*  ____toFill;

/// @brief Field _totalBytesProcessed, offset: 0x90, size: 0x8, def value: None
 int64_t  ____totalBytesProcessed;

/// @brief Field _compressLevel, offset: 0x98, size: 0x4, def value: None
 ::Ionic::Zlib::CompressionLevel  ____compressLevel;

/// @brief Field _pendingException, offset: 0xa0, size: 0x8, def value: None
 ::System::Exception*  ____pendingException;

/// @brief Field _handlingException, offset: 0xa8, size: 0x1, def value: None
 bool  ____handlingException;

/// @brief Field _eLock, offset: 0xb0, size: 0x8, def value: None
 ::System::Object*  ____eLock;

/// @brief Field _DesiredTrace, offset: 0xb8, size: 0x4, def value: None
 ::GlobalNamespace::ParallelDeflateOutputStream_TraceBits  ____DesiredTrace;

/// [CompilerGenerated]
/// @brief Field <Strategy>k__BackingField, offset: 0xbc, size: 0x4, def value: None
 ::Ionic::Zlib::CompressionStrategy  ____Strategy_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____pool) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____leaveOpen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ___emitting) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____outStream) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____maxBufferPairs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____bufferSize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____newlyCompressedBlob) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____outputLock) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____isClosed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____firstWriteDone) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____currentlyFilling) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____lastFilled) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____lastWritten) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____latestCompressed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____Crc32) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____runningCrc) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____latestLock) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____toWrite) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____toFill) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____totalBytesProcessed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____compressLevel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____pendingException) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____handlingException) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____eLock) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____DesiredTrace) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Ionic::Zlib::ParallelDeflateOutputStream, ____Strategy_k__BackingField) == 0xbc, "Offset mismatch!");

static_assert(sizeof(::Ionic::Zlib::ParallelDeflateOutputStream) == 0xc0, "Size mismatch!");

} // namespace end def Ionic::Zlib
