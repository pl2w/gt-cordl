#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTlsConversions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityTlsConversions)
namespace GlobalNamespace {
struct UnityTls_unitytls_protocol;
}
namespace GlobalNamespace {
struct UnityTls_unitytls_x509verify_result;
}
namespace Mono::Security::Interface {
struct AlertDescription;
}
namespace Mono::Security::Interface {
struct TlsProtocols;
}
namespace System::Net::Security {
struct SslPolicyErrors;
}
namespace System::Security::Authentication {
struct SslProtocols;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatusFlags;
}
// Forward declare root types
namespace Mono::Unity {
class UnityTlsConversions;
}
// Write type traits
MARK_REF_T(::Mono::Unity::UnityTlsConversions*);
DEFINE_IL2CPP_CLASS(::Mono::Unity::UnityTlsConversions*, "Mono.Unity", "UnityTlsConversions");
// Dependencies System.Object
namespace Mono::Unity {
// Is value type: false
// CS Name: Mono.Unity.UnityTlsConversions
class CORDL_TYPE UnityTlsConversions : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertProtocolVersion, addr 0xa8d1b5c, size 0x20, virtual false, abstract: false, final false
static inline ::Mono::Security::Interface::TlsProtocols ConvertProtocolVersion(::GlobalNamespace::UnityTls_unitytls_protocol  protocol) ;

/// @brief Method GetMaxProtocol, addr 0xa8d0d84, size 0x38, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityTls_unitytls_protocol GetMaxProtocol(::System::Security::Authentication::SslProtocols  protocols) ;

/// @brief Method GetMinProtocol, addr 0xa8d0d54, size 0x30, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityTls_unitytls_protocol GetMinProtocol(::System::Security::Authentication::SslProtocols  protocols) ;

/// @brief Method VerifyResultToAlertDescription, addr 0xa8ce280, size 0x54, virtual false, abstract: false, final false
static inline ::Mono::Security::Interface::AlertDescription VerifyResultToAlertDescription(::GlobalNamespace::UnityTls_unitytls_x509verify_result  verifyResult, ::Mono::Security::Interface::AlertDescription  defaultAlert) ;

/// @brief Method VerifyResultToChainStatus, addr 0xa8d3070, size 0x3c, virtual false, abstract: false, final false
static inline ::System::Security::Cryptography::X509Certificates::X509ChainStatusFlags VerifyResultToChainStatus(::GlobalNamespace::UnityTls_unitytls_x509verify_result  verifyResult) ;

/// @brief Method VerifyResultToPolicyErrror, addr 0xa8d3040, size 0x30, virtual false, abstract: false, final false
static inline ::System::Net::Security::SslPolicyErrors VerifyResultToPolicyErrror(::GlobalNamespace::UnityTls_unitytls_x509verify_result  verifyResult) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityTlsConversions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityTlsConversions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityTlsConversions(UnityTlsConversions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityTlsConversions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityTlsConversions(UnityTlsConversions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9863};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mono::Unity::UnityTlsConversions) == 0x10, "Size mismatch!");

} // namespace end def Mono::Unity
