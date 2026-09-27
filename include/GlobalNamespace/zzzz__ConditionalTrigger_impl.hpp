#pragma once
// IWYU pragma private; include "GlobalNamespace/ConditionalTrigger.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "GlobalNamespace/zzzz__TriggerCondition_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ConditionalTrigger_def.hpp"
#include "GlobalNamespace/zzzz__IRigAware_def.hpp"
#include "GlobalNamespace/zzzz__TriggerCondition_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.get_intValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::ConditionalTrigger::*)()>(&::GlobalNamespace::ConditionalTrigger::get_intValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e33c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"get_intValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.SetProximityFromRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)()>(&::GlobalNamespace::ConditionalTrigger::SetProximityFromRig)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x57e33cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"SetProximityFromRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.SetProximityToRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)()>(&::GlobalNamespace::ConditionalTrigger::SetProximityToRig)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x57e35e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"SetProximityToRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.SetProximityFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::ConditionalTrigger::SetProximityFrom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e3710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"SetProximityFrom", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.SetProxmityTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::ConditionalTrigger::SetProxmityTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e3718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"SetProxmityTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.TrackedSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)(::GlobalNamespace::TriggerCondition)>(&::GlobalNamespace::ConditionalTrigger::TrackedSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e3720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedSet", {}, {::i2c::type_of<::GlobalNamespace::TriggerCondition>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.TrackedAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)(::GlobalNamespace::TriggerCondition)>(&::GlobalNamespace::ConditionalTrigger::TrackedAdd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57e3728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedAdd", {}, {::i2c::type_of<::GlobalNamespace::TriggerCondition>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.TrackedRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)(::GlobalNamespace::TriggerCondition)>(&::GlobalNamespace::ConditionalTrigger::TrackedRemove)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57e3738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedRemove", {}, {::i2c::type_of<::GlobalNamespace::TriggerCondition>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.TrackedSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)(int32_t)>(&::GlobalNamespace::ConditionalTrigger::TrackedSet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e3748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.TrackedAdd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)(int32_t)>(&::GlobalNamespace::ConditionalTrigger::TrackedAdd)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57e3750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedAdd", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.TrackedRemove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)(int32_t)>(&::GlobalNamespace::ConditionalTrigger::TrackedRemove)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57e3760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedRemove", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.TrackedClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)()>(&::GlobalNamespace::ConditionalTrigger::TrackedClear)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e3770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedClear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)()>(&::GlobalNamespace::ConditionalTrigger::OnEnable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57e3778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)()>(&::GlobalNamespace::ConditionalTrigger::Update)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x57e3798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.TrackTimeElapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)()>(&::GlobalNamespace::ConditionalTrigger::TrackTimeElapsed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x57e37e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackTimeElapsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.TrackProximity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)()>(&::GlobalNamespace::ConditionalTrigger::TrackProximity)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x57e381c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackProximity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.IsTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ConditionalTrigger::*)(::GlobalNamespace::TriggerCondition)>(&::GlobalNamespace::ConditionalTrigger::IsTracking)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57e37d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"IsTracking", {}, {::i2c::type_of<::GlobalNamespace::TriggerCondition>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.FindRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::GlobalNamespace::VRRig*>)>(&::GlobalNamespace::ConditionalTrigger::FindRig)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x57e34f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"FindRig", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::VRRig*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger.SetRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::ConditionalTrigger::SetRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e398c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"SetRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalTrigger::*)()>(&::GlobalNamespace::ConditionalTrigger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57e3994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TriggerCondition& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__tracking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tracking;
}
constexpr ::GlobalNamespace::TriggerCondition const& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__tracking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tracking;
}
constexpr void GlobalNamespace::ConditionalTrigger::__cordl_internal_set__tracking(::GlobalNamespace::TriggerCondition  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tracking = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__from()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____from;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__from() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____from;
}
constexpr void GlobalNamespace::ConditionalTrigger::__cordl_internal_set__from(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____from = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__to()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____to;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__to() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____to;
}
constexpr void GlobalNamespace::ConditionalTrigger::__cordl_internal_set__to(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____to = value;
}
constexpr float_t& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr float_t const& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxDistance;
}
constexpr void GlobalNamespace::ConditionalTrigger::__cordl_internal_set__maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxDistance = value;
}
constexpr float_t& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__distance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distance;
}
constexpr float_t const& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__distance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____distance;
}
constexpr void GlobalNamespace::ConditionalTrigger::__cordl_internal_set__distance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____distance = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::ConditionalTrigger::__cordl_internal_get_onMaxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaxDistance;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::ConditionalTrigger::__cordl_internal_get_onMaxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onMaxDistance;
}
constexpr void GlobalNamespace::ConditionalTrigger::__cordl_internal_set_onMaxDistance(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onMaxDistance = value;
}
constexpr float_t& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__interval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interval;
}
constexpr float_t const& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__interval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interval;
}
constexpr void GlobalNamespace::ConditionalTrigger::__cordl_internal_set__interval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interval = value;
}
constexpr ::GlobalNamespace::TimeSince& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__timeSince()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSince;
}
constexpr ::GlobalNamespace::TimeSince const& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__timeSince() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeSince;
}
constexpr void GlobalNamespace::ConditionalTrigger::__cordl_internal_set__timeSince(::GlobalNamespace::TimeSince  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeSince = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::ConditionalTrigger::__cordl_internal_get_onTimeElapsed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimeElapsed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::ConditionalTrigger::__cordl_internal_get_onTimeElapsed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTimeElapsed;
}
constexpr void GlobalNamespace::ConditionalTrigger::__cordl_internal_set_onTimeElapsed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTimeElapsed = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::ConditionalTrigger::__cordl_internal_get__rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr void GlobalNamespace::ConditionalTrigger::__cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rig = value;
}
inline int32_t GlobalNamespace::ConditionalTrigger::get_intValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"get_intValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::ConditionalTrigger::SetProximityFromRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"SetProximityFromRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConditionalTrigger::SetProximityToRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"SetProximityToRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConditionalTrigger::SetProximityFrom(::UnityEngine::Transform*  from)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"SetProximityFrom", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from);
}
inline void GlobalNamespace::ConditionalTrigger::SetProxmityTo(::UnityEngine::Transform*  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"SetProxmityTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, to);
}
inline void GlobalNamespace::ConditionalTrigger::TrackedSet(::GlobalNamespace::TriggerCondition  conditions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedSet", {}, {::i2c::type_of<::GlobalNamespace::TriggerCondition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditions);
}
inline void GlobalNamespace::ConditionalTrigger::TrackedAdd(::GlobalNamespace::TriggerCondition  conditions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedAdd", {}, {::i2c::type_of<::GlobalNamespace::TriggerCondition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditions);
}
inline void GlobalNamespace::ConditionalTrigger::TrackedRemove(::GlobalNamespace::TriggerCondition  conditions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedRemove", {}, {::i2c::type_of<::GlobalNamespace::TriggerCondition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditions);
}
inline void GlobalNamespace::ConditionalTrigger::TrackedSet(int32_t  conditions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedSet", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditions);
}
inline void GlobalNamespace::ConditionalTrigger::TrackedAdd(int32_t  conditions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedAdd", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditions);
}
inline void GlobalNamespace::ConditionalTrigger::TrackedRemove(int32_t  conditions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedRemove", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, conditions);
}
inline void GlobalNamespace::ConditionalTrigger::TrackedClear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackedClear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConditionalTrigger::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConditionalTrigger::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConditionalTrigger::TrackTimeElapsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackTimeElapsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConditionalTrigger::TrackProximity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"TrackProximity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::ConditionalTrigger::IsTracking(::GlobalNamespace::TriggerCondition  condition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"IsTracking", {}, {::i2c::type_of<::GlobalNamespace::TriggerCondition>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, condition);
}
inline void GlobalNamespace::ConditionalTrigger::FindRig(::by_ref<::GlobalNamespace::VRRig*>  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"FindRig", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::VRRig*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig);
}
inline void GlobalNamespace::ConditionalTrigger::SetRig(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {"SetRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::ConditionalTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ConditionalTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConditionalTrigger* GlobalNamespace::ConditionalTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConditionalTrigger*>());
}
/// @brief Convert operator to "::GlobalNamespace::IRigAware"
constexpr  GlobalNamespace::ConditionalTrigger::operator ::GlobalNamespace::IRigAware*() noexcept {
return static_cast<::GlobalNamespace::IRigAware*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRigAware"
constexpr ::GlobalNamespace::IRigAware* GlobalNamespace::ConditionalTrigger::i___GlobalNamespace__IRigAware() noexcept {
return static_cast<::GlobalNamespace::IRigAware*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConditionalTrigger::ConditionalTrigger()   {
}
