#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPressableButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaPressableButton)
namespace GlobalNamespace {
class IClickable;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::Localization {
class LocalizedString;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaPressableButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaPressableButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPressableButton*, "", "GorillaPressableButton");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaPressableButton
class CORDL_TYPE GorillaPressableButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _localPlayerSubscribed, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get__localPlayerSubscribed, put=__cordl_internal_set__localPlayerSubscribed)) bool  _localPlayerSubscribed;

/// @brief Field _myTmpTxt2Set, offset 0xaa, size 0x1 
 __declspec(property(get=__cordl_internal_get__myTmpTxt2Set, put=__cordl_internal_set__myTmpTxt2Set)) bool  _myTmpTxt2Set;

/// @brief Field _myTmpTxtSet, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get__myTmpTxtSet, put=__cordl_internal_set__myTmpTxtSet)) bool  _myTmpTxtSet;

/// @brief Field _myTxtSet, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__myTxtSet, put=__cordl_internal_set__myTxtSet)) bool  _myTxtSet;

/// @brief Field _offLocalizedText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__offLocalizedText, put=__cordl_internal_set__offLocalizedText)) ::UnityEngine::Localization::LocalizedString*  _offLocalizedText;

/// @brief Field _onLocalizedText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__onLocalizedText, put=__cordl_internal_set__onLocalizedText)) ::UnityEngine::Localization::LocalizedString*  _onLocalizedText;

/// @brief Field _subscriptionChecked, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get__subscriptionChecked, put=__cordl_internal_set__subscriptionChecked)) bool  _subscriptionChecked;

/// @brief Field _useOnOffText, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get__useOnOffText, put=__cordl_internal_set__useOnOffText)) bool  _useOnOffText;

/// @brief Field allowNonSubscriberBypassCheck, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowNonSubscriberBypassCheck, put=__cordl_internal_set_allowNonSubscriberBypassCheck)) bool  allowNonSubscriberBypassCheck;

/// @brief Field buttonRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonRenderer, put=__cordl_internal_set_buttonRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  buttonRenderer;

/// @brief Field debounceTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_debounceTime, put=__cordl_internal_set_debounceTime)) float_t  debounceTime;

/// @brief Field isOn, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOn, put=__cordl_internal_set_isOn)) bool  isOn;

/// @brief Field isOwnerOnlyButton, offset 0x9b, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOwnerOnlyButton, put=__cordl_internal_set_isOwnerOnlyButton)) bool  isOwnerOnlyButton;

/// @brief Field isSubscriberOnlyButton, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSubscriberOnlyButton, put=__cordl_internal_set_isSubscriberOnlyButton)) bool  isSubscriberOnlyButton;

/// @brief Field myText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_myText, put=__cordl_internal_set_myText)) ::UnityW<::UnityEngine::UI::Text>  myText;

/// @brief Field myTmpText, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_myTmpText, put=__cordl_internal_set_myTmpText)) ::UnityW<::TMPro::TMP_Text>  myTmpText;

/// @brief Field myTmpText2, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_myTmpText2, put=__cordl_internal_set_myTmpText2)) ::UnityW<::TMPro::TMP_Text>  myTmpText2;

/// @brief Field nonSubscriberMaterial, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_nonSubscriberMaterial, put=__cordl_internal_set_nonSubscriberMaterial)) ::UnityW<::UnityEngine::Material>  nonSubscriberMaterial;

/// @brief Field offText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_offText, put=__cordl_internal_set_offText)) ::StringW  offText;

/// @brief Field onPressButton, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressButton, put=__cordl_internal_set_onPressButton)) ::UnityEngine::Events::UnityEvent*  onPressButton;

/// @brief Field onPressed, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressed, put=__cordl_internal_set_onPressed)) ::System::Action_2<::UnityW<::GlobalNamespace::GorillaPressableButton>,bool>*  onPressed;

/// @brief Field onText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onText, put=__cordl_internal_set_onText)) ::StringW  onText;

/// @brief Field pressButtonSoundIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_pressButtonSoundIndex, put=__cordl_internal_set_pressButtonSoundIndex)) int32_t  pressButtonSoundIndex;

/// @brief Field pressedMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pressedMaterial, put=__cordl_internal_set_pressedMaterial)) ::UnityW<::UnityEngine::Material>  pressedMaterial;

/// @brief Field testHandLeft, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_testHandLeft, put=__cordl_internal_set_testHandLeft)) bool  testHandLeft;

/// @brief Field testPress, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_testPress, put=__cordl_internal_set_testPress)) bool  testPress;

/// @brief Field touchTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_touchTime, put=__cordl_internal_set_touchTime)) float_t  touchTime;

/// @brief Field unpressedMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_unpressedMaterial, put=__cordl_internal_set_unpressedMaterial)) ::UnityW<::UnityEngine::Material>  unpressedMaterial;

/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr operator  ::GlobalNamespace::IClickable*() noexcept;

/// @brief Method AllowNonSubscribedPress, addr 0x599e5c0, size 0x8, virtual true, abstract: false, final false
inline bool AllowNonSubscribedPress() ;

/// @brief Method ButtonActivation, addr 0x599e828, size 0x4, virtual true, abstract: false, final false
inline void ButtonActivation() ;

/// @brief Method ButtonActivationWithHand, addr 0x599e82c, size 0x4, virtual true, abstract: false, final false
inline void ButtonActivationWithHand(bool  isLeftHand) ;

/// @brief Method CheckSubscription, addr 0x599d608, size 0x94, virtual false, abstract: false, final false
inline void CheckSubscription() ;

/// @brief Method Click, addr 0x599e5c8, size 0x4, virtual true, abstract: false, final true
inline void Click(bool  leftHand) ;

/// @brief Method IsOwnedByLocalPlayer, addr 0x599e4a0, size 0x120, virtual false, abstract: false, final false
inline bool IsOwnedByLocalPlayer() ;

static inline ::GlobalNamespace::GorillaPressableButton* New_ctor() ;

/// @brief Method OnDisable, addr 0x599d874, size 0x158, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x599d498, size 0x170, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x599ded4, size 0xec, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  collider) ;

/// @brief Method PressButton, addr 0x599dfc0, size 0x4e0, virtual false, abstract: false, final false
inline void PressButton(bool  isLeftHand) ;

/// @brief Method RefreshText, addr 0x599d9f8, size 0x23c, virtual true, abstract: false, final false
inline void RefreshText() ;

/// @brief Method ResetState, addr 0x599e830, size 0x10, virtual true, abstract: false, final false
inline void ResetState() ;

/// @brief Method SetIsSubscriberButton, addr 0x599d69c, size 0x1d8, virtual false, abstract: false, final false
inline void SetIsSubscriberButton(bool  newIsSubscriberToggle) ;

/// @brief Method SetOffText, addr 0x599dc34, size 0x150, virtual true, abstract: false, final false
inline void SetOffText(bool  setMyText, bool  setMyTmpText, bool  setMyTmpText2) ;

/// @brief Method SetOnText, addr 0x599dd84, size 0x150, virtual true, abstract: false, final false
inline void SetOnText(bool  setMyText, bool  setMyTmpText, bool  setMyTmpText2) ;

/// @brief Method SetPressedMaterial, addr 0x599e784, size 0x8, virtual false, abstract: false, final false
inline void SetPressedMaterial() ;

/// @brief Method SetRendererMaterial, addr 0x599e794, size 0x94, virtual false, abstract: false, final false
inline void SetRendererMaterial(::UnityEngine::Material*  mat) ;

/// @brief Method SetText, addr 0x599e840, size 0x128, virtual false, abstract: false, final false
inline void SetText(::StringW  newText) ;

/// @brief Method SetUnpressedMaterial, addr 0x599e78c, size 0x8, virtual false, abstract: false, final false
inline void SetUnpressedMaterial() ;

/// @brief Method SetUnsubscribedMaterial, addr 0x599e70c, size 0x78, virtual false, abstract: false, final false
inline void SetUnsubscribedMaterial() ;

/// @brief Method Start, addr 0x599d494, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateColor, addr 0x599e5cc, size 0x8, virtual true, abstract: false, final false
inline void UpdateColor() ;

/// @brief Method UpdateColorWithState, addr 0x599e5d4, size 0x138, virtual false, abstract: false, final false
inline void UpdateColorWithState(bool  state) ;

/// @brief Method UpdateSubscriptionState, addr 0x599d9cc, size 0x2c, virtual false, abstract: false, final false
inline void UpdateSubscriptionState(bool  subscribed) ;

constexpr bool const& __cordl_internal_get__localPlayerSubscribed() const;

constexpr bool& __cordl_internal_get__localPlayerSubscribed() ;

constexpr bool const& __cordl_internal_get__myTmpTxt2Set() const;

constexpr bool& __cordl_internal_get__myTmpTxt2Set() ;

constexpr bool const& __cordl_internal_get__myTmpTxtSet() const;

constexpr bool& __cordl_internal_get__myTmpTxtSet() ;

constexpr bool const& __cordl_internal_get__myTxtSet() const;

constexpr bool& __cordl_internal_get__myTxtSet() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get__offLocalizedText() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get__offLocalizedText() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get__onLocalizedText() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get__onLocalizedText() ;

constexpr bool const& __cordl_internal_get__subscriptionChecked() const;

constexpr bool& __cordl_internal_get__subscriptionChecked() ;

constexpr bool const& __cordl_internal_get__useOnOffText() const;

constexpr bool& __cordl_internal_get__useOnOffText() ;

constexpr bool const& __cordl_internal_get_allowNonSubscriberBypassCheck() const;

constexpr bool& __cordl_internal_get_allowNonSubscriberBypassCheck() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_buttonRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_buttonRenderer() ;

constexpr float_t const& __cordl_internal_get_debounceTime() const;

constexpr float_t& __cordl_internal_get_debounceTime() ;

constexpr bool const& __cordl_internal_get_isOn() const;

constexpr bool& __cordl_internal_get_isOn() ;

constexpr bool const& __cordl_internal_get_isOwnerOnlyButton() const;

constexpr bool& __cordl_internal_get_isOwnerOnlyButton() ;

constexpr bool const& __cordl_internal_get_isSubscriberOnlyButton() const;

constexpr bool& __cordl_internal_get_isSubscriberOnlyButton() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_myText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_myText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_myTmpText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_myTmpText() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_myTmpText2() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_myTmpText2() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_nonSubscriberMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_nonSubscriberMaterial() ;

constexpr ::StringW const& __cordl_internal_get_offText() const;

constexpr ::StringW& __cordl_internal_get_offText() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPressButton() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPressButton() ;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::GorillaPressableButton>,bool>* const& __cordl_internal_get_onPressed() const;

constexpr ::System::Action_2<::UnityW<::GlobalNamespace::GorillaPressableButton>,bool>*& __cordl_internal_get_onPressed() ;

constexpr ::StringW const& __cordl_internal_get_onText() const;

constexpr ::StringW& __cordl_internal_get_onText() ;

constexpr int32_t const& __cordl_internal_get_pressButtonSoundIndex() const;

constexpr int32_t& __cordl_internal_get_pressButtonSoundIndex() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_pressedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_pressedMaterial() ;

constexpr bool const& __cordl_internal_get_testHandLeft() const;

constexpr bool& __cordl_internal_get_testHandLeft() ;

constexpr bool const& __cordl_internal_get_testPress() const;

constexpr bool& __cordl_internal_get_testPress() ;

constexpr float_t const& __cordl_internal_get_touchTime() const;

constexpr float_t& __cordl_internal_get_touchTime() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_unpressedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_unpressedMaterial() ;

constexpr void __cordl_internal_set__localPlayerSubscribed(bool  value) ;

constexpr void __cordl_internal_set__myTmpTxt2Set(bool  value) ;

constexpr void __cordl_internal_set__myTmpTxtSet(bool  value) ;

constexpr void __cordl_internal_set__myTxtSet(bool  value) ;

constexpr void __cordl_internal_set__offLocalizedText(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set__onLocalizedText(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set__subscriptionChecked(bool  value) ;

constexpr void __cordl_internal_set__useOnOffText(bool  value) ;

constexpr void __cordl_internal_set_allowNonSubscriberBypassCheck(bool  value) ;

constexpr void __cordl_internal_set_buttonRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_debounceTime(float_t  value) ;

constexpr void __cordl_internal_set_isOn(bool  value) ;

constexpr void __cordl_internal_set_isOwnerOnlyButton(bool  value) ;

constexpr void __cordl_internal_set_isSubscriberOnlyButton(bool  value) ;

constexpr void __cordl_internal_set_myText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_myTmpText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_myTmpText2(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_nonSubscriberMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_offText(::StringW  value) ;

constexpr void __cordl_internal_set_onPressButton(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onPressed(::System::Action_2<::UnityW<::GlobalNamespace::GorillaPressableButton>,bool>*  value) ;

constexpr void __cordl_internal_set_onText(::StringW  value) ;

constexpr void __cordl_internal_set_pressButtonSoundIndex(int32_t  value) ;

constexpr void __cordl_internal_set_pressedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_testHandLeft(bool  value) ;

constexpr void __cordl_internal_set_testPress(bool  value) ;

constexpr void __cordl_internal_set_touchTime(float_t  value) ;

constexpr void __cordl_internal_set_unpressedMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x59978fc, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_onPressed, addr 0x599d334, size 0xb0, virtual false, abstract: false, final false
inline void add_onPressed(::System::Action_2<::UnityW<::GlobalNamespace::GorillaPressableButton>,bool>*  value) ;

/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* i___GlobalNamespace__IClickable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_onPressed, addr 0x599d3e4, size 0xb0, virtual false, abstract: false, final false
inline void remove_onPressed(::System::Action_2<::UnityW<::GlobalNamespace::GorillaPressableButton>,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaPressableButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaPressableButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaPressableButton(GorillaPressableButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaPressableButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaPressableButton(GorillaPressableButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2613};

/// @brief Field pressedMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___pressedMaterial;

/// @brief Field unpressedMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___unpressedMaterial;

/// @brief Field buttonRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___buttonRenderer;

/// @brief Field pressButtonSoundIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___pressButtonSoundIndex;

/// @brief Field isOn, offset: 0x3c, size: 0x1, def value: None
 bool  ___isOn;

/// @brief Field debounceTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___debounceTime;

/// @brief Field touchTime, offset: 0x44, size: 0x4, def value: None
 float_t  ___touchTime;

/// @brief Field testPress, offset: 0x48, size: 0x1, def value: None
 bool  ___testPress;

/// @brief Field testHandLeft, offset: 0x49, size: 0x1, def value: None
 bool  ___testHandLeft;

/// [SerializeField]
/// @brief Field _useOnOffText, offset: 0x4a, size: 0x1, def value: None
 bool  ____useOnOffText;

/// [TextArea]
/// @brief Field offText, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___offText;

/// [SerializeField]
/// @brief Field _offLocalizedText, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ____offLocalizedText;

/// [TextArea]
/// @brief Field onText, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___onText;

/// [SerializeField]
/// @brief Field _onLocalizedText, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ____onLocalizedText;

/// [SerializeField]
/// [Tooltip("Use this one when you can. Don\'t use MyText if you can help it!")]
/// @brief Field myTmpText, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___myTmpText;

/// [SerializeField]
/// [Tooltip("Use this one when you can. Don\'t use MyText if you can help it!")]
/// @brief Field myTmpText2, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___myTmpText2;

/// @brief Field myText, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___myText;

/// @brief Field isSubscriberOnlyButton, offset: 0x88, size: 0x1, def value: None
 bool  ___isSubscriberOnlyButton;

/// @brief Field nonSubscriberMaterial, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___nonSubscriberMaterial;

/// @brief Field allowNonSubscriberBypassCheck, offset: 0x98, size: 0x1, def value: None
 bool  ___allowNonSubscriberBypassCheck;

/// @brief Field _localPlayerSubscribed, offset: 0x99, size: 0x1, def value: None
 bool  ____localPlayerSubscribed;

/// @brief Field _subscriptionChecked, offset: 0x9a, size: 0x1, def value: None
 bool  ____subscriptionChecked;

/// [Tooltip("For buttons on cosmetics: when true, only the player wearing this cosmetic can press the button.Leave off for world/UI buttons.")]
/// @brief Field isOwnerOnlyButton, offset: 0x9b, size: 0x1, def value: None
 bool  ___isOwnerOnlyButton;

/// [Space]
/// @brief Field onPressButton, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPressButton;

/// @brief Field _myTxtSet, offset: 0xa8, size: 0x1, def value: None
 bool  ____myTxtSet;

/// @brief Field _myTmpTxtSet, offset: 0xa9, size: 0x1, def value: None
 bool  ____myTmpTxtSet;

/// @brief Field _myTmpTxt2Set, offset: 0xaa, size: 0x1, def value: None
 bool  ____myTmpTxt2Set;

/// [CompilerGenerated]
/// @brief Field onPressed, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::GlobalNamespace::GorillaPressableButton>,bool>*  ___onPressed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___pressedMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___unpressedMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___buttonRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___pressButtonSoundIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___isOn) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___debounceTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___touchTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___testPress) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___testHandLeft) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ____useOnOffText) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___offText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ____offLocalizedText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___onText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ____onLocalizedText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___myTmpText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___myTmpText2) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___myText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___isSubscriberOnlyButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___nonSubscriberMaterial) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___allowNonSubscriberBypassCheck) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ____localPlayerSubscribed) == 0x99, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ____subscriptionChecked) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___isOwnerOnlyButton) == 0x9b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___onPressButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ____myTxtSet) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ____myTmpTxtSet) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ____myTmpTxt2Set) == 0xaa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaPressableButton, ___onPressed) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPressableButton) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
