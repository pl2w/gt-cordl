#pragma once
// IWYU pragma private; include "GorillaTag/Sports/SportGoalExitTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTag/Sports/zzzz__SportGoalExitTrigger_def.hpp"
#include "GorillaTag/Sports/zzzz__SportGoalTrigger_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaTag::Sports::SportGoalExitTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportGoalExitTrigger::*)(::UnityEngine::Collider*)>(&::GorillaTag::Sports::SportGoalExitTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5d3bca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportGoalExitTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Sports::SportGoalExitTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Sports::SportGoalExitTrigger::*)()>(&::GorillaTag::Sports::SportGoalExitTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d3be0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportGoalExitTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTag::Sports::SportGoalTrigger>& GorillaTag::Sports::SportGoalExitTrigger::__cordl_internal_get_goalTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goalTrigger;
}
constexpr ::UnityW<::GorillaTag::Sports::SportGoalTrigger> const& GorillaTag::Sports::SportGoalExitTrigger::__cordl_internal_get_goalTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goalTrigger;
}
constexpr void GorillaTag::Sports::SportGoalExitTrigger::__cordl_internal_set_goalTrigger(::UnityW<::GorillaTag::Sports::SportGoalTrigger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___goalTrigger = value;
}
inline void GorillaTag::Sports::SportGoalExitTrigger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportGoalExitTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTag::Sports::SportGoalExitTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Sports::SportGoalExitTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Sports::SportGoalExitTrigger* GorillaTag::Sports::SportGoalExitTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Sports::SportGoalExitTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Sports::SportGoalExitTrigger::SportGoalExitTrigger()   {
}
