#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUIToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_def.hpp"
#include "UnityEngine/UI/zzzz__Slider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(KIDUIToggle)
namespace GlobalNamespace {
class ControllerBehaviour;
}
namespace GlobalNamespace {
class KIDUIToggle__AnimateSlider_d__54;
}
namespace GlobalNamespace {
class KIDUIToggle___c__DisplayClass44_0;
}
namespace GlobalNamespace {
class KIDUIToggle___c__DisplayClass45_0;
}
namespace GlobalNamespace {
class KIDUIToggle___c__DisplayClass46_0;
}
namespace GlobalNamespace {
class KIDUIToggle___c__DisplayClass47_0;
}
namespace GlobalNamespace {
class KIDUIToggle___c__DisplayClass48_0;
}
namespace GlobalNamespace {
class KIDUIToggle___c__DisplayClass49_0;
}
namespace GlobalNamespace {
class UXSettings;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class KIDUIToggle;
}
namespace GlobalNamespace {
class KIDUIToggle__AnimateSlider_d__54;
}
namespace GlobalNamespace {
class KIDUIToggle___c__DisplayClass44_0;
}
namespace GlobalNamespace {
class KIDUIToggle___c__DisplayClass45_0;
}
namespace GlobalNamespace {
class KIDUIToggle___c__DisplayClass46_0;
}
namespace GlobalNamespace {
class KIDUIToggle___c__DisplayClass47_0;
}
namespace GlobalNamespace {
class KIDUIToggle___c__DisplayClass48_0;
}
namespace GlobalNamespace {
class KIDUIToggle___c__DisplayClass49_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::KIDUIToggle*);
MARK_REF_T(::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*);
MARK_REF_T(::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0*);
MARK_REF_T(::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0*);
MARK_REF_T(::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0*);
MARK_REF_T(::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0*);
MARK_REF_T(::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0*);
MARK_REF_T(::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIToggle*, "", "KIDUIToggle");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*, "", "KIDUIToggle/<AnimateSlider>d__54");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0*, "", "KIDUIToggle/<>c__DisplayClass44_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0*, "", "KIDUIToggle/<>c__DisplayClass45_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0*, "", "KIDUIToggle/<>c__DisplayClass46_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0*, "", "KIDUIToggle/<>c__DisplayClass47_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0*, "", "KIDUIToggle/<>c__DisplayClass48_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0*, "", "KIDUIToggle/<>c__DisplayClass49_0");
// Dependencies UnityEngine.Color, UnityEngine.UI.ColorBlock, UnityEngine.UI.Slider
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIToggle
class CORDL_TYPE KIDUIToggle : public ::UnityEngine::UI::Slider {
public:
// Declarations
using _AnimateSlider_d__54 = ::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54;

using __c__DisplayClass44_0 = ::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0;

using __c__DisplayClass45_0 = ::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0;

using __c__DisplayClass46_0 = ::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0;

using __c__DisplayClass47_0 = ::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0;

using __c__DisplayClass48_0 = ::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0;

using __c__DisplayClass49_0 = ::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0;

 __declspec(property(get=get_CurrentValue, put=set_CurrentValue)) bool  CurrentValue;

 __declspec(property(get=get_IsOn)) bool  IsOn;

/// @brief Field <CurrentValue>k__BackingField, offset 0x338, size 0x1 
 __declspec(property(get=__cordl_internal_get__CurrentValue_k__BackingField, put=__cordl_internal_set__CurrentValue_k__BackingField)) bool  _CurrentValue_k__BackingField;

/// @brief Field _animationCoroutine, offset 0x330, size 0x8 
 __declspec(property(get=__cordl_internal_get__animationCoroutine, put=__cordl_internal_set__animationCoroutine)) ::UnityEngine::Coroutine*  _animationCoroutine;

/// @brief Field _animationDuration, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get__animationDuration, put=__cordl_internal_set__animationDuration)) float_t  _animationDuration;

/// @brief Field _borderColors, offset 0x248, size 0x58 
 __declspec(property(get=__cordl_internal_get__borderColors, put=__cordl_internal_set__borderColors)) ::UnityEngine::UI::ColorBlock  _borderColors;

/// @brief Field _borderHeightRatio, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get__borderHeightRatio, put=__cordl_internal_set__borderHeightRatio)) float_t  _borderHeightRatio;

/// @brief Field _borderImg, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__borderImg, put=__cordl_internal_set__borderImg)) ::UnityW<::UnityEngine::UI::Image>  _borderImg;

/// @brief Field _borderImgRef, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__borderImgRef, put=__cordl_internal_set__borderImgRef)) ::UnityW<::UnityEngine::RectTransform>  _borderImgRef;

/// @brief Field _canTrigger, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__canTrigger, put=setStaticF__canTrigger)) bool  _canTrigger;

/// @brief Field _cbUXSettings, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get__cbUXSettings, put=__cordl_internal_set__cbUXSettings)) ::UnityW<::GlobalNamespace::UXSettings>  _cbUXSettings;

/// @brief Field _disabledBorderSize, offset 0x2a4, size 0x4 
 __declspec(property(get=__cordl_internal_get__disabledBorderSize, put=__cordl_internal_set__disabledBorderSize)) float_t  _disabledBorderSize;

/// @brief Field _fillColors, offset 0x1f0, size 0x58 
 __declspec(property(get=__cordl_internal_get__fillColors, put=__cordl_internal_set__fillColors)) ::UnityEngine::UI::ColorBlock  _fillColors;

/// @brief Field _fillImg, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__fillImg, put=__cordl_internal_set__fillImg)) ::UnityW<::UnityEngine::UI::Image>  _fillImg;

/// @brief Field _fillInactiveImg, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get__fillInactiveImg, put=__cordl_internal_set__fillInactiveImg)) ::UnityW<::UnityEngine::UI::Image>  _fillInactiveImg;

/// @brief Field _handleColors, offset 0x2b4, size 0x58 
 __declspec(property(get=__cordl_internal_get__handleColors, put=__cordl_internal_set__handleColors)) ::UnityEngine::UI::ColorBlock  _handleColors;

/// @brief Field _handleImg, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__handleImg, put=__cordl_internal_set__handleImg)) ::UnityW<::UnityEngine::UI::Image>  _handleImg;

/// @brief Field _handleLockIcon, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__handleLockIcon, put=__cordl_internal_set__handleLockIcon)) ::UnityW<::UnityEngine::UI::Image>  _handleLockIcon;

/// @brief Field _handleUnlockIcon, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__handleUnlockIcon, put=__cordl_internal_set__handleUnlockIcon)) ::UnityW<::UnityEngine::UI::Image>  _handleUnlockIcon;

/// @brief Field _highlightedBorderSize, offset 0x2a8, size 0x4 
 __declspec(property(get=__cordl_internal_get__highlightedBorderSize, put=__cordl_internal_set__highlightedBorderSize)) float_t  _highlightedBorderSize;

/// @brief Field _initValue, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get__initValue, put=__cordl_internal_set__initValue)) float_t  _initValue;

/// @brief Field _isDisabled, offset 0x329, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDisabled, put=__cordl_internal_set__isDisabled)) bool  _isDisabled;

/// @brief Field _lockActiveColor, offset 0x1b0, size 0x10 
 __declspec(property(get=__cordl_internal_get__lockActiveColor, put=__cordl_internal_set__lockActiveColor)) ::UnityEngine::Color  _lockActiveColor;

/// @brief Field _lockIcon, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__lockIcon, put=__cordl_internal_set__lockIcon)) ::UnityW<::UnityEngine::UI::Image>  _lockIcon;

/// @brief Field _lockInactiveColor, offset 0x1c0, size 0x10 
 __declspec(property(get=__cordl_internal_get__lockInactiveColor, put=__cordl_internal_set__lockInactiveColor)) ::UnityEngine::Color  _lockInactiveColor;

/// @brief Field _normalBorderSize, offset 0x2a0, size 0x4 
 __declspec(property(get=__cordl_internal_get__normalBorderSize, put=__cordl_internal_set__normalBorderSize)) float_t  _normalBorderSize;

/// @brief Field _onToggleChanged, offset 0x320, size 0x8 
 __declspec(property(get=__cordl_internal_get__onToggleChanged, put=__cordl_internal_set__onToggleChanged)) ::UnityEngine::Events::UnityEvent*  _onToggleChanged;

/// @brief Field _onToggleOff, offset 0x318, size 0x8 
 __declspec(property(get=__cordl_internal_get__onToggleOff, put=__cordl_internal_set__onToggleOff)) ::UnityEngine::Events::UnityEvent*  _onToggleOff;

/// @brief Field _onToggleOn, offset 0x310, size 0x8 
 __declspec(property(get=__cordl_internal_get__onToggleOn, put=__cordl_internal_set__onToggleOn)) ::UnityEngine::Events::UnityEvent*  _onToggleOn;

/// @brief Field _pressedBorderSize, offset 0x2ac, size 0x4 
 __declspec(property(get=__cordl_internal_get__pressedBorderSize, put=__cordl_internal_set__pressedBorderSize)) float_t  _pressedBorderSize;

/// @brief Field _previousValue, offset 0x328, size 0x1 
 __declspec(property(get=__cordl_internal_get__previousValue, put=__cordl_internal_set__previousValue)) bool  _previousValue;

/// @brief Field _selectedBorderSize, offset 0x2b0, size 0x4 
 __declspec(property(get=__cordl_internal_get__selectedBorderSize, put=__cordl_internal_set__selectedBorderSize)) float_t  _selectedBorderSize;

/// @brief Field _toggleEase, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggleEase, put=__cordl_internal_set__toggleEase)) ::UnityEngine::AnimationCurve*  _toggleEase;

/// @brief Field _triggeredThisFrame, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__triggeredThisFrame, put=setStaticF__triggeredThisFrame)) bool  _triggeredThisFrame;

/// @brief Field _unlockIcon, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__unlockIcon, put=__cordl_internal_set__unlockIcon)) ::UnityW<::UnityEngine::UI::Image>  _unlockIcon;

/// @brief Field controllerBehaviour, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllerBehaviour, put=__cordl_internal_set_controllerBehaviour)) ::UnityW<::GlobalNamespace::ControllerBehaviour>  controllerBehaviour;

/// @brief Field inside, offset 0x348, size 0x1 
 __declspec(property(get=__cordl_internal_get_inside, put=__cordl_internal_set_inside)) bool  inside;

/// [IteratorStateMachine(typeof(KIDUIToggle::<AnimateSlider>d__54))]
/// @brief Method AnimateSlider, addr 0x5a4bb20, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AnimateSlider() ;

/// @brief Method Awake, addr 0x5a4abb0, size 0x198, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method LateUpdate, addr 0x5a4c188, size 0x3f4, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::KIDUIToggle* New_ctor() ;

/// @brief Method OnDisable, addr 0x5a4c57c, size 0xf8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a4addc, size 0x11c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPointerDown, addr 0x5a4b030, size 0x3c, virtual true, abstract: false, final false
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0x5a4b08c, size 0x1c, virtual true, abstract: false, final false
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  pointerEventData) ;

/// @brief Method OnPointerExit, addr 0x5a4b154, size 0x18, virtual true, abstract: false, final false
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  pointerEventData) ;

/// @brief Method PostUpdate, addr 0x5a4bbb4, size 0x520, virtual false, abstract: false, final false
inline void PostUpdate() ;

/// @brief Method RegisterOnChangeEvent, addr 0x5a4b39c, size 0xd0, virtual false, abstract: false, final false
inline void RegisterOnChangeEvent(::System::Action*  onChange) ;

/// @brief Method RegisterToggleOffEvent, addr 0x5a4b6fc, size 0xd0, virtual false, abstract: false, final false
inline void RegisterToggleOffEvent(::System::Action*  onToggle) ;

/// @brief Method RegisterToggleOnEvent, addr 0x5a4b54c, size 0xd0, virtual false, abstract: false, final false
inline void RegisterToggleOnEvent(::System::Action*  onToggle) ;

/// @brief Method SetBackgroundActive, addr 0x5a4c868, size 0x6c, virtual false, abstract: false, final false
inline void SetBackgroundActive(bool  isActive) ;

/// @brief Method SetBackgroundLocksActive, addr 0x5a4ca2c, size 0xb4, virtual false, abstract: false, final false
inline void SetBackgroundLocksActive(bool  isActive) ;

/// @brief Method SetBorderSize, addr 0x5a4c814, size 0x54, virtual false, abstract: false, final false
inline void SetBorderSize(float_t  borderScale) ;

/// @brief Method SetColors, addr 0x5a4b364, size 0x38, virtual false, abstract: false, final false
inline void SetColors() ;

/// @brief Method SetDisabled, addr 0x5a4c710, size 0x94, virtual false, abstract: false, final false
inline void SetDisabled(bool  isLockedButEnabled) ;

/// @brief Method SetHighlighted, addr 0x5a4b0a8, size 0xac, virtual false, abstract: false, final false
inline void SetHighlighted() ;

/// @brief Method SetNormal, addr 0x5a4b16c, size 0xac, virtual false, abstract: false, final false
inline void SetNormal() ;

/// @brief Method SetPressed, addr 0x5a4c980, size 0xac, virtual false, abstract: false, final false
inline void SetPressed() ;

/// @brief Method SetSelected, addr 0x5a4c8d4, size 0xac, virtual false, abstract: false, final false
inline void SetSelected() ;

/// @brief Method SetStateAndStartAnimation, addr 0x5a4b8ac, size 0x250, virtual false, abstract: false, final false
inline void SetStateAndStartAnimation(bool  state, bool  skipAnim) ;

/// @brief Method SetSwitchColors, addr 0x5a4c7a4, size 0x70, virtual false, abstract: false, final false
inline void SetSwitchColors(::UnityEngine::Color  borderColor, ::UnityEngine::Color  handleColor, ::UnityEngine::Color  fillColor) ;

/// @brief Method SetValue, addr 0x5a4bafc, size 0x24, virtual false, abstract: false, final false
inline void SetValue(bool  newValue) ;

/// @brief Method SetupSliderComponent, addr 0x5a4b2cc, size 0x98, virtual true, abstract: false, final false
inline void SetupSliderComponent() ;

/// @brief Method SetupToggleComponent, addr 0x5a4b218, size 0xb4, virtual true, abstract: false, final false
inline void SetupToggleComponent() ;

/// @brief Method Start, addr 0x5a4adb8, size 0x24, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Toggle, addr 0x5a4b06c, size 0x20, virtual false, abstract: false, final false
inline void Toggle() ;

/// @brief Method UnregisterOnChangeEvent, addr 0x5a4b474, size 0xd0, virtual false, abstract: false, final false
inline void UnregisterOnChangeEvent(::System::Action*  onChange) ;

/// @brief Method UnregisterToggleOffEvent, addr 0x5a4b7d4, size 0xd0, virtual false, abstract: false, final false
inline void UnregisterToggleOffEvent(::System::Action*  onToggle) ;

/// @brief Method UnregisterToggleOnEvent, addr 0x5a4b624, size 0xd0, virtual false, abstract: false, final false
inline void UnregisterToggleOnEvent(::System::Action*  onToggle) ;

constexpr bool const& __cordl_internal_get__CurrentValue_k__BackingField() const;

constexpr bool& __cordl_internal_get__CurrentValue_k__BackingField() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__animationCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__animationCoroutine() ;

constexpr float_t const& __cordl_internal_get__animationDuration() const;

constexpr float_t& __cordl_internal_get__animationDuration() ;

constexpr ::UnityEngine::UI::ColorBlock const& __cordl_internal_get__borderColors() const;

constexpr ::UnityEngine::UI::ColorBlock& __cordl_internal_get__borderColors() ;

constexpr float_t const& __cordl_internal_get__borderHeightRatio() const;

constexpr float_t& __cordl_internal_get__borderHeightRatio() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__borderImg() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__borderImg() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__borderImgRef() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__borderImgRef() ;

constexpr ::UnityW<::GlobalNamespace::UXSettings> const& __cordl_internal_get__cbUXSettings() const;

constexpr ::UnityW<::GlobalNamespace::UXSettings>& __cordl_internal_get__cbUXSettings() ;

constexpr float_t const& __cordl_internal_get__disabledBorderSize() const;

constexpr float_t& __cordl_internal_get__disabledBorderSize() ;

constexpr ::UnityEngine::UI::ColorBlock const& __cordl_internal_get__fillColors() const;

constexpr ::UnityEngine::UI::ColorBlock& __cordl_internal_get__fillColors() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__fillImg() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__fillImg() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__fillInactiveImg() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__fillInactiveImg() ;

constexpr ::UnityEngine::UI::ColorBlock const& __cordl_internal_get__handleColors() const;

constexpr ::UnityEngine::UI::ColorBlock& __cordl_internal_get__handleColors() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__handleImg() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__handleImg() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__handleLockIcon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__handleLockIcon() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__handleUnlockIcon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__handleUnlockIcon() ;

constexpr float_t const& __cordl_internal_get__highlightedBorderSize() const;

constexpr float_t& __cordl_internal_get__highlightedBorderSize() ;

constexpr float_t const& __cordl_internal_get__initValue() const;

constexpr float_t& __cordl_internal_get__initValue() ;

constexpr bool const& __cordl_internal_get__isDisabled() const;

constexpr bool& __cordl_internal_get__isDisabled() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__lockActiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__lockActiveColor() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__lockIcon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__lockIcon() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__lockInactiveColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__lockInactiveColor() ;

constexpr float_t const& __cordl_internal_get__normalBorderSize() const;

constexpr float_t& __cordl_internal_get__normalBorderSize() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onToggleChanged() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onToggleChanged() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onToggleOff() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onToggleOff() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onToggleOn() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onToggleOn() ;

constexpr float_t const& __cordl_internal_get__pressedBorderSize() const;

constexpr float_t& __cordl_internal_get__pressedBorderSize() ;

constexpr bool const& __cordl_internal_get__previousValue() const;

constexpr bool& __cordl_internal_get__previousValue() ;

constexpr float_t const& __cordl_internal_get__selectedBorderSize() const;

constexpr float_t& __cordl_internal_get__selectedBorderSize() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__toggleEase() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__toggleEase() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__unlockIcon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__unlockIcon() ;

constexpr ::UnityW<::GlobalNamespace::ControllerBehaviour> const& __cordl_internal_get_controllerBehaviour() const;

constexpr ::UnityW<::GlobalNamespace::ControllerBehaviour>& __cordl_internal_get_controllerBehaviour() ;

constexpr bool const& __cordl_internal_get_inside() const;

constexpr bool& __cordl_internal_get_inside() ;

constexpr void __cordl_internal_set__CurrentValue_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__animationCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__animationDuration(float_t  value) ;

constexpr void __cordl_internal_set__borderColors(::UnityEngine::UI::ColorBlock  value) ;

constexpr void __cordl_internal_set__borderHeightRatio(float_t  value) ;

constexpr void __cordl_internal_set__borderImg(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__borderImgRef(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__cbUXSettings(::UnityW<::GlobalNamespace::UXSettings>  value) ;

constexpr void __cordl_internal_set__disabledBorderSize(float_t  value) ;

constexpr void __cordl_internal_set__fillColors(::UnityEngine::UI::ColorBlock  value) ;

constexpr void __cordl_internal_set__fillImg(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__fillInactiveImg(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__handleColors(::UnityEngine::UI::ColorBlock  value) ;

constexpr void __cordl_internal_set__handleImg(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__handleLockIcon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__handleUnlockIcon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__highlightedBorderSize(float_t  value) ;

constexpr void __cordl_internal_set__initValue(float_t  value) ;

constexpr void __cordl_internal_set__isDisabled(bool  value) ;

constexpr void __cordl_internal_set__lockActiveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__lockIcon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__lockInactiveColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__normalBorderSize(float_t  value) ;

constexpr void __cordl_internal_set__onToggleChanged(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onToggleOff(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onToggleOn(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__pressedBorderSize(float_t  value) ;

constexpr void __cordl_internal_set__previousValue(bool  value) ;

constexpr void __cordl_internal_set__selectedBorderSize(float_t  value) ;

constexpr void __cordl_internal_set__toggleEase(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__unlockIcon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_controllerBehaviour(::UnityW<::GlobalNamespace::ControllerBehaviour>  value) ;

constexpr void __cordl_internal_set_inside(bool  value) ;

/// @brief Method .ctor, addr 0x5a4cae0, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__canTrigger() ;

static inline bool getStaticF__triggeredThisFrame() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentValue, addr 0x5a4ab98, size 0x8, virtual false, abstract: false, final false
inline bool get_CurrentValue() ;

/// @brief Method get_IsOn, addr 0x5a4aba8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsOn() ;

static inline void setStaticF__canTrigger(bool  value) ;

static inline void setStaticF__triggeredThisFrame(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentValue, addr 0x5a4aba0, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentValue(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIToggle(KIDUIToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIToggle(KIDUIToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2999};

/// [Header("Toggle Setup")]
/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _initValue, offset: 0x164, size: 0x4, def value: None
 float_t  ____initValue;

/// [SerializeField]
/// @brief Field _borderImg, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____borderImg;

/// [SerializeField]
/// @brief Field _borderHeightRatio, offset: 0x170, size: 0x4, def value: None
 float_t  ____borderHeightRatio;

/// [SerializeField]
/// @brief Field _fillImg, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____fillImg;

/// [SerializeField]
/// @brief Field _fillInactiveImg, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____fillInactiveImg;

/// [SerializeField]
/// @brief Field _handleImg, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____handleImg;

/// [SerializeField]
/// @brief Field _lockIcon, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____lockIcon;

/// [SerializeField]
/// @brief Field _unlockIcon, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____unlockIcon;

/// [SerializeField]
/// @brief Field _handleLockIcon, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____handleLockIcon;

/// [SerializeField]
/// @brief Field _handleUnlockIcon, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____handleUnlockIcon;

/// [SerializeField]
/// @brief Field _lockActiveColor, offset: 0x1b0, size: 0x10, def value: None
 ::UnityEngine::Color  ____lockActiveColor;

/// [SerializeField]
/// @brief Field _lockInactiveColor, offset: 0x1c0, size: 0x10, def value: None
 ::UnityEngine::Color  ____lockInactiveColor;

/// [SerializeField]
/// @brief Field _borderImgRef, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____borderImgRef;

/// [Header("Steam Settings")]
/// [SerializeField]
/// @brief Field _cbUXSettings, offset: 0x1d8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::UXSettings>  ____cbUXSettings;

/// [Header("Animation")]
/// [SerializeField]
/// @brief Field _animationDuration, offset: 0x1e0, size: 0x4, def value: None
 float_t  ____animationDuration;

/// [SerializeField]
/// @brief Field _toggleEase, offset: 0x1e8, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____toggleEase;

/// [Header("Fill Colors")]
/// [SerializeField]
/// @brief Field _fillColors, offset: 0x1f0, size: 0x58, def value: None
 ::UnityEngine::UI::ColorBlock  ____fillColors;

/// [Header("Border Colors")]
/// [SerializeField]
/// @brief Field _borderColors, offset: 0x248, size: 0x58, def value: None
 ::UnityEngine::UI::ColorBlock  ____borderColors;

/// [Header("Borders")]
/// [SerializeField]
/// @brief Field _normalBorderSize, offset: 0x2a0, size: 0x4, def value: None
 float_t  ____normalBorderSize;

/// [SerializeField]
/// @brief Field _disabledBorderSize, offset: 0x2a4, size: 0x4, def value: None
 float_t  ____disabledBorderSize;

/// [SerializeField]
/// @brief Field _highlightedBorderSize, offset: 0x2a8, size: 0x4, def value: None
 float_t  ____highlightedBorderSize;

/// [SerializeField]
/// @brief Field _pressedBorderSize, offset: 0x2ac, size: 0x4, def value: None
 float_t  ____pressedBorderSize;

/// [SerializeField]
/// @brief Field _selectedBorderSize, offset: 0x2b0, size: 0x4, def value: None
 float_t  ____selectedBorderSize;

/// [Header("Handle Colors")]
/// [SerializeField]
/// @brief Field _handleColors, offset: 0x2b4, size: 0x58, def value: None
 ::UnityEngine::UI::ColorBlock  ____handleColors;

/// [Header("Events")]
/// [SerializeField]
/// @brief Field _onToggleOn, offset: 0x310, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onToggleOn;

/// [SerializeField]
/// @brief Field _onToggleOff, offset: 0x318, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onToggleOff;

/// [SerializeField]
/// @brief Field _onToggleChanged, offset: 0x320, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onToggleChanged;

/// @brief Field _previousValue, offset: 0x328, size: 0x1, def value: None
 bool  ____previousValue;

/// @brief Field _isDisabled, offset: 0x329, size: 0x1, def value: None
 bool  ____isDisabled;

/// @brief Field _animationCoroutine, offset: 0x330, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____animationCoroutine;

/// [CompilerGenerated]
/// @brief Field <CurrentValue>k__BackingField, offset: 0x338, size: 0x1, def value: None
 bool  ____CurrentValue_k__BackingField;

/// @brief Field controllerBehaviour, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ControllerBehaviour>  ___controllerBehaviour;

/// @brief Field inside, offset: 0x348, size: 0x1, def value: None
 bool  ___inside;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____initValue) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____borderImg) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____borderHeightRatio) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____fillImg) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____fillInactiveImg) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____handleImg) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____lockIcon) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____unlockIcon) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____handleLockIcon) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____handleUnlockIcon) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____lockActiveColor) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____lockInactiveColor) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____borderImgRef) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____cbUXSettings) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____animationDuration) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____toggleEase) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____fillColors) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____borderColors) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____normalBorderSize) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____disabledBorderSize) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____highlightedBorderSize) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____pressedBorderSize) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____selectedBorderSize) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____handleColors) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____onToggleOn) == 0x310, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____onToggleOff) == 0x318, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____onToggleChanged) == 0x320, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____previousValue) == 0x328, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____isDisabled) == 0x329, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____animationCoroutine) == 0x330, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ____CurrentValue_k__BackingField) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ___controllerBehaviour) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle, ___inside) == 0x348, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUIToggle) == 0x350, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIToggle/<AnimateSlider>d__54
class CORDL_TYPE KIDUIToggle__AnimateSlider_d__54 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::KIDUIToggle>  __4__this;

/// @brief Field <endValue>5__3, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__endValue_5__3, put=__cordl_internal_set__endValue_5__3)) float_t  _endValue_5__3;

/// @brief Field <startValue>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__startValue_5__2, put=__cordl_internal_set__startValue_5__2)) float_t  _startValue_5__2;

/// @brief Field <time>5__4, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__time_5__4, put=__cordl_internal_set__time_5__4)) float_t  _time_5__4;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5a4cc3c, size 0x3b0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5a4cfec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5a4cff4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5a4d02c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5a4cc38, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIToggle> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIToggle>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__endValue_5__3() const;

constexpr float_t& __cordl_internal_get__endValue_5__3() ;

constexpr float_t const& __cordl_internal_get__startValue_5__2() const;

constexpr float_t& __cordl_internal_get__startValue_5__2() ;

constexpr float_t const& __cordl_internal_get__time_5__4() const;

constexpr float_t& __cordl_internal_get__time_5__4() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::KIDUIToggle>  value) ;

constexpr void __cordl_internal_set__endValue_5__3(float_t  value) ;

constexpr void __cordl_internal_set__startValue_5__2(float_t  value) ;

constexpr void __cordl_internal_set__time_5__4(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a4bb8c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIToggle__AnimateSlider_d__54() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle__AnimateSlider_d__54", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIToggle__AnimateSlider_d__54(KIDUIToggle__AnimateSlider_d__54 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle__AnimateSlider_d__54", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIToggle__AnimateSlider_d__54(KIDUIToggle__AnimateSlider_d__54 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2998};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIToggle>  _____4__this;

/// @brief Field <startValue>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____startValue_5__2;

/// @brief Field <endValue>5__3, offset: 0x2c, size: 0x4, def value: None
 float_t  ____endValue_5__3;

/// @brief Field <time>5__4, offset: 0x30, size: 0x4, def value: None
 float_t  ____time_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54, ____startValue_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54, ____endValue_5__3) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54, ____time_5__4) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIToggle/<>c__DisplayClass49_0
class CORDL_TYPE KIDUIToggle___c__DisplayClass49_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onToggle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onToggle, put=__cordl_internal_set_onToggle)) ::System::Action*  onToggle;

static inline ::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0* New_ctor() ;

/// @brief Method <UnregisterToggleOffEvent>b__0, addr 0x5a4cc1c, size 0x1c, virtual false, abstract: false, final false
inline void _UnregisterToggleOffEvent_b__0() ;

constexpr ::System::Action* const& __cordl_internal_get_onToggle() const;

constexpr ::System::Action*& __cordl_internal_get_onToggle() ;

constexpr void __cordl_internal_set_onToggle(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x5a4b8a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIToggle___c__DisplayClass49_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle___c__DisplayClass49_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIToggle___c__DisplayClass49_0(KIDUIToggle___c__DisplayClass49_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle___c__DisplayClass49_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIToggle___c__DisplayClass49_0(KIDUIToggle___c__DisplayClass49_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2997};

/// @brief Field onToggle, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___onToggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0, ___onToggle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIToggle/<>c__DisplayClass48_0
class CORDL_TYPE KIDUIToggle___c__DisplayClass48_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onToggle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onToggle, put=__cordl_internal_set_onToggle)) ::System::Action*  onToggle;

static inline ::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0* New_ctor() ;

/// @brief Method <RegisterToggleOffEvent>b__0, addr 0x5a4cc00, size 0x1c, virtual false, abstract: false, final false
inline void _RegisterToggleOffEvent_b__0() ;

constexpr ::System::Action* const& __cordl_internal_get_onToggle() const;

constexpr ::System::Action*& __cordl_internal_get_onToggle() ;

constexpr void __cordl_internal_set_onToggle(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x5a4b7cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIToggle___c__DisplayClass48_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle___c__DisplayClass48_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIToggle___c__DisplayClass48_0(KIDUIToggle___c__DisplayClass48_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle___c__DisplayClass48_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIToggle___c__DisplayClass48_0(KIDUIToggle___c__DisplayClass48_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2996};

/// @brief Field onToggle, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___onToggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0, ___onToggle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIToggle/<>c__DisplayClass47_0
class CORDL_TYPE KIDUIToggle___c__DisplayClass47_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onToggle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onToggle, put=__cordl_internal_set_onToggle)) ::System::Action*  onToggle;

static inline ::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0* New_ctor() ;

/// @brief Method <UnregisterToggleOnEvent>b__0, addr 0x5a4cbe4, size 0x1c, virtual false, abstract: false, final false
inline void _UnregisterToggleOnEvent_b__0() ;

constexpr ::System::Action* const& __cordl_internal_get_onToggle() const;

constexpr ::System::Action*& __cordl_internal_get_onToggle() ;

constexpr void __cordl_internal_set_onToggle(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x5a4b6f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIToggle___c__DisplayClass47_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle___c__DisplayClass47_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIToggle___c__DisplayClass47_0(KIDUIToggle___c__DisplayClass47_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle___c__DisplayClass47_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIToggle___c__DisplayClass47_0(KIDUIToggle___c__DisplayClass47_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2995};

/// @brief Field onToggle, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___onToggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0, ___onToggle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIToggle/<>c__DisplayClass46_0
class CORDL_TYPE KIDUIToggle___c__DisplayClass46_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onToggle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onToggle, put=__cordl_internal_set_onToggle)) ::System::Action*  onToggle;

static inline ::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0* New_ctor() ;

/// @brief Method <RegisterToggleOnEvent>b__0, addr 0x5a4cbc8, size 0x1c, virtual false, abstract: false, final false
inline void _RegisterToggleOnEvent_b__0() ;

constexpr ::System::Action* const& __cordl_internal_get_onToggle() const;

constexpr ::System::Action*& __cordl_internal_get_onToggle() ;

constexpr void __cordl_internal_set_onToggle(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x5a4b61c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIToggle___c__DisplayClass46_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle___c__DisplayClass46_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIToggle___c__DisplayClass46_0(KIDUIToggle___c__DisplayClass46_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle___c__DisplayClass46_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIToggle___c__DisplayClass46_0(KIDUIToggle___c__DisplayClass46_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2994};

/// @brief Field onToggle, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___onToggle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0, ___onToggle) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIToggle/<>c__DisplayClass45_0
class CORDL_TYPE KIDUIToggle___c__DisplayClass45_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onChange, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onChange, put=__cordl_internal_set_onChange)) ::System::Action*  onChange;

static inline ::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0* New_ctor() ;

/// @brief Method <UnregisterOnChangeEvent>b__0, addr 0x5a4cbac, size 0x1c, virtual false, abstract: false, final false
inline void _UnregisterOnChangeEvent_b__0() ;

constexpr ::System::Action* const& __cordl_internal_get_onChange() const;

constexpr ::System::Action*& __cordl_internal_get_onChange() ;

constexpr void __cordl_internal_set_onChange(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x5a4b544, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIToggle___c__DisplayClass45_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle___c__DisplayClass45_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIToggle___c__DisplayClass45_0(KIDUIToggle___c__DisplayClass45_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle___c__DisplayClass45_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIToggle___c__DisplayClass45_0(KIDUIToggle___c__DisplayClass45_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2993};

/// @brief Field onChange, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___onChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0, ___onChange) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: KIDUIToggle/<>c__DisplayClass44_0
class CORDL_TYPE KIDUIToggle___c__DisplayClass44_0 : public ::System::Object {
public:
// Declarations
/// @brief Field onChange, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onChange, put=__cordl_internal_set_onChange)) ::System::Action*  onChange;

static inline ::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0* New_ctor() ;

/// @brief Method <RegisterOnChangeEvent>b__0, addr 0x5a4cb90, size 0x1c, virtual false, abstract: false, final false
inline void _RegisterOnChangeEvent_b__0() ;

constexpr ::System::Action* const& __cordl_internal_get_onChange() const;

constexpr ::System::Action*& __cordl_internal_get_onChange() ;

constexpr void __cordl_internal_set_onChange(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x5a4b46c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KIDUIToggle___c__DisplayClass44_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle___c__DisplayClass44_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
KIDUIToggle___c__DisplayClass44_0(KIDUIToggle___c__DisplayClass44_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KIDUIToggle___c__DisplayClass44_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
KIDUIToggle___c__DisplayClass44_0(KIDUIToggle___c__DisplayClass44_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2992};

/// @brief Field onChange, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___onChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0, ___onChange) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
