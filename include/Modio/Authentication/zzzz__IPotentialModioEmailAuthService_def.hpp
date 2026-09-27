#pragma once
// IWYU pragma private; include "Modio/Authentication/IPotentialModioEmailAuthService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPotentialModioEmailAuthService)
// Forward declare root types
namespace Modio::Authentication {
class IPotentialModioEmailAuthService;
}
// Write type traits
MARK_REF_T(::Modio::Authentication::IPotentialModioEmailAuthService*);
DEFINE_IL2CPP_CLASS(::Modio::Authentication::IPotentialModioEmailAuthService*, "Modio.Authentication", "IPotentialModioEmailAuthService");
// Dependencies 
namespace Modio::Authentication {
// Is value type: false
// CS Name: Modio.Authentication.IPotentialModioEmailAuthService
class CORDL_TYPE IPotentialModioEmailAuthService {
public:
// Declarations
 __declspec(property(get=get_IsEmailPlatform)) bool  IsEmailPlatform;

/// @brief Method get_IsEmailPlatform, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsEmailPlatform() ;

// Ctor Parameters [CppParam { name: "", ty: "IPotentialModioEmailAuthService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPotentialModioEmailAuthService(IPotentialModioEmailAuthService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17763};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Authentication
