#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipOutputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__Zip64Option_def.hpp"
#include "Pathfinding/Ionic/Zip/zzzz__ZipOption_def.hpp"
#include "Pathfinding/Ionic/Zlib/zzzz__CompressionStrategy_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipOutputStream)
namespace Pathfinding::Ionic::Crc {
class CrcCalculatorStream;
}
namespace Pathfinding::Ionic::Zip {
class CountingStream;
}
namespace Pathfinding::Ionic::Zip {
struct Zip64Option;
}
namespace Pathfinding::Ionic::Zip {
class ZipEntry;
}
namespace Pathfinding::Ionic::Zip {
struct ZipOption;
}
namespace Pathfinding::Ionic::Zlib {
struct CompressionStrategy;
}
namespace Pathfinding::Ionic::Zlib {
class ParallelDeflateOutputStream;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ZipOutputStream;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipOutputStream*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipOutputStream*, "Pathfinding.Ionic.Zip", "ZipOutputStream");
// Dependencies Pathfinding.Ionic.Zip.Zip64Option, Pathfinding.Ionic.Zip.ZipOption, Pathfinding.Ionic.Zlib.CompressionStrategy, System.IO.Stream
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipOutputStream
class CORDL_TYPE ZipOutputStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_AlternateEncoding)) ::System::Text::Encoding*  AlternateEncoding;

 __declspec(property(get=get_AlternateEncodingUsage)) ::Pathfinding::Ionic::Zip::ZipOption  AlternateEncodingUsage;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_CodecBufferSize)) int32_t  CodecBufferSize;

 __declspec(property(get=get_EnableZip64)) ::Pathfinding::Ionic::Zip::Zip64Option  EnableZip64;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_OutputStream)) ::System::IO::Stream*  OutputStream;

 __declspec(property(get=get_ParallelDeflateMaxBufferPairs)) int32_t  ParallelDeflateMaxBufferPairs;

 __declspec(property(get=get_ParallelDeflateThreshold)) int64_t  ParallelDeflateThreshold;

/// @brief Field ParallelDeflater, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_ParallelDeflater, put=__cordl_internal_set_ParallelDeflater)) ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*  ParallelDeflater;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_Strategy)) ::Pathfinding::Ionic::Zlib::CompressionStrategy  Strategy;

/// @brief Field <CodecBufferSize>k__BackingField, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__CodecBufferSize_k__BackingField, put=__cordl_internal_set__CodecBufferSize_k__BackingField)) int32_t  _CodecBufferSize_k__BackingField;

/// @brief Field _ParallelDeflateThreshold, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__ParallelDeflateThreshold, put=__cordl_internal_set__ParallelDeflateThreshold)) int64_t  _ParallelDeflateThreshold;

/// @brief Field <Strategy>k__BackingField, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__Strategy_k__BackingField, put=__cordl_internal_set__Strategy_k__BackingField)) ::Pathfinding::Ionic::Zlib::CompressionStrategy  _Strategy_k__BackingField;

/// @brief Field _alternateEncoding, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__alternateEncoding, put=__cordl_internal_set__alternateEncoding)) ::System::Text::Encoding*  _alternateEncoding;

/// @brief Field _alternateEncodingUsage, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__alternateEncodingUsage, put=__cordl_internal_set__alternateEncodingUsage)) ::Pathfinding::Ionic::Zip::ZipOption  _alternateEncodingUsage;

/// @brief Field _currentEntry, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentEntry, put=__cordl_internal_set__currentEntry)) ::Pathfinding::Ionic::Zip::ZipEntry*  _currentEntry;

/// @brief Field _deflater, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__deflater, put=__cordl_internal_set__deflater)) ::System::IO::Stream*  _deflater;

/// @brief Field _disposed, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _encryptor, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__encryptor, put=__cordl_internal_set__encryptor)) ::System::IO::Stream*  _encryptor;

/// @brief Field _entriesWritten, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__entriesWritten, put=__cordl_internal_set__entriesWritten)) ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>*  _entriesWritten;

/// @brief Field _entryCount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__entryCount, put=__cordl_internal_set__entryCount)) int32_t  _entryCount;

/// @brief Field _entryOutputStream, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__entryOutputStream, put=__cordl_internal_set__entryOutputStream)) ::Pathfinding::Ionic::Crc::CrcCalculatorStream*  _entryOutputStream;

/// @brief Field _exceptionPending, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__exceptionPending, put=__cordl_internal_set__exceptionPending)) bool  _exceptionPending;

/// @brief Field _maxBufferPairs, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxBufferPairs, put=__cordl_internal_set__maxBufferPairs)) int32_t  _maxBufferPairs;

/// @brief Field _needToWriteEntryHeader, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__needToWriteEntryHeader, put=__cordl_internal_set__needToWriteEntryHeader)) bool  _needToWriteEntryHeader;

/// @brief Field _outputCounter, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputCounter, put=__cordl_internal_set__outputCounter)) ::Pathfinding::Ionic::Zip::CountingStream*  _outputCounter;

/// @brief Field _outputStream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputStream, put=__cordl_internal_set__outputStream)) ::System::IO::Stream*  _outputStream;

/// @brief Field _password, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__password, put=__cordl_internal_set__password)) ::StringW  _password;

/// @brief Field _zip64, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__zip64, put=__cordl_internal_set__zip64)) ::Pathfinding::Ionic::Zip::Zip64Option  _zip64;

/// @brief Method Flush, addr 0xa69f688, size 0x4, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method Read, addr 0xa69f68c, size 0x4c, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0xa69f6d8, size 0x4c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa69f724, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0xa69f320, size 0x170, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method _InitiateCurrentEntry, addr 0xa69f490, size 0x150, virtual false, abstract: false, final false
inline void _InitiateCurrentEntry(bool  finishing) ;

constexpr ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream* const& __cordl_internal_get_ParallelDeflater() const;

constexpr ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*& __cordl_internal_get_ParallelDeflater() ;

constexpr int32_t const& __cordl_internal_get__CodecBufferSize_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CodecBufferSize_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__ParallelDeflateThreshold() const;

constexpr int64_t& __cordl_internal_get__ParallelDeflateThreshold() ;

constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy const& __cordl_internal_get__Strategy_k__BackingField() const;

constexpr ::Pathfinding::Ionic::Zlib::CompressionStrategy& __cordl_internal_get__Strategy_k__BackingField() ;

constexpr ::System::Text::Encoding* const& __cordl_internal_get__alternateEncoding() const;

constexpr ::System::Text::Encoding*& __cordl_internal_get__alternateEncoding() ;

constexpr ::Pathfinding::Ionic::Zip::ZipOption const& __cordl_internal_get__alternateEncodingUsage() const;

constexpr ::Pathfinding::Ionic::Zip::ZipOption& __cordl_internal_get__alternateEncodingUsage() ;

constexpr ::Pathfinding::Ionic::Zip::ZipEntry* const& __cordl_internal_get__currentEntry() const;

constexpr ::Pathfinding::Ionic::Zip::ZipEntry*& __cordl_internal_get__currentEntry() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__deflater() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__deflater() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__encryptor() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__encryptor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>* const& __cordl_internal_get__entriesWritten() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>*& __cordl_internal_get__entriesWritten() ;

constexpr int32_t const& __cordl_internal_get__entryCount() const;

constexpr int32_t& __cordl_internal_get__entryCount() ;

constexpr ::Pathfinding::Ionic::Crc::CrcCalculatorStream* const& __cordl_internal_get__entryOutputStream() const;

constexpr ::Pathfinding::Ionic::Crc::CrcCalculatorStream*& __cordl_internal_get__entryOutputStream() ;

constexpr bool const& __cordl_internal_get__exceptionPending() const;

constexpr bool& __cordl_internal_get__exceptionPending() ;

constexpr int32_t const& __cordl_internal_get__maxBufferPairs() const;

constexpr int32_t& __cordl_internal_get__maxBufferPairs() ;

constexpr bool const& __cordl_internal_get__needToWriteEntryHeader() const;

constexpr bool& __cordl_internal_get__needToWriteEntryHeader() ;

constexpr ::Pathfinding::Ionic::Zip::CountingStream* const& __cordl_internal_get__outputCounter() const;

constexpr ::Pathfinding::Ionic::Zip::CountingStream*& __cordl_internal_get__outputCounter() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__outputStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__outputStream() ;

constexpr ::StringW const& __cordl_internal_get__password() const;

constexpr ::StringW& __cordl_internal_get__password() ;

constexpr ::Pathfinding::Ionic::Zip::Zip64Option const& __cordl_internal_get__zip64() const;

constexpr ::Pathfinding::Ionic::Zip::Zip64Option& __cordl_internal_get__zip64() ;

constexpr void __cordl_internal_set_ParallelDeflater(::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*  value) ;

constexpr void __cordl_internal_set__CodecBufferSize_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ParallelDeflateThreshold(int64_t  value) ;

constexpr void __cordl_internal_set__Strategy_k__BackingField(::Pathfinding::Ionic::Zlib::CompressionStrategy  value) ;

constexpr void __cordl_internal_set__alternateEncoding(::System::Text::Encoding*  value) ;

constexpr void __cordl_internal_set__alternateEncodingUsage(::Pathfinding::Ionic::Zip::ZipOption  value) ;

constexpr void __cordl_internal_set__currentEntry(::Pathfinding::Ionic::Zip::ZipEntry*  value) ;

constexpr void __cordl_internal_set__deflater(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__encryptor(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__entriesWritten(::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>*  value) ;

constexpr void __cordl_internal_set__entryCount(int32_t  value) ;

constexpr void __cordl_internal_set__entryOutputStream(::Pathfinding::Ionic::Crc::CrcCalculatorStream*  value) ;

constexpr void __cordl_internal_set__exceptionPending(bool  value) ;

constexpr void __cordl_internal_set__maxBufferPairs(int32_t  value) ;

constexpr void __cordl_internal_set__needToWriteEntryHeader(bool  value) ;

constexpr void __cordl_internal_set__outputCounter(::Pathfinding::Ionic::Zip::CountingStream*  value) ;

constexpr void __cordl_internal_set__outputStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__password(::StringW  value) ;

constexpr void __cordl_internal_set__zip64(::Pathfinding::Ionic::Zip::Zip64Option  value) ;

/// @brief Method get_AlternateEncoding, addr 0xa69f2f0, size 0x8, virtual false, abstract: false, final false
inline ::System::Text::Encoding* get_AlternateEncoding() ;

/// @brief Method get_AlternateEncodingUsage, addr 0xa69f2f8, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::ZipOption get_AlternateEncodingUsage() ;

/// @brief Method get_CanRead, addr 0xa69f5e0, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa69f5e8, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa69f5f0, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// [CompilerGenerated]
/// @brief Method get_CodecBufferSize, addr 0xa69f2d8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CodecBufferSize() ;

/// @brief Method get_DefaultEncoding, addr 0xa69f300, size 0x8, virtual false, abstract: false, final false
static inline ::System::Text::Encoding* get_DefaultEncoding() ;

/// @brief Method get_EnableZip64, addr 0xa69f2e8, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zip::Zip64Option get_EnableZip64() ;

/// @brief Method get_Length, addr 0xa69f5f8, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_OutputStream, addr 0xa69f318, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_OutputStream() ;

/// @brief Method get_ParallelDeflateMaxBufferPairs, addr 0xa69f310, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ParallelDeflateMaxBufferPairs() ;

/// @brief Method get_ParallelDeflateThreshold, addr 0xa69f308, size 0x8, virtual false, abstract: false, final false
inline int64_t get_ParallelDeflateThreshold() ;

/// @brief Method get_Position, addr 0xa69f630, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// [CompilerGenerated]
/// @brief Method get_Strategy, addr 0xa69f2e0, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Ionic::Zlib::CompressionStrategy get_Strategy() ;

/// @brief Method set_Position, addr 0xa69f650, size 0x38, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipOutputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipOutputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipOutputStream(ZipOutputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipOutputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipOutputStream(ZipOutputStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28172};

/// @brief Field _password, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____password;

/// @brief Field _outputStream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ____outputStream;

/// @brief Field _currentEntry, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipEntry*  ____currentEntry;

/// @brief Field _zip64, offset: 0x40, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::Zip64Option  ____zip64;

/// @brief Field _entriesWritten, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::Pathfinding::Ionic::Zip::ZipEntry*>*  ____entriesWritten;

/// @brief Field _entryCount, offset: 0x50, size: 0x4, def value: None
 int32_t  ____entryCount;

/// @brief Field _alternateEncodingUsage, offset: 0x54, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::ZipOption  ____alternateEncodingUsage;

/// @brief Field _alternateEncoding, offset: 0x58, size: 0x8, def value: None
 ::System::Text::Encoding*  ____alternateEncoding;

/// @brief Field _disposed, offset: 0x60, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _exceptionPending, offset: 0x61, size: 0x1, def value: None
 bool  ____exceptionPending;

/// @brief Field _outputCounter, offset: 0x68, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::CountingStream*  ____outputCounter;

/// @brief Field _encryptor, offset: 0x70, size: 0x8, def value: None
 ::System::IO::Stream*  ____encryptor;

/// @brief Field _deflater, offset: 0x78, size: 0x8, def value: None
 ::System::IO::Stream*  ____deflater;

/// @brief Field _entryOutputStream, offset: 0x80, size: 0x8, def value: None
 ::Pathfinding::Ionic::Crc::CrcCalculatorStream*  ____entryOutputStream;

/// @brief Field _needToWriteEntryHeader, offset: 0x88, size: 0x1, def value: None
 bool  ____needToWriteEntryHeader;

/// @brief Field ParallelDeflater, offset: 0x90, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zlib::ParallelDeflateOutputStream*  ___ParallelDeflater;

/// @brief Field _ParallelDeflateThreshold, offset: 0x98, size: 0x8, def value: None
 int64_t  ____ParallelDeflateThreshold;

/// @brief Field _maxBufferPairs, offset: 0xa0, size: 0x4, def value: None
 int32_t  ____maxBufferPairs;

/// [CompilerGenerated]
/// @brief Field <CodecBufferSize>k__BackingField, offset: 0xa4, size: 0x4, def value: None
 int32_t  ____CodecBufferSize_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Strategy>k__BackingField, offset: 0xa8, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zlib::CompressionStrategy  ____Strategy_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____password) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____outputStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____currentEntry) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____zip64) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____entriesWritten) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____entryCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____alternateEncodingUsage) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____alternateEncoding) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____disposed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____exceptionPending) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____outputCounter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____encryptor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____deflater) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____entryOutputStream) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____needToWriteEntryHeader) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ___ParallelDeflater) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____ParallelDeflateThreshold) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____maxBufferPairs) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____CodecBufferSize_k__BackingField) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipOutputStream, ____Strategy_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipOutputStream) == 0xb0, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
