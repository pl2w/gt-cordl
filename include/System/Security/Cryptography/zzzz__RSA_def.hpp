#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSA.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSA)
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace System::Security::Cryptography {
class RSAEncryptionPadding;
}
namespace System::Security::Cryptography {
struct RSAParameters;
}
namespace System::Security::Cryptography {
class RSASignaturePadding;
}
namespace System {
class Exception;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSA;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::RSA*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::RSA*, "System.Security.Cryptography", "RSA");
// [ComVisible(true)]
// Dependencies System.Security.Cryptography.AsymmetricAlgorithm
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RSA
class CORDL_TYPE RSA : public ::System::Security::Cryptography::AsymmetricAlgorithm {
public:
// Declarations
 __declspec(property(get=get_KeyExchangeAlgorithm)) ::StringW  KeyExchangeAlgorithm;

 __declspec(property(get=get_SignatureAlgorithm)) ::StringW  SignatureAlgorithm;

/// @brief Method Create, addr 0xa17181c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSA* Create() ;

/// @brief Method Create, addr 0xa1718b4, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSA* Create(::StringW  algName) ;

/// @brief Method Create, addr 0xa172ef0, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSA* Create(int32_t  keySizeInBits) ;

/// @brief Method Create, addr 0xa172fbc, size 0x104, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::RSA* Create(::System::Security::Cryptography::RSAParameters  parameters) ;

/// @brief Method Decrypt, addr 0xa171a50, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Decrypt(::ArrayW<uint8_t>  data, ::System::Security::Cryptography::RSAEncryptionPadding*  padding) ;

/// @brief Method DecryptValue, addr 0xa1722e0, size 0x58, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> DecryptValue(::ArrayW<uint8_t>  rgb) ;

/// @brief Method DerivedClassMustOverride, addr 0xa1719d0, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* DerivedClassMustOverride() ;

/// @brief Method Encrypt, addr 0xa1719ac, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Encrypt(::ArrayW<uint8_t>  data, ::System::Security::Cryptography::RSAEncryptionPadding*  padding) ;

/// @brief Method EncryptValue, addr 0xa172338, size 0x58, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> EncryptValue(::ArrayW<uint8_t>  rgb) ;

/// @brief Method ExportParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Security::Cryptography::RSAParameters ExportParameters(bool  includePrivateParameters) ;

/// @brief Method ExportRSAPrivateKey, addr 0xa173c4c, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ExportRSAPrivateKey() ;

/// @brief Method ExportRSAPublicKey, addr 0xa173c84, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> ExportRSAPublicKey() ;

/// @brief Method FromXmlString, addr 0xa172410, size 0x64c, virtual true, abstract: false, final false
inline void FromXmlString(::StringW  xmlString) ;

/// @brief Method HashAlgorithmNameNullOrEmpty, addr 0xa171d34, size 0xa0, virtual false, abstract: false, final false
static inline ::System::Exception* HashAlgorithmNameNullOrEmpty() ;

/// @brief Method HashData, addr 0xa171abc, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> HashData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method HashData, addr 0xa171ae0, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> HashData(::System::IO::Stream*  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method ImportParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ImportParameters(::System::Security::Cryptography::RSAParameters  parameters) ;

/// @brief Method ImportRSAPrivateKey, addr 0xa173cbc, size 0x38, virtual true, abstract: false, final false
inline void ImportRSAPrivateKey(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  bytesRead) ;

/// @brief Method ImportRSAPublicKey, addr 0xa173cf4, size 0x38, virtual true, abstract: false, final false
inline void ImportRSAPublicKey(::System::ReadOnlySpan_1<uint8_t>  source, ::by_ref<int32_t>  bytesRead) ;

static inline ::System::Security::Cryptography::RSA* New_ctor() ;

/// @brief Method SignData, addr 0xa171b04, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> SignData(::ArrayW<uint8_t>  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding) ;

/// @brief Method SignData, addr 0xa171b74, size 0x1c0, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> SignData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding) ;

/// @brief Method SignData, addr 0xa171dd4, size 0x138, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> SignData(::System::IO::Stream*  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding) ;

/// @brief Method SignHash, addr 0xa171a74, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> SignHash(::ArrayW<uint8_t>  hash, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding) ;

/// @brief Method ToXmlString, addr 0xa172ac4, size 0x42c, virtual true, abstract: false, final false
inline ::StringW ToXmlString(bool  includePrivateParameters) ;

/// @brief Method TryDecrypt, addr 0xa1730c0, size 0x114, virtual true, abstract: false, final false
inline bool TryDecrypt(::System::ReadOnlySpan_1<uint8_t>  data, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::RSAEncryptionPadding*  padding, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryEncrypt, addr 0xa1731d4, size 0x114, virtual true, abstract: false, final false
inline bool TryEncrypt(::System::ReadOnlySpan_1<uint8_t>  data, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::RSAEncryptionPadding*  padding, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryExportRSAPrivateKey, addr 0xa173d2c, size 0x38, virtual true, abstract: false, final false
inline bool TryExportRSAPrivateKey(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryExportRSAPublicKey, addr 0xa173d64, size 0x38, virtual true, abstract: false, final false
inline bool TryExportRSAPublicKey(::System::Span_1<uint8_t>  destination, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TryHashData, addr 0xa1732e8, size 0x270, virtual true, abstract: false, final false
inline bool TryHashData(::System::ReadOnlySpan_1<uint8_t>  data, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TrySignData, addr 0xa17367c, size 0x1ec, virtual true, abstract: false, final false
inline bool TrySignData(::System::ReadOnlySpan_1<uint8_t>  data, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method TrySignHash, addr 0xa173558, size 0x124, virtual true, abstract: false, final false
inline bool TrySignHash(::System::ReadOnlySpan_1<uint8_t>  hash, ::System::Span_1<uint8_t>  destination, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding, ::by_ref<int32_t>  bytesWritten) ;

/// @brief Method VerifyData, addr 0xa171f80, size 0x1f4, virtual true, abstract: false, final false
inline bool VerifyData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding) ;

/// @brief Method VerifyData, addr 0xa171f0c, size 0x74, virtual false, abstract: false, final false
inline bool VerifyData(::ArrayW<uint8_t>  data, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding) ;

/// @brief Method VerifyData, addr 0xa172174, size 0x16c, virtual false, abstract: false, final false
inline bool VerifyData(::System::IO::Stream*  data, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding) ;

/// @brief Method VerifyData, addr 0xa173868, size 0x340, virtual true, abstract: false, final false
inline bool VerifyData(::System::ReadOnlySpan_1<uint8_t>  data, ::System::ReadOnlySpan_1<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding) ;

/// @brief Method VerifyHash, addr 0xa171a98, size 0x24, virtual true, abstract: false, final false
inline bool VerifyHash(::ArrayW<uint8_t>  hash, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding) ;

/// @brief Method VerifyHash, addr 0xa173ba8, size 0xa4, virtual true, abstract: false, final false
inline bool VerifyHash(::System::ReadOnlySpan_1<uint8_t>  hash, ::System::ReadOnlySpan_1<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding) ;

/// @brief Method .ctor, addr 0xa171814, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_KeyExchangeAlgorithm, addr 0xa172390, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_KeyExchangeAlgorithm() ;

/// @brief Method get_SignatureAlgorithm, addr 0xa1723d0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_SignatureAlgorithm() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RSA() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RSA", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RSA(RSA && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RSA", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RSA(RSA const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6116};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Security::Cryptography::RSA) == 0x20, "Size mismatch!");

} // namespace end def System::Security::Cryptography
