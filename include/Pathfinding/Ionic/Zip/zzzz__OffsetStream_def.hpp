#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/OffsetStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OffsetStream)
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
namespace Pathfinding::Ionic::Zip {
class OffsetStream;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::OffsetStream*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::OffsetStream*, "Pathfinding.Ionic.Zip", "OffsetStream");
// Dependencies System.IO.Stream
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.OffsetStream
class CORDL_TYPE OffsetStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _innerStream, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__innerStream, put=__cordl_internal_set__innerStream)) ::System::IO::Stream*  _innerStream;

/// @brief Field _originalPosition, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalPosition, put=__cordl_internal_set__originalPosition)) int64_t  _originalPosition;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Close, addr 0xa68cb48, size 0x8, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Flush, addr 0xa68ca38, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::Pathfinding::Ionic::Zip::OffsetStream* New_ctor(::System::IO::Stream*  s) ;

/// @brief Method Read, addr 0xa68c9a0, size 0x20, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0xa68cad4, size 0x3c, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa68cb10, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method System.IDisposable.Dispose, addr 0xa68c990, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method Write, addr 0xa68c9c0, size 0x38, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__innerStream() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__innerStream() ;

constexpr int64_t const& __cordl_internal_get__originalPosition() const;

constexpr int64_t& __cordl_internal_get__originalPosition() ;

constexpr void __cordl_internal_set__innerStream(::System::IO::Stream*  value) ;

constexpr void __cordl_internal_set__originalPosition(int64_t  value) ;

/// @brief Method .ctor, addr 0xa68c8f8, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  s) ;

/// @brief Method get_CanRead, addr 0xa68c9f8, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa68ca14, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa68ca30, size 0x8, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0xa68ca58, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa68ca74, size 0x34, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method set_Position, addr 0xa68caa8, size 0x2c, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OffsetStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OffsetStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OffsetStream(OffsetStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OffsetStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OffsetStream(OffsetStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28154};

/// @brief Field _originalPosition, offset: 0x28, size: 0x8, def value: None
 int64_t  ____originalPosition;

/// @brief Field _innerStream, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ____innerStream;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::OffsetStream, ____originalPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::OffsetStream, ____innerStream) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::OffsetStream) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
