#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_ConfirmScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KIDUI_ConfirmScreen)
namespace GlobalNamespace {
class KIDUIButton;
}
namespace GlobalNamespace {
class KIDUI_AnimatedEllipsis;
}
namespace GlobalNamespace {
struct KIDUI_ConfirmScreen__OnBackPressed_d__17;
}
namespace GlobalNamespace {
struct KIDUI_ConfirmScreen__OnConfirmPressed_d__16;
}
namespace GlobalNamespace {
struct KIDUI_ConfirmScreen__ShowErrorScreen_d__19;
}
namespace GlobalNamespace {
class KIDUI_EmailSuccess;
}
namespace GlobalNamespace {
class KIDUI_ErrorScreen;
}
namespace GlobalNamespace {
class KIDUI_MainScreen;
}
namespace GlobalNamespace {
class KIDUI_SetupScreen;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUI_ConfirmScreen;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUI_ConfirmScreen*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUI_ConfirmScreen*, "", "KIDUI_ConfirmScreen");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUI_ConfirmScreen
class CORDL_TYPE KIDUI_ConfirmScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _OnBackPressed_d__17 = ::GlobalNamespace::KIDUI_ConfirmScreen__OnBackPressed_d__17;

using _OnConfirmPressed_d__16 = ::GlobalNamespace::KIDUI_ConfirmScreen__OnConfirmPressed_d__16;

using _ShowErrorScreen_d__19 = ::GlobalNamespace::KIDUI_ConfirmScreen__ShowErrorScreen_d__19;

/// @brief Field _animatedEllipsis, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__animatedEllipsis, put=__cordl_internal_set__animatedEllipsis)) ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  _animatedEllipsis;

/// @brief Field _backButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__backButton, put=__cordl_internal_set__backButton)) ::UnityW<::GlobalNamespace::KIDUIButton>  _backButton;

/// @brief Field _cancellationTokenSource, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__cancellationTokenSource, put=__cordl_internal_set__cancellationTokenSource)) ::System::Threading::CancellationTokenSource*  _cancellationTokenSource;

/// @brief Field _confirmButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmButton, put=__cordl_internal_set__confirmButton)) ::UnityW<::GlobalNamespace::KIDUIButton>  _confirmButton;

/// @brief Field _emailRequestResult, offset 0x79, size 0x1 
 __declspec(property(get=__cordl_internal_get__emailRequestResult, put=__cordl_internal_set__emailRequestResult)) bool  _emailRequestResult;

/// @brief Field _emailToConfirmTxt, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__emailToConfirmTxt, put=__cordl_internal_set__emailToConfirmTxt)) ::UnityW<::TMPro::TMP_Text>  _emailToConfirmTxt;

/// @brief Field _errorScreen, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorScreen, put=__cordl_internal_set__errorScreen)) ::UnityW<::GlobalNamespace::KIDUI_ErrorScreen>  _errorScreen;

/// @brief Field _hasCompletedSendEmailRequest, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasCompletedSendEmailRequest, put=__cordl_internal_set__hasCompletedSendEmailRequest)) bool  _hasCompletedSendEmailRequest;

/// @brief Field _mainScreen, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainScreen, put=__cordl_internal_set__mainScreen)) ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  _mainScreen;

/// @brief Field _minimumDelay, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__minimumDelay, put=__cordl_internal_set__minimumDelay)) int32_t  _minimumDelay;

/// @brief Field _setupScreen, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__setupScreen, put=__cordl_internal_set__setupScreen)) ::UnityW<::GlobalNamespace::KIDUI_SetupScreen>  _setupScreen;

/// @brief Field _submittedEmailAddress, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__submittedEmailAddress, put=__cordl_internal_set__submittedEmailAddress)) ::StringW  _submittedEmailAddress;

/// @brief Field _successScreen, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__successScreen, put=__cordl_internal_set__successScreen)) ::UnityW<::GlobalNamespace::KIDUI_EmailSuccess>  _successScreen;

/// @brief Method Awake, addr 0x5a5191c, size 0x2c4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::KIDUI_ConfirmScreen* New_ctor() ;

/// @brief Method NotifyOfResult, addr 0x5a51dcc, size 0x10, virtual false, abstract: false, final false
inline void NotifyOfResult(bool  success) ;

/// [AsyncStateMachine(typeof(KIDUI_ConfirmScreen::<OnBackPressed>d__17))]
/// @brief Method OnBackPressed, addr 0x5a51d24, size 0xa8, virtual false, abstract: false, final false
inline void OnBackPressed() ;

/// [AsyncStateMachine(typeof(KIDUI_ConfirmScreen::<OnConfirmPressed>d__16))]
/// @brief Method OnConfirmPressed, addr 0x5a51c78, size 0xac, virtual false, abstract: false, final false
inline void OnConfirmPressed() ;

/// @brief Method OnDisable, addr 0x5a51e9c, size 0x28, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEmailSubmitted, addr 0x5a51c18, size 0x60, virtual false, abstract: false, final false
inline void OnEmailSubmitted(::StringW  emailAddress) ;

/// @brief Method OnEnable, addr 0x5a51be0, size 0x38, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [AsyncStateMachine(typeof(KIDUI_ConfirmScreen::<ShowErrorScreen>d__19))]
/// @brief Method ShowErrorScreen, addr 0x5a51ddc, size 0xc0, virtual false, abstract: false, final false
inline void ShowErrorScreen(::StringW  errorMessage) ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis> const& __cordl_internal_get__animatedEllipsis() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>& __cordl_internal_get__animatedEllipsis() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get__backButton() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get__backButton() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__cancellationTokenSource() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get__confirmButton() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get__confirmButton() ;

constexpr bool const& __cordl_internal_get__emailRequestResult() const;

constexpr bool& __cordl_internal_get__emailRequestResult() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__emailToConfirmTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__emailToConfirmTxt() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_ErrorScreen> const& __cordl_internal_get__errorScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_ErrorScreen>& __cordl_internal_get__errorScreen() ;

constexpr bool const& __cordl_internal_get__hasCompletedSendEmailRequest() const;

constexpr bool& __cordl_internal_get__hasCompletedSendEmailRequest() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen> const& __cordl_internal_get__mainScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_MainScreen>& __cordl_internal_get__mainScreen() ;

constexpr int32_t const& __cordl_internal_get__minimumDelay() const;

constexpr int32_t& __cordl_internal_get__minimumDelay() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_SetupScreen> const& __cordl_internal_get__setupScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_SetupScreen>& __cordl_internal_get__setupScreen() ;

constexpr ::StringW const& __cordl_internal_get__submittedEmailAddress() const;

constexpr ::StringW& __cordl_internal_get__submittedEmailAddress() ;

constexpr ::UnityW<::GlobalNamespace::KIDUI_EmailSuccess> const& __cordl_internal_get__successScreen() const;

constexpr ::UnityW<::GlobalNamespace::KIDUI_EmailSuccess>& __cordl_internal_get__successScreen() ;

constexpr void __cordl_internal_set__animatedEllipsis(::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  value) ;

constexpr void __cordl_internal_set__backButton(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__confirmButton(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

constexpr void __cordl_internal_set__emailRequestResult(bool  value) ;

constexpr void __cordl_internal_set__emailToConfirmTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__errorScreen(::UnityW<::GlobalNamespace::KIDUI_ErrorScreen>  value) ;

constexpr void __cordl_internal_set__hasCompletedSendEmailRequest(bool  value) ;

constexpr void __cordl_internal_set__mainScreen(::UnityW<::GlobalNamespace::KIDUI_MainScreen>  value) ;

constexpr void __cordl_internal_set__minimumDelay(int32_t  value) ;

constexpr void __cordl_internal_set__setupScreen(::UnityW<::GlobalNamespace::KIDUI_SetupScreen>  value) ;

constexpr void __cordl_internal_set__submittedEmailAddress(::StringW  value) ;

constexpr void __cordl_internal_set__successScreen(::UnityW<::GlobalNamespace::KIDUI_EmailSuccess>  value) ;

/// @brief Method .ctor, addr 0x5a51ec4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUI_ConfirmScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_ConfirmScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUI_ConfirmScreen(KIDUI_ConfirmScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUI_ConfirmScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUI_ConfirmScreen(KIDUI_ConfirmScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3020};

/// [SerializeField]
/// @brief Field _emailToConfirmTxt, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____emailToConfirmTxt;

/// [SerializeField]
/// @brief Field _mainScreen, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_MainScreen>  ____mainScreen;

/// [SerializeField]
/// @brief Field _setupScreen, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_SetupScreen>  ____setupScreen;

/// [SerializeField]
/// @brief Field _errorScreen, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_ErrorScreen>  ____errorScreen;

/// [SerializeField]
/// @brief Field _successScreen, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_EmailSuccess>  ____successScreen;

/// [SerializeField]
/// @brief Field _animatedEllipsis, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  ____animatedEllipsis;

/// [SerializeField]
/// @brief Field _confirmButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ____confirmButton;

/// [SerializeField]
/// @brief Field _backButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ____backButton;

/// [SerializeField]
/// @brief Field _minimumDelay, offset: 0x60, size: 0x4, def value: None
 int32_t  ____minimumDelay;

/// @brief Field _submittedEmailAddress, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____submittedEmailAddress;

/// @brief Field _cancellationTokenSource, offset: 0x70, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____cancellationTokenSource;

/// @brief Field _hasCompletedSendEmailRequest, offset: 0x78, size: 0x1, def value: None
 bool  ____hasCompletedSendEmailRequest;

/// @brief Field _emailRequestResult, offset: 0x79, size: 0x1, def value: None
 bool  ____emailRequestResult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen, ____emailToConfirmTxt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen, ____mainScreen) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen, ____setupScreen) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen, ____errorScreen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen, ____successScreen) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen, ____animatedEllipsis) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen, ____confirmButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen, ____backButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen, ____minimumDelay) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen, ____submittedEmailAddress) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen, ____cancellationTokenSource) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen, ____hasCompletedSendEmailRequest) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUI_ConfirmScreen, ____emailRequestResult) == 0x79, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUI_ConfirmScreen) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
