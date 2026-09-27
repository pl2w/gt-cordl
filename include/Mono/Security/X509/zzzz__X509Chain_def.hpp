#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509Chain.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/X509/zzzz__X509ChainStatusFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(X509Chain)
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace Mono::Security::X509 {
struct X509ChainStatusFlags;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Chain;
}
// Write type traits
MARK_REF_T(::Mono::Security::X509::X509Chain*);
DEFINE_IL2CPP_CLASS(::Mono::Security::X509::X509Chain*, "Mono.Security.X509", "X509Chain");
// Dependencies Mono.Security.X509.X509ChainStatusFlags, System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509Chain
class CORDL_TYPE X509Chain : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Chain)) ::Mono::Security::X509::X509CertificateCollection*  Chain;

 __declspec(property(get=get_Root)) ::Mono::Security::X509::X509Certificate*  Root;

 __declspec(property(get=get_Status)) ::Mono::Security::X509::X509ChainStatusFlags  Status;

 __declspec(property(get=get_TrustAnchors, put=set_TrustAnchors)) ::Mono::Security::X509::X509CertificateCollection*  TrustAnchors;

/// @brief Field _chain, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__chain, put=__cordl_internal_set__chain)) ::Mono::Security::X509::X509CertificateCollection*  _chain;

/// @brief Field _root, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__root, put=__cordl_internal_set__root)) ::Mono::Security::X509::X509Certificate*  _root;

/// @brief Field _status, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__status, put=__cordl_internal_set__status)) ::Mono::Security::X509::X509ChainStatusFlags  _status;

/// @brief Field certs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_certs, put=__cordl_internal_set_certs)) ::Mono::Security::X509::X509CertificateCollection*  certs;

/// @brief Field roots, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_roots, put=__cordl_internal_set_roots)) ::Mono::Security::X509::X509CertificateCollection*  roots;

/// @brief Method Build, addr 0xa0f2578, size 0x38c, virtual false, abstract: false, final false
inline bool Build(::Mono::Security::X509::X509Certificate*  leaf) ;

/// @brief Method FindByIssuerName, addr 0xa0f23b8, size 0x1c0, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509Certificate* FindByIssuerName(::StringW  issuerName) ;

/// @brief Method FindCertificateParent, addr 0xa0f2904, size 0x1a4, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509Certificate* FindCertificateParent(::Mono::Security::X509::X509Certificate*  child) ;

/// @brief Method FindCertificateRoot, addr 0xa0f2aa8, size 0x214, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509Certificate* FindCertificateRoot(::Mono::Security::X509::X509Certificate*  potentialRoot) ;

/// @brief Method IsParent, addr 0xa0f2cbc, size 0x148, virtual false, abstract: false, final false
inline bool IsParent(::Mono::Security::X509::X509Certificate*  child, ::Mono::Security::X509::X509Certificate*  parent) ;

/// @brief Method IsTrusted, addr 0xa0f2f10, size 0x2c, virtual false, abstract: false, final false
inline bool IsTrusted(::Mono::Security::X509::X509Certificate*  potentialTrusted) ;

/// @brief Method IsValid, addr 0xa0f2e04, size 0xb0, virtual false, abstract: false, final false
inline bool IsValid(::Mono::Security::X509::X509Certificate*  cert) ;

/// @brief Method LoadCertificate, addr 0xa0f2390, size 0x14, virtual false, abstract: false, final false
inline void LoadCertificate(::Mono::Security::X509::X509Certificate*  x509) ;

/// @brief Method LoadCertificates, addr 0xa0f23a4, size 0x14, virtual false, abstract: false, final false
inline void LoadCertificates(::Mono::Security::X509::X509CertificateCollection*  collection) ;

static inline ::Mono::Security::X509::X509Chain* New_ctor() ;

static inline ::Mono::Security::X509::X509Chain* New_ctor(::Mono::Security::X509::X509CertificateCollection*  chain) ;

/// @brief Method Reset, addr 0xa0f2eb4, size 0x5c, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::Mono::Security::X509::X509CertificateCollection* const& __cordl_internal_get__chain() const;

constexpr ::Mono::Security::X509::X509CertificateCollection*& __cordl_internal_get__chain() ;

constexpr ::Mono::Security::X509::X509Certificate* const& __cordl_internal_get__root() const;

constexpr ::Mono::Security::X509::X509Certificate*& __cordl_internal_get__root() ;

constexpr ::Mono::Security::X509::X509ChainStatusFlags const& __cordl_internal_get__status() const;

constexpr ::Mono::Security::X509::X509ChainStatusFlags& __cordl_internal_get__status() ;

constexpr ::Mono::Security::X509::X509CertificateCollection* const& __cordl_internal_get_certs() const;

constexpr ::Mono::Security::X509::X509CertificateCollection*& __cordl_internal_get_certs() ;

constexpr ::Mono::Security::X509::X509CertificateCollection* const& __cordl_internal_get_roots() const;

constexpr ::Mono::Security::X509::X509CertificateCollection*& __cordl_internal_get_roots() ;

constexpr void __cordl_internal_set__chain(::Mono::Security::X509::X509CertificateCollection*  value) ;

constexpr void __cordl_internal_set__root(::Mono::Security::X509::X509Certificate*  value) ;

constexpr void __cordl_internal_set__status(::Mono::Security::X509::X509ChainStatusFlags  value) ;

constexpr void __cordl_internal_set_certs(::Mono::Security::X509::X509CertificateCollection*  value) ;

constexpr void __cordl_internal_set_roots(::Mono::Security::X509::X509CertificateCollection*  value) ;

/// @brief Method .ctor, addr 0xa0f2154, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa0f21c0, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::Mono::Security::X509::X509CertificateCollection*  chain) ;

/// @brief Method get_Chain, addr 0xa0f2248, size 0x8, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509CertificateCollection* get_Chain() ;

/// @brief Method get_Root, addr 0xa0f2250, size 0x8, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509Certificate* get_Root() ;

/// @brief Method get_Status, addr 0xa0f2258, size 0x8, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509ChainStatusFlags get_Status() ;

/// @brief Method get_TrustAnchors, addr 0xa0f2260, size 0x8c, virtual false, abstract: false, final false
inline ::Mono::Security::X509::X509CertificateCollection* get_TrustAnchors() ;

/// @brief Method set_TrustAnchors, addr 0xa0f2388, size 0x8, virtual false, abstract: false, final false
inline void set_TrustAnchors(::Mono::Security::X509::X509CertificateCollection*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr X509Chain() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "X509Chain", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
X509Chain(X509Chain && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509Chain", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509Chain(X509Chain const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27819};

/// @brief Field roots, offset: 0x10, size: 0x8, def value: None
 ::Mono::Security::X509::X509CertificateCollection*  ___roots;

/// @brief Field certs, offset: 0x18, size: 0x8, def value: None
 ::Mono::Security::X509::X509CertificateCollection*  ___certs;

/// @brief Field _root, offset: 0x20, size: 0x8, def value: None
 ::Mono::Security::X509::X509Certificate*  ____root;

/// @brief Field _chain, offset: 0x28, size: 0x8, def value: None
 ::Mono::Security::X509::X509CertificateCollection*  ____chain;

/// @brief Field _status, offset: 0x30, size: 0x4, def value: None
 ::Mono::Security::X509::X509ChainStatusFlags  ____status;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::X509Chain, ___roots) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Chain, ___certs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Chain, ____root) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Chain, ____chain) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::X509::X509Chain, ____status) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mono::Security::X509::X509Chain) == 0x38, "Size mismatch!");

} // namespace end def Mono::Security::X509
