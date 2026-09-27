#pragma once
// IWYU pragma private; include "GlobalNamespace/TaggedColliderTrigger.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "GlobalNamespace/zzzz__UnityTag_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TaggedColliderTrigger_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TaggedColliderTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TaggedColliderTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::TaggedColliderTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a21638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TaggedColliderTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TaggedColliderTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TaggedColliderTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::TaggedColliderTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a216d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TaggedColliderTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TaggedColliderTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TaggedColliderTrigger::*)()>(&::GlobalNamespace::TaggedColliderTrigger::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a21778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TaggedColliderTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::UnityTag& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get_tag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tag;
}
constexpr ::GlobalNamespace::UnityTag const& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get_tag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tag;
}
constexpr void GlobalNamespace::TaggedColliderTrigger::__cordl_internal_set_tag(::GlobalNamespace::UnityTag  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tag = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get_onEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnter;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get_onEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnter;
}
constexpr void GlobalNamespace::TaggedColliderTrigger::__cordl_internal_set_onEnter(::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEnter = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get_onExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onExit;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get_onExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onExit;
}
constexpr void GlobalNamespace::TaggedColliderTrigger::__cordl_internal_set_onExit(::UnityEngine::Events::UnityEvent_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onExit = value;
}
constexpr float_t& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get_enterHysteresis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterHysteresis;
}
constexpr float_t const& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get_enterHysteresis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enterHysteresis;
}
constexpr void GlobalNamespace::TaggedColliderTrigger::__cordl_internal_set_enterHysteresis(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enterHysteresis = value;
}
constexpr float_t& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get_exitHysteresis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitHysteresis;
}
constexpr float_t const& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get_exitHysteresis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___exitHysteresis;
}
constexpr void GlobalNamespace::TaggedColliderTrigger::__cordl_internal_set_exitHysteresis(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___exitHysteresis = value;
}
constexpr ::GlobalNamespace::TimeSince& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get__sinceLastEnter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sinceLastEnter;
}
constexpr ::GlobalNamespace::TimeSince const& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get__sinceLastEnter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sinceLastEnter;
}
constexpr void GlobalNamespace::TaggedColliderTrigger::__cordl_internal_set__sinceLastEnter(::GlobalNamespace::TimeSince  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sinceLastEnter = value;
}
constexpr ::GlobalNamespace::TimeSince& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get__sinceLastExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sinceLastExit;
}
constexpr ::GlobalNamespace::TimeSince const& GlobalNamespace::TaggedColliderTrigger::__cordl_internal_get__sinceLastExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sinceLastExit;
}
constexpr void GlobalNamespace::TaggedColliderTrigger::__cordl_internal_set__sinceLastExit(::GlobalNamespace::TimeSince  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sinceLastExit = value;
}
inline void GlobalNamespace::TaggedColliderTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TaggedColliderTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::TaggedColliderTrigger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TaggedColliderTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::TaggedColliderTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TaggedColliderTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TaggedColliderTrigger* GlobalNamespace::TaggedColliderTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TaggedColliderTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TaggedColliderTrigger::TaggedColliderTrigger()   {
}
