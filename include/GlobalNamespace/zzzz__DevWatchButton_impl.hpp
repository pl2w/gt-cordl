#pragma once
// IWYU pragma private; include "GlobalNamespace/DevWatchButton.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DevWatchButton_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DevWatchButton.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevWatchButton::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::DevWatchButton::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57ed3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatchButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DevWatchButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DevWatchButton::*)()>(&::GlobalNamespace::DevWatchButton::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57ed3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatchButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::DevWatchButton::__cordl_internal_get_SearchEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SearchEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::DevWatchButton::__cordl_internal_get_SearchEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SearchEvent;
}
constexpr void GlobalNamespace::DevWatchButton::__cordl_internal_set_SearchEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SearchEvent = value;
}
inline void GlobalNamespace::DevWatchButton::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatchButton*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::DevWatchButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::DevWatchButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::DevWatchButton* GlobalNamespace::DevWatchButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DevWatchButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DevWatchButton::DevWatchButton()   {
}
