#pragma once
// IWYU pragma private; include "GlobalNamespace/AESHMAC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AESHMAC)
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Forward declare root types
namespace GlobalNamespace {
class AESHMAC;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AESHMAC*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AESHMAC*, "", "AESHMAC");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AESHMAC
class CORDL_TYPE AESHMAC : public ::System::Object {
public:
// Declarations
/// @brief Field gRNG, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gRNG, put=setStaticF_gRNG)) ::System::Security::Cryptography::RandomNumberGenerator*  gRNG;

/// @brief Method NewKey, addr 0x5a1397c, size 0x9c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> NewKey() ;

/// @brief Method Rfc2898DeriveBytes, addr 0x5a15b74, size 0x188, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Rfc2898DeriveBytes(::StringW  password, ::ArrayW<uint8_t>  salt, int32_t  iterations, int32_t  numBytes) ;

/// @brief Method SimpleDecrypt, addr 0x5a14828, size 0x9d4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SimpleDecrypt(::ArrayW<uint8_t>  ciphertext, ::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  auth, int32_t  saltLength) ;

/// @brief Method SimpleDecrypt, addr 0x5a146e8, size 0x140, virtual false, abstract: false, final false
static inline ::StringW SimpleDecrypt(::StringW  ciphertext, ::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  auth, int32_t  saltLength) ;

/// @brief Method SimpleDecryptWithKey, addr 0x5a15948, size 0x22c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SimpleDecryptWithKey(::ArrayW<uint8_t>  ciphertext, ::StringW  key, int32_t  saltLength) ;

/// @brief Method SimpleDecryptWithKey, addr 0x5a15810, size 0x138, virtual false, abstract: false, final false
static inline ::StringW SimpleDecryptWithKey(::StringW  ciphertext, ::StringW  key, int32_t  saltLength) ;

/// @brief Method SimpleEncrypt, addr 0x5a13b50, size 0xb98, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SimpleEncrypt(::ArrayW<uint8_t>  plaintext, ::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  auth, ::ArrayW<uint8_t>  salt) ;

/// @brief Method SimpleEncrypt, addr 0x5a13a18, size 0x138, virtual false, abstract: false, final false
static inline ::StringW SimpleEncrypt(::StringW  plaintext, ::ArrayW<uint8_t>  key, ::ArrayW<uint8_t>  auth, ::ArrayW<uint8_t>  salt) ;

/// @brief Method SimpleEncryptWithKey, addr 0x5a15324, size 0x4ec, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> SimpleEncryptWithKey(::ArrayW<uint8_t>  plaintext, ::StringW  key, ::ArrayW<uint8_t>  salt) ;

/// @brief Method SimpleEncryptWithKey, addr 0x5a151fc, size 0x128, virtual false, abstract: false, final false
static inline ::StringW SimpleEncryptWithKey(::StringW  plaintext, ::StringW  key, ::ArrayW<uint8_t>  salt) ;

static inline ::System::Security::Cryptography::RandomNumberGenerator* getStaticF_gRNG() ;

static inline void setStaticF_gRNG(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AESHMAC() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AESHMAC", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AESHMAC(AESHMAC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AESHMAC", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AESHMAC(AESHMAC const& ) = delete;

/// @brief Field BlockBitSize offset 0xffffffff size 0x4
static constexpr int32_t  BlockBitSize{static_cast<int32_t>(0x80)};

/// @brief Field Iterations offset 0xffffffff size 0x4
static constexpr int32_t  Iterations{static_cast<int32_t>(0x2710)};

/// @brief Field KeyBitSize offset 0xffffffff size 0x4
static constexpr int32_t  KeyBitSize{static_cast<int32_t>(0x100)};

/// @brief Field MinPasswordLength offset 0xffffffff size 0x4
static constexpr int32_t  MinPasswordLength{static_cast<int32_t>(0xc)};

/// @brief Field SaltBitSize offset 0xffffffff size 0x4
static constexpr int32_t  SaltBitSize{static_cast<int32_t>(0x40)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2789};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AESHMAC) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
