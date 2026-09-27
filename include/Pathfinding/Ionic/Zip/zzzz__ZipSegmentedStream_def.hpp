#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipSegmentedStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__ZipSegmentedStream_RwMode_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipSegmentedStream)
namespace GlobalNamespace {
struct ZipSegmentedStream_RwMode;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ZipSegmentedStream;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipSegmentedStream*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipSegmentedStream*, "Pathfinding.Ionic.Zip", "ZipSegmentedStream");
// Dependencies Pathfinding.Ionic.Zip.ZipSegmentedStream::RwMode, System.IO.Stream
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipSegmentedStream
class CORDL_TYPE ZipSegmentedStream : public ::System::IO::Stream {
public:
// Declarations
using RwMode = ::GlobalNamespace::ZipSegmentedStream_RwMode;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_ContiguousWrite, put=set_ContiguousWrite)) bool  ContiguousWrite;

 __declspec(property(get=get_CurrentName)) ::StringW  CurrentName;

 __declspec(property(get=get_CurrentSegment, put=set_CurrentSegment)) uint32_t  CurrentSegment;

 __declspec(property(get=get_CurrentTempName)) ::StringW  CurrentTempName;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field <ContiguousWrite>k__BackingField, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__ContiguousWrite_k__BackingField, put=__cordl_internal_set__ContiguousWrite_k__BackingField)) bool  _ContiguousWrite_k__BackingField;

/// @brief Field _baseDir, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseDir, put=__cordl_internal_set__baseDir)) ::StringW  _baseDir;

/// @brief Field _baseName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseName, put=__cordl_internal_set__baseName)) ::StringW  _baseName;

/// @brief Field _currentDiskNumber, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentDiskNumber, put=__cordl_internal_set__currentDiskNumber)) uint32_t  _currentDiskNumber;

/// @brief Field _currentName, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentName, put=__cordl_internal_set__currentName)) ::StringW  _currentName;

/// @brief Field _currentTempName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentTempName, put=__cordl_internal_set__currentTempName)) ::StringW  _currentTempName;

/// @brief Field _exceptionPending, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__exceptionPending, put=__cordl_internal_set__exceptionPending)) bool  _exceptionPending;

/// @brief Field _innerStream, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__innerStream, put=__cordl_internal_set__innerStream)) ::System::IO::Stream*  _innerStream;

/// @brief Field _maxDiskNumber, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDiskNumber, put=__cordl_internal_set__maxDiskNumber)) uint32_t  _maxDiskNumber;

/// @brief Field _maxSegmentSize, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSegmentSize, put=__cordl_internal_set__maxSegmentSize)) int32_t  _maxSegmentSize;

/// @brief Field rwMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_rwMode, put=__cordl_internal_set_rwMode)) ::GlobalNamespace::ZipSegmentedStream_RwMode  rwMode;

/// @brief Method ComputeSegment, addr 0xa69ed7c, size 0x4c, virtual false, abstract: false, final false
inline uint32_t ComputeSegment(int32_t  length) ;

/// @brief Method Dispose, addr 0xa6a0bf8, size 0xac, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Flush, addr 0xa6a0af0, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

/// @brief Method ForReading, addr 0xa69fc30, size 0xa4, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ZipSegmentedStream* ForReading(::StringW  name, uint32_t  initialDiskNumber, uint32_t  maxDiskNumber) ;

/// @brief Method ForUpdate, addr 0xa69ffbc, size 0x138, virtual false, abstract: false, final false
static inline ::System::IO::Stream* ForUpdate(::StringW  name, uint32_t  diskNumber) ;

/// @brief Method ForWriting, addr 0xa69fd50, size 0x134, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ZipSegmentedStream* ForWriting(::StringW  name, int32_t  maxSegmentSize) ;

static inline ::Pathfinding::Ionic::Zip::ZipSegmentedStream* New_ctor() ;

/// @brief Method Read, addr 0xa6a047c, size 0x1d4, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0xa6a0b6c, size 0x20, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa6a0b8c, size 0x6c, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method ToString, addr 0xa6a028c, size 0x1f0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TruncateBackward, addr 0xa6a07bc, size 0x2cc, virtual false, abstract: false, final false
inline int64_t TruncateBackward(uint32_t  diskNumber, int64_t  offset) ;

/// @brief Method Write, addr 0xa6a0650, size 0x16c, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method _NameForSegment, addr 0xa6a0150, size 0x134, virtual false, abstract: false, final false
inline ::StringW _NameForSegment(uint32_t  diskNumber) ;

/// @brief Method _SetReadStream, addr 0xa69fce8, size 0x68, virtual false, abstract: false, final false
inline void _SetReadStream() ;

/// @brief Method _SetWriteStream, addr 0xa69fe84, size 0x138, virtual false, abstract: false, final false
inline void _SetWriteStream(uint32_t  increment) ;

constexpr bool const& __cordl_internal_get__ContiguousWrite_k__BackingField() const;

constexpr bool& __cordl_internal_get__ContiguousWrite_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__baseDir() const;

constexpr ::StringW& __cordl_internal_get__baseDir() ;

constexpr ::StringW const& __cordl_internal_get__baseName() const;

constexpr ::StringW& __cordl_internal_get__baseName() ;

constexpr uint32_t const& __cordl_internal_get__currentDiskNumber() const;

constexpr uint32_t& __cordl_internal_get__currentDiskNumber() ;

constexpr ::StringW const& __cordl_internal_get__currentName() const;

constexpr ::StringW& __cordl_internal_get__currentName() ;

constexpr ::StringW const& __cordl_internal_get__currentTempName() const;

constexpr ::StringW& __cordl_internal_get__currentTempName() ;

constexpr bool const& __cordl_internal_get__exceptionPending() const;

constexpr bool& __cordl_internal_get__exceptionPending() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__innerStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__innerStream() ;

constexpr uint32_t const& __cordl_internal_get__maxDiskNumber() const;

constexpr uint32_t& __cordl_internal_get__maxDiskNumber() ;

constexpr int32_t const& __cordl_internal_get__maxSegmentSize() const;

constexpr int32_t& __cordl_internal_get__maxSegmentSize() ;

constexpr ::GlobalNamespace::ZipSegmentedStream_RwMode const& __cordl_internal_get_rwMode() const;

constexpr ::GlobalNamespace::ZipSegmentedStream_RwMode& __cordl_internal_get_rwMode() ;

constexpr void __cordl_internal_set__ContiguousWrite_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__baseDir(::StringW  value) ;

constexpr void __cordl_internal_set__baseName(::StringW  value) ;

constexpr void __cordl_internal_set__currentDiskNumber(uint32_t  value) ;

constexpr void __cordl_internal_set__currentName(::StringW  value) ;

constexpr void __cordl_internal_set__currentTempName(::StringW  value) ;

constexpr void __cordl_internal_set__exceptionPending(bool  value) ;

constexpr void __cordl_internal_set__innerStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__maxDiskNumber(uint32_t  value) ;

constexpr void __cordl_internal_set__maxSegmentSize(int32_t  value) ;

constexpr void __cordl_internal_set_rwMode(::GlobalNamespace::ZipSegmentedStream_RwMode  value) ;

/// @brief Method .ctor, addr 0xa69fbd0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CanRead, addr 0xa6a0a88, size 0x28, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa6a0ab0, size 0x18, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa6a0ac8, size 0x28, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// [CompilerGenerated]
/// @brief Method get_ContiguousWrite, addr 0xa6a00f4, size 0x8, virtual false, abstract: false, final false
inline bool get_ContiguousWrite() ;

/// @brief Method get_CurrentName, addr 0xa6a010c, size 0x44, virtual false, abstract: false, final false
inline ::StringW get_CurrentName() ;

/// @brief Method get_CurrentSegment, addr 0xa6a0104, size 0x8, virtual false, abstract: false, final false
inline uint32_t get_CurrentSegment() ;

/// @brief Method get_CurrentTempName, addr 0xa6a0284, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_CurrentTempName() ;

/// @brief Method get_Length, addr 0xa6a0b10, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa6a0b2c, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// [CompilerGenerated]
/// @brief Method set_ContiguousWrite, addr 0xa6a00fc, size 0x8, virtual false, abstract: false, final false
inline void set_ContiguousWrite(bool  value) ;

/// @brief Method set_CurrentSegment, addr 0xa69fcd4, size 0x14, virtual false, abstract: false, final false
inline void set_CurrentSegment(uint32_t  value) ;

/// @brief Method set_Position, addr 0xa6a0b4c, size 0x20, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipSegmentedStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipSegmentedStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipSegmentedStream(ZipSegmentedStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipSegmentedStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipSegmentedStream(ZipSegmentedStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28175};

/// @brief Field rwMode, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::ZipSegmentedStream_RwMode  ___rwMode;

/// @brief Field _exceptionPending, offset: 0x2c, size: 0x1, def value: None
 bool  ____exceptionPending;

/// @brief Field _baseName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____baseName;

/// @brief Field _baseDir, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____baseDir;

/// @brief Field _currentName, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____currentName;

/// @brief Field _currentTempName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____currentTempName;

/// @brief Field _currentDiskNumber, offset: 0x50, size: 0x4, def value: None
 uint32_t  ____currentDiskNumber;

/// @brief Field _maxDiskNumber, offset: 0x54, size: 0x4, def value: None
 uint32_t  ____maxDiskNumber;

/// @brief Field _maxSegmentSize, offset: 0x58, size: 0x4, def value: None
 int32_t  ____maxSegmentSize;

/// @brief Field _innerStream, offset: 0x60, size: 0x8, def value: None
 ::System::IO::Stream*  ____innerStream;

/// [CompilerGenerated]
/// @brief Field <ContiguousWrite>k__BackingField, offset: 0x68, size: 0x1, def value: None
 bool  ____ContiguousWrite_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipSegmentedStream, ___rwMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipSegmentedStream, ____exceptionPending) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipSegmentedStream, ____baseName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipSegmentedStream, ____baseDir) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipSegmentedStream, ____currentName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipSegmentedStream, ____currentTempName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipSegmentedStream, ____currentDiskNumber) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipSegmentedStream, ____maxDiskNumber) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipSegmentedStream, ____maxSegmentSize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipSegmentedStream, ____innerStream) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipSegmentedStream, ____ContiguousWrite_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipSegmentedStream) == 0x70, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
