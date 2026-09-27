#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterDayNightManager.hpp"
#include "GlobalNamespace/zzzz__AddCollidersToParticleSystemTriggers_impl.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_RPCDataCache_impl.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_Season_impl.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_WeatherType_impl.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_impl.hpp"
#include "GlobalNamespace/zzzz__TimeSettings_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_RPCDataCache_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_RPC_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_Season_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_WeatherType_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
#include "GlobalNamespace/zzzz__CallLimitersList_2_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__ITimeOfDaySystem_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PerSceneRenderData_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Random_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.Register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PerSceneRenderData*)>(&::GlobalNamespace::BetterDayNightManager::Register)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5991d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::PerSceneRenderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.Unregister
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::PerSceneRenderData*)>(&::GlobalNamespace::BetterDayNightManager::Unregister)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5991e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::PerSceneRenderData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.get_timeOfDayRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<double_t> (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::get_timeOfDayRange)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5991ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"get_timeOfDayRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.get_currentTimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::get_currentTimeOfDay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5991ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"get_currentTimeOfDay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.set_currentTimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(::StringW)>(&::GlobalNamespace::BetterDayNightManager::set_currentTimeOfDay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5991efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"set_currentTimeOfDay", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.get_NormalizedTimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::get_NormalizedTimeOfDay)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5991f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"get_NormalizedTimeOfDay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.ITimeOfDaySystem_get_currentTimeInSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::ITimeOfDaySystem_get_currentTimeInSeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5991f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ITimeOfDaySystem.get_currentTimeInSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.ITimeOfDaySystem_get_totalTimeInSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::ITimeOfDaySystem_get_totalTimeInSeconds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5991f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ITimeOfDaySystem.get_totalTimeInSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::Awake)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5991f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::OnEnable)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x5992264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x599293c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.UpdateTimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(bool)>(&::GlobalNamespace::BetterDayNightManager::UpdateTimeOfDay)> {
  constexpr static std::size_t size = 0x91c;
  constexpr static std::size_t addrs = 0x5992948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"UpdateTimeOfDay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.FindTimeOfDayIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::FindTimeOfDayIndex)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5993264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"FindTimeOfDayIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.ChangeLerps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(float_t)>(&::GlobalNamespace::BetterDayNightManager::ChangeLerps)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x59932f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ChangeLerps", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.ChangeMaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(int32_t, int32_t)>(&::GlobalNamespace::BetterDayNightManager::ChangeMaps)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5992644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ChangeMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::SliceUpdate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x59935a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.InitialUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::InitialUpdate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x59928d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"InitialUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.RequestRepopulateLightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::RequestRepopulateLightmaps)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5993798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"RequestRepopulateLightmaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.PopulateAllLightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::PopulateAllLightmaps)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5993734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"PopulateAllLightmaps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.PopulateAllLightmaps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(int32_t, int32_t)>(&::GlobalNamespace::BetterDayNightManager::PopulateAllLightmaps)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x599336c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"PopulateAllLightmaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.CurrentWeather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BetterDayNightManager_WeatherType (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::CurrentWeather)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x59937a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"CurrentWeather", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.NextWeather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BetterDayNightManager_WeatherType (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::NextWeather)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x59937fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"NextWeather", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.LastWeather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BetterDayNightManager_WeatherType (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::LastWeather)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5993860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"LastWeather", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.GenerateWeatherEventTimes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::GenerateWeatherEventTimes)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x59924a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"GenerateWeatherEventTimes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.RegisterScheduledEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::System::Action*)>(&::GlobalNamespace::BetterDayNightManager::RegisterScheduledEvent)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x59938c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"RegisterScheduledEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.UnregisterScheduledEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::BetterDayNightManager::UnregisterScheduledEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5993a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"UnregisterScheduledEvent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.SetTimeIndexOverrideFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(::System::Func_2<int32_t,int32_t>*)>(&::GlobalNamespace::BetterDayNightManager::SetTimeIndexOverrideFunction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5993af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetTimeIndexOverrideFunction", {}, {::i2c::type_of<::System::Func_2<int32_t,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.UnsetTimeIndexOverrideFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::UnsetTimeIndexOverrideFunction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5993b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"UnsetTimeIndexOverrideFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.SetOverrideIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(int32_t)>(&::GlobalNamespace::BetterDayNightManager::SetOverrideIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5993b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetOverrideIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.AnimateLightFlash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(int32_t, float_t, float_t, float_t)>(&::GlobalNamespace::BetterDayNightManager::AnimateLightFlash)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5993b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"AnimateLightFlash", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.AnimateLightFlashCo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::BetterDayNightManager::*)(int32_t, float_t, float_t, float_t)>(&::GlobalNamespace::BetterDayNightManager::AnimateLightFlashCo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5993c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"AnimateLightFlashCo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.SetTimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(int32_t, bool)>(&::GlobalNamespace::BetterDayNightManager::SetTimeOfDay)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5993cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetTimeOfDay", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.IncrementTimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(int32_t)>(&::GlobalNamespace::BetterDayNightManager::IncrementTimeOfDay)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5993d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"IncrementTimeOfDay", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.SetTimeOfDayIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(int32_t)>(&::GlobalNamespace::BetterDayNightManager::SetTimeOfDayIndex)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5993da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetTimeOfDayIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.FastForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(float_t)>(&::GlobalNamespace::BetterDayNightManager::FastForward)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5993e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"FastForward", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.ClearTimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(bool)>(&::GlobalNamespace::BetterDayNightManager::ClearTimeOfDay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5993e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ClearTimeOfDay", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.GetTimeOfDayString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::GetTimeOfDayString)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5993e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"GetTimeOfDayString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.SetFixedWeather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(::GlobalNamespace::BetterDayNightManager_WeatherType, bool)>(&::GlobalNamespace::BetterDayNightManager::SetFixedWeather)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5993e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetFixedWeather", {}, {::i2c::type_of<::GlobalNamespace::BetterDayNightManager_WeatherType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.ClearFixedWeather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(bool)>(&::GlobalNamespace::BetterDayNightManager::ClearFixedWeather)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5993f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ClearFixedWeather", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.GetWeatherString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::GetWeatherString)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5993f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"GetWeatherString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.SetFixedWeatherNetworked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(::GlobalNamespace::BetterDayNightManager_WeatherType)>(&::GlobalNamespace::BetterDayNightManager::SetFixedWeatherNetworked)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5993fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetFixedWeatherNetworked", {}, {::i2c::type_of<::GlobalNamespace::BetterDayNightManager_WeatherType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.SetTimeOfDayNetworked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(int32_t)>(&::GlobalNamespace::BetterDayNightManager::SetTimeOfDayNetworked)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x59941c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetTimeOfDayNetworked", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.ChangeFixedWeatherRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::BetterDayNightManager::ChangeFixedWeatherRPC)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5994414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ChangeFixedWeatherRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.HandleFixedWeather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(::GlobalNamespace::BetterDayNightManager_WeatherType)>(&::GlobalNamespace::BetterDayNightManager::HandleFixedWeather)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x599412c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"HandleFixedWeather", {}, {::i2c::type_of<::GlobalNamespace::BetterDayNightManager_WeatherType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.ChangeTimeOfDayRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::BetterDayNightManager::ChangeTimeOfDayRPC)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x5994784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ChangeTimeOfDayRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.HandleTimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(int32_t)>(&::GlobalNamespace::BetterDayNightManager::HandleTimeOfDay)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5994340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"HandleTimeOfDay", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.OnRoomJoin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::OnRoomJoin)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59949b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"OnRoomJoin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.OnPlayerJoined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::BetterDayNightManager::OnPlayerJoined)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x59949d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.OnMasterClientSwitched
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::BetterDayNightManager::OnMasterClientSwitched)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5994c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager.OnSubscrptionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::OnSubscrptionData)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5994e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"OnSubscrptionData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager::*)()>(&::GlobalNamespace::BetterDayNightManager::_ctor)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x5994fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BetterDayNightManager_RPCDataCache& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_m_fixedDataCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fixedDataCache;
}
constexpr ::GlobalNamespace::BetterDayNightManager_RPCDataCache const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_m_fixedDataCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fixedDataCache;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_m_fixedDataCache(::GlobalNamespace::BetterDayNightManager_RPCDataCache  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_fixedDataCache = value;
}
constexpr ::GlobalNamespace::BetterDayNightManager_RPCDataCache& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_m_setTimeDataCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_setTimeDataCache;
}
constexpr ::GlobalNamespace::BetterDayNightManager_RPCDataCache const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_m_setTimeDataCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_setTimeDataCache;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_m_setTimeDataCache(::GlobalNamespace::BetterDayNightManager_RPCDataCache  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_setTimeDataCache = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___photonView;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___photonView = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_standard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standard;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_standard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standard;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_standard(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standard = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_standardCutout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standardCutout;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_standardCutout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standardCutout;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_standardCutout(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standardCutout = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_gorillaUnlit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaUnlit;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_gorillaUnlit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaUnlit;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_gorillaUnlit(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaUnlit = value;
}
constexpr ::UnityW<::UnityEngine::Shader>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_gorillaUnlitCutout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaUnlitCutout;
}
constexpr ::UnityW<::UnityEngine::Shader> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_gorillaUnlitCutout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gorillaUnlitCutout;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_gorillaUnlitCutout(::UnityW<::UnityEngine::Shader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gorillaUnlitCutout = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_dayNightSupportedMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightSupportedMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_dayNightSupportedMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightSupportedMaterials;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_dayNightSupportedMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dayNightSupportedMaterials = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_dayNightSupportedMaterialsCutout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightSupportedMaterialsCutout;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_dayNightSupportedMaterialsCutout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightSupportedMaterialsCutout;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_dayNightSupportedMaterialsCutout(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dayNightSupportedMaterialsCutout = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_dayNightLightmapNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightLightmapNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_dayNightLightmapNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightLightmapNames;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_dayNightLightmapNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dayNightLightmapNames = value;
}
constexpr ::ArrayW<::StringW>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_dayNightWeatherLightmapNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightWeatherLightmapNames;
}
constexpr ::ArrayW<::StringW> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_dayNightWeatherLightmapNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightWeatherLightmapNames;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_dayNightWeatherLightmapNames(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dayNightWeatherLightmapNames = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_dayNightSkyboxTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightSkyboxTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_dayNightSkyboxTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightSkyboxTextures;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_dayNightSkyboxTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dayNightSkyboxTextures = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_cloudsDayNightSkyboxTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsDayNightSkyboxTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_cloudsDayNightSkyboxTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cloudsDayNightSkyboxTextures;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_cloudsDayNightSkyboxTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cloudsDayNightSkyboxTextures = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_beachDayNightSkyboxTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beachDayNightSkyboxTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_beachDayNightSkyboxTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beachDayNightSkyboxTextures;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_beachDayNightSkyboxTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beachDayNightSkyboxTextures = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_dayNightWeatherSkyboxTextures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightWeatherSkyboxTextures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_dayNightWeatherSkyboxTextures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dayNightWeatherSkyboxTextures;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_dayNightWeatherSkyboxTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dayNightWeatherSkyboxTextures = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_standardUnlitColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standardUnlitColor;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_standardUnlitColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standardUnlitColor;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_standardUnlitColor(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standardUnlitColor = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_standardUnlitColorWithPremadeColorDarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standardUnlitColorWithPremadeColorDarker;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_standardUnlitColorWithPremadeColorDarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___standardUnlitColorWithPremadeColorDarker;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_standardUnlitColorWithPremadeColorDarker(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___standardUnlitColorWithPremadeColorDarker = value;
}
constexpr float_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentLerp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLerp;
}
constexpr float_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentLerp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentLerp;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_currentLerp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentLerp = value;
}
constexpr float_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentTimestep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTimestep;
}
constexpr float_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentTimestep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTimestep;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_currentTimestep(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTimestep = value;
}
constexpr ::GlobalNamespace::BetterDayNightManager_Season& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentSeason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSeason;
}
constexpr ::GlobalNamespace::BetterDayNightManager_Season const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentSeason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSeason;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_currentSeason(::GlobalNamespace::BetterDayNightManager_Season  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSeason = value;
}
constexpr ::ArrayW<double_t>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_summerTimeOfDayRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summerTimeOfDayRange;
}
constexpr ::ArrayW<double_t> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_summerTimeOfDayRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___summerTimeOfDayRange;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_summerTimeOfDayRange(::ArrayW<double_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___summerTimeOfDayRange = value;
}
constexpr ::ArrayW<double_t>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_winterTimeOfDayRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winterTimeOfDayRange;
}
constexpr ::ArrayW<double_t> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_winterTimeOfDayRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___winterTimeOfDayRange;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_winterTimeOfDayRange(::ArrayW<double_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___winterTimeOfDayRange = value;
}
constexpr double_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_timeMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeMultiplier;
}
constexpr double_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_timeMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeMultiplier;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_timeMultiplier(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeMultiplier = value;
}
constexpr float_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_lastTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr float_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_lastTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTime;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_lastTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTime = value;
}
constexpr double_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr double_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTime;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_currentTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTime = value;
}
constexpr double_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_totalHours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalHours;
}
constexpr double_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_totalHours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalHours;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_totalHours(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalHours = value;
}
constexpr double_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_totalSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalSeconds;
}
constexpr double_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_totalSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalSeconds;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_totalSeconds(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalSeconds = value;
}
constexpr float_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_colorFrom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorFrom;
}
constexpr float_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_colorFrom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorFrom;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_colorFrom(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorFrom = value;
}
constexpr float_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_colorTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTo;
}
constexpr float_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_colorTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorTo;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_colorTo(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorTo = value;
}
constexpr float_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_colorFromDarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorFromDarker;
}
constexpr float_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_colorFromDarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorFromDarker;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_colorFromDarker(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorFromDarker = value;
}
constexpr float_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_colorToDarker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorToDarker;
}
constexpr float_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_colorToDarker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorToDarker;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_colorToDarker(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorToDarker = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentTimeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTimeIndex;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentTimeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTimeIndex;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_currentTimeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTimeIndex = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentWeatherIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWeatherIndex;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentWeatherIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWeatherIndex;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_currentWeatherIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentWeatherIndex = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_lastIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastIndex;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_lastIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastIndex;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_lastIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastIndex = value;
}
constexpr double_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentIndexSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndexSeconds;
}
constexpr double_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentIndexSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndexSeconds;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_currentIndexSeconds(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndexSeconds = value;
}
constexpr double_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_baseSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseSeconds;
}
constexpr double_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_baseSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___baseSeconds;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_baseSeconds(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___baseSeconds = value;
}
constexpr bool& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_computerInit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computerInit;
}
constexpr bool const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_computerInit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computerInit;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_computerInit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___computerInit = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_mySeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySeed;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_mySeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mySeed;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_mySeed(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mySeed = value;
}
constexpr ::System::Random*& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_randomNumberGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomNumberGenerator;
}
constexpr ::System::Random* const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_randomNumberGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___randomNumberGenerator;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_randomNumberGenerator(::System::Random*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___randomNumberGenerator = value;
}
constexpr ::ArrayW<::GlobalNamespace::BetterDayNightManager_WeatherType>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_weatherCycle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherCycle;
}
constexpr ::ArrayW<::GlobalNamespace::BetterDayNightManager_WeatherType> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_weatherCycle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherCycle;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_weatherCycle(::ArrayW<::GlobalNamespace::BetterDayNightManager_WeatherType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherCycle = value;
}
constexpr bool& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_overrideWeather()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideWeather;
}
constexpr bool const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_overrideWeather() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideWeather;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_overrideWeather(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideWeather = value;
}
constexpr ::GlobalNamespace::BetterDayNightManager_WeatherType& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_overrideWeatherType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideWeatherType;
}
constexpr ::GlobalNamespace::BetterDayNightManager_WeatherType const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_overrideWeatherType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideWeatherType;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_overrideWeatherType(::GlobalNamespace::BetterDayNightManager_WeatherType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideWeatherType = value;
}
constexpr ::StringW& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__currentTimeOfDay_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTimeOfDay_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__currentTimeOfDay_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentTimeOfDay_k__BackingField;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set__currentTimeOfDay_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentTimeOfDay_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_rainChance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rainChance;
}
constexpr float_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_rainChance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rainChance;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_rainChance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rainChance = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_maxRainDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRainDuration;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_maxRainDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxRainDuration;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_maxRainDuration(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxRainDuration = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_rainDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rainDuration;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_rainDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rainDuration;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_rainDuration(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rainDuration = value;
}
constexpr float_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_remainingSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingSeconds;
}
constexpr float_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_remainingSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remainingSeconds;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_remainingSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remainingSeconds = value;
}
constexpr int64_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_initialDayCycles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialDayCycles;
}
constexpr int64_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_initialDayCycles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialDayCycles;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_initialDayCycles(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialDayCycles = value;
}
constexpr int64_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_gameEpochDay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEpochDay;
}
constexpr int64_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_gameEpochDay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEpochDay;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_gameEpochDay(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEpochDay = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentWeatherCycle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWeatherCycle;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentWeatherCycle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentWeatherCycle;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_currentWeatherCycle(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentWeatherCycle = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_fromWeatherIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromWeatherIndex;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_fromWeatherIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromWeatherIndex;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_fromWeatherIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromWeatherIndex = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_toWeatherIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toWeatherIndex;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_toWeatherIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toWeatherIndex;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_toWeatherIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toWeatherIndex = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_fromSky()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromSky;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_fromSky() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromSky;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_fromSky(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromSky = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_fromSky2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromSky2;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_fromSky2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromSky2;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_fromSky2(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromSky2 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_fromSky3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromSky3;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_fromSky3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fromSky3;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_fromSky3(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fromSky3 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_toSky()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toSky;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_toSky() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toSky;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_toSky(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toSky = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_toSky2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toSky2;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_toSky2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toSky2;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_toSky2(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toSky2 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_toSky3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toSky3;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_toSky3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toSky3;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_toSky3(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toSky3 = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AddCollidersToParticleSystemTriggers>>& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_weatherSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherSystems;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::AddCollidersToParticleSystemTriggers>> const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_weatherSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weatherSystems;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_weatherSystems(::ArrayW<::UnityW<::GlobalNamespace::AddCollidersToParticleSystemTriggers>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weatherSystems = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_collidersToAddToWeatherSystems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersToAddToWeatherSystems;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_collidersToAddToWeatherSystems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersToAddToWeatherSystems;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_collidersToAddToWeatherSystems(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersToAddToWeatherSystems = value;
}
constexpr float_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_lastTimeChecked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTimeChecked;
}
constexpr float_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_lastTimeChecked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTimeChecked;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_lastTimeChecked(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTimeChecked = value;
}
constexpr ::System::Func_2<int32_t,int32_t>*& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_timeIndexOverrideFunc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeIndexOverrideFunc;
}
constexpr ::System::Func_2<int32_t,int32_t>* const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_timeIndexOverrideFunc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeIndexOverrideFunc;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_timeIndexOverrideFunc(::System::Func_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeIndexOverrideFunc = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_lastSentTimeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSentTimeIndex;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_lastSentTimeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSentTimeIndex;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_lastSentTimeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSentTimeIndex = value;
}
constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::BetterDayNightManager_RPC>*& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_rpcSpamChecks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcSpamChecks;
}
constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::BetterDayNightManager_RPC>* const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_rpcSpamChecks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpcSpamChecks;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_rpcSpamChecks(::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::BetterDayNightManager_RPC>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rpcSpamChecks = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_overrideIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideIndex;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_overrideIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideIndex;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_overrideIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideIndex = value;
}
constexpr ::GlobalNamespace::TimeSettings& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentSetting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSetting;
}
constexpr ::GlobalNamespace::TimeSettings const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_currentSetting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSetting;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_currentSetting(::GlobalNamespace::TimeSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSetting = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GT_DayCycleTimeProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GT_DayCycleTimeProgress;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GT_DayCycleTimeProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GT_DayCycleTimeProgress;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set__GT_DayCycleTimeProgress(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GT_DayCycleTimeProgress = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GT_DayCycleBrightnessOption1_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GT_DayCycleBrightnessOption1_Id;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GT_DayCycleBrightnessOption1_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GT_DayCycleBrightnessOption1_Id;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set__GT_DayCycleBrightnessOption1_Id(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GT_DayCycleBrightnessOption1_Id = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GT_DayCycleBrightnessOption2_Id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GT_DayCycleBrightnessOption2_Id;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GT_DayCycleBrightnessOption2_Id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GT_DayCycleBrightnessOption2_Id;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set__GT_DayCycleBrightnessOption2_Id(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GT_DayCycleBrightnessOption2_Id = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightLerpValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightLerpValue;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightLerpValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightLerpValue;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set__GlobalDayNightLerpValue(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GlobalDayNightLerpValue = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightSkyTex1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightSkyTex1;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightSkyTex1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightSkyTex1;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set__GlobalDayNightSkyTex1(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GlobalDayNightSkyTex1 = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightSkyTex2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightSkyTex2;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightSkyTex2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightSkyTex2;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set__GlobalDayNightSkyTex2(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GlobalDayNightSkyTex2 = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightSky2Tex1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightSky2Tex1;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightSky2Tex1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightSky2Tex1;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set__GlobalDayNightSky2Tex1(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GlobalDayNightSky2Tex1 = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightSky2Tex2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightSky2Tex2;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightSky2Tex2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightSky2Tex2;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set__GlobalDayNightSky2Tex2(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GlobalDayNightSky2Tex2 = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightSky3Tex1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightSky3Tex1;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightSky3Tex1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightSky3Tex1;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set__GlobalDayNightSky3Tex1(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GlobalDayNightSky3Tex1 = value;
}
constexpr ::GlobalNamespace::ShaderHashId& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightSky3Tex2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightSky3Tex2;
}
constexpr ::GlobalNamespace::ShaderHashId const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get__GlobalDayNightSky3Tex2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GlobalDayNightSky3Tex2;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set__GlobalDayNightSky3Tex2(::GlobalNamespace::ShaderHashId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GlobalDayNightSky3Tex2 = value;
}
constexpr bool& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_shouldRepopulate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldRepopulate;
}
constexpr bool const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_shouldRepopulate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldRepopulate;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_shouldRepopulate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldRepopulate = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_animatingLightFlash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatingLightFlash;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::BetterDayNightManager::__cordl_internal_get_animatingLightFlash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animatingLightFlash;
}
constexpr void GlobalNamespace::BetterDayNightManager::__cordl_internal_set_animatingLightFlash(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animatingLightFlash = value;
}
inline void GlobalNamespace::BetterDayNightManager::setStaticF_instance(::UnityW<::GlobalNamespace::BetterDayNightManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::BetterDayNightManager>, "instance", ::GlobalNamespace::BetterDayNightManager*>(std::forward<::UnityW<::GlobalNamespace::BetterDayNightManager>>(value));
}
inline ::UnityW<::GlobalNamespace::BetterDayNightManager> GlobalNamespace::BetterDayNightManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::BetterDayNightManager>, "instance", ::GlobalNamespace::BetterDayNightManager*>();
}
inline void GlobalNamespace::BetterDayNightManager::setStaticF_allScenesRenderData(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*, "allScenesRenderData", ::GlobalNamespace::BetterDayNightManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>* GlobalNamespace::BetterDayNightManager::getStaticF_allScenesRenderData()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*, "allScenesRenderData", ::GlobalNamespace::BetterDayNightManager*>();
}
inline void GlobalNamespace::BetterDayNightManager::setStaticF_scheduledEvents(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BetterDayNightManager_ScheduledEvent*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BetterDayNightManager_ScheduledEvent*>*, "scheduledEvents", ::GlobalNamespace::BetterDayNightManager*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BetterDayNightManager_ScheduledEvent*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BetterDayNightManager_ScheduledEvent*>* GlobalNamespace::BetterDayNightManager::getStaticF_scheduledEvents()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BetterDayNightManager_ScheduledEvent*>*, "scheduledEvents", ::GlobalNamespace::BetterDayNightManager*>();
}
inline void GlobalNamespace::BetterDayNightManager::Register(::GlobalNamespace::PerSceneRenderData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"Register", {}, {::i2c::type_of<::GlobalNamespace::PerSceneRenderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::BetterDayNightManager::Unregister(::GlobalNamespace::PerSceneRenderData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"Unregister", {}, {::i2c::type_of<::GlobalNamespace::PerSceneRenderData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline ::ArrayW<double_t> GlobalNamespace::BetterDayNightManager::get_timeOfDayRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"get_timeOfDayRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<double_t>>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BetterDayNightManager::get_currentTimeOfDay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"get_currentTimeOfDay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::set_currentTimeOfDay(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"set_currentTimeOfDay", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BetterDayNightManager::get_NormalizedTimeOfDay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"get_NormalizedTimeOfDay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline double_t GlobalNamespace::BetterDayNightManager::ITimeOfDaySystem_get_currentTimeInSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ITimeOfDaySystem.get_currentTimeInSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t GlobalNamespace::BetterDayNightManager::ITimeOfDaySystem_get_totalTimeInSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ITimeOfDaySystem.get_totalTimeInSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::UpdateTimeOfDay(bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"UpdateTimeOfDay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceUpdate);
}
inline void GlobalNamespace::BetterDayNightManager::FindTimeOfDayIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"FindTimeOfDayIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::ChangeLerps(float_t  newLerp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ChangeLerps", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newLerp);
}
inline void GlobalNamespace::BetterDayNightManager::ChangeMaps(int32_t  fromIndex, int32_t  toIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ChangeMaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromIndex, toIndex);
}
inline void GlobalNamespace::BetterDayNightManager::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::BetterDayNightManager::InitialUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"InitialUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::RequestRepopulateLightmaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"RequestRepopulateLightmaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::PopulateAllLightmaps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"PopulateAllLightmaps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::PopulateAllLightmaps(int32_t  fromIndex, int32_t  toIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"PopulateAllLightmaps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromIndex, toIndex);
}
inline ::GlobalNamespace::BetterDayNightManager_WeatherType GlobalNamespace::BetterDayNightManager::CurrentWeather()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"CurrentWeather", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BetterDayNightManager_WeatherType>(this, ___internal_method);
}
inline ::GlobalNamespace::BetterDayNightManager_WeatherType GlobalNamespace::BetterDayNightManager::NextWeather()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"NextWeather", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BetterDayNightManager_WeatherType>(this, ___internal_method);
}
inline ::GlobalNamespace::BetterDayNightManager_WeatherType GlobalNamespace::BetterDayNightManager::LastWeather()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"LastWeather", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BetterDayNightManager_WeatherType>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::GenerateWeatherEventTimes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"GenerateWeatherEventTimes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BetterDayNightManager::RegisterScheduledEvent(int32_t  hour, ::System::Action*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"RegisterScheduledEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hour, action);
}
inline void GlobalNamespace::BetterDayNightManager::UnregisterScheduledEvent(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"UnregisterScheduledEvent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, id);
}
inline void GlobalNamespace::BetterDayNightManager::SetTimeIndexOverrideFunction(::System::Func_2<int32_t,int32_t>*  overrideFunction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetTimeIndexOverrideFunction", {}, {::i2c::type_of<::System::Func_2<int32_t,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, overrideFunction);
}
inline void GlobalNamespace::BetterDayNightManager::UnsetTimeIndexOverrideFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"UnsetTimeIndexOverrideFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::SetOverrideIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetOverrideIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
inline void GlobalNamespace::BetterDayNightManager::AnimateLightFlash(int32_t  index, float_t  fadeInDuration, float_t  holdDuration, float_t  fadeOutDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"AnimateLightFlash", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, fadeInDuration, holdDuration, fadeOutDuration);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::BetterDayNightManager::AnimateLightFlashCo(int32_t  index, float_t  fadeInDuration, float_t  holdDuration, float_t  fadeOutDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"AnimateLightFlashCo", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, index, fadeInDuration, holdDuration, fadeOutDuration);
}
inline void GlobalNamespace::BetterDayNightManager::SetTimeOfDay(int32_t  timeIndex, bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetTimeOfDay", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeIndex, forceUpdate);
}
inline void GlobalNamespace::BetterDayNightManager::IncrementTimeOfDay(int32_t  change)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"IncrementTimeOfDay", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, change);
}
inline void GlobalNamespace::BetterDayNightManager::SetTimeOfDayIndex(int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetTimeOfDayIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newIndex);
}
inline void GlobalNamespace::BetterDayNightManager::FastForward(float_t  seconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"FastForward", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, seconds);
}
inline void GlobalNamespace::BetterDayNightManager::ClearTimeOfDay(bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ClearTimeOfDay", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceUpdate);
}
inline ::StringW GlobalNamespace::BetterDayNightManager::GetTimeOfDayString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"GetTimeOfDayString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::SetFixedWeather(::GlobalNamespace::BetterDayNightManager_WeatherType  weather, bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetFixedWeather", {}, {::i2c::type_of<::GlobalNamespace::BetterDayNightManager_WeatherType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weather, forceUpdate);
}
inline void GlobalNamespace::BetterDayNightManager::ClearFixedWeather(bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ClearFixedWeather", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceUpdate);
}
inline ::StringW GlobalNamespace::BetterDayNightManager::GetWeatherString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"GetWeatherString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::SetFixedWeatherNetworked(::GlobalNamespace::BetterDayNightManager_WeatherType  weather)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetFixedWeatherNetworked", {}, {::i2c::type_of<::GlobalNamespace::BetterDayNightManager_WeatherType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weather);
}
inline void GlobalNamespace::BetterDayNightManager::SetTimeOfDayNetworked(int32_t  timeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"SetTimeOfDayNetworked", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeIndex);
}
inline void GlobalNamespace::BetterDayNightManager::ChangeFixedWeatherRPC(int32_t  weather, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ChangeFixedWeatherRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weather, info);
}
inline void GlobalNamespace::BetterDayNightManager::HandleFixedWeather(::GlobalNamespace::BetterDayNightManager_WeatherType  weather)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"HandleFixedWeather", {}, {::i2c::type_of<::GlobalNamespace::BetterDayNightManager_WeatherType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, weather);
}
inline void GlobalNamespace::BetterDayNightManager::ChangeTimeOfDayRPC(int32_t  timeIndex, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"ChangeTimeOfDayRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeIndex, info);
}
inline void GlobalNamespace::BetterDayNightManager::HandleTimeOfDay(int32_t  timeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"HandleTimeOfDay", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeIndex);
}
inline void GlobalNamespace::BetterDayNightManager::OnRoomJoin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"OnRoomJoin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::OnPlayerJoined(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"OnPlayerJoined", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::BetterDayNightManager::OnMasterClientSwitched(::GlobalNamespace::NetPlayer*  newMasterClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"OnMasterClientSwitched", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMasterClient);
}
inline void GlobalNamespace::BetterDayNightManager::OnSubscrptionData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {"OnSubscrptionData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BetterDayNightManager* GlobalNamespace::BetterDayNightManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BetterDayNightManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::BetterDayNightManager::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::BetterDayNightManager::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ITimeOfDaySystem"
constexpr  GlobalNamespace::BetterDayNightManager::operator ::GlobalNamespace::ITimeOfDaySystem*() noexcept {
return static_cast<::GlobalNamespace::ITimeOfDaySystem*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITimeOfDaySystem"
constexpr ::GlobalNamespace::ITimeOfDaySystem* GlobalNamespace::BetterDayNightManager::i___GlobalNamespace__ITimeOfDaySystem() noexcept {
return static_cast<::GlobalNamespace::ITimeOfDaySystem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BetterDayNightManager::BetterDayNightManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::*)(int32_t)>(&::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5993770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::*)()>(&::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5995670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::*)()>(&::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::MoveNext)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5995674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::*)()>(&::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59956e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::*)()>(&::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59956e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::*)()>(&::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5995720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BetterDayNightManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107* GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107::BetterDayNightManager__InitialUpdate_d__107()   {
}
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::*)(int32_t)>(&::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5993c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::*)()>(&::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599539c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::*)()>(&::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::MoveNext)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x59953a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::*)()>(&::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5995628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::*)()>(&::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5995630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::*)()>(&::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5995668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BetterDayNightManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr float_t& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get_fadeInDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeInDuration;
}
constexpr float_t const& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get_fadeInDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeInDuration;
}
constexpr void GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_set_fadeInDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeInDuration = value;
}
constexpr float_t& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get_fadeOutDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutDuration;
}
constexpr float_t const& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get_fadeOutDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fadeOutDuration;
}
constexpr void GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_set_fadeOutDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fadeOutDuration = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get__startMap_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startMap_5__2;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get__startMap_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startMap_5__2;
}
constexpr void GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_set__startMap_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startMap_5__2 = value;
}
constexpr float_t& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get__endTimestamp_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endTimestamp_5__3;
}
constexpr float_t const& GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_get__endTimestamp_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endTimestamp_5__3;
}
constexpr void GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::__cordl_internal_set__endTimestamp_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endTimestamp_5__3 = value;
}
inline void GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122* GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122::BetterDayNightManager__AnimateLightFlashCo_d__122()   {
}
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager_ScheduledEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager_ScheduledEvent::*)()>(&::GlobalNamespace::BetterDayNightManager_ScheduledEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5993a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager_ScheduledEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& GlobalNamespace::BetterDayNightManager_ScheduledEvent::__cordl_internal_get_lastDayCalled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDayCalled;
}
constexpr int64_t const& GlobalNamespace::BetterDayNightManager_ScheduledEvent::__cordl_internal_get_lastDayCalled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDayCalled;
}
constexpr void GlobalNamespace::BetterDayNightManager_ScheduledEvent::__cordl_internal_set_lastDayCalled(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDayCalled = value;
}
constexpr int32_t& GlobalNamespace::BetterDayNightManager_ScheduledEvent::__cordl_internal_get_hour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hour;
}
constexpr int32_t const& GlobalNamespace::BetterDayNightManager_ScheduledEvent::__cordl_internal_get_hour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hour;
}
constexpr void GlobalNamespace::BetterDayNightManager_ScheduledEvent::__cordl_internal_set_hour(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hour = value;
}
constexpr ::System::Action*& GlobalNamespace::BetterDayNightManager_ScheduledEvent::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr ::System::Action* const& GlobalNamespace::BetterDayNightManager_ScheduledEvent::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
constexpr void GlobalNamespace::BetterDayNightManager_ScheduledEvent::__cordl_internal_set_action(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
inline void GlobalNamespace::BetterDayNightManager_ScheduledEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager_ScheduledEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BetterDayNightManager_ScheduledEvent* GlobalNamespace::BetterDayNightManager_ScheduledEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BetterDayNightManager_ScheduledEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BetterDayNightManager_ScheduledEvent::BetterDayNightManager_ScheduledEvent()   {
}
