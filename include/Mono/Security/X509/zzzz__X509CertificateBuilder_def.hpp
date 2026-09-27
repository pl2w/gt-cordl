#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509CertificateBuilder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/X509/zzzz__X509Builder_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateBuilder)
namespace Mono::Security::X509 {
class X509ExtensionCollection;
}
namespace Mono::Security {
class ASN1;
}
namespace System::Security::Cryptography {
class AsymmetricAlgorithm;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509CertificateBuilder;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::X509CertificateBuilder*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X509CertificateBuilder*, "Mono.Security.X509", "X509CertificateBuilder");
// Dependencies Mono.Security.X509.X509Builder, System.DateTime
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509CertificateBuilder
class CORDL_TYPE X509CertificateBuilder : public ::Mono::Security::X509::X509Builder {
public:
// Declarations
 __declspec(property(get=get_Extensions)) ::Mono::Security::X509::X509ExtensionCollection*  Extensions;

 __declspec(property(get=get_IssuerName, put=set_IssuerName)) ::StringW  IssuerName;

 __declspec(property(get=get_IssuerUniqueId, put=set_IssuerUniqueId)) ::ArrayW<uint8_t>  IssuerUniqueId;

 __declspec(property(get=get_NotAfter, put=set_NotAfter)) ::System::DateTime  NotAfter;

 __declspec(property(get=get_NotBefore, put=set_NotBefore)) ::System::DateTime  NotBefore;

 __declspec(property(get=get_SerialNumber, put=set_SerialNumber)) ::ArrayW<uint8_t>  SerialNumber;

 __declspec(property(get=get_SubjectName, put=set_SubjectName)) ::StringW  SubjectName;

 __declspec(property(get=get_SubjectPublicKey, put=set_SubjectPublicKey)) ::System::Security::Cryptography::AsymmetricAlgorithm*  SubjectPublicKey;

 __declspec(property(get=get_SubjectUniqueId, put=set_SubjectUniqueId)) ::ArrayW<uint8_t>  SubjectUniqueId;

 __declspec(property(get=get_Version, put=set_Version)) uint8_t  Version;

/// @brief Field aa, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_aa, put=__cordl_internal_set_aa)) ::System::Security::Cryptography::AsymmetricAlgorithm*  aa;

/// @brief Field extensions, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_extensions, put=__cordl_internal_set_extensions)) ::Mono::Security::X509::X509ExtensionCollection*  extensions;

/// @brief Field issuer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_issuer, put=__cordl_internal_set_issuer)) ::StringW  issuer;

/// @brief Field issuerUniqueID, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_issuerUniqueID, put=__cordl_internal_set_issuerUniqueID)) ::ArrayW<uint8_t>  issuerUniqueID;

/// @brief Field notAfter, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_notAfter, put=__cordl_internal_set_notAfter)) ::System::DateTime  notAfter;

/// @brief Field notBefore, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_notBefore, put=__cordl_internal_set_notBefore)) ::System::DateTime  notBefore;

/// @brief Field sn, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sn, put=__cordl_internal_set_sn)) ::ArrayW<uint8_t>  sn;

/// @brief Field subject, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_subject, put=__cordl_internal_set_subject)) ::StringW  subject;

/// @brief Field subjectUniqueID, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_subjectUniqueID, put=__cordl_internal_set_subjectUniqueID)) ::ArrayW<uint8_t>  subjectUniqueID;

/// @brief Field version, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) uint8_t  version;

static inline ::Mono::Security::X509::X509CertificateBuilder* New_ctor() ;

static inline ::Mono::Security::X509::X509CertificateBuilder* New_ctor(uint8_t  version) ;

/// @brief Method SubjectPublicKeyInfo, addr 0xa0f0da8, size 0x394, virtual false, abstract: false, final false
inline ::Mono::Security::ASN1* SubjectPublicKeyInfo() ;

/// @brief Method ToBeSigned, addr 0xa0f1200, size 0x348, virtual true, abstract: false, final false
inline ::Mono::Security::ASN1* ToBeSigned(::StringW  oid) ;

/// @brief Method UniqueIdentifier, addr 0xa0f113c, size 0xc4, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> UniqueIdentifier(::ArrayW<uint8_t>  id) ;

constexpr ::System::Security::Cryptography::AsymmetricAlgorithm* const& __cordl_internal_get_aa() const;

constexpr ::System::Security::Cryptography::AsymmetricAlgorithm*& __cordl_internal_get_aa() ;

constexpr ::Mono::Security::X509::X509ExtensionCollection* const& __cordl_internal_get_extensions() const;

constexpr ::Mono::Security::X509::X509ExtensionCollection*& __cordl_internal_get_extensions() ;

constexpr ::StringW const& __cordl_internal_get_issuer() const;

constexpr ::StringW& __cordl_internal_get_issuer() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_issuerUniqueID() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_issuerUniqueID() ;

constexpr ::System::DateTime const& __cordl_internal_get_notAfter() const;

constexpr ::System::DateTime& __cordl_internal_get_notAfter() ;

constexpr ::System::DateTime const& __cordl_internal_get_notBefore() const;

constexpr ::System::DateTime& __cordl_internal_get_notBefore() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_sn() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_sn() ;

constexpr ::StringW const& __cordl_internal_get_subject() const;

constexpr ::StringW& __cordl_internal_get_subject() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_subjectUniqueID() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_subjectUniqueID() ;

constexpr uint8_t const& __cordl_internal_get_version() const;

constexpr uint8_t& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_aa(::System::Security::Cryptography::AsymmetricAlgorithm*  value) ;

constexpr void __cordl_internal_set_extensions(::Mono::Security::X509::X509ExtensionCollection*  value) ;

constexpr void __cordl_internal_set_issuer(::StringW  value) ;

constexpr void __cordl_internal_set_issuerUniqueID(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_notAfter(::System::DateTime  value) ;

constexpr void __cordl_internal_set_notBefore(::System::DateTime  value) ;

constexpr void __cordl_internal_set_sn(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_subject(::StringW  value) ;

constexpr void __cordl_internal_set_subjectUniqueID(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_version(uint8_t  value) ;

/// @brief Method .ctor, addr 0xa0f0c38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa0f0c40, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(uint8_t  version) ;

/// @brief Method get_Extensions, addr 0xa0f0da0, size 0x8, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509ExtensionCollection* get_Extensions() ;

/// @brief Method get_IssuerName, addr 0xa0f0d30, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_IssuerName() ;

/// @brief Method get_IssuerUniqueId, addr 0xa0f0d80, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_IssuerUniqueId() ;

/// @brief Method get_NotAfter, addr 0xa0f0d50, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_NotAfter() ;

/// @brief Method get_NotBefore, addr 0xa0f0d40, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_NotBefore() ;

/// @brief Method get_SerialNumber, addr 0xa0f0d20, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_SerialNumber() ;

/// @brief Method get_SubjectName, addr 0xa0f0d60, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_SubjectName() ;

/// @brief Method get_SubjectPublicKey, addr 0xa0f0d70, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::AsymmetricAlgorithm* get_SubjectPublicKey() ;

/// @brief Method get_SubjectUniqueId, addr 0xa0f0d90, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t> get_SubjectUniqueId() ;

/// @brief Method get_Version, addr 0xa0f0d10, size 0x8, virtual false, abstract: false, final false
inline uint8_t get_Version() ;

/// @brief Method set_IssuerName, addr 0xa0f0d38, size 0x8, virtual false, abstract: false, final false
inline void set_IssuerName(::StringW  value) ;

/// @brief Method set_IssuerUniqueId, addr 0xa0f0d88, size 0x8, virtual false, abstract: false, final false
inline void set_IssuerUniqueId(::ArrayW<uint8_t>  value) ;

/// @brief Method set_NotAfter, addr 0xa0f0d58, size 0x8, virtual false, abstract: false, final false
inline void set_NotAfter(::System::DateTime  value) ;

/// @brief Method set_NotBefore, addr 0xa0f0d48, size 0x8, virtual false, abstract: false, final false
inline void set_NotBefore(::System::DateTime  value) ;

/// @brief Method set_SerialNumber, addr 0xa0f0d28, size 0x8, virtual false, abstract: false, final false
inline void set_SerialNumber(::ArrayW<uint8_t>  value) ;

/// @brief Method set_SubjectName, addr 0xa0f0d68, size 0x8, virtual false, abstract: false, final false
inline void set_SubjectName(::StringW  value) ;

/// @brief Method set_SubjectPublicKey, addr 0xa0f0d78, size 0x8, virtual false, abstract: false, final false
inline void set_SubjectPublicKey(::System::Security::Cryptography::AsymmetricAlgorithm*  value) ;

/// @brief Method set_SubjectUniqueId, addr 0xa0f0d98, size 0x8, virtual false, abstract: false, final false
inline void set_SubjectUniqueId(::ArrayW<uint8_t>  value) ;

/// @brief Method set_Version, addr 0xa0f0d18, size 0x8, virtual false, abstract: false, final false
inline void set_Version(uint8_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509CertificateBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateBuilder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
X509CertificateBuilder(X509CertificateBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateBuilder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509CertificateBuilder(X509CertificateBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27816};

/// @brief Field version, offset: 0x18, size: 0x1, def value: None
 uint8_t  ___version;

/// @brief Field sn, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___sn;

/// @brief Field issuer, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___issuer;

/// @brief Field notBefore, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ___notBefore;

/// @brief Field notAfter, offset: 0x38, size: 0x8, def value: None
 ::System::DateTime  ___notAfter;

/// @brief Field subject, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___subject;

/// @brief Field aa, offset: 0x48, size: 0x8, def value: None
 ::System::Security::Cryptography::AsymmetricAlgorithm*  ___aa;

/// @brief Field issuerUniqueID, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___issuerUniqueID;

/// @brief Field subjectUniqueID, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___subjectUniqueID;

/// @brief Field extensions, offset: 0x60, size: 0x8, def value: None
 ::Mono::Security::X509::X509ExtensionCollection*  ___extensions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::X509CertificateBuilder, ___version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509CertificateBuilder, ___sn) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509CertificateBuilder, ___issuer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509CertificateBuilder, ___notBefore) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509CertificateBuilder, ___notAfter) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509CertificateBuilder, ___subject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509CertificateBuilder, ___aa) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509CertificateBuilder, ___issuerUniqueID) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509CertificateBuilder, ___subjectUniqueID) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509CertificateBuilder, ___extensions) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Mono::Security::X509::X509CertificateBuilder) == 0x68, "Size mismatch!");

} // namespace end def Mono::Security::X509
