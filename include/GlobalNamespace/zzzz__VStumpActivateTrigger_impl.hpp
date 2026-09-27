#pragma once
// IWYU pragma private; include "GlobalNamespace/VStumpActivateTrigger.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__VirtualStumpActivateMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VStumpActivateTrigger_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VStumpActivateTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VStumpActivateTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::VStumpActivateTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5a10888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VStumpActivateTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VStumpActivateTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VStumpActivateTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::VStumpActivateTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5a109b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VStumpActivateTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VStumpActivateTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VStumpActivateTrigger::*)()>(&::GlobalNamespace::VStumpActivateTrigger::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a10a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VStumpActivateTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode& GlobalNamespace::VStumpActivateTrigger::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode const& GlobalNamespace::VStumpActivateTrigger::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::VStumpActivateTrigger::__cordl_internal_set_mode(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr bool& GlobalNamespace::VStumpActivateTrigger::__cordl_internal_get_armed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armed;
}
constexpr bool const& GlobalNamespace::VStumpActivateTrigger::__cordl_internal_get_armed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armed;
}
constexpr void GlobalNamespace::VStumpActivateTrigger::__cordl_internal_set_armed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armed = value;
}
inline void GlobalNamespace::VStumpActivateTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VStumpActivateTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::VStumpActivateTrigger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VStumpActivateTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::VStumpActivateTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VStumpActivateTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VStumpActivateTrigger* GlobalNamespace::VStumpActivateTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VStumpActivateTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VStumpActivateTrigger::VStumpActivateTrigger()   {
}
