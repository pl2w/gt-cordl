#pragma once
// IWYU pragma private; include "Cosmetics/CountDrivenEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Cosmetics/zzzz__CountDrivenEvents_def.hpp"
#include "Cosmetics/zzzz__CountDrivenEvents_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "GlobalNamespace/zzzz__RubberDuckEvents_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents.get_CurrentCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cosmetics::CountDrivenEvents::*)()>(&::Cosmetics::CountDrivenEvents::get_CurrentCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1bc4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"get_CurrentCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents.IsOnCooldown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cosmetics::CountDrivenEvents::*)()>(&::Cosmetics::CountDrivenEvents::IsOnCooldown)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5d1bc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"IsOnCooldown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CountDrivenEvents::*)()>(&::Cosmetics::CountDrivenEvents::OnEnable)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5d1bc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CountDrivenEvents::*)()>(&::Cosmetics::CountDrivenEvents::OnDisable)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5d1c2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CountDrivenEvents::*)()>(&::Cosmetics::CountDrivenEvents::OnValidate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d1c450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents.Increment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CountDrivenEvents::*)()>(&::Cosmetics::CountDrivenEvents::Increment)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d1c4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"Increment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents.Decrement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CountDrivenEvents::*)()>(&::Cosmetics::CountDrivenEvents::Decrement)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d1c890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"Decrement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents.SetCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CountDrivenEvents::*)(int32_t)>(&::Cosmetics::CountDrivenEvents::SetCount)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5d1c504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"SetCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents.ResetTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CountDrivenEvents::*)()>(&::Cosmetics::CountDrivenEvents::ResetTriggers)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5d1c958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"ResetTriggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents.GetHighestTriggerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cosmetics::CountDrivenEvents::*)()>(&::Cosmetics::CountDrivenEvents::GetHighestTriggerCount)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d1c89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"GetHighestTriggerCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents.CheckTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CountDrivenEvents::*)(int32_t, int32_t)>(&::Cosmetics::CountDrivenEvents::CheckTriggers)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x5d1bfc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"CheckTriggers", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents.OnCountChanged_SharedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CountDrivenEvents::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Cosmetics::CountDrivenEvents::OnCountChanged_SharedEvent)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5d1c9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"OnCountChanged_SharedEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents.OnCountReached_SharedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CountDrivenEvents::*)(int32_t, int32_t, ::ArrayW<::System::Object*>, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::Cosmetics::CountDrivenEvents::OnCountReached_SharedEvent)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5d1cbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"OnCountReached_SharedEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CountDrivenEvents::*)()>(&::Cosmetics::CountDrivenEvents::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5d1cd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Cosmetics::CountDrivenEvents::__cordl_internal_get_syncAllEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncAllEvents;
}
constexpr bool const& Cosmetics::CountDrivenEvents::__cordl_internal_get_syncAllEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncAllEvents;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_syncAllEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncAllEvents = value;
}
constexpr bool& Cosmetics::CountDrivenEvents::__cordl_internal_get_evaluateOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___evaluateOnEnable;
}
constexpr bool const& Cosmetics::CountDrivenEvents::__cordl_internal_get_evaluateOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___evaluateOnEnable;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_evaluateOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___evaluateOnEnable = value;
}
constexpr bool& Cosmetics::CountDrivenEvents::__cordl_internal_get_wrapCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrapCount;
}
constexpr bool const& Cosmetics::CountDrivenEvents::__cordl_internal_get_wrapCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wrapCount;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_wrapCount(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wrapCount = value;
}
constexpr float_t& Cosmetics::CountDrivenEvents::__cordl_internal_get_cooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr float_t const& Cosmetics::CountDrivenEvents::__cordl_internal_get_cooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cooldown;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_cooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cooldown = value;
}
constexpr ::System::Collections::Generic::List_1<::Cosmetics::CountDrivenEvents_CountTrigger*>*& Cosmetics::CountDrivenEvents::__cordl_internal_get_triggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggers;
}
constexpr ::System::Collections::Generic::List_1<::Cosmetics::CountDrivenEvents_CountTrigger*>* const& Cosmetics::CountDrivenEvents::__cordl_internal_get_triggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggers;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_triggers(::System::Collections::Generic::List_1<::Cosmetics::CountDrivenEvents_CountTrigger*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggers = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountChanged;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_onCountChanged(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCountChanged = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountChangedShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountChangedShared;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountChangedShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountChangedShared;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_onCountChangedShared(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCountChangedShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountIncreased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountIncreased;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountIncreased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountIncreased;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_onCountIncreased(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCountIncreased = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountIncreasedShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountIncreasedShared;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountIncreasedShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountIncreasedShared;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_onCountIncreasedShared(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCountIncreasedShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountDecreased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountDecreased;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountDecreased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountDecreased;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_onCountDecreased(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCountDecreased = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountDecreasedShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountDecreasedShared;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountDecreasedShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountDecreasedShared;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_onCountDecreasedShared(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCountDecreasedShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountResetToZero()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountResetToZero;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountResetToZero() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountResetToZero;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_onCountResetToZero(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCountResetToZero = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountResetToZeroShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountResetToZeroShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Cosmetics::CountDrivenEvents::__cordl_internal_get_onCountResetToZeroShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountResetToZeroShared;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_onCountResetToZeroShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCountResetToZeroShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Cosmetics::CountDrivenEvents::__cordl_internal_get_onReachedMaxTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReachedMaxTrigger;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Cosmetics::CountDrivenEvents::__cordl_internal_get_onReachedMaxTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReachedMaxTrigger;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_onReachedMaxTrigger(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onReachedMaxTrigger = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Cosmetics::CountDrivenEvents::__cordl_internal_get_onReachedMaxTriggerShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReachedMaxTriggerShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Cosmetics::CountDrivenEvents::__cordl_internal_get_onReachedMaxTriggerShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onReachedMaxTriggerShared;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_onReachedMaxTriggerShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onReachedMaxTriggerShared = value;
}
constexpr int32_t& Cosmetics::CountDrivenEvents::__cordl_internal_get_currentCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCount;
}
constexpr int32_t const& Cosmetics::CountDrivenEvents::__cordl_internal_get_currentCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentCount;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_currentCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentCount = value;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& Cosmetics::CountDrivenEvents::__cordl_internal_get__events()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& Cosmetics::CountDrivenEvents::__cordl_internal_get__events() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____events;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____events = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& Cosmetics::CountDrivenEvents::__cordl_internal_get_myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& Cosmetics::CountDrivenEvents::__cordl_internal_get_myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myRig;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myRig = value;
}
constexpr ::GlobalNamespace::CallLimiter*& Cosmetics::CountDrivenEvents::__cordl_internal_get_callLimiter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr ::GlobalNamespace::CallLimiter* const& Cosmetics::CountDrivenEvents::__cordl_internal_get_callLimiter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callLimiter;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callLimiter = value;
}
constexpr float_t& Cosmetics::CountDrivenEvents::__cordl_internal_get_lastEventTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastEventTime;
}
constexpr float_t const& Cosmetics::CountDrivenEvents::__cordl_internal_get_lastEventTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastEventTime;
}
constexpr void Cosmetics::CountDrivenEvents::__cordl_internal_set_lastEventTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastEventTime = value;
}
inline int32_t Cosmetics::CountDrivenEvents::get_CurrentCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"get_CurrentCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Cosmetics::CountDrivenEvents::IsOnCooldown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"IsOnCooldown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cosmetics::CountDrivenEvents::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CountDrivenEvents::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CountDrivenEvents::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CountDrivenEvents::Increment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"Increment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CountDrivenEvents::Decrement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"Decrement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Cosmetics::CountDrivenEvents::SetCount(int32_t  newCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"SetCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCount);
}
inline void Cosmetics::CountDrivenEvents::ResetTriggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"ResetTriggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cosmetics::CountDrivenEvents::GetHighestTriggerCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"GetHighestTriggerCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Cosmetics::CountDrivenEvents::CheckTriggers(int32_t  oldCount, int32_t  newCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"CheckTriggers", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldCount, newCount);
}
inline void Cosmetics::CountDrivenEvents::OnCountChanged_SharedEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"OnCountChanged_SharedEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void Cosmetics::CountDrivenEvents::OnCountReached_SharedEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {"OnCountReached_SharedEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender, target, args, info);
}
inline void Cosmetics::CountDrivenEvents::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cosmetics::CountDrivenEvents* Cosmetics::CountDrivenEvents::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cosmetics::CountDrivenEvents*>());
}
// Ctor Parameters []
constexpr ::Cosmetics::CountDrivenEvents::CountDrivenEvents()   {
}
//  Writing Method size for method: ::Cosmetics::CountDrivenEvents_CountTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cosmetics::CountDrivenEvents_CountTrigger::*)()>(&::Cosmetics::CountDrivenEvents_CountTrigger::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d1ce70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents_CountTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_get_triggerCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCount;
}
constexpr int32_t const& Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_get_triggerCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerCount;
}
constexpr void Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_set_triggerCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerCount = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_get_onCountReached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountReached;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_get_onCountReached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountReached;
}
constexpr void Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_set_onCountReached(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCountReached = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_get_onCountReachedShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountReachedShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_get_onCountReachedShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onCountReachedShared;
}
constexpr void Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_set_onCountReachedShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onCountReachedShared = value;
}
constexpr bool& Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_get_triggerOnce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerOnce;
}
constexpr bool const& Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_get_triggerOnce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerOnce;
}
constexpr void Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_set_triggerOnce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerOnce = value;
}
constexpr bool& Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_get_hasTriggered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasTriggered;
}
constexpr bool const& Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_get_hasTriggered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasTriggered;
}
constexpr void Cosmetics::CountDrivenEvents_CountTrigger::__cordl_internal_set_hasTriggered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasTriggered = value;
}
inline void Cosmetics::CountDrivenEvents_CountTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cosmetics::CountDrivenEvents_CountTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cosmetics::CountDrivenEvents_CountTrigger* Cosmetics::CountDrivenEvents_CountTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cosmetics::CountDrivenEvents_CountTrigger*>());
}
// Ctor Parameters []
constexpr ::Cosmetics::CountDrivenEvents_CountTrigger::CountDrivenEvents_CountTrigger()   {
}
