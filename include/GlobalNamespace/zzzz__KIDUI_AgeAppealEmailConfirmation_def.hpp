#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_AgeAppealEmailConfirmation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KIDUI_AgeAppealEmailConfirmation)
namespace GlobalNamespace {
struct KIDUI_AgeAppealEmailConfirmation__StartAgeAppealChallengeEmail_d__16;
}
namespace GlobalNamespace {
struct KIDUI_AgeAppealEmailConfirmation__StartAgeAppealEmail_d__17;
}
namespace GlobalNamespace {
class KIDUI_AgeAppealEmailError;
}
namespace GlobalNamespace {
class KIDUI_AgeAppealEmailScreen;
}
namespace GlobalNamespace {
class KIDUI_EmailSuccess;
}
namespace System::Threading::Tasks {
class Task;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_AgeAppealEmailConfirmation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation*, "", "KIDUI_AgeAppealEmailConfirmation");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_AgeAppealEmailConfirmation
class CORDL_TYPE KIDUI_AgeAppealEmailConfirmation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _StartAgeAppealChallengeEmail_d__16 = ::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation__StartAgeAppealChallengeEmail_d__16;

using _StartAgeAppealEmail_d__17 = ::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation__StartAgeAppealEmail_d__17;

/// @brief Field CONFIRM_PARENT_EMAIL, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_CONFIRM_PARENT_EMAIL, put=__cordl_internal_set_CONFIRM_PARENT_EMAIL)) ::StringW  CONFIRM_PARENT_EMAIL;

/// @brief Field CONFIRM_YOUR_EMAIL, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_CONFIRM_YOUR_EMAIL, put=__cordl_internal_set_CONFIRM_YOUR_EMAIL)) ::StringW  CONFIRM_YOUR_EMAIL;

/// @brief Field _ageAppealEmailScreen, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__ageAppealEmailScreen, put=__cordl_internal_set__ageAppealEmailScreen)) ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>  _ageAppealEmailScreen;

/// @brief Field _confirmText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmText, put=__cordl_internal_set__confirmText)) ::UnityW<::TMPro::TMP_Text>  _confirmText;

/// @brief Field _emailText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailText, put=__cordl_internal_set__emailText)) ::UnityW<::TMPro::TMP_Text>  _emailText;

/// @brief Field _errorScreen, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorScreen, put=__cordl_internal_set__errorScreen)) ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailError>  _errorScreen;

/// @brief Field _hasCompletedSendEmailRequest, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasCompletedSendEmailRequest, put=__cordl_internal_set__hasCompletedSendEmailRequest)) bool  _hasCompletedSendEmailRequest;

/// @brief Field _minimumDelay, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__minimumDelay, put=__cordl_internal_set__minimumDelay)) int32_t  _minimumDelay;

/// @brief Field _successScreen, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__successScreen, put=__cordl_internal_set__successScreen)) ::UnityW<::GlobalNamespace::KIDUI_EmailSuccess>  _successScreen;

/// @brief Field hasChallenge, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasChallenge, put=__cordl_internal_set_hasChallenge)) bool  hasChallenge;

/// @brief Field newAgeToAppeal, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_newAgeToAppeal, put=__cordl_internal_set_newAgeToAppeal)) int32_t  newAgeToAppeal;

static inline ::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation* New_ctor() ;

/// @brief Method NotifyOfEmailResult, addr 0x5a4e8a4, size 0x128, virtual false, abstract: false, final false
inline void NotifyOfEmailResult(bool  success) ;

/// @brief Method OnBackPressed, addr 0x5a4e60c, size 0x298, virtual false, abstract: false, final false
inline void OnBackPressed() ;

/// @brief Method OnConfirmPressed, addr 0x5a4e204, size 0x284, virtual false, abstract: false, final false
inline void OnConfirmPressed() ;

/// @brief Method OnDisable, addr 0x5a4e0dc, size 0x128, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a4dfdc, size 0x100, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ShowAgeAppealConfirmationScreen, addr 0x5a4dea0, size 0x88, virtual false, abstract: false, final false
inline void ShowAgeAppealConfirmationScreen(bool  hasChallenge, int32_t  newAge, ::StringW  emailToConfirm) ;

/// @brief Method ShowErrorScreen, addr 0x5a4ec14, size 0x140, virtual false, abstract: false, final false
inline void ShowErrorScreen() ;

/// [AsyncStateMachine(typeof(KIDUI_AgeAppealEmailConfirmation::<StartAgeAppealChallengeEmail>d__16))]
/// @brief Method StartAgeAppealChallengeEmail, addr 0x5a4e488, size 0xac, virtual false, abstract: false, final false
inline void StartAgeAppealChallengeEmail() ;

/// [AsyncStateMachine(typeof(KIDUI_AgeAppealEmailConfirmation::<StartAgeAppealEmail>d__17))]
/// @brief Method StartAgeAppealEmail, addr 0x5a4e534, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartAgeAppealEmail() ;

constexpr ::StringW const& __cordl_internal_get_CONFIRM_PARENT_EMAIL() const;

constexpr ::StringW& __cordl_internal_get_CONFIRM_PARENT_EMAIL() ;

constexpr ::StringW const& __cordl_internal_get_CONFIRM_YOUR_EMAIL() const;

constexpr ::StringW& __cordl_internal_get_CONFIRM_YOUR_EMAIL() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen> const& __cordl_internal_get__ageAppealEmailScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>& __cordl_internal_get__ageAppealEmailScreen() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__confirmText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__confirmText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__emailText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__emailText() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailError> const& __cordl_internal_get__errorScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailError>& __cordl_internal_get__errorScreen() ;

constexpr bool const& __cordl_internal_get__hasCompletedSendEmailRequest() const;

constexpr bool& __cordl_internal_get__hasCompletedSendEmailRequest() ;

constexpr int32_t const& __cordl_internal_get__minimumDelay() const;

constexpr int32_t& __cordl_internal_get__minimumDelay() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_EmailSuccess> const& __cordl_internal_get__successScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_EmailSuccess>& __cordl_internal_get__successScreen() ;

constexpr bool const& __cordl_internal_get_hasChallenge() const;

constexpr bool& __cordl_internal_get_hasChallenge() ;

constexpr int32_t const& __cordl_internal_get_newAgeToAppeal() const;

constexpr int32_t& __cordl_internal_get_newAgeToAppeal() ;

constexpr void __cordl_internal_set_CONFIRM_PARENT_EMAIL(::StringW  value) ;

constexpr void __cordl_internal_set_CONFIRM_YOUR_EMAIL(::StringW  value) ;

constexpr void __cordl_internal_set__ageAppealEmailScreen(::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>  value) ;

constexpr void __cordl_internal_set__confirmText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__emailText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__errorScreen(::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailError>  value) ;

constexpr void __cordl_internal_set__hasCompletedSendEmailRequest(bool  value) ;

constexpr void __cordl_internal_set__minimumDelay(int32_t  value) ;

constexpr void __cordl_internal_set__successScreen(::UnityW<::GlobalNamespace::KIDUI_EmailSuccess>  value) ;

constexpr void __cordl_internal_set_hasChallenge(bool  value) ;

constexpr void __cordl_internal_set_newAgeToAppeal(int32_t  value) ;

/// @brief Method .ctor, addr 0x5a4eda4, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_AgeAppealEmailConfirmation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AgeAppealEmailConfirmation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_AgeAppealEmailConfirmation(KIDUI_AgeAppealEmailConfirmation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_AgeAppealEmailConfirmation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_AgeAppealEmailConfirmation(KIDUI_AgeAppealEmailConfirmation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3005};

/// [SerializeField]
/// @brief Field _confirmText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____confirmText;

/// [SerializeField]
/// @brief Field _emailText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____emailText;

/// @brief Field CONFIRM_PARENT_EMAIL, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___CONFIRM_PARENT_EMAIL;

/// @brief Field CONFIRM_YOUR_EMAIL, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___CONFIRM_YOUR_EMAIL;

/// @brief Field hasChallenge, offset: 0x40, size: 0x1, def value: None
 bool  ___hasChallenge;

/// @brief Field newAgeToAppeal, offset: 0x44, size: 0x4, def value: None
 int32_t  ___newAgeToAppeal;

/// @brief Field _hasCompletedSendEmailRequest, offset: 0x48, size: 0x1, def value: None
 bool  ____hasCompletedSendEmailRequest;

/// [SerializeField]
/// @brief Field _successScreen, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_EmailSuccess>  ____successScreen;

/// [SerializeField]
/// @brief Field _errorScreen, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailError>  ____errorScreen;

/// [SerializeField]
/// @brief Field _ageAppealEmailScreen, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_AgeAppealEmailScreen>  ____ageAppealEmailScreen;

/// [SerializeField]
/// @brief Field _minimumDelay, offset: 0x68, size: 0x4, def value: None
 int32_t  ____minimumDelay;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation, ____confirmText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation, ____emailText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation, ___CONFIRM_PARENT_EMAIL) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation, ___CONFIRM_YOUR_EMAIL) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation, ___hasChallenge) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation, ___newAgeToAppeal) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation, ____hasCompletedSendEmailRequest) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation, ____successScreen) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation, ____errorScreen) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation, ____ageAppealEmailScreen) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation, ____minimumDelay) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_AgeAppealEmailConfirmation) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
