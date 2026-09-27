#pragma once
// IWYU pragma private; include "System/Security/Cryptography/Utils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Utils)
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System::Security::Cryptography {
class PKCS1MaskGenerationMethod;
}
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Utils;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::Utils*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::Utils*, "System.Security.Cryptography", "Utils");
// Dependencies System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.Utils
class CORDL_TYPE Utils : public ::System::Object {
public:
// Declarations
/// @brief Field _rng, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__rng, put=setStaticF__rng)) ::System::Security::Cryptography::RNGCryptoServiceProvider*  _rng;

/// @brief Method CompareBigIntArrays, addr 0xa17e544, size 0x118, virtual false, abstract: false, final false
static inline bool CompareBigIntArrays(::ArrayW<uint8_t>  lhs, ::ArrayW<uint8_t>  rhs) ;

/// @brief Method ConvertByteArrayToInt, addr 0xa17dee8, size 0x58, virtual false, abstract: false, final false
static inline int32_t ConvertByteArrayToInt(::ArrayW<uint8_t>  input) ;

/// @brief Method ConvertIntToByteArray, addr 0xa17df40, size 0x118, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> ConvertIntToByteArray(int32_t  dwInput) ;

/// @brief Method ConvertIntToByteArray, addr 0xa17e058, size 0x78, virtual false, abstract: false, final false
static inline void ConvertIntToByteArray(uint32_t  dwInput, ::by_ref<::ArrayW<uint8_t>>  counter) ;

/// @brief Method DWORDFromBigEndian, addr 0xa178b50, size 0x50, virtual false, abstract: false, final false
static inline void DWORDFromBigEndian(uint32_t*  x, int32_t  digits, uint8_t*  block) ;

/// @brief Method DWORDFromLittleEndian, addr 0xa17e0d0, size 0x4c, virtual false, abstract: false, final false
static inline void DWORDFromLittleEndian(uint32_t*  x, int32_t  digits, uint8_t*  block) ;

/// @brief Method DWORDToBigEndian, addr 0xa178a60, size 0xf0, virtual false, abstract: false, final false
static inline void DWORDToBigEndian(::ArrayW<uint8_t>  block, ::ArrayW<uint32_t>  x, int32_t  digits) ;

/// @brief Method DWORDToLittleEndian, addr 0xa17e11c, size 0xf0, virtual false, abstract: false, final false
static inline void DWORDToLittleEndian(::ArrayW<uint8_t>  block, ::ArrayW<uint32_t>  x, int32_t  digits) ;

/// @brief Method DiscardWhiteSpaces, addr 0xa172a5c, size 0x68, virtual false, abstract: false, final false
static inline ::StringW DiscardWhiteSpaces(::StringW  inputBuffer) ;

/// @brief Method DiscardWhiteSpaces, addr 0xa17dd6c, size 0x17c, virtual false, abstract: false, final false
static inline ::StringW DiscardWhiteSpaces(::StringW  inputBuffer, int32_t  inputOffset, int32_t  inputCount) ;

/// @brief Method DoesRsaKeyOverride, addr 0xa176d8c, size 0xf8, virtual false, abstract: false, final false
static inline bool DoesRsaKeyOverride(::System::Security::Cryptography::RSA*  rsaKey, ::StringW  methodName, ::ArrayW<::System::Type*>  parameterTypes) ;

/// @brief Method DoesRsaKeyOverrideSlowPath, addr 0xa17e790, size 0xd0, virtual false, abstract: false, final false
static inline bool DoesRsaKeyOverrideSlowPath(::System::Type*  t, ::StringW  methodName, ::ArrayW<::System::Type*>  parameterTypes) ;

/// @brief Method FixupKeyParity, addr 0xa17d484, size 0xcc, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> FixupKeyParity(::ArrayW<uint8_t>  key) ;

/// @brief Method GenerateRandom, addr 0xa17dccc, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> GenerateRandom(int32_t  keySize) ;

/// @brief Method HasAlgorithm, addr 0xa17d824, size 0x8, virtual false, abstract: false, final false
static inline bool HasAlgorithm(int32_t  dwCalg, int32_t  dwKeySize) ;

/// @brief Method Int, addr 0xa17e20c, size 0x94, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> Int(uint32_t  i) ;

/// @brief Method OidToHashAlgorithmName, addr 0xa17e65c, size 0x134, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::HashAlgorithmName OidToHashAlgorithmName(::StringW  oid) ;

/// @brief Method QuadWordFromBigEndian, addr 0xa17a870, size 0x80, virtual false, abstract: false, final false
static inline void QuadWordFromBigEndian(uint64_t*  x, int32_t  digits, uint8_t*  block) ;

/// @brief Method QuadWordToBigEndian, addr 0xa17a6b8, size 0x1b8, virtual false, abstract: false, final false
static inline void QuadWordToBigEndian(::ArrayW<uint8_t>  block, ::ArrayW<uint64_t>  x, int32_t  digits) ;

/// @brief Method RsaOaepDecrypt, addr 0xa176bc8, size 0xc8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> RsaOaepDecrypt(::System::Security::Cryptography::RSA*  rsa, ::System::Security::Cryptography::HashAlgorithm*  hash, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*  mgf, ::ArrayW<uint8_t>  encryptedData) ;

/// @brief Method RsaOaepEncrypt, addr 0xa177468, size 0x80, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> RsaOaepEncrypt(::System::Security::Cryptography::RSA*  rsa, ::System::Security::Cryptography::HashAlgorithm*  hash, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*  mgf, ::System::Security::Cryptography::RandomNumberGenerator*  rng, ::ArrayW<uint8_t>  data) ;

/// @brief Method RsaPkcs1Padding, addr 0xa17e2a0, size 0x2a4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> RsaPkcs1Padding(::System::Security::Cryptography::RSA*  rsa, ::ArrayW<uint8_t>  oid, ::ArrayW<uint8_t>  hash) ;

/// @brief Method _ProduceLegacyHmacValues, addr 0xa17e860, size 0x8, virtual false, abstract: false, final false
static inline bool _ProduceLegacyHmacValues() ;

static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* getStaticF__rng() ;

/// @brief Method get_StaticRandomNumberGenerator, addr 0xa17db4c, size 0xdc, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator() ;

static inline void setStaticF__rng(::System::Security::Cryptography::RNGCryptoServiceProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utils(Utils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utils(Utils const& ) = delete;

/// @brief Field DefaultRsaProviderType offset 0xffffffff size 0x4
static constexpr int32_t  DefaultRsaProviderType{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6142};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::Utils) == 0x10, "Size mismatch!");

} // namespace end def System::Security::Cryptography
