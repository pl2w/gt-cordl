#pragma once
// IWYU pragma private; include "System/Net/SecurityProtocol.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Authentication/zzzz__SslProtocols_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SecurityProtocol)
// Forward declare root types
namespace System::Net {
class SecurityProtocol;
}
// Write type traits
MARK_REF_T(::System::Net::SecurityProtocol*);
DEFINE_IL2CPP_CLASS(::System::Net::SecurityProtocol*, "System.Net", "SecurityProtocol");
// Dependencies System.Object, System.Security.Authentication.SslProtocols
namespace System::Net {
// Is value type: false
// CS Name: System.Net.SecurityProtocol
class CORDL_TYPE SecurityProtocol : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecurityProtocol() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecurityProtocol", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SecurityProtocol(SecurityProtocol && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecurityProtocol", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecurityProtocol(SecurityProtocol const& ) = delete;

/// @brief Field DefaultSecurityProtocols value: I32(4032)
static ::System::Security::Authentication::SslProtocols const DefaultSecurityProtocols;

/// @brief Field SystemDefaultSecurityProtocols value: I32(0)
static ::System::Security::Authentication::SslProtocols const SystemDefaultSecurityProtocols;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10396};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::SecurityProtocol) == 0x10, "Size mismatch!");

} // namespace end def System::Net
