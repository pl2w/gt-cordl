#pragma once
// IWYU pragma private; include "GlobalNamespace/HeldButton.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HeldButton_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTriggerColliderHandIndicator_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HeldButton.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeldButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::HeldButton::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x5951eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeldButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeldButton.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeldButton::*)()>(&::GlobalNamespace::HeldButton::LateUpdate)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x595224c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeldButton*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeldButton.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeldButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::HeldButton::OnTriggerExit)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5952648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeldButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeldButton.SetOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeldButton::*)(bool)>(&::GlobalNamespace::HeldButton::SetOn)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x595212c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeldButton*>(),
                        {"SetOn", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HeldButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HeldButton::*)()>(&::GlobalNamespace::HeldButton::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59526e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeldButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::HeldButton::__cordl_internal_get_pressedMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::HeldButton::__cordl_internal_get_pressedMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressedMaterial;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_pressedMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressedMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::HeldButton::__cordl_internal_get_unpressedMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unpressedMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::HeldButton::__cordl_internal_get_unpressedMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unpressedMaterial;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_unpressedMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unpressedMaterial = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::HeldButton::__cordl_internal_get_buttonRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::HeldButton::__cordl_internal_get_buttonRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonRenderer;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_buttonRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonRenderer = value;
}
constexpr bool& GlobalNamespace::HeldButton::__cordl_internal_get_isOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr bool const& GlobalNamespace::HeldButton::__cordl_internal_get_isOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isOn;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_isOn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isOn = value;
}
constexpr float_t& GlobalNamespace::HeldButton::__cordl_internal_get_debounceTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debounceTime;
}
constexpr float_t const& GlobalNamespace::HeldButton::__cordl_internal_get_debounceTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debounceTime;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_debounceTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debounceTime = value;
}
constexpr bool& GlobalNamespace::HeldButton::__cordl_internal_get_leftHandPressable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandPressable;
}
constexpr bool const& GlobalNamespace::HeldButton::__cordl_internal_get_leftHandPressable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandPressable;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_leftHandPressable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandPressable = value;
}
constexpr bool& GlobalNamespace::HeldButton::__cordl_internal_get_rightHandPressable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandPressable;
}
constexpr bool const& GlobalNamespace::HeldButton::__cordl_internal_get_rightHandPressable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandPressable;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_rightHandPressable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandPressable = value;
}
constexpr float_t& GlobalNamespace::HeldButton::__cordl_internal_get_pressDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressDuration;
}
constexpr float_t const& GlobalNamespace::HeldButton::__cordl_internal_get_pressDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressDuration;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_pressDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressDuration = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::HeldButton::__cordl_internal_get_onStartPressingButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStartPressingButton;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::HeldButton::__cordl_internal_get_onStartPressingButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStartPressingButton;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_onStartPressingButton(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStartPressingButton = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::HeldButton::__cordl_internal_get_onStopPressingButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStopPressingButton;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::HeldButton::__cordl_internal_get_onStopPressingButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onStopPressingButton;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_onStopPressingButton(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onStopPressingButton = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::HeldButton::__cordl_internal_get_onPressButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPressButton;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::HeldButton::__cordl_internal_get_onPressButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPressButton;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_onPressButton(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPressButton = value;
}
constexpr ::StringW& GlobalNamespace::HeldButton::__cordl_internal_get_offText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offText;
}
constexpr ::StringW const& GlobalNamespace::HeldButton::__cordl_internal_get_offText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offText;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_offText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offText = value;
}
constexpr ::StringW& GlobalNamespace::HeldButton::__cordl_internal_get_onText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onText;
}
constexpr ::StringW const& GlobalNamespace::HeldButton::__cordl_internal_get_onText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onText;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_onText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::HeldButton::__cordl_internal_get_myText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::HeldButton::__cordl_internal_get_myText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myText;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_myText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myText = value;
}
constexpr float_t& GlobalNamespace::HeldButton::__cordl_internal_get_touchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchTime;
}
constexpr float_t const& GlobalNamespace::HeldButton::__cordl_internal_get_touchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchTime;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_touchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchTime = value;
}
constexpr float_t& GlobalNamespace::HeldButton::__cordl_internal_get_releaseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseTime;
}
constexpr float_t const& GlobalNamespace::HeldButton::__cordl_internal_get_releaseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releaseTime;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_releaseTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releaseTime = value;
}
constexpr bool& GlobalNamespace::HeldButton::__cordl_internal_get_pendingPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingPress;
}
constexpr bool const& GlobalNamespace::HeldButton::__cordl_internal_get_pendingPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingPress;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_pendingPress(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingPress = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::HeldButton::__cordl_internal_get_pendingPressCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingPressCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::HeldButton::__cordl_internal_get_pendingPressCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingPressCollider;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_pendingPressCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingPressCollider = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>& GlobalNamespace::HeldButton::__cordl_internal_get_pressingHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressingHand;
}
constexpr ::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator> const& GlobalNamespace::HeldButton::__cordl_internal_get_pressingHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressingHand;
}
constexpr void GlobalNamespace::HeldButton::__cordl_internal_set_pressingHand(::UnityW<::GlobalNamespace::GorillaTriggerColliderHandIndicator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressingHand = value;
}
inline void GlobalNamespace::HeldButton::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeldButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::HeldButton::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeldButton*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HeldButton::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeldButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::HeldButton::SetOn(bool  inOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeldButton*>(),
                        {"SetOn", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inOn);
}
inline void GlobalNamespace::HeldButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HeldButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HeldButton* GlobalNamespace::HeldButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HeldButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HeldButton::HeldButton()   {
}
