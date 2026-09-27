#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Crc/CrcCalculatorStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CrcCalculatorStream)
namespace Pathfinding::Ionic::Crc {
class CRC32;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace Pathfinding::Ionic::Crc {
class CrcCalculatorStream;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Crc::CrcCalculatorStream*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Crc::CrcCalculatorStream*, "Pathfinding.Ionic.Crc", "CrcCalculatorStream");
// Dependencies System.IO.Stream
namespace Pathfinding::Ionic::Crc {
// Is value type: false
// CS Name: Pathfinding.Ionic.Crc.CrcCalculatorStream
class CORDL_TYPE CrcCalculatorStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Crc)) int32_t  Crc;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

 __declspec(property(get=get_TotalBytesSlurped)) int64_t  TotalBytesSlurped;

/// @brief Field UnsetLengthLimit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UnsetLengthLimit, put=setStaticF_UnsetLengthLimit)) int64_t  UnsetLengthLimit;

/// @brief Field _Crc32, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Crc32, put=__cordl_internal_set__Crc32)) ::Pathfinding::Ionic::Crc::CRC32*  _Crc32;

/// @brief Field _innerStream, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__innerStream, put=__cordl_internal_set__innerStream)) ::System::IO::Stream*  _innerStream;

/// @brief Field _leaveOpen, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__leaveOpen, put=__cordl_internal_set__leaveOpen)) bool  _leaveOpen;

/// @brief Field _lengthLimit, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lengthLimit, put=__cordl_internal_set__lengthLimit)) int64_t  _lengthLimit;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Close, addr 0xa6affac, size 0x40, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Flush, addr 0xa6afe40, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::Pathfinding::Ionic::Crc::CrcCalculatorStream* New_ctor(bool  leaveOpen, int64_t  length, ::System::IO::Stream*  stream, ::Pathfinding::Ionic::Crc::CRC32*  crc32) ;

static inline ::Pathfinding::Ionic::Crc::CrcCalculatorStream* New_ctor(::System::IO::Stream*  stream) ;

static inline ::Pathfinding::Ionic::Crc::CrcCalculatorStream* New_ctor(::System::IO::Stream*  stream, bool  leaveOpen) ;

static inline ::Pathfinding::Ionic::Crc::CrcCalculatorStream* New_ctor(::System::IO::Stream*  stream, int64_t  length) ;

/// @brief Method Read, addr 0xa6afc94, size 0xfc, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0xa6aff3c, size 0x38, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa6aff74, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method System.IDisposable.Dispose, addr 0xa6afc50, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method Write, addr 0xa6afd90, size 0x70, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::Pathfinding::Ionic::Crc::CRC32* const& __cordl_internal_get__Crc32() const;

constexpr ::Pathfinding::Ionic::Crc::CRC32*& __cordl_internal_get__Crc32() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__innerStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__innerStream() ;

constexpr bool const& __cordl_internal_get__leaveOpen() const;

constexpr bool& __cordl_internal_get__leaveOpen() ;

constexpr int64_t const& __cordl_internal_get__lengthLimit() const;

constexpr int64_t& __cordl_internal_get__lengthLimit() ;

constexpr void __cordl_internal_set__Crc32(::Pathfinding::Ionic::Crc::CRC32*  value) ;

constexpr void __cordl_internal_set__innerStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__leaveOpen(bool  value) ;

constexpr void __cordl_internal_set__lengthLimit(int64_t  value) ;

/// @brief Method .ctor, addr 0xa6afa20, size 0xfc, virtual false, abstract: false, final false
inline void _ctor(bool  leaveOpen, int64_t  length, ::System::IO::Stream*  stream, ::Pathfinding::Ionic::Crc::CRC32*  crc32) ;

/// @brief Method .ctor, addr 0xa6af9a8, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method .ctor, addr 0xa6afb1c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, bool  leaveOpen) ;

/// @brief Method .ctor, addr 0xa6afb98, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream, int64_t  length) ;

static inline int64_t getStaticF_UnsetLengthLimit() ;

/// @brief Method get_CanRead, addr 0xa6afe00, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa6afe1c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa6afe24, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Crc, addr 0xa6afc78, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_Crc() ;

/// @brief Method get_Length, addr 0xa6afe60, size 0x8c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa6afeec, size 0x18, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method get_TotalBytesSlurped, addr 0xa6afc60, size 0x18, virtual false, abstract: false, final false
inline int64_t get_TotalBytesSlurped() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_UnsetLengthLimit(int64_t  value) ;

/// @brief Method set_Position, addr 0xa6aff04, size 0x38, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CrcCalculatorStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CrcCalculatorStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CrcCalculatorStream(CrcCalculatorStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CrcCalculatorStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CrcCalculatorStream(CrcCalculatorStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28208};

/// @brief Field _innerStream, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____innerStream;

/// @brief Field _Crc32, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::Ionic::Crc::CRC32*  ____Crc32;

/// @brief Field _lengthLimit, offset: 0x38, size: 0x8, def value: None
 int64_t  ____lengthLimit;

/// @brief Field _leaveOpen, offset: 0x40, size: 0x1, def value: None
 bool  ____leaveOpen;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Crc::CrcCalculatorStream, ____innerStream) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Crc::CrcCalculatorStream, ____Crc32) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Crc::CrcCalculatorStream, ____lengthLimit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Crc::CrcCalculatorStream, ____leaveOpen) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Crc::CrcCalculatorStream) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Crc
