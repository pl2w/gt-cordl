#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/CryptoConvert.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoConvert)
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace System::Security::Cryptography {
class RSA;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class CryptoConvert;
}
// Write type traits
MARK_REF_T(::Mono::Security::Cryptography::CryptoConvert*);
DEFINE_IL2CPP_CLASS(::Mono::Security::Cryptography::CryptoConvert*, "Mono.Security.Cryptography", "CryptoConvert");
// Dependencies System.Object
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.CryptoConvert
class CORDL_TYPE CryptoConvert : public ::System::Object {
public:
// Declarations
/// @brief Method FromCapiPrivateKeyBlob, addr 0xa0fe520, size 0x8, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::ArrayW<uint8_t>  blob) ;

/// @brief Method FromCapiPrivateKeyBlob, addr 0xa0fe528, size 0x250, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSA* FromCapiPrivateKeyBlob(::ArrayW<uint8_t>  blob, int32_t  offset) ;

/// @brief Method FromHex, addr 0xa0fef28, size 0x140, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FromHex(::StringW  hex) ;

/// @brief Method FromHexChar, addr 0xa0fee94, size 0x94, virtual false, abstract: false, final false
static inline uint8_t FromHexChar(char16_t  c) ;

/// @brief Method GetParametersFromCapiPrivateKeyBlob, addr 0xa0fe778, size 0x5e0, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSAParameters GetParametersFromCapiPrivateKeyBlob(::ArrayW<uint8_t>  blob, int32_t  offset) ;

/// @brief Method ToHex, addr 0xa0fed58, size 0x13c, virtual false, abstract: false, final false
static inline ::StringW ToHex(::ArrayW<uint8_t>  input) ;

/// @brief Method ToInt32LE, addr 0xa0fe380, size 0x74, virtual false, abstract: false, final false
static inline int32_t ToInt32LE(::ArrayW<uint8_t>  bytes, int32_t  offset) ;

/// @brief Method ToUInt32LE, addr 0xa0fe3f4, size 0x74, virtual false, abstract: false, final false
static inline uint32_t ToUInt32LE(::ArrayW<uint8_t>  bytes, int32_t  offset) ;

/// @brief Method Trim, addr 0xa0fe468, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Trim(::ArrayW<uint8_t>  array) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CryptoConvert() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CryptoConvert", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CryptoConvert(CryptoConvert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CryptoConvert", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CryptoConvert(CryptoConvert const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27876};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Security::Cryptography::CryptoConvert) == 0x10, "Size mismatch!");

} // namespace end def Mono::Security::Cryptography
