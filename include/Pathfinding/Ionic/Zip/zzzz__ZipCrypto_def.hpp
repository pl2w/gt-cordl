#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/ZipCrypto.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZipCrypto)
namespace Pathfinding::Ionic::Crc {
class CRC32;
}
namespace Pathfinding::Ionic::Zip {
class ZipEntry;
}
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
class ZipCrypto;
}
// Write type traits
MARK_REF_T(::Pathfinding::Ionic::Zip::ZipCrypto*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::ZipCrypto*, "Pathfinding.Ionic.Zip", "ZipCrypto");
// Dependencies System.Object
namespace Pathfinding::Ionic::Zip {
// Is value type: false
// CS Name: Pathfinding.Ionic.Zip.ZipCrypto
class CORDL_TYPE ZipCrypto : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_MagicByte)) uint8_t  MagicByte;

/// @brief Field _Keys, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Keys, put=__cordl_internal_set__Keys)) ::ArrayW<uint32_t>  _Keys;

/// @brief Field crc32, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_crc32, put=__cordl_internal_set_crc32)) ::Pathfinding::Ionic::Crc::CRC32*  crc32;

/// @brief Method DecryptMessage, addr 0xa68ed64, size 0x17c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> DecryptMessage(::ArrayW<uint8_t>  cipherText, int32_t  length) ;

/// @brief Method EncryptMessage, addr 0xa68efdc, size 0x17c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> EncryptMessage(::ArrayW<uint8_t>  plainText, int32_t  length) ;

/// @brief Method ForRead, addr 0xa68eafc, size 0x19c, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ZipCrypto* ForRead(::StringW  password, ::Pathfinding::Ionic::Zip::ZipEntry*  e) ;

/// @brief Method ForWrite, addr 0xa68e998, size 0xb0, virtual false, abstract: false, final false
static inline ::Pathfinding::Ionic::Zip::ZipCrypto* ForWrite(::StringW  password) ;

/// @brief Method InitCipher, addr 0xa68ea48, size 0xb4, virtual false, abstract: false, final false
inline void InitCipher(::StringW  passphrase) ;

static inline ::Pathfinding::Ionic::Zip::ZipCrypto* New_ctor() ;

/// @brief Method UpdateKeys, addr 0xa68ef24, size 0xb8, virtual false, abstract: false, final false
inline void UpdateKeys(uint8_t  byteValue) ;

constexpr ::ArrayW<uint32_t> const& __cordl_internal_get__Keys() const;

constexpr ::ArrayW<uint32_t>& __cordl_internal_get__Keys() ;

constexpr ::Pathfinding::Ionic::Crc::CRC32* const& __cordl_internal_get_crc32() const;

constexpr ::Pathfinding::Ionic::Crc::CRC32*& __cordl_internal_get_crc32() ;

constexpr void __cordl_internal_set__Keys(::ArrayW<uint32_t>  value) ;

constexpr void __cordl_internal_set_crc32(::Pathfinding::Ionic::Crc::CRC32*  value) ;

/// @brief Method .ctor, addr 0xa68e8d0, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_MagicByte, addr 0xa68eee0, size 0x44, virtual false, abstract: false, final false
inline uint8_t get_MagicByte() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZipCrypto() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZipCrypto", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZipCrypto(ZipCrypto && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZipCrypto", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZipCrypto(ZipCrypto const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28157};

/// @brief Field _Keys, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint32_t>  ____Keys;

/// @brief Field crc32, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::Ionic::Crc::CRC32*  ___crc32;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipCrypto, ____Keys) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Ionic::Zip::ZipCrypto, ___crc32) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipCrypto) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip
