#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsentScreen.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ConsentScreen_PopupState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConsentScreen)
namespace GlobalNamespace {
class ConsentHoldButton;
}
namespace GlobalNamespace {
struct ConsentScreen_ConsentCost;
}
namespace GlobalNamespace {
struct ConsentScreen_PopupState;
}
namespace GlobalNamespace {
struct ConsentScreen__OnAsyncWorkComplete_d__31;
}
namespace GlobalNamespace {
class ConsentScreen___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ConsentScreen;
}
namespace GlobalNamespace {
class ConsentScreen___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConsentScreen*);
MARK_REF_T(::GlobalNamespace::ConsentScreen___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsentScreen*, "", "ConsentScreen");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsentScreen___c*, "", "ConsentScreen/<>c");
// Dependencies ConsentScreen::PopupState, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConsentScreen
class CORDL_TYPE ConsentScreen : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ConsentCost = ::GlobalNamespace::ConsentScreen_ConsentCost;

using PopupState = ::GlobalNamespace::ConsentScreen_PopupState;

using _OnAsyncWorkComplete_d__31 = ::GlobalNamespace::ConsentScreen__OnAsyncWorkComplete_d__31;

using __c = ::GlobalNamespace::ConsentScreen___c;

/// @brief Field _activeReference, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeReference, put=setStaticF__activeReference)) ::UnityW<::GlobalNamespace::ConsentScreen>  _activeReference;

/// @brief Field appearHapticDuration, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_appearHapticDuration, put=__cordl_internal_set_appearHapticDuration)) float_t  appearHapticDuration;

/// @brief Field appearHapticScale, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_appearHapticScale, put=__cordl_internal_set_appearHapticScale)) float_t  appearHapticScale;

/// @brief Field appearSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_appearSound, put=__cordl_internal_set_appearSound)) ::UnityW<::UnityEngine::AudioSource>  appearSound;

/// @brief Field dismissDistanceMeters, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dismissDistanceMeters, put=__cordl_internal_set_dismissDistanceMeters)) float_t  dismissDistanceMeters;

/// @brief Field faceOffsetMeters, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_faceOffsetMeters, put=__cordl_internal_set_faceOffsetMeters)) float_t  faceOffsetMeters;

/// @brief Field fallbackDownMeters, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fallbackDownMeters, put=__cordl_internal_set_fallbackDownMeters)) float_t  fallbackDownMeters;

/// @brief Field fallbackForwardMeters, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_fallbackForwardMeters, put=__cordl_internal_set_fallbackForwardMeters)) float_t  fallbackForwardMeters;

/// @brief Field hasPromptOrigin, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPromptOrigin, put=__cordl_internal_set_hasPromptOrigin)) bool  hasPromptOrigin;

/// @brief Field hoverHeightMeters, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_hoverHeightMeters, put=__cordl_internal_set_hoverHeightMeters)) float_t  hoverHeightMeters;

/// @brief Field noButton, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_noButton, put=__cordl_internal_set_noButton)) ::UnityW<::GlobalNamespace::ConsentHoldButton>  noButton;

/// @brief Field pendingCallback, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingCallback, put=__cordl_internal_set_pendingCallback)) ::System::Action_2<bool,::System::Action_1<::StringW>*>*  pendingCallback;

/// @brief Field popupRoot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_popupRoot, put=__cordl_internal_set_popupRoot)) ::UnityW<::UnityEngine::GameObject>  popupRoot;

/// @brief Field processingText, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_processingText, put=__cordl_internal_set_processingText)) ::StringW  processingText;

/// @brief Field promptOrigin, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_promptOrigin, put=__cordl_internal_set_promptOrigin)) ::UnityEngine::Vector3  promptOrigin;

/// @brief Field promptText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_promptText, put=__cordl_internal_set_promptText)) ::UnityW<::TMPro::TextMeshProUGUI>  promptText;

/// @brief Field resultDisplaySeconds, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_resultDisplaySeconds, put=__cordl_internal_set_resultDisplaySeconds)) float_t  resultDisplaySeconds;

/// @brief Field resultHideAt, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_resultHideAt, put=__cordl_internal_set_resultHideAt)) float_t  resultHideAt;

/// @brief Field resultText, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultText, put=__cordl_internal_set_resultText)) ::UnityW<::TMPro::TextMeshProUGUI>  resultText;

/// @brief Field state, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::ConsentScreen_PopupState  state;

/// @brief Field watchAnchor, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_watchAnchor, put=__cordl_internal_set_watchAnchor)) ::UnityW<::UnityEngine::Transform>  watchAnchor;

/// @brief Field yesButton, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_yesButton, put=__cordl_internal_set_yesButton)) ::UnityW<::GlobalNamespace::ConsentHoldButton>  yesButton;

/// @brief Method Awake, addr 0x5a6b0d0, size 0x2c0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ComposePrompt, addr 0x5a6b7f8, size 0x310, virtual false, abstract: false, final false
static inline ::StringW ComposePrompt(::StringW  itemDisplayName, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*  costs) ;

/// @brief Method Hide, addr 0x5a6c4e8, size 0x38, virtual false, abstract: false, final false
inline void Hide() ;

/// @brief Method LateUpdate, addr 0x5a6c788, size 0x10, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::ConsentScreen* New_ctor() ;

/// [AsyncStateMachine(typeof(ConsentScreen::<OnAsyncWorkComplete>d__31))]
/// @brief Method OnAsyncWorkComplete, addr 0x5a6c520, size 0xc4, virtual false, abstract: false, final false
inline void OnAsyncWorkComplete(::StringW  result) ;

/// @brief Method OnChoice, addr 0x5a6c380, size 0xf0, virtual false, abstract: false, final false
inline void OnChoice(bool  consented) ;

/// @brief Method OnDestroy, addr 0x5a6b390, size 0xb4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PlayAppearCue, addr 0x5a6c1b8, size 0x1c8, virtual false, abstract: false, final false
inline void PlayAppearCue() ;

/// @brief Method ResolveHead, addr 0x5a6c008, size 0x1b0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> ResolveHead() ;

/// @brief Method ResolvePlayerScale, addr 0x5a6c978, size 0x21c, virtual false, abstract: false, final false
static inline float_t ResolvePlayerScale() ;

/// @brief Method ResolveWatchAnchor, addr 0x5a6c798, size 0x1e0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> ResolveWatchAnchor() ;

/// @brief Method SetButtonsVisible, addr 0x5a6bb08, size 0x84, virtual false, abstract: false, final false
inline void SetButtonsVisible(bool  visible) ;

/// @brief Method ShowPrompt, addr 0x5a6b660, size 0x198, virtual false, abstract: false, final false
inline void ShowPrompt(::StringW  itemDisplayName, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*  costs, ::System::Action_2<bool,::System::Action_1<::StringW>*>*  onConsentChosen) ;

/// @brief Method ShowResultText, addr 0x5a6c470, size 0x78, virtual false, abstract: false, final false
inline void ShowResultText(::StringW  message) ;

/// @brief Method StartConsentFlow, addr 0x5a6b444, size 0x21c, virtual false, abstract: false, final false
static inline void StartConsentFlow(::StringW  itemDisplayName, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsentScreen_ConsentCost>*  costs, ::System::Action_2<bool,::System::Action_1<::StringW>*>*  OnConsentChosen) ;

/// @brief Method Update, addr 0x5a6c5e4, size 0x1a4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdatePopupTransform, addr 0x5a6bb8c, size 0x47c, virtual false, abstract: false, final false
inline void UpdatePopupTransform() ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__24_0, addr 0x5a6cc10, size 0x8, virtual false, abstract: false, final false
inline void _Awake_b__24_0() ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__24_1, addr 0x5a6cc18, size 0x8, virtual false, abstract: false, final false
inline void _Awake_b__24_1() ;

constexpr float_t const& __cordl_internal_get_appearHapticDuration() const;

constexpr float_t& __cordl_internal_get_appearHapticDuration() ;

constexpr float_t const& __cordl_internal_get_appearHapticScale() const;

constexpr float_t& __cordl_internal_get_appearHapticScale() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_appearSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_appearSound() ;

constexpr float_t const& __cordl_internal_get_dismissDistanceMeters() const;

constexpr float_t& __cordl_internal_get_dismissDistanceMeters() ;

constexpr float_t const& __cordl_internal_get_faceOffsetMeters() const;

constexpr float_t& __cordl_internal_get_faceOffsetMeters() ;

constexpr float_t const& __cordl_internal_get_fallbackDownMeters() const;

constexpr float_t& __cordl_internal_get_fallbackDownMeters() ;

constexpr float_t const& __cordl_internal_get_fallbackForwardMeters() const;

constexpr float_t& __cordl_internal_get_fallbackForwardMeters() ;

constexpr bool const& __cordl_internal_get_hasPromptOrigin() const;

constexpr bool& __cordl_internal_get_hasPromptOrigin() ;

constexpr float_t const& __cordl_internal_get_hoverHeightMeters() const;

constexpr float_t& __cordl_internal_get_hoverHeightMeters() ;

constexpr ::UnityW<::GlobalNamespace::ConsentHoldButton> const& __cordl_internal_get_noButton() const;

constexpr ::UnityW<::GlobalNamespace::ConsentHoldButton>& __cordl_internal_get_noButton() ;

constexpr ::System::Action_2<bool,::System::Action_1<::StringW>*>* const& __cordl_internal_get_pendingCallback() const;

constexpr ::System::Action_2<bool,::System::Action_1<::StringW>*>*& __cordl_internal_get_pendingCallback() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_popupRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_popupRoot() ;

constexpr ::StringW const& __cordl_internal_get_processingText() const;

constexpr ::StringW& __cordl_internal_get_processingText() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_promptOrigin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_promptOrigin() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_promptText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_promptText() ;

constexpr float_t const& __cordl_internal_get_resultDisplaySeconds() const;

constexpr float_t& __cordl_internal_get_resultDisplaySeconds() ;

constexpr float_t const& __cordl_internal_get_resultHideAt() const;

constexpr float_t& __cordl_internal_get_resultHideAt() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_resultText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_resultText() ;

constexpr ::GlobalNamespace::ConsentScreen_PopupState const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::ConsentScreen_PopupState& __cordl_internal_get_state() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_watchAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_watchAnchor() ;

constexpr ::UnityW<::GlobalNamespace::ConsentHoldButton> const& __cordl_internal_get_yesButton() const;

constexpr ::UnityW<::GlobalNamespace::ConsentHoldButton>& __cordl_internal_get_yesButton() ;

constexpr void __cordl_internal_set_appearHapticDuration(float_t  value) ;

constexpr void __cordl_internal_set_appearHapticScale(float_t  value) ;

constexpr void __cordl_internal_set_appearSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_dismissDistanceMeters(float_t  value) ;

constexpr void __cordl_internal_set_faceOffsetMeters(float_t  value) ;

constexpr void __cordl_internal_set_fallbackDownMeters(float_t  value) ;

constexpr void __cordl_internal_set_fallbackForwardMeters(float_t  value) ;

constexpr void __cordl_internal_set_hasPromptOrigin(bool  value) ;

constexpr void __cordl_internal_set_hoverHeightMeters(float_t  value) ;

constexpr void __cordl_internal_set_noButton(::UnityW<::GlobalNamespace::ConsentHoldButton>  value) ;

constexpr void __cordl_internal_set_pendingCallback(::System::Action_2<bool,::System::Action_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_popupRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_processingText(::StringW  value) ;

constexpr void __cordl_internal_set_promptOrigin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_promptText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_resultDisplaySeconds(float_t  value) ;

constexpr void __cordl_internal_set_resultHideAt(float_t  value) ;

constexpr void __cordl_internal_set_resultText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::ConsentScreen_PopupState  value) ;

constexpr void __cordl_internal_set_watchAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_yesButton(::UnityW<::GlobalNamespace::ConsentHoldButton>  value) ;

/// @brief Method .ctor, addr 0x5a6cb94, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::ConsentScreen> getStaticF__activeReference() ;

static inline void setStaticF__activeReference(::UnityW<::GlobalNamespace::ConsentScreen>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsentScreen() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsentScreen", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsentScreen(ConsentScreen && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsentScreen", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsentScreen(ConsentScreen const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3101};

/// [Header("Wiring")]
/// [SerializeField]
/// @brief Field popupRoot, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___popupRoot;

/// [SerializeField]
/// @brief Field promptText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___promptText;

/// [SerializeField]
/// @brief Field resultText, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___resultText;

/// [SerializeField]
/// @brief Field yesButton, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ConsentHoldButton>  ___yesButton;

/// [SerializeField]
/// @brief Field noButton, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ConsentHoldButton>  ___noButton;

/// [Header("Timing")]
/// [SerializeField]
/// @brief Field resultDisplaySeconds, offset: 0x48, size: 0x4, def value: None
 float_t  ___resultDisplaySeconds;

/// [Header("Dismissal")]
/// [Tooltip("Prompt auto-dismisses (counts as NO) when the player moves this many meters from where it appeared.")]
/// [SerializeField]
/// @brief Field dismissDistanceMeters, offset: 0x4c, size: 0x4, def value: None
 float_t  ___dismissDistanceMeters;

/// [Header("Popup Cue")]
/// [SerializeField]
/// @brief Field appearSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___appearSound;

/// [Tooltip("Haptic buzz on the watch hand when the prompt appears")]
/// [SerializeField]
/// @brief Field appearHapticScale, offset: 0x58, size: 0x4, def value: None
 float_t  ___appearHapticScale;

/// [SerializeField]
/// @brief Field appearHapticDuration, offset: 0x5c, size: 0x4, def value: None
 float_t  ___appearHapticDuration;

/// [Header("Placement")]
/// [Tooltip("How far above the VStump watch the popup floats, in meters at 1x player scale.")]
/// [SerializeField]
/// @brief Field hoverHeightMeters, offset: 0x60, size: 0x4, def value: None
 float_t  ___hoverHeightMeters;

/// [SerializeField]
/// @brief Field faceOffsetMeters, offset: 0x64, size: 0x4, def value: None
 float_t  ___faceOffsetMeters;

/// [Tooltip("Used only when the watch can\'t be found: popup floats this far in front of the face.")]
/// [SerializeField]
/// @brief Field fallbackForwardMeters, offset: 0x68, size: 0x4, def value: None
 float_t  ___fallbackForwardMeters;

/// [Tooltip("Used only when the watch can\'t be found: popup sits this far below eye level.")]
/// [SerializeField]
/// @brief Field fallbackDownMeters, offset: 0x6c, size: 0x4, def value: None
 float_t  ___fallbackDownMeters;

/// [Header("Text")]
/// [SerializeField]
/// @brief Field processingText, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___processingText;

/// @brief Field state, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::ConsentScreen_PopupState  ___state;

/// @brief Field pendingCallback, offset: 0x80, size: 0x8, def value: None
 ::System::Action_2<bool,::System::Action_1<::StringW>*>*  ___pendingCallback;

/// @brief Field promptOrigin, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___promptOrigin;

/// @brief Field hasPromptOrigin, offset: 0x94, size: 0x1, def value: None
 bool  ___hasPromptOrigin;

/// @brief Field resultHideAt, offset: 0x98, size: 0x4, def value: None
 float_t  ___resultHideAt;

/// @brief Field watchAnchor, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___watchAnchor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___popupRoot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___promptText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___resultText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___yesButton) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___noButton) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___resultDisplaySeconds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___dismissDistanceMeters) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___appearSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___appearHapticScale) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___appearHapticDuration) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___hoverHeightMeters) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___faceOffsetMeters) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___fallbackForwardMeters) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___fallbackDownMeters) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___processingText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___state) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___pendingCallback) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___promptOrigin) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___hasPromptOrigin) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___resultHideAt) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsentScreen, ___watchAnchor) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConsentScreen) == 0xa8, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConsentScreen/<>c
class CORDL_TYPE ConsentScreen___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::ConsentScreen___c*  __9;

/// @brief Field <>9__26_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_0, put=setStaticF___9__26_0)) ::System::Action_1<::StringW>*  __9__26_0;

static inline ::GlobalNamespace::ConsentScreen___c* New_ctor() ;

/// @brief Method <StartConsentFlow>b__26_0, addr 0x5a6cc90, size 0x4, virtual false, abstract: false, final false
inline void _StartConsentFlow_b__26_0(::StringW  _) ;

/// @brief Method .ctor, addr 0x5a6cc88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::ConsentScreen___c* getStaticF___9() ;

static inline ::System::Action_1<::StringW>* getStaticF___9__26_0() ;

static inline void setStaticF___9(::GlobalNamespace::ConsentScreen___c*  value) ;

static inline void setStaticF___9__26_0(::System::Action_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConsentScreen___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConsentScreen___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConsentScreen___c(ConsentScreen___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConsentScreen___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConsentScreen___c(ConsentScreen___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3099};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ConsentScreen___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
