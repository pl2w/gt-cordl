#pragma once
// IWYU pragma private; include "GlobalNamespace/HalloweenWatcherEyes.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HalloweenWatcherEyes_def.hpp"
#include "GlobalNamespace/zzzz__HalloweenWatcherEyes_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HalloweenWatcherEyes.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenWatcherEyes::*)()>(&::GlobalNamespace::HalloweenWatcherEyes::Start)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a13128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenWatcherEyes.CheckIfNearPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::HalloweenWatcherEyes::*)(float_t)>(&::GlobalNamespace::HalloweenWatcherEyes::CheckIfNearPlayer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a131a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes*>(),
                        {"CheckIfNearPlayer", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenWatcherEyes.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenWatcherEyes::*)()>(&::GlobalNamespace::HalloweenWatcherEyes::Update)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x5a13244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenWatcherEyes.LookNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenWatcherEyes::*)()>(&::GlobalNamespace::HalloweenWatcherEyes::LookNormal)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a13644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes*>(),
                        {"LookNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenWatcherEyes._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenWatcherEyes::*)()>(&::GlobalNamespace::HalloweenWatcherEyes::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a13718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_timeBetweenUpdates()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBetweenUpdates;
}
constexpr float_t const& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_timeBetweenUpdates() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeBetweenUpdates;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_set_timeBetweenUpdates(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeBetweenUpdates = value;
}
constexpr float_t& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_watchRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchRange;
}
constexpr float_t const& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_watchRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchRange;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_set_watchRange(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchRange = value;
}
constexpr float_t& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_watchMaxAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchMaxAngle;
}
constexpr float_t const& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_watchMaxAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchMaxAngle;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_set_watchMaxAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchMaxAngle = value;
}
constexpr float_t& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_lerpDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpDuration;
}
constexpr float_t const& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_lerpDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpDuration;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_set_lerpDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpDuration = value;
}
constexpr float_t& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_playersViewCenterAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersViewCenterAngle;
}
constexpr float_t const& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_playersViewCenterAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersViewCenterAngle;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_set_playersViewCenterAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersViewCenterAngle = value;
}
constexpr float_t& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_durationToBeNormalWhenPlayerLooks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___durationToBeNormalWhenPlayerLooks;
}
constexpr float_t const& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_durationToBeNormalWhenPlayerLooks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___durationToBeNormalWhenPlayerLooks;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_set_durationToBeNormalWhenPlayerLooks(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___durationToBeNormalWhenPlayerLooks = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_leftEye()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftEye;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_leftEye() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftEye;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_set_leftEye(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftEye = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_rightEye()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightEye;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_rightEye() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightEye;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_set_rightEye(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightEye = value;
}
constexpr float_t& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_playersViewCenterCosAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersViewCenterCosAngle;
}
constexpr float_t const& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_playersViewCenterCosAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersViewCenterCosAngle;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_set_playersViewCenterCosAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersViewCenterCosAngle = value;
}
constexpr float_t& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_watchMinCosAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchMinCosAngle;
}
constexpr float_t const& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_watchMinCosAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchMinCosAngle;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_set_watchMinCosAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchMinCosAngle = value;
}
constexpr float_t& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_pretendingToBeNormalUntilTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pretendingToBeNormalUntilTimestamp;
}
constexpr float_t const& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_pretendingToBeNormalUntilTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pretendingToBeNormalUntilTimestamp;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_set_pretendingToBeNormalUntilTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pretendingToBeNormalUntilTimestamp = value;
}
constexpr float_t& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_lerpValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpValue;
}
constexpr float_t const& GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_get_lerpValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lerpValue;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes::__cordl_internal_set_lerpValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lerpValue = value;
}
inline void GlobalNamespace::HalloweenWatcherEyes::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::HalloweenWatcherEyes::CheckIfNearPlayer(float_t  initialSleep)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes*>(),
                        {"CheckIfNearPlayer", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, initialSleep);
}
inline void GlobalNamespace::HalloweenWatcherEyes::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenWatcherEyes::LookNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes*>(),
                        {"LookNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenWatcherEyes::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HalloweenWatcherEyes* GlobalNamespace::HalloweenWatcherEyes::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HalloweenWatcherEyes*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HalloweenWatcherEyes::HalloweenWatcherEyes()   {
}
//  Writing Method size for method: ::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::*)(int32_t)>(&::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a1321c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::*)()>(&::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1373c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::*)()>(&::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5a13740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::*)()>(&::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a13934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::*)()>(&::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a1393c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::*)()>(&::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a13974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr float_t& GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::__cordl_internal_get_initialSleep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialSleep;
}
constexpr float_t const& GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::__cordl_internal_get_initialSleep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialSleep;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::__cordl_internal_set_initialSleep(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialSleep = value;
}
constexpr ::UnityW<::GlobalNamespace::HalloweenWatcherEyes>& GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::HalloweenWatcherEyes> const& GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HalloweenWatcherEyes>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13* GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HalloweenWatcherEyes__CheckIfNearPlayer_d__13::HalloweenWatcherEyes__CheckIfNearPlayer_d__13()   {
}
