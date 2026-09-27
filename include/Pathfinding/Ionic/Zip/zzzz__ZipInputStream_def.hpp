#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipInputStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipInputStream)
namespace Pathfinding::Ionic::Crc {
class CrcCalculatorStream;
}
namespace Pathfinding::Ionic::Zip {
class ZipEntry;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ZipInputStream;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipInputStream*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipInputStream*, "Pathfinding.Ionic.Zip", "ZipInputStream");
// Dependencies System.IO.Stream
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipInputStream
class CORDL_TYPE ZipInputStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_CodecBufferSize)) int32_t  CodecBufferSize;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_ReadStream)) ::System::IO::Stream*  ReadStream;

/// @brief Field <CodecBufferSize>k__BackingField, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__CodecBufferSize_k__BackingField, put=__cordl_internal_set__CodecBufferSize_k__BackingField)) int32_t  _CodecBufferSize_k__BackingField;

/// @brief Field _LeftToRead, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__LeftToRead, put=__cordl_internal_set__LeftToRead)) int64_t  _LeftToRead;

/// @brief Field _Password, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__Password, put=__cordl_internal_set__Password)) ::StringW  _Password;

/// @brief Field _closed, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__closed, put=__cordl_internal_set__closed)) bool  _closed;

/// @brief Field _crcStream, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__crcStream, put=__cordl_internal_set__crcStream)) ::Pathfinding::Ionic::Crc::CrcCalculatorStream*  _crcStream;

/// @brief Field _currentEntry, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentEntry, put=__cordl_internal_set__currentEntry)) ::Pathfinding::Ionic::Zip::ZipEntry*  _currentEntry;

/// @brief Field _endOfEntry, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__endOfEntry, put=__cordl_internal_set__endOfEntry)) int64_t  _endOfEntry;

/// @brief Field _exceptionPending, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get__exceptionPending, put=__cordl_internal_set__exceptionPending)) bool  _exceptionPending;

/// @brief Field _findRequired, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get__findRequired, put=__cordl_internal_set__findRequired)) bool  _findRequired;

/// @brief Field _inputStream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputStream, put=__cordl_internal_set__inputStream)) ::System::IO::Stream*  _inputStream;

/// @brief Field _needSetup, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__needSetup, put=__cordl_internal_set__needSetup)) bool  _needSetup;

/// @brief Method Flush, addr 0xa69f1dc, size 0x4c, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method Read, addr 0xa69f030, size 0x130, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0xa69f274, size 0x2c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa69f2a0, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method SetupStream, addr 0xa69efc8, size 0x60, virtual false, abstract: false, final false
inline void SetupStream() ;

/// @brief Method Write, addr 0xa69f228, size 0x4c, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr int32_t const& __cordl_internal_get__CodecBufferSize_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CodecBufferSize_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__LeftToRead() const;

constexpr int64_t& __cordl_internal_get__LeftToRead() ;

constexpr ::StringW const& __cordl_internal_get__Password() const;

constexpr ::StringW& __cordl_internal_get__Password() ;

constexpr bool const& __cordl_internal_get__closed() const;

constexpr bool& __cordl_internal_get__closed() ;

constexpr ::Pathfinding::Ionic::Crc::CrcCalculatorStream* const& __cordl_internal_get__crcStream() const;

constexpr ::Pathfinding::Ionic::Crc::CrcCalculatorStream*& __cordl_internal_get__crcStream() ;

constexpr ::Pathfinding::Ionic::Zip::ZipEntry* const& __cordl_internal_get__currentEntry() const;

constexpr ::Pathfinding::Ionic::Zip::ZipEntry*& __cordl_internal_get__currentEntry() ;

constexpr int64_t const& __cordl_internal_get__endOfEntry() const;

constexpr int64_t& __cordl_internal_get__endOfEntry() ;

constexpr bool const& __cordl_internal_get__exceptionPending() const;

constexpr bool& __cordl_internal_get__exceptionPending() ;

constexpr bool const& __cordl_internal_get__findRequired() const;

constexpr bool& __cordl_internal_get__findRequired() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__inputStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__inputStream() ;

constexpr bool const& __cordl_internal_get__needSetup() const;

constexpr bool& __cordl_internal_get__needSetup() ;

constexpr void __cordl_internal_set__CodecBufferSize_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__LeftToRead(int64_t  value) ;

constexpr void __cordl_internal_set__Password(::StringW  value) ;

constexpr void __cordl_internal_set__closed(bool  value) ;

constexpr void __cordl_internal_set__crcStream(::Pathfinding::Ionic::Crc::CrcCalculatorStream*  value) ;

constexpr void __cordl_internal_set__currentEntry(::Pathfinding::Ionic::Zip::ZipEntry*  value) ;

constexpr void __cordl_internal_set__endOfEntry(int64_t  value) ;

constexpr void __cordl_internal_set__exceptionPending(bool  value) ;

constexpr void __cordl_internal_set__findRequired(bool  value) ;

constexpr void __cordl_internal_set__inputStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__needSetup(bool  value) ;

/// @brief Method get_CanRead, addr 0xa69f160, size 0x8, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa69f168, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa69f184, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// [CompilerGenerated]
/// @brief Method get_CodecBufferSize, addr 0xa69efc0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CodecBufferSize() ;

/// @brief Method get_Length, addr 0xa69f18c, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa69f1a8, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method get_ReadStream, addr 0xa69f028, size 0x8, virtual false, abstract: false, final false
inline ::System::IO::Stream* get_ReadStream() ;

/// @brief Method set_Position, addr 0xa69f1c8, size 0x14, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipInputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipInputStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipInputStream(ZipInputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipInputStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipInputStream(ZipInputStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28171};

/// @brief Field _inputStream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____inputStream;

/// @brief Field _currentEntry, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipEntry*  ____currentEntry;

/// @brief Field _needSetup, offset: 0x38, size: 0x1, def value: None
 bool  ____needSetup;

/// @brief Field _crcStream, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::Ionic::Crc::CrcCalculatorStream*  ____crcStream;

/// @brief Field _LeftToRead, offset: 0x48, size: 0x8, def value: None
 int64_t  ____LeftToRead;

/// @brief Field _Password, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____Password;

/// @brief Field _endOfEntry, offset: 0x58, size: 0x8, def value: None
 int64_t  ____endOfEntry;

/// @brief Field _closed, offset: 0x60, size: 0x1, def value: None
 bool  ____closed;

/// @brief Field _findRequired, offset: 0x61, size: 0x1, def value: None
 bool  ____findRequired;

/// @brief Field _exceptionPending, offset: 0x62, size: 0x1, def value: None
 bool  ____exceptionPending;

/// [CompilerGenerated]
/// @brief Field <CodecBufferSize>k__BackingField, offset: 0x64, size: 0x4, def value: None
 int32_t  ____CodecBufferSize_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipInputStream, ____inputStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipInputStream, ____currentEntry) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipInputStream, ____needSetup) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipInputStream, ____crcStream) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipInputStream, ____LeftToRead) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipInputStream, ____Password) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipInputStream, ____endOfEntry) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipInputStream, ____closed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipInputStream, ____findRequired) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipInputStream, ____exceptionPending) == 0x62, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipInputStream, ____CodecBufferSize_k__BackingField) == 0x64, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipInputStream) == 0x68, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
