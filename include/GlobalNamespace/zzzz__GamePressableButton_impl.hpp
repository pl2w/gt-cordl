#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePressableButton.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GamePressableButton_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IClickable_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GamePressableButton.Click
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePressableButton::*)(bool)>(&::GlobalNamespace::GamePressableButton::Click)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5841034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePressableButton*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePressableButton.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePressableButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GamePressableButton::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5841488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePressableButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePressableButton.CheckValidEquippedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GamePressableButton::*)(bool)>(&::GlobalNamespace::GamePressableButton::CheckValidEquippedState)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5841588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePressableButton*>(),
                        {"CheckValidEquippedState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePressableButton.PressButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePressableButton::*)(bool)>(&::GlobalNamespace::GamePressableButton::PressButton)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x5841038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePressableButton*>(),
                        {"PressButton", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePressableButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePressableButton::*)()>(&::GlobalNamespace::GamePressableButton::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5841684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePressableButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GamePressableButton::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GamePressableButton::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GamePressableButton::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr bool& GlobalNamespace::GamePressableButton::__cordl_internal_get_requireEquipped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireEquipped;
}
constexpr bool const& GlobalNamespace::GamePressableButton::__cordl_internal_get_requireEquipped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requireEquipped;
}
constexpr void GlobalNamespace::GamePressableButton::__cordl_internal_set_requireEquipped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requireEquipped = value;
}
constexpr bool& GlobalNamespace::GamePressableButton::__cordl_internal_get_activeWhileGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeWhileGrabbed;
}
constexpr bool const& GlobalNamespace::GamePressableButton::__cordl_internal_get_activeWhileGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeWhileGrabbed;
}
constexpr void GlobalNamespace::GamePressableButton::__cordl_internal_set_activeWhileGrabbed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeWhileGrabbed = value;
}
constexpr bool& GlobalNamespace::GamePressableButton::__cordl_internal_get_activeWhileSnapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeWhileSnapped;
}
constexpr bool const& GlobalNamespace::GamePressableButton::__cordl_internal_get_activeWhileSnapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeWhileSnapped;
}
constexpr void GlobalNamespace::GamePressableButton::__cordl_internal_set_activeWhileSnapped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeWhileSnapped = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GamePressableButton::__cordl_internal_get_onPressButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPressButton;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GamePressableButton::__cordl_internal_get_onPressButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPressButton;
}
constexpr void GlobalNamespace::GamePressableButton::__cordl_internal_set_onPressButton(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPressButton = value;
}
constexpr float_t& GlobalNamespace::GamePressableButton::__cordl_internal_get_debounceTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debounceTime;
}
constexpr float_t const& GlobalNamespace::GamePressableButton::__cordl_internal_get_debounceTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debounceTime;
}
constexpr void GlobalNamespace::GamePressableButton::__cordl_internal_set_debounceTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debounceTime = value;
}
constexpr int32_t& GlobalNamespace::GamePressableButton::__cordl_internal_get_pressButtonSoundIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressButtonSoundIndex;
}
constexpr int32_t const& GlobalNamespace::GamePressableButton::__cordl_internal_get_pressButtonSoundIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressButtonSoundIndex;
}
constexpr void GlobalNamespace::GamePressableButton::__cordl_internal_set_pressButtonSoundIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressButtonSoundIndex = value;
}
constexpr float_t& GlobalNamespace::GamePressableButton::__cordl_internal_get_touchTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchTime;
}
constexpr float_t const& GlobalNamespace::GamePressableButton::__cordl_internal_get_touchTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchTime;
}
constexpr void GlobalNamespace::GamePressableButton::__cordl_internal_set_touchTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchTime = value;
}
inline void GlobalNamespace::GamePressableButton::Click(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePressableButton*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand);
}
inline void GlobalNamespace::GamePressableButton::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePressableButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline bool GlobalNamespace::GamePressableButton::CheckValidEquippedState(bool  pressedHandLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePressableButton*>(),
                        {"CheckValidEquippedState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pressedHandLeft);
}
inline void GlobalNamespace::GamePressableButton::PressButton(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePressableButton*>(),
                        {"PressButton", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::GamePressableButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePressableButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GamePressableButton* GlobalNamespace::GamePressableButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GamePressableButton*>());
}
/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr  GlobalNamespace::GamePressableButton::operator ::GlobalNamespace::IClickable*() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* GlobalNamespace::GamePressableButton::i___GlobalNamespace__IClickable() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GamePressableButton::GamePressableButton()   {
}
