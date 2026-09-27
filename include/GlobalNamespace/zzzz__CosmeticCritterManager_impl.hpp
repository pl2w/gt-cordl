#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCritterManager.hpp"
#include "GlobalNamespace/zzzz__NetworkSceneObject_impl.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterManager_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterAction_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterCatcher_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterHoldable_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawnerIndependent_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritterSpawner_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticCritter_def.hpp"
#include "GlobalNamespace/zzzz__ICosmeticCritterTickForEach_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemTick_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PhotonMessageInfoWrapped_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::CosmeticCritterManager> (*)()>(&::GlobalNamespace::CosmeticCritterManager::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x57e8630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::CosmeticCritterManager*)>(&::GlobalNamespace::CosmeticCritterManager::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x57e8678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CosmeticCritterManager::*)()>(&::GlobalNamespace::CosmeticCritterManager::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e86d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(bool)>(&::GlobalNamespace::CosmeticCritterManager::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57e86d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)()>(&::GlobalNamespace::CosmeticCritterManager::OnEnable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x57e86e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)()>(&::GlobalNamespace::CosmeticCritterManager::OnDisable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x57e87f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.RegisterLocalHoldable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(::GlobalNamespace::CosmeticCritterHoldable*)>(&::GlobalNamespace::CosmeticCritterManager::RegisterLocalHoldable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57e8584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"RegisterLocalHoldable", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterHoldable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.RegisterIndependentSpawner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(::GlobalNamespace::CosmeticCritterSpawnerIndependent*)>(&::GlobalNamespace::CosmeticCritterManager::RegisterIndependentSpawner)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57e8910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"RegisterIndependentSpawner", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.UnregisterIndependentSpawner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(::GlobalNamespace::CosmeticCritterSpawnerIndependent*)>(&::GlobalNamespace::CosmeticCritterManager::UnregisterIndependentSpawner)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x57e89bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"UnregisterIndependentSpawner", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.RegisterCatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(::GlobalNamespace::CosmeticCritterCatcher*)>(&::GlobalNamespace::CosmeticCritterManager::RegisterCatcher)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57e80f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"RegisterCatcher", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterCatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.UnregisterCatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(::GlobalNamespace::CosmeticCritterCatcher*)>(&::GlobalNamespace::CosmeticCritterManager::UnregisterCatcher)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x57e81fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"UnregisterCatcher", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterCatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.RegisterTickForEachCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(::System::Type*, ::GlobalNamespace::ICosmeticCritterTickForEach*)>(&::GlobalNamespace::CosmeticCritterManager::RegisterTickForEachCritter)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x57e8a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"RegisterTickForEachCritter", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::ICosmeticCritterTickForEach*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.UnregisterTickForEachCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(::System::Type*, ::GlobalNamespace::ICosmeticCritterTickForEach*)>(&::GlobalNamespace::CosmeticCritterManager::UnregisterTickForEachCritter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x57e8b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"UnregisterTickForEachCritter", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::ICosmeticCritterTickForEach*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.ResetLocalCallLimiters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)()>(&::GlobalNamespace::CosmeticCritterManager::ResetLocalCallLimiters)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x57e8c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"ResetLocalCallLimiters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.ResetCosmeticCritters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::CosmeticCritterManager::ResetCosmeticCritters)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x57e8d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"ResetCosmeticCritters", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)()>(&::GlobalNamespace::CosmeticCritterManager::Awake)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x57e9098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.ReuseOrSpawnNewCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(::GlobalNamespace::CosmeticCritterSpawner*, int32_t, double_t)>(&::GlobalNamespace::CosmeticCritterManager::ReuseOrSpawnNewCritter)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x57e95b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"ReuseOrSpawnNewCritter", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterSpawner*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.FreeCritter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(::GlobalNamespace::CosmeticCritter*)>(&::GlobalNamespace::CosmeticCritterManager::FreeCritter)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x57e8e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"FreeCritter", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)()>(&::GlobalNamespace::CosmeticCritterManager::Tick)> {
  constexpr static std::size_t size = 0x778;
  constexpr static std::size_t addrs = 0x57e9990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.CosmeticCritterRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(::GlobalNamespace::CosmeticCritterAction, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::CosmeticCritterManager::CosmeticCritterRPC)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x57ea108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"CosmeticCritterRPC", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterAction>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.CatchCosmeticCritterRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(::GlobalNamespace::CosmeticCritterAction, int32_t, int32_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::CosmeticCritterManager::CatchCosmeticCritterRPC)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x57ea3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"CatchCosmeticCritterRPC", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterAction>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager.SpawnCosmeticCritterRPC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)(int32_t, int32_t, ::GlobalNamespace::PhotonMessageInfoWrapped)>(&::GlobalNamespace::CosmeticCritterManager::SpawnCosmeticCritterRPC)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x57ea258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"SpawnCosmeticCritterRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CosmeticCritterManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CosmeticCritterManager::*)()>(&::GlobalNamespace::CosmeticCritterManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57ea620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterHoldable>>*& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_localHoldables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localHoldables;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterHoldable>>* const& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_localHoldables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localHoldables;
}
constexpr void GlobalNamespace::CosmeticCritterManager::__cordl_internal_set_localHoldables(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterHoldable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localHoldables = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>*& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_localCritterSpawners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localCritterSpawners;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>* const& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_localCritterSpawners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localCritterSpawners;
}
constexpr void GlobalNamespace::CosmeticCritterManager::__cordl_internal_set_localCritterSpawners(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localCritterSpawners = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>*& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_remoteCritterSpawners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteCritterSpawners;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>* const& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_remoteCritterSpawners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteCritterSpawners;
}
constexpr void GlobalNamespace::CosmeticCritterManager::__cordl_internal_set_remoteCritterSpawners(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterSpawnerIndependent>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remoteCritterSpawners = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>*& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_localCritterCatchers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localCritterCatchers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>* const& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_localCritterCatchers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localCritterCatchers;
}
constexpr void GlobalNamespace::CosmeticCritterManager::__cordl_internal_set_localCritterCatchers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localCritterCatchers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>*& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_remoteCritterCatchers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteCritterCatchers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>* const& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_remoteCritterCatchers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remoteCritterCatchers;
}
constexpr void GlobalNamespace::CosmeticCritterManager::__cordl_internal_set_remoteCritterCatchers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritterCatcher>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remoteCritterCatchers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_activeCritters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCritters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritter>>* const& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_activeCritters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCritters;
}
constexpr void GlobalNamespace::CosmeticCritterManager::__cordl_internal_set_activeCritters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeCritters = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_activeCrittersPerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCrittersPerType;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* const& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_activeCrittersPerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCrittersPerType;
}
constexpr void GlobalNamespace::CosmeticCritterManager::__cordl_internal_set_activeCrittersPerType(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeCrittersPerType = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CosmeticCritter>>*& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_activeCrittersBySeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCrittersBySeed;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CosmeticCritter>>* const& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_activeCrittersBySeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activeCrittersBySeed;
}
constexpr void GlobalNamespace::CosmeticCritterManager::__cordl_internal_set_activeCrittersBySeed(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GlobalNamespace::CosmeticCritter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activeCrittersBySeed = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*>*& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_inactiveCrittersByType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactiveCrittersByType;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*>* const& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_inactiveCrittersByType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inactiveCrittersByType;
}
constexpr void GlobalNamespace::CosmeticCritterManager::__cordl_internal_set_inactiveCrittersByType(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::UnityW<::GlobalNamespace::CosmeticCritter>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inactiveCrittersByType = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GlobalNamespace::ICosmeticCritterTickForEach*>*>*& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_tickForEachCritterOfType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickForEachCritterOfType;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GlobalNamespace::ICosmeticCritterTickForEach*>*>* const& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get_tickForEachCritterOfType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tickForEachCritterOfType;
}
constexpr void GlobalNamespace::CosmeticCritterManager::__cordl_internal_set_tickForEachCritterOfType(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::List_1<::GlobalNamespace::ICosmeticCritterTickForEach*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tickForEachCritterOfType = value;
}
constexpr bool& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::CosmeticCritterManager::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::CosmeticCritterManager::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
inline void GlobalNamespace::CosmeticCritterManager::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::CosmeticCritterManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::CosmeticCritterManager>, "<Instance>k__BackingField", ::GlobalNamespace::CosmeticCritterManager*>(std::forward<::UnityW<::GlobalNamespace::CosmeticCritterManager>>(value));
}
inline ::UnityW<::GlobalNamespace::CosmeticCritterManager> GlobalNamespace::CosmeticCritterManager::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::CosmeticCritterManager>, "<Instance>k__BackingField", ::GlobalNamespace::CosmeticCritterManager*>();
}
inline ::UnityW<::GlobalNamespace::CosmeticCritterManager> GlobalNamespace::CosmeticCritterManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::CosmeticCritterManager>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterManager::set_Instance(::GlobalNamespace::CosmeticCritterManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::CosmeticCritterManager::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterManager::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::CosmeticCritterManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterManager::RegisterLocalHoldable(::GlobalNamespace::CosmeticCritterHoldable*  holdable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"RegisterLocalHoldable", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterHoldable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, holdable);
}
inline void GlobalNamespace::CosmeticCritterManager::RegisterIndependentSpawner(::GlobalNamespace::CosmeticCritterSpawnerIndependent*  spawner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"RegisterIndependentSpawner", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spawner);
}
inline void GlobalNamespace::CosmeticCritterManager::UnregisterIndependentSpawner(::GlobalNamespace::CosmeticCritterSpawnerIndependent*  spawner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"UnregisterIndependentSpawner", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterSpawnerIndependent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spawner);
}
inline void GlobalNamespace::CosmeticCritterManager::RegisterCatcher(::GlobalNamespace::CosmeticCritterCatcher*  catcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"RegisterCatcher", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterCatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, catcher);
}
inline void GlobalNamespace::CosmeticCritterManager::UnregisterCatcher(::GlobalNamespace::CosmeticCritterCatcher*  catcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"UnregisterCatcher", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterCatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, catcher);
}
inline void GlobalNamespace::CosmeticCritterManager::RegisterTickForEachCritter(::System::Type*  type, ::GlobalNamespace::ICosmeticCritterTickForEach*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"RegisterTickForEachCritter", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::ICosmeticCritterTickForEach*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, target);
}
inline void GlobalNamespace::CosmeticCritterManager::UnregisterTickForEachCritter(::System::Type*  type, ::GlobalNamespace::ICosmeticCritterTickForEach*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"UnregisterTickForEachCritter", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::ICosmeticCritterTickForEach*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, target);
}
inline void GlobalNamespace::CosmeticCritterManager::ResetLocalCallLimiters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"ResetLocalCallLimiters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterManager::ResetCosmeticCritters(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"ResetCosmeticCritters", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player);
}
inline void GlobalNamespace::CosmeticCritterManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterManager::ReuseOrSpawnNewCritter(::GlobalNamespace::CosmeticCritterSpawner*  spawner, int32_t  seed, double_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"ReuseOrSpawnNewCritter", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterSpawner*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spawner, seed, time);
}
inline void GlobalNamespace::CosmeticCritterManager::FreeCritter(::GlobalNamespace::CosmeticCritter*  critter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"FreeCritter", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, critter);
}
inline void GlobalNamespace::CosmeticCritterManager::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CosmeticCritterManager::CosmeticCritterRPC(::GlobalNamespace::CosmeticCritterAction  action, int32_t  holdableID, int32_t  seed, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"CosmeticCritterRPC", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterAction>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, action, holdableID, seed, info);
}
inline void GlobalNamespace::CosmeticCritterManager::CatchCosmeticCritterRPC(::GlobalNamespace::CosmeticCritterAction  catchAction, int32_t  catcherID, int32_t  seed, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"CatchCosmeticCritterRPC", {}, {::i2c::type_of<::GlobalNamespace::CosmeticCritterAction>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, catchAction, catcherID, seed, info);
}
inline void GlobalNamespace::CosmeticCritterManager::SpawnCosmeticCritterRPC(int32_t  spawnerID, int32_t  seed, ::GlobalNamespace::PhotonMessageInfoWrapped  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {"SpawnCosmeticCritterRPC", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::PhotonMessageInfoWrapped>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spawnerID, seed, info);
}
inline void GlobalNamespace::CosmeticCritterManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CosmeticCritterManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CosmeticCritterManager* GlobalNamespace::CosmeticCritterManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CosmeticCritterManager*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr  GlobalNamespace::CosmeticCritterManager::operator ::GlobalNamespace::ITickSystemTick*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* GlobalNamespace::CosmeticCritterManager::i___GlobalNamespace__ITickSystemTick() noexcept {
return static_cast<::GlobalNamespace::ITickSystemTick*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CosmeticCritterManager::CosmeticCritterManager()   {
}
