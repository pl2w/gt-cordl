#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipCipherStream.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/Ionic/Zip/zzzz__CryptoMode_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipCipherStream)
namespace Pathfinding::Ionic::Zip {
struct CryptoMode;
}
namespace Pathfinding::Ionic::Zip {
class ZipCrypto;
}
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ZipCipherStream;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipCipherStream*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipCipherStream*, "Pathfinding.Ionic.Zip", "ZipCipherStream");
// Dependencies Pathfinding.Ionic.Zip.CryptoMode, System.IO.Stream
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipCipherStream
class CORDL_TYPE ZipCipherStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field _cipher, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cipher, put=__cordl_internal_set__cipher)) ::Pathfinding::Ionic::Zip::ZipCrypto*  _cipher;

/// @brief Field _mode, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__mode, put=__cordl_internal_set__mode)) ::Pathfinding::Ionic::Zip::CryptoMode  _mode;

/// @brief Field _s, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__s, put=__cordl_internal_set__s)) ::System::IO::Stream*  _s;

/// @brief Method Flush, addr 0xa68f558, size 0x4, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::Pathfinding::Ionic::Zip::ZipCipherStream* New_ctor(::System::IO::Stream*  s, ::Pathfinding::Ionic::Zip::ZipCrypto*  cipher, ::Pathfinding::Ionic::Zip::CryptoMode  mode) ;

/// @brief Method Read, addr 0xa68f1f4, size 0x198, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method Seek, addr 0xa68f604, size 0x38, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0xa68f63c, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0xa68f38c, size 0x1a4, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count) ;

constexpr ::Pathfinding::Ionic::Zip::ZipCrypto* const& __cordl_internal_get__cipher() const;

constexpr ::Pathfinding::Ionic::Zip::ZipCrypto*& __cordl_internal_get__cipher() ;

constexpr ::Pathfinding::Ionic::Zip::CryptoMode const& __cordl_internal_get__mode() const;

constexpr ::Pathfinding::Ionic::Zip::CryptoMode& __cordl_internal_get__mode() ;

constexpr ::System::IO::Stream* const& __cordl_internal_get__s() const;

constexpr ::System::IO::Stream*& __cordl_internal_get__s() ;

constexpr void __cordl_internal_set__cipher(::Pathfinding::Ionic::Zip::ZipCrypto*  value) ;

constexpr void __cordl_internal_set__mode(::Pathfinding::Ionic::Zip::CryptoMode  value) ;

constexpr void __cordl_internal_set__s(::System::IO::Stream*  value) ;

/// @brief Method .ctor, addr 0xa68f158, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::IO::Stream*  s, ::Pathfinding::Ionic::Zip::ZipCrypto*  cipher, ::Pathfinding::Ionic::Zip::CryptoMode  mode) ;

/// @brief Method get_CanRead, addr 0xa68f530, size 0x10, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0xa68f540, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0xa68f548, size 0x10, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0xa68f55c, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0xa68f594, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0xa68f5cc, size 0x38, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipCipherStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipCipherStream", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipCipherStream(ZipCipherStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipCipherStream", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipCipherStream(ZipCipherStream const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28159};

/// @brief Field _cipher, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::Ionic::Zip::ZipCrypto*  ____cipher;

/// @brief Field _s, offset: 0x30, size: 0x8, def value: None
 ::System::IO::Stream*  ____s;

/// @brief Field _mode, offset: 0x38, size: 0x4, def value: None
 ::Pathfinding::Ionic::Zip::CryptoMode  ____mode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipCipherStream, ____cipher) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipCipherStream, ____s) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipCipherStream, ____mode) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipCipherStream) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
