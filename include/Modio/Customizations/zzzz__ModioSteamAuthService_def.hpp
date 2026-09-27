#pragma once
// IWYU pragma private; include "Modio/Customizations/ModioSteamAuthService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioSteamAuthService)
namespace GlobalNamespace {
struct ModioAPI_Portal;
}
namespace GlobalNamespace {
struct ModioSteamAuthService__Authenticate_d__11;
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
class ISteamCredentialProvider;
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
class ModioSteamAuthService;
}
// Write type traits
MARK_REF_T(::Modio::Customizations::ModioSteamAuthService*);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::ModioSteamAuthService*, "Modio.Customizations", "ModioSteamAuthService");
// Dependencies System.Object
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.ModioSteamAuthService
class CORDL_TYPE ModioSteamAuthService : public ::System::Object {
public:
// Declarations
using _Authenticate_d__11 = ::GlobalNamespace::ModioSteamAuthService__Authenticate_d__11;

 __declspec(property(get=get_IsEmailPlatform)) bool  IsEmailPlatform;

 __declspec(property(get=get_Portal)) ::GlobalNamespace::ModioAPI_Portal  Portal;

/// @brief Field _credentialProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__credentialProvider, put=__cordl_internal_set__credentialProvider)) ::Modio::Customizations::ISteamCredentialProvider*  _credentialProvider;

/// @brief Field _encryptedAppTicket, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__encryptedAppTicket, put=__cordl_internal_set__encryptedAppTicket)) ::StringW  _encryptedAppTicket;

/// @brief Field _encryptedAppTicketError, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__encryptedAppTicketError, put=__cordl_internal_set__encryptedAppTicketError)) ::Modio::Error*  _encryptedAppTicketError;

/// @brief Field _isAttemptInProgress, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isAttemptInProgress, put=__cordl_internal_set__isAttemptInProgress)) bool  _isAttemptInProgress;

/// @brief Convert operator to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr operator  ::Modio::Authentication::IGetActiveUserIdentifier*() noexcept;

/// @brief Convert operator to "::Modio::Authentication::IModioAuthService"
constexpr operator  ::Modio::Authentication::IModioAuthService*() noexcept;

/// @brief Convert operator to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr operator  ::Modio::Authentication::IPotentialModioEmailAuthService*() noexcept;

/// [AsyncStateMachine(typeof(Modio.Customizations.ModioSteamAuthService::<Authenticate>d__11))]
/// @brief Method Authenticate, addr 0xa058c44, size 0x134, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Authenticate(bool  displayedTerms, ::StringW  thirdPartyEmail) ;

/// @brief Method GetActiveUserIdentifier, addr 0xa058acc, size 0x7c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* GetActiveUserIdentifier() ;

static inline ::Modio::Customizations::ModioSteamAuthService* New_ctor() ;

static inline ::Modio::Customizations::ModioSteamAuthService* New_ctor(::Modio::Customizations::ISteamCredentialProvider*  credentialProvider) ;

/// @brief Method OnGetEncryptedAppTicket, addr 0xa058d78, size 0x210, virtual false, abstract: false, final false
inline void OnGetEncryptedAppTicket(bool  success, ::StringW  encryptedAppTicketOrError) ;

/// @brief Method ReturnErrorAndReset, addr 0xa059110, size 0x8c, virtual false, abstract: false, final false
inline ::Modio::Error* ReturnErrorAndReset(::Modio::Error*  error) ;

/// @brief Method SetCredentialProvider, addr 0xa058f88, size 0x8, virtual false, abstract: false, final false
inline void SetCredentialProvider(::Modio::Customizations::ISteamCredentialProvider*  credentialProvider) ;

/// @brief Method ValidateAttempt, addr 0xa058f90, size 0x180, virtual false, abstract: false, final false
inline ::Modio::Error* ValidateAttempt() ;

constexpr ::Modio::Customizations::ISteamCredentialProvider* const& __cordl_internal_get__credentialProvider() const;

constexpr ::Modio::Customizations::ISteamCredentialProvider*& __cordl_internal_get__credentialProvider() ;

constexpr ::StringW const& __cordl_internal_get__encryptedAppTicket() const;

constexpr ::StringW& __cordl_internal_get__encryptedAppTicket() ;

constexpr ::Modio::Error* const& __cordl_internal_get__encryptedAppTicketError() const;

constexpr ::Modio::Error*& __cordl_internal_get__encryptedAppTicketError() ;

constexpr bool const& __cordl_internal_get__isAttemptInProgress() const;

constexpr bool& __cordl_internal_get__isAttemptInProgress() ;

constexpr void __cordl_internal_set__credentialProvider(::Modio::Customizations::ISteamCredentialProvider*  value) ;

constexpr void __cordl_internal_set__encryptedAppTicket(::StringW  value) ;

constexpr void __cordl_internal_set__encryptedAppTicketError(::Modio::Error*  value) ;

constexpr void __cordl_internal_set__isAttemptInProgress(bool  value) ;

/// @brief Method .ctor, addr 0xa058bd4, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa058b48, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Modio::Customizations::ISteamCredentialProvider*  credentialProvider) ;

/// @brief Method get_IsEmailPlatform, addr 0xa058abc, size 0x8, virtual true, abstract: false, final true
inline bool get_IsEmailPlatform() ;

/// @brief Method get_Portal, addr 0xa058ac4, size 0x8, virtual true, abstract: false, final true
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
constexpr ModioSteamAuthService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioSteamAuthService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioSteamAuthService(ModioSteamAuthService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioSteamAuthService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioSteamAuthService(ModioSteamAuthService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17726};

/// @brief Field _credentialProvider, offset: 0x10, size: 0x8, def value: None
 ::Modio::Customizations::ISteamCredentialProvider*  ____credentialProvider;

/// @brief Field _isAttemptInProgress, offset: 0x18, size: 0x1, def value: None
 bool  ____isAttemptInProgress;

/// @brief Field _encryptedAppTicket, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____encryptedAppTicket;

/// @brief Field _encryptedAppTicketError, offset: 0x28, size: 0x8, def value: None
 ::Modio::Error*  ____encryptedAppTicketError;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Customizations::ModioSteamAuthService, ____credentialProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::ModioSteamAuthService, ____isAttemptInProgress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::ModioSteamAuthService, ____encryptedAppTicket) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::ModioSteamAuthService, ____encryptedAppTicketError) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Customizations::ModioSteamAuthService) == 0x30, "Size mismatch!");

} // namespace end def Modio::Customizations
