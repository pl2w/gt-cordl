#pragma once
// IWYU pragma private; include "Modio/Customizations/ModioOculusAuthService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioOculusAuthService)
namespace GlobalNamespace {
struct ModioAPI_Portal;
}
namespace GlobalNamespace {
struct ModioOculusAuthService__Authenticate_d__9;
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
class IOculusCredentialProvider;
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
class ModioOculusAuthService;
}
// Write type traits
MARK_REF_T(::Modio::Customizations::ModioOculusAuthService*);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::ModioOculusAuthService*, "Modio.Customizations", "ModioOculusAuthService");
// Dependencies System.Object
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.ModioOculusAuthService
class CORDL_TYPE ModioOculusAuthService : public ::System::Object {
public:
// Declarations
using _Authenticate_d__9 = ::GlobalNamespace::ModioOculusAuthService__Authenticate_d__9;

 __declspec(property(get=get_IsEmailPlatform)) bool  IsEmailPlatform;

 __declspec(property(get=get_Portal)) ::GlobalNamespace::ModioAPI_Portal  Portal;

/// @brief Field _credentialProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__credentialProvider, put=__cordl_internal_set__credentialProvider)) ::Modio::Customizations::IOculusCredentialProvider*  _credentialProvider;

/// @brief Field _isAttemptInProgress, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isAttemptInProgress, put=__cordl_internal_set__isAttemptInProgress)) bool  _isAttemptInProgress;

/// @brief Convert operator to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr operator  ::Modio::Authentication::IGetActiveUserIdentifier*() noexcept;

/// @brief Convert operator to "::Modio::Authentication::IModioAuthService"
constexpr operator  ::Modio::Authentication::IModioAuthService*() noexcept;

/// @brief Convert operator to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr operator  ::Modio::Authentication::IPotentialModioEmailAuthService*() noexcept;

/// [AsyncStateMachine(typeof(Modio.Customizations.ModioOculusAuthService::<Authenticate>d__9))]
/// @brief Method Authenticate, addr 0xa057b34, size 0x124, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Authenticate(bool  displayedTerms, ::StringW  thirdPartyEmail) ;

/// @brief Method GetActiveUserIdentifier, addr 0xa057a80, size 0x7c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* GetActiveUserIdentifier() ;

static inline ::Modio::Customizations::ModioOculusAuthService* New_ctor() ;

static inline ::Modio::Customizations::ModioOculusAuthService* New_ctor(::Modio::Customizations::IOculusCredentialProvider*  credentialProvider) ;

/// @brief Method ReturnErrorAndReset, addr 0xa057de0, size 0x10, virtual false, abstract: false, final false
inline ::Modio::Error* ReturnErrorAndReset(::Modio::Error*  error) ;

/// @brief Method SetCredentialProvider, addr 0xa057c58, size 0x8, virtual false, abstract: false, final false
inline void SetCredentialProvider(::Modio::Customizations::IOculusCredentialProvider*  credentialProvider) ;

/// @brief Method ValidateAttempt, addr 0xa057c60, size 0x180, virtual false, abstract: false, final false
inline ::Modio::Error* ValidateAttempt() ;

constexpr ::Modio::Customizations::IOculusCredentialProvider* const& __cordl_internal_get__credentialProvider() const;

constexpr ::Modio::Customizations::IOculusCredentialProvider*& __cordl_internal_get__credentialProvider() ;

constexpr bool const& __cordl_internal_get__isAttemptInProgress() const;

constexpr bool& __cordl_internal_get__isAttemptInProgress() ;

constexpr void __cordl_internal_set__credentialProvider(::Modio::Customizations::IOculusCredentialProvider*  value) ;

constexpr void __cordl_internal_set__isAttemptInProgress(bool  value) ;

/// @brief Method .ctor, addr 0xa057b2c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa057afc, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Modio::Customizations::IOculusCredentialProvider*  credentialProvider) ;

/// @brief Method get_IsEmailPlatform, addr 0xa057a70, size 0x8, virtual true, abstract: false, final true
inline bool get_IsEmailPlatform() ;

/// @brief Method get_Portal, addr 0xa057a78, size 0x8, virtual true, abstract: false, final true
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
constexpr ModioOculusAuthService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioOculusAuthService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioOculusAuthService(ModioOculusAuthService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioOculusAuthService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioOculusAuthService(ModioOculusAuthService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17723};

/// @brief Field _credentialProvider, offset: 0x10, size: 0x8, def value: None
 ::Modio::Customizations::IOculusCredentialProvider*  ____credentialProvider;

/// @brief Field _isAttemptInProgress, offset: 0x18, size: 0x1, def value: None
 bool  ____isAttemptInProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Customizations::ModioOculusAuthService, ____credentialProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::ModioOculusAuthService, ____isAttemptInProgress) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Customizations::ModioOculusAuthService) == 0x20, "Size mismatch!");

} // namespace end def Modio::Customizations
