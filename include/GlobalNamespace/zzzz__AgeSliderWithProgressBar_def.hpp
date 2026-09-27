#pragma once
// IWYU pragma private; include "GlobalNamespace/AgeSliderWithProgressBar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MonoBehaviourTick_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AgeSliderWithProgressBar)
namespace GlobalNamespace {
class AgeSliderWithProgressBar_SliderHeldEvent;
}
namespace GlobalNamespace {
class KIDUIButton;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class AgeSliderWithProgressBar;
}
namespace GlobalNamespace {
class AgeSliderWithProgressBar_SliderHeldEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AgeSliderWithProgressBar*);
MARK_REF_T(::GlobalNamespace::AgeSliderWithProgressBar_SliderHeldEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AgeSliderWithProgressBar*, "", "AgeSliderWithProgressBar");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AgeSliderWithProgressBar_SliderHeldEvent*, "", "AgeSliderWithProgressBar/SliderHeldEvent");
// Dependencies MonoBehaviourTick
namespace GlobalNamespace {
// Is value type: false
// CS Name: AgeSliderWithProgressBar
class CORDL_TYPE AgeSliderWithProgressBar : public ::GlobalNamespace::MonoBehaviourTick {
public:
// Declarations
using SliderHeldEvent = ::GlobalNamespace::AgeSliderWithProgressBar_SliderHeldEvent;

 __declspec(property(get=get_AdjustAge)) bool  AdjustAge;

 __declspec(property(get=get_ControllerActive, put=set_ControllerActive)) bool  ControllerActive;

 __declspec(property(get=get_CurrentAge)) int32_t  CurrentAge;

 __declspec(property(get=get_LockMessage, put=set_LockMessage)) ::StringW  LockMessage;

/// @brief Field _adjustAge, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__adjustAge, put=__cordl_internal_set__adjustAge)) bool  _adjustAge;

/// @brief Field _ageSlidable, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__ageSlidable, put=__cordl_internal_set__ageSlidable)) bool  _ageSlidable;

/// @brief Field _ageValueTxt, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ageValueTxt, put=__cordl_internal_set__ageValueTxt)) ::UnityW<::TMPro::TMP_Text>  _ageValueTxt;

/// @brief Field _confirmButton, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmButton, put=__cordl_internal_set__confirmButton)) ::UnityW<::GlobalNamespace::KIDUIButton>  _confirmButton;

/// @brief Field _currentAge, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentAge, put=__cordl_internal_set__currentAge)) int32_t  _currentAge;

/// @brief Field _incrementButtonsLockingSlider, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get__incrementButtonsLockingSlider, put=__cordl_internal_set__incrementButtonsLockingSlider)) bool  _incrementButtonsLockingSlider;

/// @brief Field _lockMessage, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__lockMessage, put=__cordl_internal_set__lockMessage)) ::StringW  _lockMessage;

/// @brief Field _maxAge, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxAge, put=__cordl_internal_set__maxAge)) int32_t  _maxAge;

/// @brief Field _messageText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__messageText, put=__cordl_internal_set__messageText)) ::UnityW<::TMPro::TMP_Text>  _messageText;

/// @brief Field _originalText, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalText, put=__cordl_internal_set__originalText)) ::StringW  _originalText;

/// @brief Field _progressBarContainer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressBarContainer, put=__cordl_internal_set__progressBarContainer)) ::UnityW<::UnityEngine::GameObject>  _progressBarContainer;

/// @brief Field _stickVibrationDuration, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__stickVibrationDuration, put=__cordl_internal_set__stickVibrationDuration)) float_t  _stickVibrationDuration;

/// @brief Field _stickVibrationStrength, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__stickVibrationStrength, put=__cordl_internal_set__stickVibrationStrength)) float_t  _stickVibrationStrength;

/// @brief Field controllerActive, offset 0x72, size 0x1 
 __declspec(property(get=__cordl_internal_get_controllerActive, put=__cordl_internal_set_controllerActive)) bool  controllerActive;

/// @brief Field holdTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_holdTime, put=__cordl_internal_set_holdTime)) float_t  holdTime;

/// @brief Field m_OnHoldComplete, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnHoldComplete, put=__cordl_internal_set_m_OnHoldComplete)) ::GlobalNamespace::AgeSliderWithProgressBar_SliderHeldEvent*  m_OnHoldComplete;

 __declspec(property(get=get_onHoldComplete, put=set_onHoldComplete)) ::GlobalNamespace::AgeSliderWithProgressBar_SliderHeldEvent*  onHoldComplete;

/// @brief Field progress, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) float_t  progress;

/// @brief Field progressBarFill, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressBarFill, put=__cordl_internal_set_progressBarFill)) ::UnityW<::UnityEngine::UI::Image>  progressBarFill;

/// @brief Method Awake, addr 0x5a243fc, size 0x98, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DisableEditing, addr 0x5a24bac, size 0x8, virtual false, abstract: false, final false
inline void DisableEditing() ;

/// @brief Method EnableEditing, addr 0x5a24ba0, size 0xc, virtual false, abstract: false, final false
inline void EnableEditing() ;

/// @brief Method ForceAddAge, addr 0x5a24bb4, size 0x80, virtual false, abstract: false, final false
inline void ForceAddAge(int32_t  number) ;

/// @brief Method ForceSubtractAge, addr 0x5a24c34, size 0x7c, virtual false, abstract: false, final false
inline void ForceSubtractAge(int32_t  number) ;

/// @brief Method GetAgeString, addr 0x5a24a78, size 0x128, virtual false, abstract: false, final false
inline ::StringW GetAgeString() ;

static inline ::GlobalNamespace::AgeSliderWithProgressBar* New_ctor() ;

/// @brief Method OnEnable, addr 0x5a2449c, size 0x148, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PostUpdate, addr 0x5a24848, size 0x230, virtual false, abstract: false, final false
inline void PostUpdate() ;

/// @brief Method SetOriginalText, addr 0x5a24494, size 0x8, virtual false, abstract: false, final false
inline void SetOriginalText(::StringW  text) ;

/// @brief Method Tick, addr 0x5a245e4, size 0x264, virtual true, abstract: false, final false
inline void Tick() ;

constexpr bool const& __cordl_internal_get__adjustAge() const;

constexpr bool& __cordl_internal_get__adjustAge() ;

constexpr bool const& __cordl_internal_get__ageSlidable() const;

constexpr bool& __cordl_internal_get__ageSlidable() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__ageValueTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__ageValueTxt() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get__confirmButton() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get__confirmButton() ;

constexpr int32_t const& __cordl_internal_get__currentAge() const;

constexpr int32_t& __cordl_internal_get__currentAge() ;

constexpr bool const& __cordl_internal_get__incrementButtonsLockingSlider() const;

constexpr bool& __cordl_internal_get__incrementButtonsLockingSlider() ;

constexpr ::StringW const& __cordl_internal_get__lockMessage() const;

constexpr ::StringW& __cordl_internal_get__lockMessage() ;

constexpr int32_t const& __cordl_internal_get__maxAge() const;

constexpr int32_t& __cordl_internal_get__maxAge() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__messageText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__messageText() ;

constexpr ::StringW const& __cordl_internal_get__originalText() const;

constexpr ::StringW& __cordl_internal_get__originalText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__progressBarContainer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__progressBarContainer() ;

constexpr float_t const& __cordl_internal_get__stickVibrationDuration() const;

constexpr float_t& __cordl_internal_get__stickVibrationDuration() ;

constexpr float_t const& __cordl_internal_get__stickVibrationStrength() const;

constexpr float_t& __cordl_internal_get__stickVibrationStrength() ;

constexpr bool const& __cordl_internal_get_controllerActive() const;

constexpr bool& __cordl_internal_get_controllerActive() ;

constexpr float_t const& __cordl_internal_get_holdTime() const;

constexpr float_t& __cordl_internal_get_holdTime() ;

constexpr ::GlobalNamespace::AgeSliderWithProgressBar_SliderHeldEvent* const& __cordl_internal_get_m_OnHoldComplete() const;

constexpr ::GlobalNamespace::AgeSliderWithProgressBar_SliderHeldEvent*& __cordl_internal_get_m_OnHoldComplete() ;

constexpr float_t const& __cordl_internal_get_progress() const;

constexpr float_t& __cordl_internal_get_progress() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_progressBarFill() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_progressBarFill() ;

constexpr void __cordl_internal_set__adjustAge(bool  value) ;

constexpr void __cordl_internal_set__ageSlidable(bool  value) ;

constexpr void __cordl_internal_set__ageValueTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__confirmButton(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

constexpr void __cordl_internal_set__currentAge(int32_t  value) ;

constexpr void __cordl_internal_set__incrementButtonsLockingSlider(bool  value) ;

constexpr void __cordl_internal_set__lockMessage(::StringW  value) ;

constexpr void __cordl_internal_set__maxAge(int32_t  value) ;

constexpr void __cordl_internal_set__messageText(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__originalText(::StringW  value) ;

constexpr void __cordl_internal_set__progressBarContainer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__stickVibrationDuration(float_t  value) ;

constexpr void __cordl_internal_set__stickVibrationStrength(float_t  value) ;

constexpr void __cordl_internal_set_controllerActive(bool  value) ;

constexpr void __cordl_internal_set_holdTime(float_t  value) ;

constexpr void __cordl_internal_set_m_OnHoldComplete(::GlobalNamespace::AgeSliderWithProgressBar_SliderHeldEvent*  value) ;

constexpr void __cordl_internal_set_progress(float_t  value) ;

constexpr void __cordl_internal_set_progressBarFill(::UnityW<::UnityEngine::UI::Image>  value) ;

/// @brief Method .ctor, addr 0x5a24cb0, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AdjustAge, addr 0x5a242a0, size 0x8, virtual false, abstract: false, final false
inline bool get_AdjustAge() ;

/// @brief Method get_ControllerActive, addr 0x5a242a8, size 0x8, virtual false, abstract: false, final false
inline bool get_ControllerActive() ;

/// @brief Method get_CurrentAge, addr 0x5a243f4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentAge() ;

/// @brief Method get_LockMessage, addr 0x5a243e4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_LockMessage() ;

/// @brief Method get_onHoldComplete, addr 0x5a24290, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::AgeSliderWithProgressBar_SliderHeldEvent* get_onHoldComplete() ;

/// @brief Method set_ControllerActive, addr 0x5a242b0, size 0x134, virtual false, abstract: false, final false
inline void set_ControllerActive(bool  value) ;

/// @brief Method set_LockMessage, addr 0x5a243ec, size 0x8, virtual false, abstract: false, final false
inline void set_LockMessage(::StringW  value) ;

/// @brief Method set_onHoldComplete, addr 0x5a24298, size 0x8, virtual false, abstract: false, final false
inline void set_onHoldComplete(::GlobalNamespace::AgeSliderWithProgressBar_SliderHeldEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AgeSliderWithProgressBar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AgeSliderWithProgressBar", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AgeSliderWithProgressBar(AgeSliderWithProgressBar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AgeSliderWithProgressBar", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AgeSliderWithProgressBar(AgeSliderWithProgressBar const& ) = delete;

/// @brief Field MIN_AGE offset 0xffffffff size 0x4
static constexpr int32_t  MIN_AGE{static_cast<int32_t>(0xd)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2855};

/// [SerializeField]
/// @brief Field m_OnHoldComplete, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::AgeSliderWithProgressBar_SliderHeldEvent*  ___m_OnHoldComplete;

/// [SerializeField]
/// @brief Field _adjustAge, offset: 0x30, size: 0x1, def value: None
 bool  ____adjustAge;

/// [SerializeField]
/// @brief Field _maxAge, offset: 0x34, size: 0x4, def value: None
 int32_t  ____maxAge;

/// [SerializeField]
/// @brief Field _ageValueTxt, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____ageValueTxt;

/// [Tooltip("Optional game object that should hold the Progress Bar Fill. Disables Hold functionality if null.")]
/// [SerializeField]
/// @brief Field _progressBarContainer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____progressBarContainer;

/// [SerializeField]
/// @brief Field holdTime, offset: 0x48, size: 0x4, def value: None
 float_t  ___holdTime;

/// [SerializeField]
/// @brief Field progressBarFill, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___progressBarFill;

/// [SerializeField]
/// @brief Field _messageText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____messageText;

/// [SerializeField]
/// @brief Field _stickVibrationStrength, offset: 0x60, size: 0x4, def value: None
 float_t  ____stickVibrationStrength;

/// [SerializeField]
/// @brief Field _stickVibrationDuration, offset: 0x64, size: 0x4, def value: None
 float_t  ____stickVibrationDuration;

/// [SerializeField]
/// @brief Field _confirmButton, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ____confirmButton;

/// @brief Field _ageSlidable, offset: 0x70, size: 0x1, def value: None
 bool  ____ageSlidable;

/// @brief Field _incrementButtonsLockingSlider, offset: 0x71, size: 0x1, def value: None
 bool  ____incrementButtonsLockingSlider;

/// @brief Field controllerActive, offset: 0x72, size: 0x1, def value: None
 bool  ___controllerActive;

/// [SerializeField]
/// @brief Field _lockMessage, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____lockMessage;

/// @brief Field _originalText, offset: 0x80, size: 0x8, def value: None
 ::StringW  ____originalText;

/// @brief Field _currentAge, offset: 0x88, size: 0x4, def value: None
 int32_t  ____currentAge;

/// @brief Field progress, offset: 0x8c, size: 0x4, def value: None
 float_t  ___progress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ___m_OnHoldComplete) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ____adjustAge) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ____maxAge) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ____ageValueTxt) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ____progressBarContainer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ___holdTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ___progressBarFill) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ____messageText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ____stickVibrationStrength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ____stickVibrationDuration) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ____confirmButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ____ageSlidable) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ____incrementButtonsLockingSlider) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ___controllerActive) == 0x72, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ____lockMessage) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ____originalText) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ____currentAge) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AgeSliderWithProgressBar, ___progress) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AgeSliderWithProgressBar) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace GlobalNamespace {
// Is value type: false
// CS Name: AgeSliderWithProgressBar/SliderHeldEvent
class CORDL_TYPE AgeSliderWithProgressBar_SliderHeldEvent : public ::UnityEngine::Events::UnityEvent_1<int32_t> {
public:
// Declarations
static inline ::GlobalNamespace::AgeSliderWithProgressBar_SliderHeldEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x5a24d3c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AgeSliderWithProgressBar_SliderHeldEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AgeSliderWithProgressBar_SliderHeldEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AgeSliderWithProgressBar_SliderHeldEvent(AgeSliderWithProgressBar_SliderHeldEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AgeSliderWithProgressBar_SliderHeldEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AgeSliderWithProgressBar_SliderHeldEvent(AgeSliderWithProgressBar_SliderHeldEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2854};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AgeSliderWithProgressBar_SliderHeldEvent) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
