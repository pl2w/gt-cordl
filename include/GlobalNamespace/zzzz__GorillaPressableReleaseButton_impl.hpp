#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPressableReleaseButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableReleaseButton_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaPressableReleaseButton.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPressableReleaseButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GorillaPressableReleaseButton::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0x599e968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPressableReleaseButton.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPressableReleaseButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GorillaPressableReleaseButton::OnTriggerExit)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x599ee28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPressableReleaseButton.ResetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPressableReleaseButton::*)()>(&::GlobalNamespace::GorillaPressableReleaseButton::ResetState)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x599f2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPressableReleaseButton.ButtonDeactivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPressableReleaseButton::*)()>(&::GlobalNamespace::GorillaPressableReleaseButton::ButtonDeactivation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599f2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPressableReleaseButton.ButtonDeactivationWithHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPressableReleaseButton::*)(bool)>(&::GlobalNamespace::GorillaPressableReleaseButton::ButtonDeactivationWithHand)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599f2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaPressableReleaseButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaPressableReleaseButton::*)()>(&::GlobalNamespace::GorillaPressableReleaseButton::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x599f2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GorillaPressableReleaseButton::__cordl_internal_get_onReleaseButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReleaseButton;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GorillaPressableReleaseButton::__cordl_internal_get_onReleaseButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReleaseButton;
}
constexpr void GlobalNamespace::GorillaPressableReleaseButton::__cordl_internal_set_onReleaseButton(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onReleaseButton = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GlobalNamespace::GorillaPressableReleaseButton::__cordl_internal_get_touchingCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchingCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GlobalNamespace::GorillaPressableReleaseButton::__cordl_internal_get_touchingCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchingCollider;
}
constexpr void GlobalNamespace::GorillaPressableReleaseButton::__cordl_internal_set_touchingCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchingCollider = value;
}
inline void GlobalNamespace::GorillaPressableReleaseButton::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GorillaPressableReleaseButton::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GorillaPressableReleaseButton::ResetState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPressableReleaseButton::ButtonDeactivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaPressableReleaseButton::ButtonDeactivationWithHand(bool  isLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::GorillaPressableReleaseButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaPressableReleaseButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaPressableReleaseButton* GlobalNamespace::GorillaPressableReleaseButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaPressableReleaseButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaPressableReleaseButton::GorillaPressableReleaseButton()   {
}
