#pragma once
// IWYU pragma private; include "GlobalNamespace/GeodeAtmTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GeodeAtmTrigger_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GeodeAtmTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeAtmTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GeodeAtmTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5780284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtmTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GeodeAtmTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GeodeAtmTrigger::*)()>(&::GlobalNamespace::GeodeAtmTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5780298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtmTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GeodeAtmTrigger::__cordl_internal_get_OnTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTrigger;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GeodeAtmTrigger::__cordl_internal_get_OnTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTrigger;
}
constexpr void GlobalNamespace::GeodeAtmTrigger::__cordl_internal_set_OnTrigger(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTrigger = value;
}
inline void GlobalNamespace::GeodeAtmTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtmTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GeodeAtmTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GeodeAtmTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GeodeAtmTrigger* GlobalNamespace::GeodeAtmTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GeodeAtmTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GeodeAtmTrigger::GeodeAtmTrigger()   {
}
