#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/FingerFlexEvent.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent_EventType_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent_FingerType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent_EventType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent_FingerType_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__FingerFlexEvent_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__IHeldItem_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent::Awake)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5d96860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent.IsMyItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::FingerFlexEvent::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent::IsMyItem)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d96920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {"IsMyItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent::Tick)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d969a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent.FireEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent::*)(::GorillaTag::Cosmetics::FingerFlexEvent_Listener*)>(&::GorillaTag::Cosmetics::FingerFlexEvent::FireEvents)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5d96a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {"FireEvents", {}, {::i2c::type_of<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent.FireEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent::*)(::GorillaTag::Cosmetics::FingerFlexEvent_Listener*, float_t, float_t)>(&::GorillaTag::Cosmetics::FingerFlexEvent::FireEvents)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5d96d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {"FireEvents", {}, {::i2c::type_of<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent.CheckFingerValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent::*)(::GorillaTag::Cosmetics::FingerFlexEvent_Listener*, float_t, bool, ::by_ref<float_t>)>(&::GorillaTag::Cosmetics::FingerFlexEvent::CheckFingerValue)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5d96f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {"CheckFingerValue", {}, {::i2c::type_of<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent.FingerFlexValidation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Cosmetics::FingerFlexEvent::*)(bool)>(&::GorillaTag::Cosmetics::FingerFlexEvent::FingerFlexValidation)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5d96e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {"FingerFlexValidation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d970ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_get_ignoreTransferable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreTransferable;
}
constexpr bool const& GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_get_ignoreTransferable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreTransferable;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_set_ignoreTransferable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreTransferable = value;
}
constexpr ::GlobalNamespace::FingerFlexEvent_FingerType& GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_get_fingerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerType;
}
constexpr ::GlobalNamespace::FingerFlexEvent_FingerType const& GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_get_fingerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerType;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_set_fingerType(::GlobalNamespace::FingerFlexEvent_FingerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerType = value;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>& GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_get_eventListeners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventListeners;
}
constexpr ::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*> const& GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_get_eventListeners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventListeners;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_set_eventListeners(::ArrayW<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventListeners = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_get__rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_get__rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rig;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rig = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_get_parentTransferable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTransferable;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_get_parentTransferable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentTransferable;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_set_parentTransferable(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentTransferable = value;
}
constexpr ::GorillaTag::Cosmetics::IHeldItem*& GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_get_myHeldItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myHeldItem;
}
constexpr ::GorillaTag::Cosmetics::IHeldItem* const& GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_get_myHeldItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myHeldItem;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent::__cordl_internal_set_myHeldItem(::GorillaTag::Cosmetics::IHeldItem*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myHeldItem = value;
}
inline void GorillaTag::Cosmetics::FingerFlexEvent::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTag::Cosmetics::FingerFlexEvent::IsMyItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {"IsMyItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent::FireEvents(::GorillaTag::Cosmetics::FingerFlexEvent_Listener*  listener)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {"FireEvents", {}, {::i2c::type_of<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent::FireEvents(::GorillaTag::Cosmetics::FingerFlexEvent_Listener*  listener, float_t  leftFinger, float_t  rightFinger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {"FireEvents", {}, {::i2c::type_of<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener, leftFinger, rightFinger);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent::CheckFingerValue(::GorillaTag::Cosmetics::FingerFlexEvent_Listener*  listener, float_t  fingerValue, bool  isLeft, ::by_ref<float_t>  lastValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {"CheckFingerValue", {}, {::i2c::type_of<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener, fingerValue, isLeft, lastValue);
}
inline bool GorillaTag::Cosmetics::FingerFlexEvent::FingerFlexValidation(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {"FingerFlexValidation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, isLeftHand);
}
inline void GorillaTag::Cosmetics::FingerFlexEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::FingerFlexEvent* GorillaTag::Cosmetics::FingerFlexEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::FingerFlexEvent*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::FingerFlexEvent::FingerFlexEvent()   {
}
//  Writing Method size for method: ::GorillaTag::Cosmetics::FingerFlexEvent_Listener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::FingerFlexEvent_Listener::*)()>(&::GorillaTag::Cosmetics::FingerFlexEvent_Listener::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d97118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::FingerFlexEvent_EventType& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_eventType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventType;
}
constexpr ::GlobalNamespace::FingerFlexEvent_EventType const& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_eventType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___eventType;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_set_eventType(::GlobalNamespace::FingerFlexEvent_EventType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___eventType = value;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>*& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_listenerComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerComponent;
}
constexpr ::UnityEngine::Events::UnityEvent_2<bool,float_t>* const& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_listenerComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listenerComponent;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_set_listenerComponent(::UnityEngine::Events::UnityEvent_2<bool,float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listenerComponent = value;
}
constexpr float_t& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_fingerFlexValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerFlexValue;
}
constexpr float_t const& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_fingerFlexValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerFlexValue;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_set_fingerFlexValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerFlexValue = value;
}
constexpr float_t& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_fingerReleaseValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerReleaseValue;
}
constexpr float_t const& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_fingerReleaseValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerReleaseValue;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_set_fingerReleaseValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerReleaseValue = value;
}
constexpr int32_t& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_frameInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameInterval;
}
constexpr int32_t const& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_frameInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameInterval;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_set_frameInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameInterval = value;
}
constexpr bool& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_syncForEveryoneInRoom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncForEveryoneInRoom;
}
constexpr bool const& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_syncForEveryoneInRoom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncForEveryoneInRoom;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_set_syncForEveryoneInRoom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncForEveryoneInRoom = value;
}
constexpr bool& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_fireOnlyWhileHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireOnlyWhileHeld;
}
constexpr bool const& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_fireOnlyWhileHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fireOnlyWhileHeld;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_set_fireOnlyWhileHeld(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fireOnlyWhileHeld = value;
}
constexpr bool& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_checkLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkLeftHand;
}
constexpr bool const& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_checkLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkLeftHand;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_set_checkLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkLeftHand = value;
}
constexpr int32_t& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_frameCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameCounter;
}
constexpr int32_t const& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_frameCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frameCounter;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_set_frameCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frameCounter = value;
}
constexpr float_t& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_fingerRightLastValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerRightLastValue;
}
constexpr float_t const& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_fingerRightLastValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerRightLastValue;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_set_fingerRightLastValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerRightLastValue = value;
}
constexpr float_t& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_fingerLeftLastValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerLeftLastValue;
}
constexpr float_t const& GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_get_fingerLeftLastValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fingerLeftLastValue;
}
constexpr void GorillaTag::Cosmetics::FingerFlexEvent_Listener::__cordl_internal_set_fingerLeftLastValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fingerLeftLastValue = value;
}
inline void GorillaTag::Cosmetics::FingerFlexEvent_Listener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Cosmetics::FingerFlexEvent_Listener* GorillaTag::Cosmetics::FingerFlexEvent_Listener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Cosmetics::FingerFlexEvent_Listener*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::Cosmetics::FingerFlexEvent_Listener::FingerFlexEvent_Listener()   {
}
