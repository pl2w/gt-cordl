#pragma once
// IWYU pragma private; include "Modio/Customizations/ModioWssAuthService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Customizations/zzzz__ExternalAuthenticationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioWssAuthService)
namespace GlobalNamespace {
struct ModioAPI_Portal;
}
namespace GlobalNamespace {
struct ModioWssAuthService__Authenticate_d__10;
}
namespace Modio::Authentication {
class IGetActiveUserIdentifier;
}
namespace Modio::Authentication {
class IModioAuthService;
}
namespace Modio::Authentication {
class IPotentialModioEmailAuthService;
}
namespace Modio::Customizations {
class IWssAuthPrompter;
}
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Modio::Customizations {
class ModioWssAuthService;
}
// Write type traits
MARK_REF_T(::Modio::Customizations::ModioWssAuthService*);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::ModioWssAuthService*, "Modio.Customizations", "ModioWssAuthService");
// Dependencies Modio.Customizations.ExternalAuthenticationToken, System.Object
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.ModioWssAuthService
class CORDL_TYPE ModioWssAuthService : public ::System::Object {
public:
// Declarations
using _Authenticate_d__10 = ::GlobalNamespace::ModioWssAuthService__Authenticate_d__10;

 __declspec(property(get=get_IsEmailPlatform)) bool  IsEmailPlatform;

 __declspec(property(get=get_Portal)) ::GlobalNamespace::ModioAPI_Portal  Portal;

/// @brief Field _authPrompter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__authPrompter, put=__cordl_internal_set__authPrompter)) ::Modio::Customizations::IWssAuthPrompter*  _authPrompter;

/// @brief Field _authToken, offset 0x20, size 0x30 
 __declspec(property(get=__cordl_internal_get__authToken, put=__cordl_internal_set__authToken)) ::Modio::Customizations::ExternalAuthenticationToken  _authToken;

/// @brief Field _isAttemptInProgress, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isAttemptInProgress, put=__cordl_internal_set__isAttemptInProgress)) bool  _isAttemptInProgress;

/// @brief Convert operator to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr operator  ::Modio::Authentication::IGetActiveUserIdentifier*() noexcept;

/// @brief Convert operator to "::Modio::Authentication::IModioAuthService"
constexpr operator  ::Modio::Authentication::IModioAuthService*() noexcept;

/// @brief Convert operator to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr operator  ::Modio::Authentication::IPotentialModioEmailAuthService*() noexcept;

/// [AsyncStateMachine(typeof(Modio.Customizations.ModioWssAuthService::<Authenticate>d__10))]
/// @brief Method Authenticate, addr 0xa059ddc, size 0x10c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Authenticate(bool  displayedTerms, ::StringW  thirdPartyEmail) ;

/// @brief Method Cancel, addr 0xa05a088, size 0x1c, virtual false, abstract: false, final false
inline void Cancel() ;

/// @brief Method GetActiveUserIdentifier, addr 0xa059d28, size 0x7c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* GetActiveUserIdentifier() ;

/// @brief Method InProgress, addr 0xa05a080, size 0x8, virtual false, abstract: false, final false
inline bool InProgress() ;

static inline ::Modio::Customizations::ModioWssAuthService* New_ctor() ;

static inline ::Modio::Customizations::ModioWssAuthService* New_ctor(::Modio::Customizations::IWssAuthPrompter*  prompter) ;

/// @brief Method ReturnErrorAndReset, addr 0xa05a068, size 0x10, virtual false, abstract: false, final false
inline ::Modio::Error* ReturnErrorAndReset(::Modio::Error*  error) ;

/// @brief Method SetPrompter, addr 0xa05a078, size 0x8, virtual false, abstract: false, final false
inline void SetPrompter(::Modio::Customizations::IWssAuthPrompter*  prompter) ;

/// @brief Method ValidateAttempt, addr 0xa059ee8, size 0x180, virtual false, abstract: false, final false
inline ::Modio::Error* ValidateAttempt() ;

constexpr ::Modio::Customizations::IWssAuthPrompter* const& __cordl_internal_get__authPrompter() const;

constexpr ::Modio::Customizations::IWssAuthPrompter*& __cordl_internal_get__authPrompter() ;

constexpr ::Modio::Customizations::ExternalAuthenticationToken const& __cordl_internal_get__authToken() const;

constexpr ::Modio::Customizations::ExternalAuthenticationToken& __cordl_internal_get__authToken() ;

constexpr bool const& __cordl_internal_get__isAttemptInProgress() const;

constexpr bool& __cordl_internal_get__isAttemptInProgress() ;

constexpr void __cordl_internal_set__authPrompter(::Modio::Customizations::IWssAuthPrompter*  value) ;

constexpr void __cordl_internal_set__authToken(::Modio::Customizations::ExternalAuthenticationToken  value) ;

constexpr void __cordl_internal_set__isAttemptInProgress(bool  value) ;

/// @brief Method .ctor, addr 0xa059dd4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa059da4, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Modio::Customizations::IWssAuthPrompter*  prompter) ;

/// @brief Method get_IsEmailPlatform, addr 0xa059d18, size 0x8, virtual true, abstract: false, final true
inline bool get_IsEmailPlatform() ;

/// @brief Method get_Portal, addr 0xa059d20, size 0x8, virtual true, abstract: false, final true
inline ::GlobalNamespace::ModioAPI_Portal get_Portal() ;

/// @brief Convert to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr ::Modio::Authentication::IGetActiveUserIdentifier* i___Modio__Authentication__IGetActiveUserIdentifier() noexcept;

/// @brief Convert to "::Modio::Authentication::IModioAuthService"
constexpr ::Modio::Authentication::IModioAuthService* i___Modio__Authentication__IModioAuthService() noexcept;

/// @brief Convert to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr ::Modio::Authentication::IPotentialModioEmailAuthService* i___Modio__Authentication__IPotentialModioEmailAuthService() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioWssAuthService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioWssAuthService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioWssAuthService(ModioWssAuthService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioWssAuthService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioWssAuthService(ModioWssAuthService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17729};

/// @brief Field _authPrompter, offset: 0x10, size: 0x8, def value: None
 ::Modio::Customizations::IWssAuthPrompter*  ____authPrompter;

/// @brief Field _isAttemptInProgress, offset: 0x18, size: 0x1, def value: None
 bool  ____isAttemptInProgress;

/// @brief Field _authToken, offset: 0x20, size: 0x30, def value: None
 ::Modio::Customizations::ExternalAuthenticationToken  ____authToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Customizations::ModioWssAuthService, ____authPrompter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::ModioWssAuthService, ____isAttemptInProgress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::ModioWssAuthService, ____authToken) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::Customizations::ModioWssAuthService) == 0x50, "Size mismatch!");

} // namespace end def Modio::Customizations
