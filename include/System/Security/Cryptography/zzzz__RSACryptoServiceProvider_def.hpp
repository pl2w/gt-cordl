#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RSACryptoServiceProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__CspProviderFlags_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RSACryptoServiceProvider)
namespace Mono::Security::Cryptography {
class KeyPairPersistence;
}
namespace Mono::Security::Cryptography {
class RSAManaged;
}
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
class CspKeyContainerInfo;
}
namespace System::Security::Cryptography {
class CspParameters;
}
namespace System::Security::Cryptography {
struct HashAlgorithmName;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
namespace System::Security::Cryptography {
class ICspAsymmetricAlgorithm;
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
class EventArgs;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RSACryptoServiceProvider;
}
// Write type traits
MARK_REF_T(::System::Security::Cryptography::RSACryptoServiceProvider*);
DEFINE_IL2CPP_CLASS(::System::Security::Cryptography::RSACryptoServiceProvider*, "System.Security.Cryptography", "RSACryptoServiceProvider");
// [ComVisible(true)]
// Dependencies System.Security.Cryptography.CspProviderFlags, System.Security.Cryptography.RSA
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.RSACryptoServiceProvider
class CORDL_TYPE RSACryptoServiceProvider : public ::System::Security::Cryptography::RSA {
public:
// Declarations
/// @brief [ComVisible(false)]
 __declspec(property(get=get_CspKeyContainerInfo)) ::System::Security::Cryptography::CspKeyContainerInfo*  CspKeyContainerInfo;

 __declspec(property(get=get_KeyExchangeAlgorithm)) ::StringW  KeyExchangeAlgorithm;

 __declspec(property(get=get_KeySize)) int32_t  KeySize;

 __declspec(property(get=get_PersistKeyInCsp, put=set_PersistKeyInCsp)) bool  PersistKeyInCsp;

/// @brief [ComVisible(false)]
 __declspec(property(get=get_PublicOnly)) bool  PublicOnly;

 __declspec(property(get=get_SignatureAlgorithm)) ::StringW  SignatureAlgorithm;

/// @brief Field m_disposed, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_disposed, put=__cordl_internal_set_m_disposed)) bool  m_disposed;

/// @brief Field persistKey, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_persistKey, put=__cordl_internal_set_persistKey)) bool  persistKey;

/// @brief Field persisted, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_persisted, put=__cordl_internal_set_persisted)) bool  persisted;

/// @brief Field privateKeyExportable, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_privateKeyExportable, put=__cordl_internal_set_privateKeyExportable)) bool  privateKeyExportable;

/// @brief Field rsa, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rsa, put=__cordl_internal_set_rsa)) ::Mono::Security::Cryptography::RSAManaged*  rsa;

/// @brief Field s_UseMachineKeyStore, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_UseMachineKeyStore, put=setStaticF_s_UseMachineKeyStore)) ::System::Security::Cryptography::CspProviderFlags  s_UseMachineKeyStore;

/// @brief Field store, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_store, put=__cordl_internal_set_store)) ::Mono::Security::Cryptography::KeyPairPersistence*  store;

/// @brief Convert operator to "::System::Security::Cryptography::ICspAsymmetricAlgorithm"
constexpr operator  ::System::Security::Cryptography::ICspAsymmetricAlgorithm*() noexcept;

/// @brief Method Common, addr 0xa174c50, size 0x248, virtual false, abstract: false, final false
inline void Common(int32_t  dwKeySize, bool  parameters) ;

/// @brief Method Common, addr 0xa174e98, size 0x12c, virtual false, abstract: false, final false
inline void Common(::System::Security::Cryptography::CspParameters*  p) ;

/// @brief Method Decrypt, addr 0xa174388, size 0x1c0, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Decrypt(::ArrayW<uint8_t>  data, ::System::Security::Cryptography::RSAEncryptionPadding*  padding) ;

/// @brief Method Decrypt, addr 0xa174548, size 0x22c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> Decrypt(::ArrayW<uint8_t>  rgb, bool  fOAEP) ;

/// @brief Method DecryptValue, addr 0xa175368, size 0x94, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> DecryptValue(::ArrayW<uint8_t>  rgb) ;

/// @brief Method Dispose, addr 0xa176380, size 0x54, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Encrypt, addr 0xa174098, size 0x1c0, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> Encrypt(::ArrayW<uint8_t>  data, ::System::Security::Cryptography::RSAEncryptionPadding*  padding) ;

/// @brief Method Encrypt, addr 0xa174258, size 0xb0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> Encrypt(::ArrayW<uint8_t>  rgb, bool  fOAEP) ;

/// @brief Method EncryptValue, addr 0xa1755fc, size 0x20, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> EncryptValue(::ArrayW<uint8_t>  rgb) ;

/// [ComVisible(false)]
/// @brief Method ExportCspBlob, addr 0xa17649c, size 0x84, virtual true, abstract: false, final true
inline ::ArrayW<uint8_t> ExportCspBlob(bool  includePrivateParameters) ;

/// @brief Method ExportParameters, addr 0xa17561c, size 0x13c, virtual true, abstract: false, final false
inline ::System::Security::Cryptography::RSAParameters ExportParameters(bool  includePrivateParameters) ;

/// @brief Method Finalize, addr 0xa174fc4, size 0x90, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetAlgorithmId, addr 0xa173ef4, size 0x1a4, virtual false, abstract: false, final false
static inline int32_t GetAlgorithmId(::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method GetHash, addr 0xa17579c, size 0x210, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::HashAlgorithm* GetHash(::System::Object*  halg) ;

/// @brief Method GetHashFromString, addr 0xa1759ac, size 0x118, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::HashAlgorithm* GetHashFromString(::StringW  name) ;

/// @brief Method GetHashNameFromOID, addr 0xa175ac4, size 0x1c4, virtual false, abstract: false, final false
inline ::StringW GetHashNameFromOID(::StringW  oid) ;

/// @brief Method HashData, addr 0xa173e84, size 0x44, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> HashData(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// @brief Method HashData, addr 0xa173ec8, size 0x2c, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> HashData(::System::IO::Stream*  data, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm) ;

/// [ComVisible(false)]
/// @brief Method ImportCspBlob, addr 0xa176520, size 0x310, virtual true, abstract: false, final true
inline void ImportCspBlob(::ArrayW<uint8_t>  keyBlob) ;

/// @brief Method ImportParameters, addr 0xa175758, size 0x44, virtual true, abstract: false, final false
inline void ImportParameters(::System::Security::Cryptography::RSAParameters  parameters) ;

/// @brief Method InternalHashToHashAlgorithm, addr 0xa175f2c, size 0xdc, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::HashAlgorithm* InternalHashToHashAlgorithm(int32_t  calgHash) ;

static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor() ;

static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor(int32_t  dwKeySize) ;

static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor(int32_t  dwKeySize, ::System::Security::Cryptography::CspParameters*  parameters) ;

static inline ::System::Security::Cryptography::RSACryptoServiceProvider* New_ctor(::System::Security::Cryptography::CspParameters*  parameters) ;

/// @brief Method OnKeyGenerated, addr 0xa1750cc, size 0x84, virtual false, abstract: false, final false
inline void OnKeyGenerated(::System::Object*  sender, ::System::EventArgs*  e) ;

/// @brief Method PaddingModeNotSupported, addr 0xa174308, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* PaddingModeNotSupported() ;

/// @brief Method SignData, addr 0xa175c88, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> SignData(::ArrayW<uint8_t>  buffer, ::System::Object*  halg) ;

/// @brief Method SignData, addr 0xa175ce8, size 0xb4, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> SignData(::ArrayW<uint8_t>  buffer, int32_t  offset, int32_t  count, ::System::Object*  halg) ;

/// @brief Method SignData, addr 0xa175d9c, size 0x9c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> SignData(::System::IO::Stream*  inputStream, ::System::Object*  halg) ;

/// @brief Method SignHash, addr 0xa174774, size 0x180, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t> SignHash(::ArrayW<uint8_t>  hash, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding) ;

/// @brief Method SignHash, addr 0xa1748f4, size 0x80, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> SignHash(::ArrayW<uint8_t>  rgbHash, int32_t  calgHash) ;

/// @brief Method SignHash, addr 0xa175e38, size 0xf4, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> SignHash(::ArrayW<uint8_t>  rgbHash, ::StringW  str) ;

/// @brief Method VerifyData, addr 0xa17614c, size 0x114, virtual false, abstract: false, final false
inline bool VerifyData(::ArrayW<uint8_t>  buffer, ::System::Object*  halg, ::ArrayW<uint8_t>  signature) ;

/// @brief Method VerifyHash, addr 0xa174974, size 0x1ac, virtual true, abstract: false, final false
inline bool VerifyHash(::ArrayW<uint8_t>  hash, ::ArrayW<uint8_t>  signature, ::System::Security::Cryptography::HashAlgorithmName  hashAlgorithm, ::System::Security::Cryptography::RSASignaturePadding*  padding) ;

/// @brief Method VerifyHash, addr 0xa174b20, size 0x90, virtual false, abstract: false, final false
inline bool VerifyHash(::ArrayW<uint8_t>  rgbHash, int32_t  calgHash, ::ArrayW<uint8_t>  rgbSignature) ;

/// @brief Method VerifyHash, addr 0xa176260, size 0x120, virtual false, abstract: false, final false
inline bool VerifyHash(::ArrayW<uint8_t>  rgbHash, ::StringW  str, ::ArrayW<uint8_t>  rgbSignature) ;

constexpr bool const& __cordl_internal_get_m_disposed() const;

constexpr bool& __cordl_internal_get_m_disposed() ;

constexpr bool const& __cordl_internal_get_persistKey() const;

constexpr bool& __cordl_internal_get_persistKey() ;

constexpr bool const& __cordl_internal_get_persisted() const;

constexpr bool& __cordl_internal_get_persisted() ;

constexpr bool const& __cordl_internal_get_privateKeyExportable() const;

constexpr bool& __cordl_internal_get_privateKeyExportable() ;

constexpr ::Mono::Security::Cryptography::RSAManaged* const& __cordl_internal_get_rsa() const;

constexpr ::Mono::Security::Cryptography::RSAManaged*& __cordl_internal_get_rsa() ;

constexpr ::Mono::Security::Cryptography::KeyPairPersistence* const& __cordl_internal_get_store() const;

constexpr ::Mono::Security::Cryptography::KeyPairPersistence*& __cordl_internal_get_store() ;

constexpr void __cordl_internal_set_m_disposed(bool  value) ;

constexpr void __cordl_internal_set_persistKey(bool  value) ;

constexpr void __cordl_internal_set_persisted(bool  value) ;

constexpr void __cordl_internal_set_privateKeyExportable(bool  value) ;

constexpr void __cordl_internal_set_rsa(::Mono::Security::Cryptography::RSAManaged*  value) ;

constexpr void __cordl_internal_set_store(::Mono::Security::Cryptography::KeyPairPersistence*  value) ;

/// @brief Method .ctor, addr 0xa171888, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa174bb0, size 0x38, virtual false, abstract: false, final false
inline void _ctor(int32_t  dwKeySize) ;

/// @brief Method .ctor, addr 0xa174bf4, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(int32_t  dwKeySize, ::System::Security::Cryptography::CspParameters*  parameters) ;

/// @brief Method .ctor, addr 0xa174be8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::CspParameters*  parameters) ;

static inline ::System::Security::Cryptography::CspProviderFlags getStaticF_s_UseMachineKeyStore() ;

/// @brief Method get_CspKeyContainerInfo, addr 0xa1763d4, size 0x8c, virtual true, abstract: false, final true
inline ::System::Security::Cryptography::CspKeyContainerInfo* get_CspKeyContainerInfo() ;

/// @brief Method get_KeyExchangeAlgorithm, addr 0xa175054, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_KeyExchangeAlgorithm() ;

/// @brief Method get_KeySize, addr 0xa175094, size 0x20, virtual true, abstract: false, final false
inline int32_t get_KeySize() ;

/// @brief Method get_PersistKeyInCsp, addr 0xa1750b4, size 0x8, virtual false, abstract: false, final false
inline bool get_PersistKeyInCsp() ;

/// @brief Method get_PublicOnly, addr 0xa175150, size 0x18, virtual false, abstract: false, final false
inline bool get_PublicOnly() ;

/// @brief Method get_SignatureAlgorithm, addr 0xa173d9c, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_SignatureAlgorithm() ;

/// @brief Method get_UseMachineKeyStore, addr 0xa173ddc, size 0x54, virtual false, abstract: false, final false
static inline bool get_UseMachineKeyStore() ;

/// @brief Convert to "::System::Security::Cryptography::ICspAsymmetricAlgorithm"
constexpr ::System::Security::Cryptography::ICspAsymmetricAlgorithm* i___System__Security__Cryptography__ICspAsymmetricAlgorithm() noexcept;

static inline void setStaticF_s_UseMachineKeyStore(::System::Security::Cryptography::CspProviderFlags  value) ;

/// @brief Method set_PersistKeyInCsp, addr 0xa1750bc, size 0x10, virtual false, abstract: false, final false
inline void set_PersistKeyInCsp(bool  value) ;

/// @brief Method set_UseMachineKeyStore, addr 0xa173e30, size 0x54, virtual false, abstract: false, final false
static inline void set_UseMachineKeyStore(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RSACryptoServiceProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RSACryptoServiceProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RSACryptoServiceProvider(RSACryptoServiceProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RSACryptoServiceProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RSACryptoServiceProvider(RSACryptoServiceProvider const& ) = delete;

/// @brief Field AT_KEYEXCHANGE offset 0xffffffff size 0x4
static constexpr int32_t  AT_KEYEXCHANGE{static_cast<int32_t>(0x1)};

/// @brief Field AT_SIGNATURE offset 0xffffffff size 0x4
static constexpr int32_t  AT_SIGNATURE{static_cast<int32_t>(0x2)};

/// @brief Field PROV_RSA_FULL offset 0xffffffff size 0x4
static constexpr int32_t  PROV_RSA_FULL{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6117};

/// @brief Field store, offset: 0x20, size: 0x8, def value: None
 ::Mono::Security::Cryptography::KeyPairPersistence*  ___store;

/// @brief Field persistKey, offset: 0x28, size: 0x1, def value: None
 bool  ___persistKey;

/// @brief Field persisted, offset: 0x29, size: 0x1, def value: None
 bool  ___persisted;

/// @brief Field privateKeyExportable, offset: 0x2a, size: 0x1, def value: None
 bool  ___privateKeyExportable;

/// @brief Field m_disposed, offset: 0x2b, size: 0x1, def value: None
 bool  ___m_disposed;

/// @brief Field rsa, offset: 0x30, size: 0x8, def value: None
 ::Mono::Security::Cryptography::RSAManaged*  ___rsa;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___store) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___persistKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___persisted) == 0x29, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___privateKeyExportable) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___m_disposed) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RSACryptoServiceProvider, ___rsa) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Security::Cryptography::RSACryptoServiceProvider) == 0x38, "Size mismatch!");

} // namespace end def System::Security::Cryptography
