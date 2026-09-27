#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/AlarmClocks/AlarmClockManager.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Subscription/AlarmClocks/zzzz__AlarmClockManager_def.hpp"
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GorillaTagScripts/Subscription/AlarmClocks/zzzz__AlarmClockManager_def.hpp"
#include "GorillaTagScripts/Subscription/AlarmClocks/zzzz__AlarmClock_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager> (*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c0f984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c0f9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::get_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0fa24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.set_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)(bool)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::set_Initialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0fa2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.get_ActiveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::get_ActiveKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0fa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"get_ActiveKey", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.set_ActiveKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)(::StringW)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::set_ActiveKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0fa3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"set_ActiveKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::Start)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x5c0fa44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.PerformWakeUpSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::PerformWakeUpSequence)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c0fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"PerformWakeUpSequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.ToggleAlarmClock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::ToggleAlarmClock)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5c0f5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"ToggleAlarmClock", {}, {::i2c::type_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.ToggleAlarmClockInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::ToggleAlarmClockInternal)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5c0ff34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"ToggleAlarmClockInternal", {}, {::i2c::type_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::OnDestroy)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c10080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.SendTelemetryEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)(::StringW, ::StringW)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::SendTelemetryEvent)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5c0fd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"SendTelemetryEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.AllUniqueClockKeys
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::AllUniqueClockKeys)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c1015c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"AllUniqueClockKeys", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.GameSystemsLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::GameSystemsLoaded)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x5c10250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"GameSystemsLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.AllZonesLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::AllZonesLoaded)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5c104d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"AllZonesLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.GetActiveZones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::GetActiveZones)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x5c10654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"GetActiveZones", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.RequestLoadZones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::RequestLoadZones)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5c109f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"RequestLoadZones", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.GetClockData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)(::StringW)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::GetClockData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c0fcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"GetClockData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.IsVIMOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::IsVIMOnly)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5c0f100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"IsVIMOnly", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.StartTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::StartTracking)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c10ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"StartTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.StopTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)(float_t)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::StopTracking)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c10b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"StopTracking", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.DoTracking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::DoTracking)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c10b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"DoTracking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager.ClearUnsubPlayerData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::ClearUnsubPlayerData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c10c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"ClearUnsubPlayerData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c10d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__Initialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr bool const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__Initialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Initialized_k__BackingField;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_set__Initialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Initialized_k__BackingField = value;
}
constexpr ::StringW& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__loadingMessage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadingMessage;
}
constexpr ::StringW const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__loadingMessage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadingMessage;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_set__loadingMessage(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loadingMessage = value;
}
constexpr float_t& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__wrongWarpTolerance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wrongWarpTolerance;
}
constexpr float_t const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__wrongWarpTolerance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wrongWarpTolerance;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_set__wrongWarpTolerance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wrongWarpTolerance = value;
}
constexpr ::ArrayW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__clockData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clockData;
}
constexpr ::ArrayW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__clockData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clockData;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_set__clockData(::ArrayW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clockData = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__defaultSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultSpawn;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__defaultSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultSpawn;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_set__defaultSpawn(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultSpawn = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get_OnWakeUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnWakeUp;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get_OnWakeUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnWakeUp;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_set_OnWakeUp(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnWakeUp = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__teleportTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__teleportTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____teleportTarget;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_set__teleportTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____teleportTarget = value;
}
constexpr ::StringW& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__ActiveKey_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveKey_k__BackingField;
}
constexpr ::StringW const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__ActiveKey_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ActiveKey_k__BackingField;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_set__ActiveKey_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ActiveKey_k__BackingField = value;
}
constexpr ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__activeClockData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeClockData;
}
constexpr ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData* const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__activeClockData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeClockData;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_set__activeClockData(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeClockData = value;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__activeClock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeClock;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__activeClock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeClock;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_set__activeClock(::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeClock = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__telemetryDict()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryDict;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__telemetryDict() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryDict;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_set__telemetryDict(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____telemetryDict = value;
}
constexpr float_t& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__trackingEndTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingEndTime;
}
constexpr float_t const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_get__trackingEndTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingEndTime;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::__cordl_internal_set__trackingEndTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackingEndTime = value;
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::setStaticF__Instance_k__BackingField(::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>, "<Instance>k__BackingField", ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(std::forward<::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>>(value));
}
inline ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager> GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>, "<Instance>k__BackingField", ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>();
}
inline ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager> GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::set_Instance(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::set_Initialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"set_Initialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::get_ActiveKey()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"get_ActiveKey", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::set_ActiveKey(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"set_ActiveKey", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::PerformWakeUpSequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"PerformWakeUpSequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::ToggleAlarmClock(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*  clock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"ToggleAlarmClock", {}, {::i2c::type_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clock);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::ToggleAlarmClockInternal(::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*  clock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"ToggleAlarmClockInternal", {}, {::i2c::type_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clock);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::SendTelemetryEvent(::StringW  eventType, ::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"SendTelemetryEvent", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType, key);
}
inline bool GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::AllUniqueClockKeys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"AllUniqueClockKeys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::GameSystemsLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"GameSystemsLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::AllZonesLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"AllZonesLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::GetActiveZones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"GetActiveZones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::RequestLoadZones()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"RequestLoadZones", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::GetClockData(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"GetClockData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*>(this, ___internal_method, key);
}
inline bool GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::IsVIMOnly(::StringW  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"IsVIMOnly", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::StartTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"StartTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::StopTracking(float_t  delay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"StopTracking", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delay);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::DoTracking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"DoTracking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::ClearUnsubPlayerData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {"ClearUnsubPlayerData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager::AlarmClockManager()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::*)(int32_t)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c0ff0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c11688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::MoveNext)> {
  constexpr static std::size_t size = 0xd98;
  constexpr static std::size_t addrs = 0x5c1168c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c12424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c1242c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c12464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::__cordl_internal_get__fixAttempts_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixAttempts_5__2;
}
constexpr int32_t const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::__cordl_internal_get__fixAttempts_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fixAttempts_5__2;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::__cordl_internal_set__fixAttempts_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fixAttempts_5__2 = value;
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__PerformWakeUpSequence_d__23::AlarmClockManager__PerformWakeUpSequence_d__23()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::*)(int32_t)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c10c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c10fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::MoveNext)> {
  constexpr static std::size_t size = 0x678;
  constexpr static std::size_t addrs = 0x5c10fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c11640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c11648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c11680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__DoTracking_d__38::AlarmClockManager__DoTracking_d__38()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::*)(int32_t)>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5c10cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c10db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5c10dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c10f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5c10f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c10fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::__cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager__ClearUnsubPlayerData_d__39::AlarmClockManager__ClearUnsubPlayerData_d__39()   {
}
//  Writing Method size for method: ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::*)()>(&::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c10db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_Key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr ::StringW const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_Key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Key;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_set_Key(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Key = value;
}
constexpr bool& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_VIMOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VIMOnly;
}
constexpr bool const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_VIMOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VIMOnly;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_set_VIMOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VIMOnly = value;
}
constexpr ::ArrayW<::GlobalNamespace::GTZone>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_Zones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Zones;
}
constexpr ::ArrayW<::GlobalNamespace::GTZone> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_Zones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Zones;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_set_Zones(::ArrayW<::GlobalNamespace::GTZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Zones = value;
}
constexpr bool& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_SkipZoneReadyWait()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipZoneReadyWait;
}
constexpr bool const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_SkipZoneReadyWait() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipZoneReadyWait;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_set_SkipZoneReadyWait(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipZoneReadyWait = value;
}
constexpr ::ArrayW<::GlobalNamespace::XSceneRef>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_Objects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Objects;
}
constexpr ::ArrayW<::GlobalNamespace::XSceneRef> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_Objects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Objects;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_set_Objects(::ArrayW<::GlobalNamespace::XSceneRef>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Objects = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_SpawnPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_SpawnPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SpawnPoint;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_set_SpawnPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SpawnPoint = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_OnSpawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSpawn;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_get_OnSpawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSpawn;
}
constexpr void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::__cordl_internal_set_OnSpawn(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSpawn = value;
}
inline void GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData* GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::AlarmClocks::AlarmClockManager_AlarmClockData::AlarmClockManager_AlarmClockData()   {
}
