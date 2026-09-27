#pragma once
// IWYU pragma private; include "GlobalNamespace/BeeSwarmManager.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeeSwarmManager_def.hpp"
#include "GlobalNamespace/zzzz__AnimatedBee_def.hpp"
#include "GlobalNamespace/zzzz__BeePerchPoint_def.hpp"
#include "GlobalNamespace/zzzz__SRand_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.get_BeeHive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BeePerchPoint> (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::get_BeeHive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeHive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.set_BeeHive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)(::GlobalNamespace::BeePerchPoint*)>(&::GlobalNamespace::BeeSwarmManager::set_BeeHive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeHive", {}, {::i2c::type_of<::GlobalNamespace::BeePerchPoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.get_BeeSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::get_BeeSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.set_BeeSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)(float_t)>(&::GlobalNamespace::BeeSwarmManager::set_BeeSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.get_BeeMaxTravelTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::get_BeeMaxTravelTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeMaxTravelTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.set_BeeMaxTravelTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)(float_t)>(&::GlobalNamespace::BeeSwarmManager::set_BeeMaxTravelTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeMaxTravelTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.get_BeeAcceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::get_BeeAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeAcceleration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.set_BeeAcceleration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)(float_t)>(&::GlobalNamespace::BeeSwarmManager::set_BeeAcceleration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeAcceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.get_BeeJitterStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::get_BeeJitterStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeJitterStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.set_BeeJitterStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)(float_t)>(&::GlobalNamespace::BeeSwarmManager::set_BeeJitterStrength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeJitterStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.get_BeeJitterDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::get_BeeJitterDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeJitterDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.set_BeeJitterDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)(float_t)>(&::GlobalNamespace::BeeSwarmManager::set_BeeJitterDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeJitterDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.get_BeeMaxJitterRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::get_BeeMaxJitterRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeMaxJitterRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.set_BeeMaxJitterRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)(float_t)>(&::GlobalNamespace::BeeSwarmManager::set_BeeMaxJitterRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeMaxJitterRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.get_BeeNearDestinationRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::get_BeeNearDestinationRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeNearDestinationRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.set_BeeNearDestinationRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)(float_t)>(&::GlobalNamespace::BeeSwarmManager::set_BeeNearDestinationRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeNearDestinationRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.get_AvoidPointRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::get_AvoidPointRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_AvoidPointRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.set_AvoidPointRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)(float_t)>(&::GlobalNamespace::BeeSwarmManager::set_AvoidPointRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_AvoidPointRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.get_BeeMinFlowerDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::get_BeeMinFlowerDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeMinFlowerDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.set_BeeMinFlowerDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)(float_t)>(&::GlobalNamespace::BeeSwarmManager::set_BeeMinFlowerDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeMinFlowerDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.get_BeeMaxFlowerDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::get_BeeMaxFlowerDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeMaxFlowerDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.set_BeeMaxFlowerDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)(float_t)>(&::GlobalNamespace::BeeSwarmManager::set_BeeMaxFlowerDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeMaxFlowerDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.get_GeneralBuzzRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::get_GeneralBuzzRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_GeneralBuzzRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.set_GeneralBuzzRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)(float_t)>(&::GlobalNamespace::BeeSwarmManager::set_GeneralBuzzRange)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5613dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_GeneralBuzzRange", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::Awake)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5613ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::Start)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5613fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::OnDestroy)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56144f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::Update)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x56145b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.OnSeedChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::OnSeedChange)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x56141c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"OnSeedChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.PickPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)(int32_t, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*, ::by_ref<::GlobalNamespace::SRand>, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*)>(&::GlobalNamespace::BeeSwarmManager::PickPoints)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x5614894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"PickPoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SRand>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.RegisterAvoidPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::BeeSwarmManager::RegisterAvoidPoint)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5613b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"RegisterAvoidPoint", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager.UnregisterAvoidPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::BeeSwarmManager::UnregisterAvoidPoint)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5613c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"UnregisterAvoidPoint", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeeSwarmManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeeSwarmManager::*)()>(&::GlobalNamespace::BeeSwarmManager::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5614a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::XSceneRef>& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_flowerSections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerSections;
}
constexpr ::ArrayW<::GlobalNamespace::XSceneRef> const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_flowerSections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerSections;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set_flowerSections(::ArrayW<::GlobalNamespace::XSceneRef>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flowerSections = value;
}
constexpr int32_t& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_loopSizePerBee()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSizePerBee;
}
constexpr int32_t const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_loopSizePerBee() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSizePerBee;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set_loopSizePerBee(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopSizePerBee = value;
}
constexpr int32_t& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_numBees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numBees;
}
constexpr int32_t const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_numBees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___numBees;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set_numBees(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___numBees = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_beePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beePrefab;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_beePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beePrefab;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set_beePrefab(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beePrefab = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_nearbyBeeBuzz()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearbyBeeBuzz;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_nearbyBeeBuzz() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nearbyBeeBuzz;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set_nearbyBeeBuzz(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nearbyBeeBuzz = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_generalBeeBuzz()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generalBeeBuzz;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_generalBeeBuzz() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___generalBeeBuzz;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set_generalBeeBuzz(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___generalBeeBuzz = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_flowerSectionsResolved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerSectionsResolved;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_flowerSectionsResolved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flowerSectionsResolved;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set_flowerSectionsResolved(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flowerSectionsResolved = value;
}
constexpr ::UnityW<::GlobalNamespace::BeePerchPoint>& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeHive_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeHive_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::BeePerchPoint> const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeHive_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeHive_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set__BeeHive_k__BackingField(::UnityW<::GlobalNamespace::BeePerchPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeeHive_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeSpeed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeSpeed_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeSpeed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeSpeed_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set__BeeSpeed_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeeSpeed_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeMaxTravelTime_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeMaxTravelTime_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeMaxTravelTime_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeMaxTravelTime_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set__BeeMaxTravelTime_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeeMaxTravelTime_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeAcceleration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeAcceleration_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeAcceleration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeAcceleration_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set__BeeAcceleration_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeeAcceleration_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeJitterStrength_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeJitterStrength_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeJitterStrength_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeJitterStrength_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set__BeeJitterStrength_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeeJitterStrength_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeJitterDamping_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeJitterDamping_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeJitterDamping_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeJitterDamping_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set__BeeJitterDamping_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeeJitterDamping_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeMaxJitterRadius_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeMaxJitterRadius_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeMaxJitterRadius_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeMaxJitterRadius_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set__BeeMaxJitterRadius_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeeMaxJitterRadius_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeNearDestinationRadius_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeNearDestinationRadius_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeNearDestinationRadius_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeNearDestinationRadius_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set__BeeNearDestinationRadius_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeeNearDestinationRadius_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__AvoidPointRadius_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AvoidPointRadius_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__AvoidPointRadius_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AvoidPointRadius_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set__AvoidPointRadius_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AvoidPointRadius_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeMinFlowerDuration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeMinFlowerDuration_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeMinFlowerDuration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeMinFlowerDuration_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set__BeeMinFlowerDuration_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeeMinFlowerDuration_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeMaxFlowerDuration_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeMaxFlowerDuration_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__BeeMaxFlowerDuration_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BeeMaxFlowerDuration_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set__BeeMaxFlowerDuration_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BeeMaxFlowerDuration_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__GeneralBuzzRange_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GeneralBuzzRange_k__BackingField;
}
constexpr float_t const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get__GeneralBuzzRange_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GeneralBuzzRange_k__BackingField;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set__GeneralBuzzRange_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GeneralBuzzRange_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee>*& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_bees()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bees;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee>* const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_bees() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bees;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set_bees(::System::Collections::Generic::List_1<::GlobalNamespace::AnimatedBee>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bees = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_playerCamera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCamera;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_playerCamera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerCamera;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set_playerCamera(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerCamera = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_allPerchPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPerchPoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>* const& GlobalNamespace::BeeSwarmManager::__cordl_internal_get_allPerchPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allPerchPoints;
}
constexpr void GlobalNamespace::BeeSwarmManager::__cordl_internal_set_allPerchPoints(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allPerchPoints = value;
}
inline void GlobalNamespace::BeeSwarmManager::setStaticF_avoidPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "avoidPoints", ::GlobalNamespace::BeeSwarmManager*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::BeeSwarmManager::getStaticF_avoidPoints()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, "avoidPoints", ::GlobalNamespace::BeeSwarmManager*>();
}
inline ::UnityW<::GlobalNamespace::BeePerchPoint> GlobalNamespace::BeeSwarmManager::get_BeeHive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeHive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeePerchPoint>>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::set_BeeHive(::GlobalNamespace::BeePerchPoint*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeHive", {}, {::i2c::type_of<::GlobalNamespace::BeePerchPoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeeSwarmManager::get_BeeSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::set_BeeSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeeSwarmManager::get_BeeMaxTravelTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeMaxTravelTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::set_BeeMaxTravelTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeMaxTravelTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeeSwarmManager::get_BeeAcceleration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeAcceleration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::set_BeeAcceleration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeAcceleration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeeSwarmManager::get_BeeJitterStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeJitterStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::set_BeeJitterStrength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeJitterStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeeSwarmManager::get_BeeJitterDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeJitterDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::set_BeeJitterDamping(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeJitterDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeeSwarmManager::get_BeeMaxJitterRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeMaxJitterRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::set_BeeMaxJitterRadius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeMaxJitterRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeeSwarmManager::get_BeeNearDestinationRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeNearDestinationRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::set_BeeNearDestinationRadius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeNearDestinationRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeeSwarmManager::get_AvoidPointRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_AvoidPointRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::set_AvoidPointRadius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_AvoidPointRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeeSwarmManager::get_BeeMinFlowerDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeMinFlowerDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::set_BeeMinFlowerDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeMinFlowerDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeeSwarmManager::get_BeeMaxFlowerDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_BeeMaxFlowerDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::set_BeeMaxFlowerDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_BeeMaxFlowerDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeeSwarmManager::get_GeneralBuzzRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"get_GeneralBuzzRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::set_GeneralBuzzRange(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"set_GeneralBuzzRange", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeeSwarmManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::OnSeedChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"OnSeedChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeeSwarmManager::PickPoints(int32_t  n, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  pickBuffer, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  allPerchPoints, ::by_ref<::GlobalNamespace::SRand>  rand, ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*  resultBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"PickPoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SRand>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeePerchPoint>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, pickBuffer, allPerchPoints, rand, resultBuffer);
}
inline void GlobalNamespace::BeeSwarmManager::RegisterAvoidPoint(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"RegisterAvoidPoint", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::BeeSwarmManager::UnregisterAvoidPoint(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {"UnregisterAvoidPoint", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::BeeSwarmManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BeeSwarmManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeeSwarmManager* GlobalNamespace::BeeSwarmManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeeSwarmManager*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeeSwarmManager::BeeSwarmManager()   {
}
