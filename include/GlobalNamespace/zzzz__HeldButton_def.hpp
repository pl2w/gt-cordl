#pragma once
// IWYU pragma private; include "GlobalNamespace/HeldButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HeldButton)
namespace GlobalNamespace {
class GorillaTriggerColliderHandIndicator;
}
namespace UnityEngine::Events {
class UnityEvent;
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
class HeldButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HeldButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HeldButton*, "", "HeldButton");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: HeldButton
class CORDL_TYPE HeldButton : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field buttonRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonRenderer, put=__cordl_internal_set_buttonRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  buttonRenderer;

/// @brief Field debounceTime, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_debounceTime, put=__cordl_internal_set_debounceTime)) float_t  debounceTime;

/// @brief Field isOn, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_isOn, put=__cordl_internal_set_isOn)) bool  isOn;

/// @brief Field leftHandPressable, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftHandPressable, put=__cordl_internal_set_leftHandPressable)) bool  leftHandPressable;

/// @brief Field myText, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_myText, put=__cordl_internal_set_myText)) ::UnityW<::UnityEngine::UI::Text>  myText;

/// @brief Field offText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_offText, put=__cordl_internal_set_offText)) ::StringW  offText;

/// @brief Field onPressButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPressButton, put=__cordl_internal_set_onPressButton)) ::UnityEngine::Events::UnityEvent*  onPressButton;

/// @brief Field onStartPressingButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStartPressingButton, put=__cordl_internal_set_onStartPressingButton)) ::UnityEngine::Events::UnityEvent*  onStartPressingButton;

/// @brief Field onStopPressingButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStopPressingButton, put=__cordl_internal_set_onStopPressingButton)) ::UnityEngine::Events::UnityEvent*  onStopPressingButton;

/// @brief Field onText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onText, put=__cordl_internal_set_onText)) ::StringW  onText;

/// @brief Field pendingPress, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_pendingPress, put=__cordl_internal_set_pendingPress)) bool  pendingPress;

/// @brief Field pendingPressCollider, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingPressCollider, put=__cordl_internal_set_pendingPressCollider)) ::UnityW<::UnityEngine::Collider>  pendingPressCollider;

/// @brief Field pressDuration, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_pressDuration, put=__cordl_internal_set_pressDuration)) float_t  pressDuration;

/// @brief Field pressedMaterial, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_pressedMaterial, put=__cordl_internal_set_pressedMaterial)) ::UnityW<::UnityEngine::Material>  pressedMaterial;

/// @brief Field pressingHand, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_pressingHand, put=__cordl_internal_set_pressingHand)) ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  pressingHand;

/// @brief Field releaseTime, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_releaseTime, put=__cordl_internal_set_releaseTime)) float_t  releaseTime;

/// @brief Field rightHandPressable, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightHandPressable, put=__cordl_internal_set_rightHandPressable)) bool  rightHandPressable;

/// @brief Field touchTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_touchTime, put=__cordl_internal_set_touchTime)) float_t  touchTime;

/// @brief Field unpressedMaterial, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_unpressedMaterial, put=__cordl_internal_set_unpressedMaterial)) ::UnityW<::UnityEngine::Material>  unpressedMaterial;

/// @brief Method LateUpdate, addr 0x595224c, size 0x3fc, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::HeldButton* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5951eb8, size 0x274, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x5952648, size 0x98, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method SetOn, addr 0x595212c, size 0x120, virtual false, abstract: false, final false
inline void SetOn(bool  inOn) ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_buttonRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_buttonRenderer() ;

constexpr float_t const& __cordl_internal_get_debounceTime() const;

constexpr float_t& __cordl_internal_get_debounceTime() ;

constexpr bool const& __cordl_internal_get_isOn() const;

constexpr bool& __cordl_internal_get_isOn() ;

constexpr bool const& __cordl_internal_get_leftHandPressable() const;

constexpr bool& __cordl_internal_get_leftHandPressable() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_myText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_myText() ;

constexpr ::StringW const& __cordl_internal_get_offText() const;

constexpr ::StringW& __cordl_internal_get_offText() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onPressButton() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onPressButton() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onStartPressingButton() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onStartPressingButton() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onStopPressingButton() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onStopPressingButton() ;

constexpr ::StringW const& __cordl_internal_get_onText() const;

constexpr ::StringW& __cordl_internal_get_onText() ;

constexpr bool const& __cordl_internal_get_pendingPress() const;

constexpr bool& __cordl_internal_get_pendingPress() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_pendingPressCollider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_pendingPressCollider() ;

constexpr float_t const& __cordl_internal_get_pressDuration() const;

constexpr float_t& __cordl_internal_get_pressDuration() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_pressedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_pressedMaterial() ;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& __cordl_internal_get_pressingHand() const;

constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& __cordl_internal_get_pressingHand() ;

constexpr float_t const& __cordl_internal_get_releaseTime() const;

constexpr float_t& __cordl_internal_get_releaseTime() ;

constexpr bool const& __cordl_internal_get_rightHandPressable() const;

constexpr bool& __cordl_internal_get_rightHandPressable() ;

constexpr float_t const& __cordl_internal_get_touchTime() const;

constexpr float_t& __cordl_internal_get_touchTime() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_unpressedMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_unpressedMaterial() ;

constexpr void __cordl_internal_set_buttonRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_debounceTime(float_t  value) ;

constexpr void __cordl_internal_set_isOn(bool  value) ;

constexpr void __cordl_internal_set_leftHandPressable(bool  value) ;

constexpr void __cordl_internal_set_myText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_offText(::StringW  value) ;

constexpr void __cordl_internal_set_onPressButton(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onStartPressingButton(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onStopPressingButton(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onText(::StringW  value) ;

constexpr void __cordl_internal_set_pendingPress(bool  value) ;

constexpr void __cordl_internal_set_pendingPressCollider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_pressDuration(float_t  value) ;

constexpr void __cordl_internal_set_pressedMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_pressingHand(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value) ;

constexpr void __cordl_internal_set_releaseTime(float_t  value) ;

constexpr void __cordl_internal_set_rightHandPressable(bool  value) ;

constexpr void __cordl_internal_set_touchTime(float_t  value) ;

constexpr void __cordl_internal_set_unpressedMaterial(::UnityW<::UnityEngine::Material>  value) ;

/// @brief Method .ctor, addr 0x59526e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HeldButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HeldButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HeldButton(HeldButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HeldButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HeldButton(HeldButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2306};

/// @brief Field pressedMaterial, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___pressedMaterial;

/// @brief Field unpressedMaterial, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___unpressedMaterial;

/// @brief Field buttonRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___buttonRenderer;

/// @brief Field isOn, offset: 0x38, size: 0x1, def value: None
 bool  ___isOn;

/// @brief Field debounceTime, offset: 0x3c, size: 0x4, def value: None
 float_t  ___debounceTime;

/// @brief Field leftHandPressable, offset: 0x40, size: 0x1, def value: None
 bool  ___leftHandPressable;

/// @brief Field rightHandPressable, offset: 0x41, size: 0x1, def value: None
 bool  ___rightHandPressable;

/// @brief Field pressDuration, offset: 0x44, size: 0x4, def value: None
 float_t  ___pressDuration;

/// @brief Field onStartPressingButton, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onStartPressingButton;

/// @brief Field onStopPressingButton, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onStopPressingButton;

/// @brief Field onPressButton, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onPressButton;

/// [TextArea]
/// @brief Field offText, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___offText;

/// [TextArea]
/// @brief Field onText, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___onText;

/// @brief Field myText, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___myText;

/// @brief Field touchTime, offset: 0x78, size: 0x4, def value: None
 float_t  ___touchTime;

/// @brief Field releaseTime, offset: 0x7c, size: 0x4, def value: None
 float_t  ___releaseTime;

/// @brief Field pendingPress, offset: 0x80, size: 0x1, def value: None
 bool  ___pendingPress;

/// @brief Field pendingPressCollider, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___pendingPressCollider;

/// @brief Field pressingHand, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  ___pressingHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HeldButton, ___pressedMaterial) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___unpressedMaterial) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___buttonRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___isOn) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___debounceTime) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___leftHandPressable) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___rightHandPressable) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___pressDuration) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___onStartPressingButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___onStopPressingButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___onPressButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___offText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___onText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___myText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___touchTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___releaseTime) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___pendingPress) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___pendingPressCollider) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HeldButton, ___pressingHand) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HeldButton) == 0x98, "Size mismatch!");

} // namespace end def GlobalNamespace
