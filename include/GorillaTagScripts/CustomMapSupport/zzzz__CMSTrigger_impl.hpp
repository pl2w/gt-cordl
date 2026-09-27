#pragma once
// IWYU pragma private; include "GorillaTagScripts/CustomMapSupport/CMSTrigger.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSource_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/CustomMapSupport/zzzz__CMSTrigger_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTrigger.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTrigger::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSTrigger::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5bdce84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTrigger.GetID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GorillaTagScripts::CustomMapSupport::CMSTrigger::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSTrigger::GetID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bdceb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"GetID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTrigger.CopyTriggerSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTrigger::*)(::GT_CustomMapSupportRuntime::TriggerSettings*)>(&::GorillaTagScripts::CustomMapSupport::CMSTrigger::CopyTriggerSettings)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5bd887c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                    {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTrigger::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::CustomMapSupport::CMSTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5bdceb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTrigger.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTrigger::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::CustomMapSupport::CMSTrigger::OnTriggerStay)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5bdd33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTrigger.ValidateCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::CustomMapSupport::CMSTrigger::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::CustomMapSupport::CMSTrigger::ValidateCollider)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5bdcee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"ValidateCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTrigger.OnTriggerActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTrigger::*)(::UnityEngine::Collider*)>(&::GorillaTagScripts::CustomMapSupport::CMSTrigger::OnTriggerActivation)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bdd2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"OnTriggerActivation", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTrigger.CanTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::CustomMapSupport::CMSTrigger::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSTrigger::CanTrigger)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5bdc330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"CanTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTrigger.Trigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTrigger::*)(double_t, bool, bool)>(&::GorillaTagScripts::CustomMapSupport::CMSTrigger::Trigger)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5bd84c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                    {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTrigger.ResetTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTrigger::*)(bool)>(&::GorillaTagScripts::CustomMapSupport::CMSTrigger::ResetTrigger)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5bd94cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTrigger.SetTriggerCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTrigger::*)(uint8_t)>(&::GorillaTagScripts::CustomMapSupport::CMSTrigger::SetTriggerCount)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5bdb7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"SetTriggerCount", {}, {::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTrigger.SetLastTriggerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTrigger::*)(double_t)>(&::GorillaTagScripts::CustomMapSupport::CMSTrigger::SetLastTriggerTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bdd44c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"SetLastTriggerTime", {}, {::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::CustomMapSupport::CMSTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::CustomMapSupport::CMSTrigger::*)()>(&::GorillaTagScripts::CustomMapSupport::CMSTrigger::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5bd8680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_syncedToAllPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers;
}
constexpr bool const& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_syncedToAllPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___syncedToAllPlayers;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_set_syncedToAllPlayers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___syncedToAllPlayers = value;
}
constexpr float_t& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_validationDistanceSquared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validationDistanceSquared;
}
constexpr float_t const& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_validationDistanceSquared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___validationDistanceSquared;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_set_validationDistanceSquared(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___validationDistanceSquared = value;
}
constexpr ::GT_CustomMapSupportRuntime::TriggerSource& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_triggeredBy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggeredBy;
}
constexpr ::GT_CustomMapSupportRuntime::TriggerSource const& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_triggeredBy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggeredBy;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_set_triggeredBy(::GT_CustomMapSupportRuntime::TriggerSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggeredBy = value;
}
constexpr double_t& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_onEnableTriggerDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnableTriggerDelay;
}
constexpr double_t const& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_onEnableTriggerDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEnableTriggerDelay;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_set_onEnableTriggerDelay(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEnableTriggerDelay = value;
}
constexpr double_t& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_generalRetriggerDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generalRetriggerDelay;
}
constexpr double_t const& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_generalRetriggerDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generalRetriggerDelay;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_set_generalRetriggerDelay(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___generalRetriggerDelay = value;
}
constexpr bool& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_retriggerAfterDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerAfterDuration;
}
constexpr bool const& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_retriggerAfterDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerAfterDuration;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_set_retriggerAfterDuration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retriggerAfterDuration = value;
}
constexpr double_t& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_retriggerStayDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerStayDuration;
}
constexpr double_t const& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_retriggerStayDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___retriggerStayDuration;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_set_retriggerStayDuration(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___retriggerStayDuration = value;
}
constexpr uint8_t& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_numAllowedTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numAllowedTriggers;
}
constexpr uint8_t const& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_numAllowedTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numAllowedTriggers;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_set_numAllowedTriggers(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numAllowedTriggers = value;
}
constexpr uint8_t& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_numTimesTriggered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numTimesTriggered;
}
constexpr uint8_t const& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_numTimesTriggered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numTimesTriggered;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_set_numTimesTriggered(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numTimesTriggered = value;
}
constexpr double_t& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_lastTriggerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggerTime;
}
constexpr double_t const& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_lastTriggerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggerTime;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_set_lastTriggerTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTriggerTime = value;
}
constexpr double_t& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_enabledTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledTime;
}
constexpr double_t const& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_enabledTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledTime;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_set_enabledTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabledTime = value;
}
constexpr uint8_t& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr uint8_t const& GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void GorillaTagScripts::CustomMapSupport::CMSTrigger::__cordl_internal_set_id(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
inline void GorillaTagScripts::CustomMapSupport::CMSTrigger::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint8_t GorillaTagScripts::CustomMapSupport::CMSTrigger::GetID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"GetID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTrigger::CopyTriggerSettings(::GT_CustomMapSupportRuntime::TriggerSettings*  settings)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, settings);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTrigger::OnTriggerEnter(::UnityEngine::Collider*  triggeringCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggeringCollider);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTrigger::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline bool GorillaTagScripts::CustomMapSupport::CMSTrigger::ValidateCollider(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"ValidateCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTrigger::OnTriggerActivation(::UnityEngine::Collider*  activatingCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"OnTriggerActivation", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activatingCollider);
}
inline bool GorillaTagScripts::CustomMapSupport::CMSTrigger::CanTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"CanTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTrigger::Trigger(double_t  triggerTime, bool  originatedLocally, bool  ignoreTriggerCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, triggerTime, originatedLocally, ignoreTriggerCount);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTrigger::ResetTrigger(bool  onlyResetTriggerCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"ResetTrigger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onlyResetTriggerCount);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTrigger::SetTriggerCount(uint8_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"SetTriggerCount", {}, {::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTrigger::SetLastTriggerTime(double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {"SetLastTriggerTime", {}, {::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::CustomMapSupport::CMSTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::CustomMapSupport::CMSTrigger* GorillaTagScripts::CustomMapSupport::CMSTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::CustomMapSupport::CMSTrigger*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::CustomMapSupport::CMSTrigger::CMSTrigger()   {
}
