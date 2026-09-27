#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLightingManager.hpp"
#include "GlobalNamespace/zzzz__GameLight_impl.hpp"
#include "GlobalNamespace/zzzz__GameLightingManager_LightDataLegacy_impl.hpp"
#include "GlobalNamespace/zzzz__GameLightingManager_LightDataPacked_impl.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__GameLightingManager_def.hpp"
#include "GlobalNamespace/zzzz__GameLight_def.hpp"
#include "GlobalNamespace/zzzz__GameLightingManager_LightDataLegacy_def.hpp"
#include "GlobalNamespace/zzzz__GameLightingManager_LightDataPacked_def.hpp"
#include "GlobalNamespace/zzzz__GameLightingManager_LightInput_def.hpp"
#include "GlobalNamespace/zzzz__GameLightingManager_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.get_IsDynamicLightingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::get_IsDynamicLightingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5835fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"get_IsDynamicLightingEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.PackHalf2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(float_t, float_t)>(&::GlobalNamespace::GameLightingManager::PackHalf2)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5835ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"PackHalf2", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5836028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.InitData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::InitData)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x583602c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"InitData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.Preheat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::Preheat)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x58366b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"Preheat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::OnDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x5836744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::OnEnable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5836844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::OnDisable)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5836868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.ZoneEnableCustomDynamicLighting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)(bool)>(&::GlobalNamespace::GameLightingManager::ZoneEnableCustomDynamicLighting)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x583688c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"ZoneEnableCustomDynamicLighting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.SetCustomDynamicLightingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)(bool)>(&::GlobalNamespace::GameLightingManager::SetCustomDynamicLightingEnabled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x58365c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"SetCustomDynamicLightingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.ToggleCustomDynamicLightingEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::ToggleCustomDynamicLightingEnabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58369ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"ToggleCustomDynamicLightingEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.SetAmbientLightDynamic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)(::UnityEngine::Color)>(&::GlobalNamespace::GameLightingManager::SetAmbientLightDynamic)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5836534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"SetAmbientLightDynamic", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.SetMaxLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)(int32_t)>(&::GlobalNamespace::GameLightingManager::SetMaxLights)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5836630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"SetMaxLights", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.SetDesaturateAndTintEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)(bool, ::UnityEngine::Color)>(&::GlobalNamespace::GameLightingManager::SetDesaturateAndTintEnabled)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x583646c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"SetDesaturateAndTintEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::SliceUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58369fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.SortLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::SortLights)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x5836a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"SortLights", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5836dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                    {::i2c::class_of<::GlobalNamespace::GameLightingManager*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.RefreshLightData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::RefreshLightData)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5836db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"RefreshLightData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.CacheAllLightData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::CacheAllLightData)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5836f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"CacheAllLightData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.CacheLightDataForNonCloseLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)(int32_t)>(&::GlobalNamespace::GameLightingManager::CacheLightDataForNonCloseLights)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5837114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"CacheLightDataForNonCloseLights", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.PullLightData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)(int32_t)>(&::GlobalNamespace::GameLightingManager::PullLightData)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x58372c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"PullLightData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.AddGameLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameLightingManager::*)(::GlobalNamespace::GameLight*, bool)>(&::GlobalNamespace::GameLightingManager::AddGameLight)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5835ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"AddGameLight", {}, {::i2c::type_of<::GlobalNamespace::GameLight*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.RemoveGameLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)(::GlobalNamespace::GameLight*)>(&::GlobalNamespace::GameLightingManager::RemoveGameLight)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5835d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"RemoveGameLight", {}, {::i2c::type_of<::GlobalNamespace::GameLight*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.ClearGameLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::ClearGameLights)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x58362d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"ClearGameLights", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.GetFromLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)(int32_t, int32_t)>(&::GlobalNamespace::GameLightingManager::GetFromLight)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x58374a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"GetFromLight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.ResetLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)(int32_t)>(&::GlobalNamespace::GameLightingManager::ResetLight)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58377ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"ResetLight", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager.get_GR_NearsightedDimLight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Light> (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::get_GR_NearsightedDimLight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58377e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"get_GR_NearsightedDimLight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager::*)()>(&::GlobalNamespace::GameLightingManager::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58377e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GameLightingManager::__cordl_internal_get_testLightsCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testLightsCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GameLightingManager::__cordl_internal_get_testLightsCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testLightsCenter;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_testLightsCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testLightsCenter = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GameLightingManager::__cordl_internal_get_testAmbience()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testAmbience;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GameLightingManager::__cordl_internal_get_testAmbience() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testAmbience;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_testAmbience(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testAmbience = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::GameLightingManager::__cordl_internal_get_testLightColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testLightColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::GameLightingManager::__cordl_internal_get_testLightColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testLightColor;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_testLightColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testLightColor = value;
}
constexpr float_t& GlobalNamespace::GameLightingManager::__cordl_internal_get_testLightBrightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testLightBrightness;
}
constexpr float_t const& GlobalNamespace::GameLightingManager::__cordl_internal_get_testLightBrightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testLightBrightness;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_testLightBrightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testLightBrightness = value;
}
constexpr float_t& GlobalNamespace::GameLightingManager::__cordl_internal_get_testLightRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testLightRadius;
}
constexpr float_t const& GlobalNamespace::GameLightingManager::__cordl_internal_get_testLightRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testLightRadius;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_testLightRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testLightRadius = value;
}
constexpr int32_t& GlobalNamespace::GameLightingManager::__cordl_internal_get_maxUseTestLights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxUseTestLights;
}
constexpr int32_t const& GlobalNamespace::GameLightingManager::__cordl_internal_get_maxUseTestLights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxUseTestLights;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_maxUseTestLights(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxUseTestLights = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameLight>>*& GlobalNamespace::GameLightingManager::__cordl_internal_get_gameLights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameLights;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameLight>>* const& GlobalNamespace::GameLightingManager::__cordl_internal_get_gameLights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameLights;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_gameLights(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameLight>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameLights = value;
}
constexpr bool& GlobalNamespace::GameLightingManager::__cordl_internal_get_customVertexLightingEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customVertexLightingEnabled;
}
constexpr bool const& GlobalNamespace::GameLightingManager::__cordl_internal_get_customVertexLightingEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customVertexLightingEnabled;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_customVertexLightingEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customVertexLightingEnabled = value;
}
constexpr bool& GlobalNamespace::GameLightingManager::__cordl_internal_get_desaturateAndTintEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desaturateAndTintEnabled;
}
constexpr bool const& GlobalNamespace::GameLightingManager::__cordl_internal_get_desaturateAndTintEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desaturateAndTintEnabled;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_desaturateAndTintEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___desaturateAndTintEnabled = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GameLightingManager::__cordl_internal_get_mainCameraTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCameraTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GameLightingManager::__cordl_internal_get_mainCameraTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainCameraTransform;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_mainCameraTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainCameraTransform = value;
}
constexpr int32_t& GlobalNamespace::GameLightingManager::__cordl_internal_get_zoneDynamicLightingEnableCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneDynamicLightingEnableCount;
}
constexpr int32_t const& GlobalNamespace::GameLightingManager::__cordl_internal_get_zoneDynamicLightingEnableCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zoneDynamicLightingEnableCount;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_zoneDynamicLightingEnableCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zoneDynamicLightingEnableCount = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::GameLightingManager::__cordl_internal_get_sortKeys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortKeys;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::GameLightingManager::__cordl_internal_get_sortKeys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortKeys;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_sortKeys(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortKeys = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameLight>>& GlobalNamespace::GameLightingManager::__cordl_internal_get_sortValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortValues;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameLight>> const& GlobalNamespace::GameLightingManager::__cordl_internal_get_sortValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortValues;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_sortValues(::ArrayW<::UnityW<::GlobalNamespace::GameLight>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortValues = value;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataPacked>& GlobalNamespace::GameLightingManager::__cordl_internal_get_lightData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightData;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataPacked> const& GlobalNamespace::GameLightingManager::__cordl_internal_get_lightData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightData;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_lightData(::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataPacked>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightData = value;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataLegacy>& GlobalNamespace::GameLightingManager::__cordl_internal_get_lightDataLegacy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightDataLegacy;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataLegacy> const& GlobalNamespace::GameLightingManager::__cordl_internal_get_lightDataLegacy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightDataLegacy;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_lightDataLegacy(::Unity::Collections::NativeArray_1<::GlobalNamespace::GameLightingManager_LightDataLegacy>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightDataLegacy = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& GlobalNamespace::GameLightingManager::__cordl_internal_get_lightDataBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightDataBuffer;
}
constexpr ::UnityEngine::GraphicsBuffer* const& GlobalNamespace::GameLightingManager::__cordl_internal_get_lightDataBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightDataBuffer;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_lightDataBuffer(::UnityEngine::GraphicsBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightDataBuffer = value;
}
constexpr ::UnityEngine::GraphicsBuffer*& GlobalNamespace::GameLightingManager::__cordl_internal_get_lightDataBufferLegacy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightDataBufferLegacy;
}
constexpr ::UnityEngine::GraphicsBuffer* const& GlobalNamespace::GameLightingManager::__cordl_internal_get_lightDataBufferLegacy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lightDataBufferLegacy;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_lightDataBufferLegacy(::UnityEngine::GraphicsBuffer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lightDataBufferLegacy = value;
}
constexpr bool& GlobalNamespace::GameLightingManager::__cordl_internal_get_skipNextSlice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipNextSlice;
}
constexpr bool const& GlobalNamespace::GameLightingManager::__cordl_internal_get_skipNextSlice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skipNextSlice;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_skipNextSlice(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skipNextSlice = value;
}
constexpr bool& GlobalNamespace::GameLightingManager::__cordl_internal_get_immediateSort()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___immediateSort;
}
constexpr bool const& GlobalNamespace::GameLightingManager::__cordl_internal_get_immediateSort() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___immediateSort;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_immediateSort(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___immediateSort = value;
}
constexpr int32_t& GlobalNamespace::GameLightingManager::__cordl_internal_get_nextLightUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextLightUpdate;
}
constexpr int32_t const& GlobalNamespace::GameLightingManager::__cordl_internal_get_nextLightUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextLightUpdate;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_nextLightUpdate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextLightUpdate = value;
}
constexpr int32_t& GlobalNamespace::GameLightingManager::__cordl_internal_get_nextLightCacheUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextLightCacheUpdate;
}
constexpr int32_t const& GlobalNamespace::GameLightingManager::__cordl_internal_get_nextLightCacheUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextLightCacheUpdate;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set_nextLightCacheUpdate(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextLightCacheUpdate = value;
}
constexpr ::UnityW<::UnityEngine::Light>& GlobalNamespace::GameLightingManager::__cordl_internal_get__GR_NearsightedDimLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GR_NearsightedDimLight;
}
constexpr ::UnityW<::UnityEngine::Light> const& GlobalNamespace::GameLightingManager::__cordl_internal_get__GR_NearsightedDimLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GR_NearsightedDimLight;
}
constexpr void GlobalNamespace::GameLightingManager::__cordl_internal_set__GR_NearsightedDimLight(::UnityW<::UnityEngine::Light>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GR_NearsightedDimLight = value;
}
inline void GlobalNamespace::GameLightingManager::setStaticF_instance(::UnityW<::GlobalNamespace::GameLightingManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GameLightingManager>, "instance", ::GlobalNamespace::GameLightingManager*>(std::forward<::UnityW<::GlobalNamespace::GameLightingManager>>(value));
}
inline ::UnityW<::GlobalNamespace::GameLightingManager> GlobalNamespace::GameLightingManager::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GameLightingManager>, "instance", ::GlobalNamespace::GameLightingManager*>();
}
inline void GlobalNamespace::GameLightingManager::setStaticF__shaderPropId_GameLight_UseMaxLights(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_shaderPropId_GameLight_UseMaxLights", ::GlobalNamespace::GameLightingManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GameLightingManager::getStaticF__shaderPropId_GameLight_UseMaxLights()  {
return ::cordl_internals::getStaticField<int32_t, "_shaderPropId_GameLight_UseMaxLights", ::GlobalNamespace::GameLightingManager*>();
}
inline void GlobalNamespace::GameLightingManager::setStaticF__shaderPropId_DesaturateAndTint_TintColor(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_shaderPropId_DesaturateAndTint_TintColor", ::GlobalNamespace::GameLightingManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GameLightingManager::getStaticF__shaderPropId_DesaturateAndTint_TintColor()  {
return ::cordl_internals::getStaticField<int32_t, "_shaderPropId_DesaturateAndTint_TintColor", ::GlobalNamespace::GameLightingManager*>();
}
inline void GlobalNamespace::GameLightingManager::setStaticF__shaderPropId_DesaturateAndTint_TintAmount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_shaderPropId_DesaturateAndTint_TintAmount", ::GlobalNamespace::GameLightingManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GameLightingManager::getStaticF__shaderPropId_DesaturateAndTint_TintAmount()  {
return ::cordl_internals::getStaticField<int32_t, "_shaderPropId_DesaturateAndTint_TintAmount", ::GlobalNamespace::GameLightingManager*>();
}
inline void GlobalNamespace::GameLightingManager::setStaticF__shaderPropId_GameLight_Ambient_Color(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_shaderPropId_GameLight_Ambient_Color", ::GlobalNamespace::GameLightingManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GameLightingManager::getStaticF__shaderPropId_GameLight_Ambient_Color()  {
return ::cordl_internals::getStaticField<int32_t, "_shaderPropId_GameLight_Ambient_Color", ::GlobalNamespace::GameLightingManager*>();
}
inline void GlobalNamespace::GameLightingManager::setStaticF__shaderPropId_GameLight_Lights(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_shaderPropId_GameLight_Lights", ::GlobalNamespace::GameLightingManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GameLightingManager::getStaticF__shaderPropId_GameLight_Lights()  {
return ::cordl_internals::getStaticField<int32_t, "_shaderPropId_GameLight_Lights", ::GlobalNamespace::GameLightingManager*>();
}
inline void GlobalNamespace::GameLightingManager::setStaticF__shaderPropId_GameLight_LightsPacked(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_shaderPropId_GameLight_LightsPacked", ::GlobalNamespace::GameLightingManager*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GameLightingManager::getStaticF__shaderPropId_GameLight_LightsPacked()  {
return ::cordl_internals::getStaticField<int32_t, "_shaderPropId_GameLight_LightsPacked", ::GlobalNamespace::GameLightingManager*>();
}
inline bool GlobalNamespace::GameLightingManager::get_IsDynamicLightingEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"get_IsDynamicLightingEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint32_t GlobalNamespace::GameLightingManager::PackHalf2(float_t  a, float_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"PackHalf2", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, a, b);
}
inline void GlobalNamespace::GameLightingManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager::InitData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"InitData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::GameLightingManager::Preheat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"Preheat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager::ZoneEnableCustomDynamicLighting(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"ZoneEnableCustomDynamicLighting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::GameLightingManager::SetCustomDynamicLightingEnabled(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"SetCustomDynamicLightingEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::GameLightingManager::ToggleCustomDynamicLightingEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"ToggleCustomDynamicLightingEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager::SetAmbientLightDynamic(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"SetAmbientLightDynamic", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::GameLightingManager::SetMaxLights(int32_t  maxLights)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"SetMaxLights", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxLights);
}
inline void GlobalNamespace::GameLightingManager::SetDesaturateAndTintEnabled(bool  enable, ::UnityEngine::Color  tint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"SetDesaturateAndTintEnabled", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable, tint);
}
inline void GlobalNamespace::GameLightingManager::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager::SortLights()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"SortLights", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameLightingManager*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager::RefreshLightData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"RefreshLightData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager::CacheAllLightData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"CacheAllLightData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager::CacheLightDataForNonCloseLights(int32_t  numLightsToUpdateCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"CacheLightDataForNonCloseLights", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numLightsToUpdateCache);
}
inline void GlobalNamespace::GameLightingManager::PullLightData(int32_t  numLightsToPull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"PullLightData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numLightsToPull);
}
inline int32_t GlobalNamespace::GameLightingManager::AddGameLight(::GlobalNamespace::GameLight*  light, bool  ignoreUnityLightDisable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"AddGameLight", {}, {::i2c::type_of<::GlobalNamespace::GameLight*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, light, ignoreUnityLightDisable);
}
inline void GlobalNamespace::GameLightingManager::RemoveGameLight(::GlobalNamespace::GameLight*  light)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"RemoveGameLight", {}, {::i2c::type_of<::GlobalNamespace::GameLight*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, light);
}
inline void GlobalNamespace::GameLightingManager::ClearGameLights()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"ClearGameLights", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager::GetFromLight(int32_t  lightIndex, int32_t  gameLightIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"GetFromLight", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightIndex, gameLightIndex);
}
inline void GlobalNamespace::GameLightingManager::ResetLight(int32_t  lightIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"ResetLight", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightIndex);
}
inline ::UnityW<::UnityEngine::Light> GlobalNamespace::GameLightingManager::get_GR_NearsightedDimLight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {"get_GR_NearsightedDimLight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Light>>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameLightingManager* GlobalNamespace::GameLightingManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameLightingManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::GameLightingManager::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::GameLightingManager::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLightingManager::GameLightingManager()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager__Preheat_d__33._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager__Preheat_d__33::*)(int32_t)>(&::GlobalNamespace::GameLightingManager__Preheat_d__33::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x583671c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager__Preheat_d__33*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager__Preheat_d__33.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager__Preheat_d__33::*)()>(&::GlobalNamespace::GameLightingManager__Preheat_d__33::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5837984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager__Preheat_d__33*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager__Preheat_d__33.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameLightingManager__Preheat_d__33::*)()>(&::GlobalNamespace::GameLightingManager__Preheat_d__33::MoveNext)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5837988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager__Preheat_d__33*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager__Preheat_d__33.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GameLightingManager__Preheat_d__33::*)()>(&::GlobalNamespace::GameLightingManager__Preheat_d__33::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5837a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager__Preheat_d__33*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager__Preheat_d__33.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameLightingManager__Preheat_d__33::*)()>(&::GlobalNamespace::GameLightingManager__Preheat_d__33::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5837a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager__Preheat_d__33*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameLightingManager__Preheat_d__33.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::GameLightingManager__Preheat_d__33::*)()>(&::GlobalNamespace::GameLightingManager__Preheat_d__33::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5837a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager__Preheat_d__33*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GameLightingManager__Preheat_d__33::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::GameLightingManager__Preheat_d__33::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::GameLightingManager__Preheat_d__33::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::GameLightingManager__Preheat_d__33::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::GameLightingManager__Preheat_d__33::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::GameLightingManager__Preheat_d__33::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::GameLightingManager>& GlobalNamespace::GameLightingManager__Preheat_d__33::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::GameLightingManager> const& GlobalNamespace::GameLightingManager__Preheat_d__33::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::GameLightingManager__Preheat_d__33::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::GameLightingManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void GlobalNamespace::GameLightingManager__Preheat_d__33::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager__Preheat_d__33*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::GameLightingManager__Preheat_d__33::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager__Preheat_d__33*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameLightingManager__Preheat_d__33::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager__Preheat_d__33*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameLightingManager__Preheat_d__33::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager__Preheat_d__33*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::GameLightingManager__Preheat_d__33::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager__Preheat_d__33*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::GameLightingManager__Preheat_d__33::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameLightingManager__Preheat_d__33*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::GameLightingManager__Preheat_d__33* GlobalNamespace::GameLightingManager__Preheat_d__33::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameLightingManager__Preheat_d__33*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::GameLightingManager__Preheat_d__33::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::GameLightingManager__Preheat_d__33::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::GameLightingManager__Preheat_d__33::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::GameLightingManager__Preheat_d__33::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::GameLightingManager__Preheat_d__33::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::GameLightingManager__Preheat_d__33::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameLightingManager__Preheat_d__33::GameLightingManager__Preheat_d__33()   {
}
