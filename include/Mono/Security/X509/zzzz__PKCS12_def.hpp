#pragma once
// IWYU pragma private; include "Mono/Security/X509/PKCS12.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PKCS12)
namespace GlobalNamespace {
struct DeriveBytes_PKCS12_Purpose;
}
namespace Mono::Security::Cryptography {
class PKCS8_PrivateKeyInfo;
}
namespace Mono::Security::X509 {
class PKCS12_DeriveBytes;
}
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace Mono::Security {
class ASN1;
}
namespace Mono::Security {
class PKCS7_ContentInfo;
}
namespace Mono::Security {
class PKCS7_EncryptedData;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace System::Security::Cryptography {
class SymmetricAlgorithm;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Security::X509 {
class PKCS12;
}
namespace Mono::Security::X509 {
class PKCS12_DeriveBytes;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::PKCS12*);
MARK_REF_T(::Mono::Security::X509::PKCS12_DeriveBytes*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::PKCS12*, "Mono.Security.X509", "PKCS12");
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::PKCS12_DeriveBytes*, "Mono.Security.X509", "PKCS12/DeriveBytes");
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.PKCS12
class CORDL_TYPE PKCS12 : public ::System::Object {
public:
// Declarations
using DeriveBytes = ::Mono::Security::X509::PKCS12_DeriveBytes;

 __declspec(property(get=get_Certificates)) ::Mono::Security::X509::X509CertificateCollection*  Certificates;

 __declspec(property(get=get_IterationCount, put=set_IterationCount)) int32_t  IterationCount;

 __declspec(property(get=get_Keys)) ::System::Collections::ArrayList*  Keys;

 __declspec(property(put=set_Password)) ::StringW  Password;

 __declspec(property(get=get_RNG)) ::System::Security::Cryptography::RandomNumberGenerator*  RNG;

 __declspec(property(get=get_Secrets)) ::System::Collections::ArrayList*  Secrets;

/// @brief Field _certs, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__certs, put=__cordl_internal_set__certs)) ::Mono::Security::X509::X509CertificateCollection*  _certs;

/// @brief Field _certsChanged, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__certsChanged, put=__cordl_internal_set__certsChanged)) bool  _certsChanged;

/// @brief Field _iterations, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__iterations, put=__cordl_internal_set__iterations)) int32_t  _iterations;

/// @brief Field _keyBags, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__keyBags, put=__cordl_internal_set__keyBags)) ::System::Collections::ArrayList*  _keyBags;

/// @brief Field _keyBagsChanged, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__keyBagsChanged, put=__cordl_internal_set__keyBagsChanged)) bool  _keyBagsChanged;

/// @brief Field _password, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__password, put=__cordl_internal_set__password)) ::ArrayW<uint8_t>  _password;

/// @brief Field _rng, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__rng, put=__cordl_internal_set__rng)) ::System::Security::Cryptography::RandomNumberGenerator*  _rng;

/// @brief Field _safeBags, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__safeBags, put=__cordl_internal_set__safeBags)) ::System::Collections::ArrayList*  _safeBags;

/// @brief Field _secretBags, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__secretBags, put=__cordl_internal_set__secretBags)) ::System::Collections::ArrayList*  _secretBags;

/// @brief Field _secretBagsChanged, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__secretBagsChanged, put=__cordl_internal_set__secretBagsChanged)) bool  _secretBagsChanged;

/// @brief Field password_max_length, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_password_max_length, put=setStaticF_password_max_length)) int32_t  password_max_length;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method AddCertificate, addr 0xa0e565c, size 0x8, virtual false, abstract: false, final false
inline void AddCertificate(::Mono::Security::X509::X509Certificate*  cert) ;

/// @brief Method AddCertificate, addr 0xa0e59b4, size 0x244, virtual false, abstract: false, final false
inline void AddCertificate(::Mono::Security::X509::X509Certificate*  cert, ::System::Collections::IDictionary*  attributes) ;

/// @brief Method AddKeyBag, addr 0xa0e6820, size 0x8, virtual false, abstract: false, final false
inline void AddKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa) ;

/// @brief Method AddKeyBag, addr 0xa0e6828, size 0x2a4, virtual false, abstract: false, final false
inline void AddKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa, ::System::Collections::IDictionary*  attributes) ;

/// @brief Method AddPkcs8ShroudedKeyBag, addr 0xa0e6190, size 0x8, virtual false, abstract: false, final false
inline void AddPkcs8ShroudedKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa) ;

/// @brief Method AddPkcs8ShroudedKeyBag, addr 0xa0e6198, size 0x35c, virtual false, abstract: false, final false
inline void AddPkcs8ShroudedKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa, ::System::Collections::IDictionary*  attributes) ;

/// @brief Method AddPrivateKey, addr 0xa0e0280, size 0x258, virtual false, abstract: false, final false
inline void AddPrivateKey(::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo*  pki) ;

/// @brief Method AddSecretBag, addr 0xa0e6d44, size 0x8, virtual false, abstract: false, final false
inline void AddSecretBag(::ArrayW<uint8_t>  secret) ;

/// @brief Method AddSecretBag, addr 0xa0e6d4c, size 0x18c, virtual false, abstract: false, final false
inline void AddSecretBag(::ArrayW<uint8_t>  secret, ::System::Collections::IDictionary*  attributes) ;

/// @brief Method CertificateSafeBag, addr 0xa0e2a70, size 0xbb0, virtual false, abstract: false, final false
inline ::Mono::Security::ASN1* CertificateSafeBag(::Mono::Security::X509::X509Certificate*  x509, ::System::Collections::IDictionary*  attributes) ;

/// @brief Method Clone, addr 0xa0e978c, size 0xc8, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method Compare, addr 0xa0dda74, size 0x68, virtual false, abstract: false, final false
inline bool Compare(::ArrayW<uint8_t>  expected, ::ArrayW<uint8_t>  actual) ;

/// @brief Method CompareAsymmetricAlgorithm, addr 0xa0e60f4, size 0x9c, virtual false, abstract: false, final false
inline bool CompareAsymmetricAlgorithm(::System::Security::Cryptography::AsymmetricAlgorithm*  a1, ::System::Security::Cryptography::AsymmetricAlgorithm*  a2) ;

/// @brief Method Decode, addr 0xa0dd214, size 0x690, virtual false, abstract: false, final false
inline void Decode(::ArrayW<uint8_t>  data) ;

/// @brief Method Decrypt, addr 0xa0de974, size 0x1a0, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> Decrypt(::StringW  algorithmOid, ::ArrayW<uint8_t>  salt, int32_t  iterationCount, ::ArrayW<uint8_t>  encryptedData) ;

/// @brief Method Decrypt, addr 0xa0de178, size 0x90, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> Decrypt(::Mono::Security::PKCS7_EncryptedData*  ed) ;

/// @brief Method Encrypt, addr 0xa0dfb38, size 0x200, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> Encrypt(::StringW  algorithmOid, ::ArrayW<uint8_t>  salt, int32_t  iterationCount, ::ArrayW<uint8_t>  data) ;

/// @brief Method EncryptedContentInfo, addr 0xa0e5664, size 0x350, virtual false, abstract: false, final false
inline ::Mono::Security::PKCS7_ContentInfo* EncryptedContentInfo(::Mono::Security::ASN1*  safeBags, ::StringW  algorithmOid) ;

/// @brief Method Finalize, addr 0xa0de208, size 0xac, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetAsymmetricAlgorithm, addr 0xa0e7038, size 0x97c, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::AsymmetricAlgorithm* GetAsymmetricAlgorithm(::System::Collections::IDictionary*  attrs) ;

/// @brief Method GetAttributes, addr 0xa0e873c, size 0x868, virtual false, abstract: false, final false
inline ::System::Collections::IDictionary* GetAttributes(::System::Security::Cryptography::AsymmetricAlgorithm*  aa) ;

/// @brief Method GetAttributes, addr 0xa0e8fa4, size 0x648, virtual false, abstract: false, final false
inline ::System::Collections::IDictionary* GetAttributes(::Mono::Security::X509::X509Certificate*  cert) ;

/// @brief Method GetBytes, addr 0xa0e3690, size 0x1fc4, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetBytes() ;

/// @brief Method GetCertificate, addr 0xa0e8030, size 0x70c, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509Certificate* GetCertificate(::System::Collections::IDictionary*  attrs) ;

/// @brief Method GetExistingParameters, addr 0xa0dfd38, size 0x264, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::DSAParameters GetExistingParameters(::by_ref<bool>  found) ;

/// @brief Method GetSecret, addr 0xa0e79b4, size 0x67c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> GetSecret(::System::Collections::IDictionary*  attrs) ;

/// @brief Method GetSymmetricAlgorithm, addr 0xa0df2c8, size 0x608, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::SymmetricAlgorithm* GetSymmetricAlgorithm(::StringW  algorithmOid, ::ArrayW<uint8_t>  salt, int32_t  iterationCount) ;

/// @brief Method KeyBagSafeBag, addr 0xa0e1280, size 0xcfc, virtual false, abstract: false, final false
inline ::Mono::Security::ASN1* KeyBagSafeBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa, ::System::Collections::IDictionary*  attributes) ;

/// @brief Method LoadFile, addr 0xa0e99bc, size 0x1c4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> LoadFile(::StringW  filename) ;

/// @brief Method LoadFromFile, addr 0xa0e9b80, size 0xc4, virtual false, abstract: false, final false
static inline ::Mono::Security::X509::PKCS12* LoadFromFile(::StringW  filename) ;

/// @brief Method LoadFromFile, addr 0xa0e9c44, size 0xcc, virtual false, abstract: false, final false
static inline ::Mono::Security::X509::PKCS12* LoadFromFile(::StringW  filename, ::StringW  password) ;

/// @brief Method MAC, addr 0xa0dd918, size 0x15c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> MAC(::ArrayW<uint8_t>  password, ::ArrayW<uint8_t>  salt, int32_t  iterations, ::ArrayW<uint8_t>  data) ;

static inline ::Mono::Security::X509::PKCS12* New_ctor() ;

static inline ::Mono::Security::X509::PKCS12* New_ctor(::ArrayW<uint8_t>  data) ;

static inline ::Mono::Security::X509::PKCS12* New_ctor(::ArrayW<uint8_t>  data, ::ArrayW<uint8_t>  password) ;

static inline ::Mono::Security::X509::PKCS12* New_ctor(::ArrayW<uint8_t>  data, ::StringW  password) ;

/// @brief Method Pkcs8ShroudedKeyBagSafeBag, addr 0xa0e04d8, size 0xda8, virtual false, abstract: false, final false
inline ::Mono::Security::ASN1* Pkcs8ShroudedKeyBagSafeBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa, ::System::Collections::IDictionary*  attributes) ;

/// @brief Method ReadSafeBag, addr 0xa0ddadc, size 0x69c, virtual false, abstract: false, final false
inline void ReadSafeBag(::Mono::Security::ASN1*  safeBag) ;

/// @brief Method RemoveCertificate, addr 0xa0e5654, size 0x8, virtual false, abstract: false, final false
inline void RemoveCertificate(::Mono::Security::X509::X509Certificate*  cert) ;

/// @brief Method RemoveCertificate, addr 0xa0e5bf8, size 0x4fc, virtual false, abstract: false, final false
inline void RemoveCertificate(::Mono::Security::X509::X509Certificate*  cert, ::System::Collections::IDictionary*  attrs) ;

/// @brief Method RemoveKeyBag, addr 0xa0e6acc, size 0x278, virtual false, abstract: false, final false
inline void RemoveKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa) ;

/// @brief Method RemovePkcs8ShroudedKeyBag, addr 0xa0e64f4, size 0x32c, virtual false, abstract: false, final false
inline void RemovePkcs8ShroudedKeyBag(::System::Security::Cryptography::AsymmetricAlgorithm*  aa) ;

/// @brief Method RemoveSecretBag, addr 0xa0e6ed8, size 0x160, virtual false, abstract: false, final false
inline void RemoveSecretBag(::ArrayW<uint8_t>  secret) ;

/// @brief Method SaveToFile, addr 0xa0e95ec, size 0x1a0, virtual false, abstract: false, final false
inline void SaveToFile(::StringW  filename) ;

/// @brief Method SecretBagSafeBag, addr 0xa0e1f7c, size 0xaf4, virtual false, abstract: false, final false
inline ::Mono::Security::ASN1* SecretBagSafeBag(::ArrayW<uint8_t>  secret, ::System::Collections::IDictionary*  attributes) ;

constexpr ::Mono::Security::X509::X509CertificateCollection* const& __cordl_internal_get__certs() const;

constexpr ::Mono::Security::X509::X509CertificateCollection*& __cordl_internal_get__certs() ;

constexpr bool const& __cordl_internal_get__certsChanged() const;

constexpr bool& __cordl_internal_get__certsChanged() ;

constexpr int32_t const& __cordl_internal_get__iterations() const;

constexpr int32_t& __cordl_internal_get__iterations() ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__keyBags() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get__keyBags() ;

constexpr bool const& __cordl_internal_get__keyBagsChanged() const;

constexpr bool& __cordl_internal_get__keyBagsChanged() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__password() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__password() ;

constexpr ::System::Security::Cryptography::RandomNumberGenerator* const& __cordl_internal_get__rng() const;

constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __cordl_internal_get__rng() ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__safeBags() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get__safeBags() ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get__secretBags() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get__secretBags() ;

constexpr bool const& __cordl_internal_get__secretBagsChanged() const;

constexpr bool& __cordl_internal_get__secretBagsChanged() ;

constexpr void __cordl_internal_set__certs(::Mono::Security::X509::X509CertificateCollection*  value) ;

constexpr void __cordl_internal_set__certsChanged(bool  value) ;

constexpr void __cordl_internal_set__iterations(int32_t  value) ;

constexpr void __cordl_internal_set__keyBags(::System::Collections::ArrayList*  value) ;

constexpr void __cordl_internal_set__keyBagsChanged(bool  value) ;

constexpr void __cordl_internal_set__password(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__rng(::System::Security::Cryptography::RandomNumberGenerator*  value) ;

constexpr void __cordl_internal_set__safeBags(::System::Collections::ArrayList*  value) ;

constexpr void __cordl_internal_set__secretBags(::System::Collections::ArrayList*  value) ;

constexpr void __cordl_internal_set__secretBagsChanged(bool  value) ;

/// @brief Method .ctor, addr 0xa0dceec, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa0dcff0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data) ;

/// @brief Method .ctor, addr 0xa0dd8dc, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data, ::ArrayW<uint8_t>  password) ;

/// @brief Method .ctor, addr 0xa0dd8a4, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data, ::StringW  password) ;

static inline int32_t getStaticF_password_max_length() ;

/// @brief Method get_Certificates, addr 0xa0dee94, size 0x404, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509CertificateCollection* get_Certificates() ;

/// @brief Method get_IterationCount, addr 0xa0de2b4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_IterationCount() ;

/// @brief Method get_Keys, addr 0xa0de2c4, size 0x6b0, virtual false, abstract: false, final false
inline ::System::Collections::ArrayList* get_Keys() ;

/// @brief Method get_MaximumPasswordLength, addr 0xa0e9854, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_MaximumPasswordLength() ;

/// @brief Method get_RNG, addr 0xa0df298, size 0x30, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::RandomNumberGenerator* get_RNG() ;

/// @brief Method get_Secrets, addr 0xa0deb14, size 0x380, virtual false, abstract: false, final false
inline ::System::Collections::ArrayList* get_Secrets() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

static inline void setStaticF_password_max_length(int32_t  value) ;

/// @brief Method set_IterationCount, addr 0xa0de2bc, size 0x8, virtual false, abstract: false, final false
inline void set_IterationCount(int32_t  value) ;

/// @brief Method set_MaximumPasswordLength, addr 0xa0e98ac, size 0x110, virtual false, abstract: false, final false
static inline void set_MaximumPasswordLength(int32_t  value) ;

/// @brief Method set_Password, addr 0xa0dd024, size 0x1f0, virtual false, abstract: false, final false
inline void set_Password(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PKCS12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PKCS12", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PKCS12(PKCS12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PKCS12", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PKCS12(PKCS12 const& ) = delete;

/// @brief Field CryptoApiPasswordLimit offset 0xffffffff size 0x4
static constexpr int32_t  CryptoApiPasswordLimit{static_cast<int32_t>(0x20)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27810};

/// @brief Field certBag offset 0xffffffff size 0x8
static constexpr ::ConstString  certBag{u"1.2.840.113549.1.12.10.1.3"};

/// @brief Field crlBag offset 0xffffffff size 0x8
static constexpr ::ConstString  crlBag{u"1.2.840.113549.1.12.10.1.4"};

/// @brief Field keyBag offset 0xffffffff size 0x8
static constexpr ::ConstString  keyBag{u"1.2.840.113549.1.12.10.1.1"};

/// @brief Field pbeWithSHAAnd128BitRC2CBC offset 0xffffffff size 0x8
static constexpr ::ConstString  pbeWithSHAAnd128BitRC2CBC{u"1.2.840.113549.1.12.1.5"};

/// @brief Field pbeWithSHAAnd128BitRC4 offset 0xffffffff size 0x8
static constexpr ::ConstString  pbeWithSHAAnd128BitRC4{u"1.2.840.113549.1.12.1.1"};

/// @brief Field pbeWithSHAAnd2KeyTripleDESCBC offset 0xffffffff size 0x8
static constexpr ::ConstString  pbeWithSHAAnd2KeyTripleDESCBC{u"1.2.840.113549.1.12.1.4"};

/// @brief Field pbeWithSHAAnd3KeyTripleDESCBC offset 0xffffffff size 0x8
static constexpr ::ConstString  pbeWithSHAAnd3KeyTripleDESCBC{u"1.2.840.113549.1.12.1.3"};

/// @brief Field pbeWithSHAAnd40BitRC2CBC offset 0xffffffff size 0x8
static constexpr ::ConstString  pbeWithSHAAnd40BitRC2CBC{u"1.2.840.113549.1.12.1.6"};

/// @brief Field pbeWithSHAAnd40BitRC4 offset 0xffffffff size 0x8
static constexpr ::ConstString  pbeWithSHAAnd40BitRC4{u"1.2.840.113549.1.12.1.2"};

/// @brief Field pkcs8ShroudedKeyBag offset 0xffffffff size 0x8
static constexpr ::ConstString  pkcs8ShroudedKeyBag{u"1.2.840.113549.1.12.10.1.2"};

/// @brief Field recommendedIterationCount offset 0xffffffff size 0x4
static constexpr int32_t  recommendedIterationCount{static_cast<int32_t>(0x7d0)};

/// @brief Field safeContentsBag offset 0xffffffff size 0x8
static constexpr ::ConstString  safeContentsBag{u"1.2.840.113549.1.12.10.1.6"};

/// @brief Field sdsiCertificate offset 0xffffffff size 0x8
static constexpr ::ConstString  sdsiCertificate{u"1.2.840.113549.1.9.22.2"};

/// @brief Field secretBag offset 0xffffffff size 0x8
static constexpr ::ConstString  secretBag{u"1.2.840.113549.1.12.10.1.5"};

/// @brief Field x509Certificate offset 0xffffffff size 0x8
static constexpr ::ConstString  x509Certificate{u"1.2.840.113549.1.9.22.1"};

/// @brief Field x509Crl offset 0xffffffff size 0x8
static constexpr ::ConstString  x509Crl{u"1.2.840.113549.1.9.23.1"};

/// @brief Field _password, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____password;

/// @brief Field _keyBags, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ____keyBags;

/// @brief Field _secretBags, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ____secretBags;

/// @brief Field _certs, offset: 0x28, size: 0x8, def value: None
 ::Mono::Security::X509::X509CertificateCollection*  ____certs;

/// @brief Field _keyBagsChanged, offset: 0x30, size: 0x1, def value: None
 bool  ____keyBagsChanged;

/// @brief Field _secretBagsChanged, offset: 0x31, size: 0x1, def value: None
 bool  ____secretBagsChanged;

/// @brief Field _certsChanged, offset: 0x32, size: 0x1, def value: None
 bool  ____certsChanged;

/// @brief Field _iterations, offset: 0x34, size: 0x4, def value: None
 int32_t  ____iterations;

/// @brief Field _safeBags, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ____safeBags;

/// @brief Field _rng, offset: 0x40, size: 0x8, def value: None
 ::System::Security::Cryptography::RandomNumberGenerator*  ____rng;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::PKCS12, ____password) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____keyBags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____secretBags) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____certs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____keyBagsChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____secretBagsChanged) == 0x31, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____certsChanged) == 0x32, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____iterations) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____safeBags) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12, ____rng) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Mono::Security::X509::PKCS12) == 0x48, "Size mismatch!");

} // namespace end def Mono::Security::X509
// Dependencies System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.PKCS12/DeriveBytes
class CORDL_TYPE PKCS12_DeriveBytes : public ::System::Object {
public:
// Declarations
using Purpose = ::GlobalNamespace::DeriveBytes_PKCS12_Purpose;

 __declspec(property(get=get_HashName, put=set_HashName)) ::StringW  HashName;

 __declspec(property(get=get_IterationCount, put=set_IterationCount)) int32_t  IterationCount;

 __declspec(property(get=get_Password, put=set_Password)) ::ArrayW<uint8_t>  Password;

 __declspec(property(get=get_Salt, put=set_Salt)) ::ArrayW<uint8_t>  Salt;

/// @brief Field _hashName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__hashName, put=__cordl_internal_set__hashName)) ::StringW  _hashName;

/// @brief Field _iterations, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__iterations, put=__cordl_internal_set__iterations)) int32_t  _iterations;

/// @brief Field _password, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__password, put=__cordl_internal_set__password)) ::ArrayW<uint8_t>  _password;

/// @brief Field _salt, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__salt, put=__cordl_internal_set__salt)) ::ArrayW<uint8_t>  _salt;

/// @brief Field ivDiversifier, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ivDiversifier, put=setStaticF_ivDiversifier)) ::ArrayW<uint8_t>  ivDiversifier;

/// @brief Field keyDiversifier, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_keyDiversifier, put=setStaticF_keyDiversifier)) ::ArrayW<uint8_t>  keyDiversifier;

/// @brief Field macDiversifier, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_macDiversifier, put=setStaticF_macDiversifier)) ::ArrayW<uint8_t>  macDiversifier;

/// @brief Method Adjust, addr 0xa0e9e6c, size 0xb0, virtual false, abstract: false, final false
inline void Adjust(::ArrayW<uint8_t>  a, int32_t  aOff, ::ArrayW<uint8_t>  b) ;

/// @brief Method Derive, addr 0xa0e9f1c, size 0x430, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> Derive(::ArrayW<uint8_t>  diversifier, int32_t  n) ;

/// @brief Method DeriveIV, addr 0xa0dfac8, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> DeriveIV(int32_t  size) ;

/// @brief Method DeriveKey, addr 0xa0dfa58, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> DeriveKey(int32_t  size) ;

/// @brief Method DeriveMAC, addr 0xa0e3620, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> DeriveMAC(int32_t  size) ;

static inline ::Mono::Security::X509::PKCS12_DeriveBytes* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__hashName() const;

constexpr ::StringW& __cordl_internal_get__hashName() ;

constexpr int32_t const& __cordl_internal_get__iterations() const;

constexpr int32_t& __cordl_internal_get__iterations() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__password() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__password() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get__salt() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get__salt() ;

constexpr void __cordl_internal_set__hashName(::StringW  value) ;

constexpr void __cordl_internal_set__iterations(int32_t  value) ;

constexpr void __cordl_internal_set__password(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set__salt(::ArrayW<uint8_t>  value) ;

/// @brief Method .ctor, addr 0xa0df8d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint8_t> getStaticF_ivDiversifier() ;

static inline ::ArrayW<uint8_t> getStaticF_keyDiversifier() ;

static inline ::ArrayW<uint8_t> getStaticF_macDiversifier() ;

/// @brief Method get_HashName, addr 0xa0e9d5c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_HashName() ;

/// @brief Method get_IterationCount, addr 0xa0e9d6c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_IterationCount() ;

/// @brief Method get_Password, addr 0xa0e9d7c, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Password() ;

/// @brief Method get_Salt, addr 0xa0e9df4, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_Salt() ;

static inline void setStaticF_ivDiversifier(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_keyDiversifier(::ArrayW<uint8_t>  value) ;

static inline void setStaticF_macDiversifier(::ArrayW<uint8_t>  value) ;

/// @brief Method set_HashName, addr 0xa0e9d64, size 0x8, virtual false, abstract: false, final false
inline void set_HashName(::StringW  value) ;

/// @brief Method set_IterationCount, addr 0xa0e9d74, size 0x8, virtual false, abstract: false, final false
inline void set_IterationCount(int32_t  value) ;

/// @brief Method set_Password, addr 0xa0df8d8, size 0xc4, virtual false, abstract: false, final false
inline void set_Password(::ArrayW<uint8_t>  value) ;

/// @brief Method set_Salt, addr 0xa0df99c, size 0xbc, virtual false, abstract: false, final false
inline void set_Salt(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PKCS12_DeriveBytes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PKCS12_DeriveBytes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PKCS12_DeriveBytes(PKCS12_DeriveBytes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PKCS12_DeriveBytes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PKCS12_DeriveBytes(PKCS12_DeriveBytes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27809};

/// @brief Field _hashName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____hashName;

/// @brief Field _iterations, offset: 0x18, size: 0x4, def value: None
 int32_t  ____iterations;

/// @brief Field _password, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____password;

/// @brief Field _salt, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ____salt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::PKCS12_DeriveBytes, ____hashName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12_DeriveBytes, ____iterations) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12_DeriveBytes, ____password) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::PKCS12_DeriveBytes, ____salt) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mono::Security::X509::PKCS12_DeriveBytes) == 0x30, "Size mismatch!");

} // namespace end def Mono::Security::X509
