#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/CountingStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CountingStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class CountingStream;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::CountingStream*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::CountingStream*, "Pathfinding.Ionic.Zip", "CountingStream");
// Dependencies System.IO.Stream
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.CountingStream
class CORDL_TYPE CountingStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_BytesRead)) int64_t  BytesRead;

 __declspec(property(get=get_BytesWritten)) int64_t  BytesWritten;

 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_ComputedPosition)) int64_t  ComputedPosition;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _bytesRead, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__bytesRead, put=__cordl_internal_set__bytesRead)) int64_t  _bytesRead;

/// @brief Field _bytesWritten, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__bytesWritten, put=__cordl_internal_set__bytesWritten)) int64_t  _bytesWritten;

/// @brief Field _initialOffset, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__initialOffset, put=__cordl_internal_set__initialOffset)) int64_t  _initialOffset;

/// @brief Field _s, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__s, put=__cordl_internal_set__s)) ::System::IO::Stream*  _s;

/// @brief Method Adjust, addr 0xa68e668, size 0xc4, virtual false, abstract: false, final false
inline void Adjust(int64_t  delta) ;

/// @brief Method Flush, addr 0xa68e800, size 0x20, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::Pathfinding::Ionic::Zip::CountingStream* New_ctor(::System::IO::Stream*  stream) ;

/// @brief Method Read, addr 0xa68e72c, size 0x38, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0xa68e890, size 0x20, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa68e8b0, size 0x20, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0xa68e764, size 0x48, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr int64_t const& __cordl_internal_get__bytesRead() const;

constexpr int64_t& __cordl_internal_get__bytesRead() ;

constexpr int64_t const& __cordl_internal_get__bytesWritten() const;

constexpr int64_t& __cordl_internal_get__bytesWritten() ;

constexpr int64_t const& __cordl_internal_get__initialOffset() const;

constexpr int64_t& __cordl_internal_get__initialOffset() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__s() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__s() ;

constexpr void __cordl_internal_set__bytesRead(int64_t  value) ;

constexpr void __cordl_internal_set__bytesWritten(int64_t  value) ;

constexpr void __cordl_internal_set__initialOffset(int64_t  value) ;

constexpr void __cordl_internal_set__s(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0xa68e530, size 0x128, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  stream) ;

/// @brief Method get_BytesRead, addr 0xa68e660, size 0x8, virtual false, abstract: false, final false
inline int64_t get_BytesRead() ;

/// @brief Method get_BytesWritten, addr 0xa68e658, size 0x8, virtual false, abstract: false, final false
inline int64_t get_BytesWritten() ;

/// @brief Method get_CanRead, addr 0xa68e7ac, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa68e7c8, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa68e7e4, size 0x1c, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_ComputedPosition, addr 0xa68e83c, size 0x10, virtual false, abstract: false, final false
inline int64_t get_ComputedPosition() ;

/// @brief Method get_Length, addr 0xa68e820, size 0x1c, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa68e84c, size 0x20, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0xa68e86c, size 0x24, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountingStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountingStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CountingStream(CountingStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountingStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountingStream(CountingStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28156};

/// @brief Field _s, offset: 0x28, size: 0x8, def value: None
 ::System::IO::Stream*  ____s;

/// @brief Field _bytesWritten, offset: 0x30, size: 0x8, def value: None
 int64_t  ____bytesWritten;

/// @brief Field _bytesRead, offset: 0x38, size: 0x8, def value: None
 int64_t  ____bytesRead;

/// @brief Field _initialOffset, offset: 0x40, size: 0x8, def value: None
 int64_t  ____initialOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::CountingStream, ____s) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::CountingStream, ____bytesWritten) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::CountingStream, ____bytesRead) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::CountingStream, ____initialOffset) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::CountingStream) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
