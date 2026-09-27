#pragma once
// IWYU pragma private; include "Modio/Authentication/ModioEmailAuthService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioEmailAuthService)
namespace GlobalNamespace {
struct ModioAPI_Portal;
}
namespace GlobalNamespace {
struct ModioEmailAuthService__AuthenticateWithoutEmailRequest_d__10;
}
namespace GlobalNamespace {
struct ModioEmailAuthService__Authenticate_d__9;
}
namespace GlobalNamespace {
struct ModioEmailAuthService__ExchangeCode_d__11;
}
namespace Modio::Authentication {
class IEmailCodePrompter;
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
namespace Modio::Authentication {
class ModioEmailAuthService_EmailCodePrompter;
}
namespace Modio {
class Error;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
// Forward declare root types
namespace Modio::Authentication {
class ModioEmailAuthService;
}
namespace Modio::Authentication {
class ModioEmailAuthService_EmailCodePrompter;
}
// Write type traits
MARK_REF_T(::Modio::Authentication::ModioEmailAuthService*);
MARK_REF_T(::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter*);
DEFINE_IL2CPP_CLASS(::Modio::Authentication::ModioEmailAuthService*, "Modio.Authentication", "ModioEmailAuthService");
DEFINE_IL2CPP_CLASS(::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter*, "Modio.Authentication", "ModioEmailAuthService/EmailCodePrompter");
// Dependencies System.Object
namespace Modio::Authentication {
// Is value type: false
// CS Name: Modio.Authentication.ModioEmailAuthService
class CORDL_TYPE ModioEmailAuthService : public ::System::Object {
public:
// Declarations
using _AuthenticateWithoutEmailRequest_d__10 = ::GlobalNamespace::ModioEmailAuthService__AuthenticateWithoutEmailRequest_d__10;

using _Authenticate_d__9 = ::GlobalNamespace::ModioEmailAuthService__Authenticate_d__9;

using _ExchangeCode_d__11 = ::GlobalNamespace::ModioEmailAuthService__ExchangeCode_d__11;

using EmailCodePrompter = ::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter;

 __declspec(property(get=get_IsEmailPlatform)) bool  IsEmailPlatform;

 __declspec(property(get=get_Portal)) ::GlobalNamespace::ModioAPI_Portal  Portal;

/// @brief Field _codePrompter, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__codePrompter, put=__cordl_internal_set__codePrompter)) ::Modio::Authentication::IEmailCodePrompter*  _codePrompter;

/// @brief Field _isAttemptInProgress, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isAttemptInProgress, put=__cordl_internal_set__isAttemptInProgress)) bool  _isAttemptInProgress;

/// @brief Convert operator to "::Modio::Authentication::IGetActiveUserIdentifier"
constexpr operator  ::Modio::Authentication::IGetActiveUserIdentifier*() noexcept;

/// @brief Convert operator to "::Modio::Authentication::IModioAuthService"
constexpr operator  ::Modio::Authentication::IModioAuthService*() noexcept;

/// @brief Convert operator to "::Modio::Authentication::IPotentialModioEmailAuthService"
constexpr operator  ::Modio::Authentication::IPotentialModioEmailAuthService*() noexcept;

/// [AsyncStateMachine(typeof(Modio.Authentication.ModioEmailAuthService::<Authenticate>d__9))]
/// @brief Method Authenticate, addr 0xa062348, size 0x120, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Authenticate(bool  displayedTerms, ::StringW  thirdPartyEmail) ;

/// [AsyncStateMachine(typeof(Modio.Authentication.ModioEmailAuthService::<AuthenticateWithoutEmailRequest>d__10))]
/// @brief Method AuthenticateWithoutEmailRequest, addr 0xa062468, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* AuthenticateWithoutEmailRequest() ;

/// [AsyncStateMachine(typeof(Modio.Authentication.ModioEmailAuthService::<ExchangeCode>d__11))]
/// @brief Method ExchangeCode, addr 0xa062574, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* ExchangeCode(::StringW  code) ;

/// @brief Method GetActiveUserIdentifier, addr 0xa062888, size 0x7c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* GetActiveUserIdentifier() ;

static inline ::Modio::Authentication::ModioEmailAuthService* New_ctor() ;

static inline ::Modio::Authentication::ModioEmailAuthService* New_ctor(::Modio::Authentication::IEmailCodePrompter*  codePrompter) ;

static inline ::Modio::Authentication::ModioEmailAuthService* New_ctor(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  codePrompter) ;

/// @brief Method ReturnErrorAndReset, addr 0xa0627f4, size 0x10, virtual false, abstract: false, final false
inline ::Modio::Error* ReturnErrorAndReset(::Modio::Error*  error) ;

/// @brief Method SetCodePrompter, addr 0xa062804, size 0x8, virtual false, abstract: false, final false
inline void SetCodePrompter(::Modio::Authentication::IEmailCodePrompter*  codePrompter) ;

/// @brief Method SetCodePrompter, addr 0xa06280c, size 0x7c, virtual false, abstract: false, final false
inline void SetCodePrompter(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  codePrompter) ;

/// @brief Method ValidateAttempt, addr 0xa062694, size 0x160, virtual false, abstract: false, final false
inline ::Modio::Error* ValidateAttempt() ;

constexpr ::Modio::Authentication::IEmailCodePrompter* const& __cordl_internal_get__codePrompter() const;

constexpr ::Modio::Authentication::IEmailCodePrompter*& __cordl_internal_get__codePrompter() ;

constexpr bool const& __cordl_internal_get__isAttemptInProgress() const;

constexpr bool& __cordl_internal_get__isAttemptInProgress() ;

constexpr void __cordl_internal_set__codePrompter(::Modio::Authentication::IEmailCodePrompter*  value) ;

constexpr void __cordl_internal_set__isAttemptInProgress(bool  value) ;

/// @brief Method .ctor, addr 0xa062340, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa062310, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Modio::Authentication::IEmailCodePrompter*  codePrompter) ;

/// @brief Method .ctor, addr 0xa062258, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  codePrompter) ;

/// @brief Method get_IsEmailPlatform, addr 0xa062248, size 0x8, virtual true, abstract: false, final true
inline bool get_IsEmailPlatform() ;

/// @brief Method get_Portal, addr 0xa062250, size 0x8, virtual true, abstract: false, final true
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
constexpr ModioEmailAuthService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioEmailAuthService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioEmailAuthService(ModioEmailAuthService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioEmailAuthService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioEmailAuthService(ModioEmailAuthService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17768};

/// @brief Field _codePrompter, offset: 0x10, size: 0x8, def value: None
 ::Modio::Authentication::IEmailCodePrompter*  ____codePrompter;

/// @brief Field _isAttemptInProgress, offset: 0x18, size: 0x1, def value: None
 bool  ____isAttemptInProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Authentication::ModioEmailAuthService, ____codePrompter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Authentication::ModioEmailAuthService, ____isAttemptInProgress) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Authentication::ModioEmailAuthService) == 0x20, "Size mismatch!");

} // namespace end def Modio::Authentication
// Dependencies System.Object
namespace Modio::Authentication {
// Is value type: false
// CS Name: Modio.Authentication.ModioEmailAuthService/EmailCodePrompter
class CORDL_TYPE ModioEmailAuthService_EmailCodePrompter : public ::System::Object {
public:
// Declarations
/// @brief Field _codePrompt, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__codePrompt, put=__cordl_internal_set__codePrompt)) ::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  _codePrompt;

/// @brief Convert operator to "::Modio::Authentication::IEmailCodePrompter"
constexpr operator  ::Modio::Authentication::IEmailCodePrompter*() noexcept;

static inline ::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter* New_ctor(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  codePrompt) ;

/// @brief Method ShowCodePrompt, addr 0xa062904, size 0x20, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::StringW>* ShowCodePrompt() ;

constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>* const& __cordl_internal_get__codePrompt() const;

constexpr ::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*& __cordl_internal_get__codePrompt() ;

constexpr void __cordl_internal_set__codePrompt(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  value) ;

/// @brief Method .ctor, addr 0xa0622e0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  codePrompt) ;

/// @brief Convert to "::Modio::Authentication::IEmailCodePrompter"
constexpr ::Modio::Authentication::IEmailCodePrompter* i___Modio__Authentication__IEmailCodePrompter() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioEmailAuthService_EmailCodePrompter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioEmailAuthService_EmailCodePrompter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioEmailAuthService_EmailCodePrompter(ModioEmailAuthService_EmailCodePrompter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioEmailAuthService_EmailCodePrompter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioEmailAuthService_EmailCodePrompter(ModioEmailAuthService_EmailCodePrompter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17764};

/// @brief Field _codePrompt, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::System::Threading::Tasks::Task_1<::StringW>*>*  ____codePrompt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter, ____codePrompt) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Authentication::ModioEmailAuthService_EmailCodePrompter) == 0x18, "Size mismatch!");

} // namespace end def Modio::Authentication
