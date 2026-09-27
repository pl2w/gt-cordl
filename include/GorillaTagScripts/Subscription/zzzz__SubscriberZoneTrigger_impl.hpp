#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/SubscriberZoneTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Subscription/zzzz__SubscriberZoneTrigger_def.hpp"
#include "GorillaTagScripts/Subscription/zzzz__SubscriberExclusiveZone_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriberZoneTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriberZoneTrigger::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Subscription::SubscriberZoneTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5c0c400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriberZoneTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriberZoneTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriberZoneTrigger::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::Subscription::SubscriberZoneTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5c0c59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriberZoneTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriberZoneTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriberZoneTrigger::*)()>(&::GorillaTagScripts::Subscription::SubscriberZoneTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0c738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriberZoneTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GorillaTagScripts::Subscription::SubscriberExclusiveZone>& GorillaTagScripts::Subscription::SubscriberZoneTrigger::__cordl_internal_get_parentZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentZone;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::SubscriberExclusiveZone> const& GorillaTagScripts::Subscription::SubscriberZoneTrigger::__cordl_internal_get_parentZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentZone;
}
constexpr void GorillaTagScripts::Subscription::SubscriberZoneTrigger::__cordl_internal_set_parentZone(::UnityW<::GorillaTagScripts::Subscription::SubscriberExclusiveZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentZone = value;
}
constexpr bool& GorillaTagScripts::Subscription::SubscriberZoneTrigger::__cordl_internal_get_isRestrictedZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRestrictedZone;
}
constexpr bool const& GorillaTagScripts::Subscription::SubscriberZoneTrigger::__cordl_internal_get_isRestrictedZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRestrictedZone;
}
constexpr void GorillaTagScripts::Subscription::SubscriberZoneTrigger::__cordl_internal_set_isRestrictedZone(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRestrictedZone = value;
}
inline void GorillaTagScripts::Subscription::SubscriberZoneTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriberZoneTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Subscription::SubscriberZoneTrigger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriberZoneTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GorillaTagScripts::Subscription::SubscriberZoneTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriberZoneTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Subscription::SubscriberZoneTrigger* GorillaTagScripts::Subscription::SubscriberZoneTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::SubscriberZoneTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::SubscriberZoneTrigger::SubscriberZoneTrigger()   {
}
