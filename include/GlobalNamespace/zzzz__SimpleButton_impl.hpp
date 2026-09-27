#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleButton.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleButton_def.hpp"
#include "GlobalNamespace/zzzz__IClickable_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleButton.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SimpleButton::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5ac2820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleButton.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::SimpleButton::OnTriggerExit)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5ac2b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleButton.DoPress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleButton::*)(bool)>(&::GlobalNamespace::SimpleButton::DoPress)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5ac2b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleButton*>(),
                        {"DoPress", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleButton.handlePress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleButton::*)(bool)>(&::GlobalNamespace::SimpleButton::handlePress)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ac2c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::SimpleButton*>(),
                    {::i2c::class_of<::GlobalNamespace::SimpleButton*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleButton.Click
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleButton::*)(bool)>(&::GlobalNamespace::SimpleButton::Click)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5ac2c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleButton*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleButton::*)()>(&::GlobalNamespace::SimpleButton::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5ac2c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SimpleButton::__cordl_internal_get_activator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activator;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SimpleButton::__cordl_internal_get_activator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activator;
}
constexpr void GlobalNamespace::SimpleButton::__cordl_internal_set_activator(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activator = value;
}
constexpr float_t& GlobalNamespace::SimpleButton::__cordl_internal_get_pressTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressTime;
}
constexpr float_t const& GlobalNamespace::SimpleButton::__cordl_internal_get_pressTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pressTime;
}
constexpr void GlobalNamespace::SimpleButton::__cordl_internal_set_pressTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pressTime = value;
}
constexpr float_t& GlobalNamespace::SimpleButton::__cordl_internal_get_coolDown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr float_t const& GlobalNamespace::SimpleButton::__cordl_internal_get_coolDown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___coolDown;
}
constexpr void GlobalNamespace::SimpleButton::__cordl_internal_set_coolDown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___coolDown = value;
}
constexpr int32_t& GlobalNamespace::SimpleButton::__cordl_internal_get_audioCLipIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioCLipIndex;
}
constexpr int32_t const& GlobalNamespace::SimpleButton::__cordl_internal_get_audioCLipIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioCLipIndex;
}
constexpr void GlobalNamespace::SimpleButton::__cordl_internal_set_audioCLipIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioCLipIndex = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SimpleButton::__cordl_internal_get_Press()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Press;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SimpleButton::__cordl_internal_get_Press() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Press;
}
constexpr void GlobalNamespace::SimpleButton::__cordl_internal_set_Press(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Press = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::SimpleButton::__cordl_internal_get_Release()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Release;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::SimpleButton::__cordl_internal_get_Release() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Release;
}
constexpr void GlobalNamespace::SimpleButton::__cordl_internal_set_Release(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Release = value;
}
inline void GlobalNamespace::SimpleButton::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::SimpleButton::OnTriggerExit(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void GlobalNamespace::SimpleButton::DoPress(bool  isLeft)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleButton*>(),
                        {"DoPress", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft);
}
inline void GlobalNamespace::SimpleButton::handlePress(bool  isLeft)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::SimpleButton*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeft);
}
inline void GlobalNamespace::SimpleButton::Click(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleButton*>(),
                        {"Click", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand);
}
inline void GlobalNamespace::SimpleButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SimpleButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleButton* GlobalNamespace::SimpleButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleButton*>());
}
/// @brief Convert operator to "::GlobalNamespace::IClickable"
constexpr  GlobalNamespace::SimpleButton::operator ::GlobalNamespace::IClickable*() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IClickable"
constexpr ::GlobalNamespace::IClickable* GlobalNamespace::SimpleButton::i___GlobalNamespace__IClickable() noexcept {
return static_cast<::GlobalNamespace::IClickable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleButton::SimpleButton()   {
}
