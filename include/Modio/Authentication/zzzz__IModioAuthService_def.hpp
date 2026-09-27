#pragma once
// IWYU pragma private; include "Modio/Authentication/IModioAuthService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IModioAuthService)
namespace GlobalNamespace {
struct ModioAPI_Portal;
}
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Modio::Authentication {
class IModioAuthService;
}
// Write type traits
MARK_REF_T(::Modio::Authentication::IModioAuthService*);
DEFINE_IL2CPP_CLASS(::Modio::Authentication::IModioAuthService*, "Modio.Authentication", "IModioAuthService");
// Dependencies 
namespace Modio::Authentication {
// Is value type: false
// CS Name: Modio.Authentication.IModioAuthService
class CORDL_TYPE IModioAuthService {
public:
// Declarations
 __declspec(property(get=get_Portal)) ::GlobalNamespace::ModioAPI_Portal  Portal;

/// @brief Method Authenticate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Authenticate(bool  displayedTerms, ::StringW  thirdPartyEmail) ;

/// @brief Method get_Portal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::GlobalNamespace::ModioAPI_Portal get_Portal() ;

// Ctor Parameters [CppParam { name: "", ty: "IModioAuthService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IModioAuthService(IModioAuthService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17762};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Modio::Authentication
