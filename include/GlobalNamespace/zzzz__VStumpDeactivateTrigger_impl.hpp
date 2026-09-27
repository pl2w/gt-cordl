#pragma once
// IWYU pragma private; include "GlobalNamespace/VStumpDeactivateTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VStumpDeactivateTrigger_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VStumpDeactivateTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VStumpDeactivateTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::VStumpDeactivateTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a10aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VStumpDeactivateTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VStumpDeactivateTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VStumpDeactivateTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::VStumpDeactivateTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5a10bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VStumpDeactivateTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VStumpDeactivateTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VStumpDeactivateTrigger::*)()>(&::GlobalNamespace::VStumpDeactivateTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a10cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VStumpDeactivateTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::VStumpDeactivateTrigger::__cordl_internal_get_armed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armed;
}
constexpr bool const& GlobalNamespace::VStumpDeactivateTrigger::__cordl_internal_get_armed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armed;
}
constexpr void GlobalNamespace::VStumpDeactivateTrigger::__cordl_internal_set_armed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armed = value;
}
inline void GlobalNamespace::VStumpDeactivateTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VStumpDeactivateTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::VStumpDeactivateTrigger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VStumpDeactivateTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::VStumpDeactivateTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VStumpDeactivateTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VStumpDeactivateTrigger* GlobalNamespace::VStumpDeactivateTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VStumpDeactivateTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VStumpDeactivateTrigger::VStumpDeactivateTrigger()   {
}
