#pragma once
// IWYU pragma private; include "GlobalNamespace/VRRigCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__VRRigCache_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTag/zzzz__TickSystemTimer_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRigCache> (*)()>(&::GlobalNamespace::VRRigCache::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58f9d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRigCache*)>(&::GlobalNamespace::VRRigCache::set_Instance)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x58f9d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::VRRigCache*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.get_NetworkParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::VRRigCache::*)()>(&::GlobalNamespace::VRRigCache::get_NetworkParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f9e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_NetworkParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.get_ActiveRigContainers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::RigContainer>>* (*)()>(&::GlobalNamespace::VRRigCache::get_ActiveRigContainers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58f9e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_ActiveRigContainers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.get_ActiveRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::VRRig>>* (*)()>(&::GlobalNamespace::VRRigCache::get_ActiveRigs)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58f9e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_ActiveRigs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.get_AllRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::VRRig>>* (*)()>(&::GlobalNamespace::VRRigCache::get_AllRigs)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58f9ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_AllRigs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.get_AllRigContainers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::RigContainer>>* (*)()>(&::GlobalNamespace::VRRigCache::get_AllRigContainers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58f9f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_AllRigContainers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.get_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::VRRigCache::get_isInitialized)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x58f9f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_isInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.set_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::VRRigCache::set_isInitialized)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58f9fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"set_isInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.add_OnActiveRigsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::VRRigCache::add_OnActiveRigsChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58fa024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"add_OnActiveRigsChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.remove_OnActiveRigsChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::VRRigCache::remove_OnActiveRigsChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58fa100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"remove_OnActiveRigsChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.add_OnPostInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::VRRigCache::add_OnPostInitialize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58fa1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"add_OnPostInitialize", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.remove_OnPostInitialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::VRRigCache::remove_OnPostInitialize)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58fa2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"remove_OnPostInitialize", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.add_OnPostSpawnRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::VRRigCache::add_OnPostSpawnRig)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58fa394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"add_OnPostSpawnRig", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.remove_OnPostSpawnRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::GlobalNamespace::VRRigCache::remove_OnPostSpawnRig)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58fa470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"remove_OnPostSpawnRig", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.add_OnRigActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*)>(&::GlobalNamespace::VRRigCache::add_OnRigActivated)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58ed5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"add_OnRigActivated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.remove_OnRigActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*)>(&::GlobalNamespace::VRRigCache::remove_OnRigActivated)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58edbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"remove_OnRigActivated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.add_OnRigDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*)>(&::GlobalNamespace::VRRigCache::add_OnRigDeactivated)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58ed6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"add_OnRigDeactivated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.remove_OnRigDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*)>(&::GlobalNamespace::VRRigCache::remove_OnRigDeactivated)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58edcb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"remove_OnRigDeactivated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.add_OnRigNameChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*)>(&::GlobalNamespace::VRRigCache::add_OnRigNameChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58fa54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"add_OnRigNameChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.remove_OnRigNameChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*)>(&::GlobalNamespace::VRRigCache::remove_OnRigNameChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58fa640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"remove_OnRigNameChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)()>(&::GlobalNamespace::VRRigCache::Awake)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x58fa734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)()>(&::GlobalNamespace::VRRigCache::OnDestroy)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x58fb000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.InitializeVRRigCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)()>(&::GlobalNamespace::VRRigCache::InitializeVRRigCache)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x58fa9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"InitializeVRRigCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.SpawnRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::RigContainer> (::GlobalNamespace::VRRigCache::*)()>(&::GlobalNamespace::VRRigCache::SpawnRig)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x58fb288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"SpawnRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.TryGetVrrig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VRRigCache::*)(::Photon::Realtime::Player*, ::by_ref<::GlobalNamespace::RigContainer*>)>(&::GlobalNamespace::VRRigCache::TryGetVrrig)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x58fb4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"TryGetVrrig", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RigContainer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.TryGetVrrig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VRRigCache::*)(int32_t, ::by_ref<::GlobalNamespace::RigContainer*>)>(&::GlobalNamespace::VRRigCache::TryGetVrrig)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58fb568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"TryGetVrrig", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RigContainer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.TryGetVrrig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VRRigCache::*)(::GlobalNamespace::NetPlayer*, ::by_ref<::GlobalNamespace::RigContainer*>)>(&::GlobalNamespace::VRRigCache::TryGetVrrig)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x58f23f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"TryGetVrrig", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RigContainer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.OnPlayerEnteredRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::VRRigCache::OnPlayerEnteredRoom)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58fb5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)()>(&::GlobalNamespace::VRRigCache::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x58fb6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.OnPlayerLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::VRRigCache::OnPlayerLeftRoom)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x58fb810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.CheckForMissingPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)()>(&::GlobalNamespace::VRRigCache::CheckForMissingPlayer)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x58fbb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"CheckForMissingPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)()>(&::GlobalNamespace::VRRigCache::OnLeftRoom)> {
  constexpr static std::size_t size = 0x9e8;
  constexpr static std::size_t addrs = 0x58fc008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.GetAllRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::VRRig>> (::GlobalNamespace::VRRigCache::*)()>(&::GlobalNamespace::VRRigCache::GetAllRigs)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x58fc9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"GetAllRigs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.GetAllUsedRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*)>(&::GlobalNamespace::VRRigCache::GetAllUsedRigs)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x58fcde0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"GetAllUsedRigs", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.GetActiveRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*)>(&::GlobalNamespace::VRRigCache::GetActiveRigs)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x58fcfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"GetActiveRigs", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.ApplyToAllRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::GlobalNamespace::VRRig>>*)>(&::GlobalNamespace::VRRigCache::ApplyToAllRigs)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0x58fd2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"ApplyToAllRigs", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.ApplyToAllActiveRigs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::GlobalNamespace::VRRig>>*)>(&::GlobalNamespace::VRRigCache::ApplyToAllActiveRigs)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x58fd5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"ApplyToAllActiveRigs", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.GetAllRigsHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VRRigCache::*)()>(&::GlobalNamespace::VRRigCache::GetAllRigsHash)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x58fd778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"GetAllRigsHash", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.InstantiateNetworkObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)()>(&::GlobalNamespace::VRRigCache::InstantiateNetworkObject)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x58fda40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"InstantiateNetworkObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.OnVrrigSerializerSuccesfullySpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)()>(&::GlobalNamespace::VRRigCache::OnVrrigSerializerSuccesfullySpawned)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58fdef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"OnVrrigSerializerSuccesfullySpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.LogInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)(::StringW)>(&::GlobalNamespace::VRRigCache::LogInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58fdf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"LogInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.LogWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)(::StringW)>(&::GlobalNamespace::VRRigCache::LogWarning)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58fdf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)(::StringW)>(&::GlobalNamespace::VRRigCache::LogError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58fc004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRRigCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRRigCache::*)()>(&::GlobalNamespace::VRRigCache::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x58fdf78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::RigContainer>& GlobalNamespace::VRRigCache::__cordl_internal_get_localRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRig;
}
constexpr ::UnityW<::GlobalNamespace::RigContainer> const& GlobalNamespace::VRRigCache::__cordl_internal_get_localRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___localRig;
}
constexpr void GlobalNamespace::VRRigCache::__cordl_internal_set_localRig(::UnityW<::GlobalNamespace::RigContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___localRig = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRRigCache::__cordl_internal_get_rigParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRRigCache::__cordl_internal_get_rigParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigParent;
}
constexpr void GlobalNamespace::VRRigCache::__cordl_internal_set_rigParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigParent = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::VRRigCache::__cordl_internal_get_networkParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::VRRigCache::__cordl_internal_get_networkParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkParent;
}
constexpr void GlobalNamespace::VRRigCache::__cordl_internal_set_networkParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkParent = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::VRRigCache::__cordl_internal_get_rigTemplate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigTemplate;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::VRRigCache::__cordl_internal_get_rigTemplate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigTemplate;
}
constexpr void GlobalNamespace::VRRigCache::__cordl_internal_set_rigTemplate(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigTemplate = value;
}
constexpr int32_t& GlobalNamespace::VRRigCache::__cordl_internal_get_rigAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigAmount;
}
constexpr int32_t const& GlobalNamespace::VRRigCache::__cordl_internal_get_rigAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigAmount;
}
constexpr void GlobalNamespace::VRRigCache::__cordl_internal_set_rigAmount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigAmount = value;
}
constexpr ::GorillaTag::TickSystemTimer*& GlobalNamespace::VRRigCache::__cordl_internal_get_m_ensureNetworkObjectTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ensureNetworkObjectTimer;
}
constexpr ::GorillaTag::TickSystemTimer* const& GlobalNamespace::VRRigCache::__cordl_internal_get_m_ensureNetworkObjectTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ensureNetworkObjectTimer;
}
constexpr void GlobalNamespace::VRRigCache::__cordl_internal_set_m_ensureNetworkObjectTimer(::GorillaTag::TickSystemTimer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ensureNetworkObjectTimer = value;
}
inline void GlobalNamespace::VRRigCache::setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::VRRigCache>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::VRRigCache>, "<Instance>k__BackingField", ::GlobalNamespace::VRRigCache*>(std::forward<::UnityW<::GlobalNamespace::VRRigCache>>(value));
}
inline ::UnityW<::GlobalNamespace::VRRigCache> GlobalNamespace::VRRigCache::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::VRRigCache>, "<Instance>k__BackingField", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF_freeRigs(::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::RigContainer>>*, "freeRigs", ::GlobalNamespace::VRRigCache*>(std::forward<::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::RigContainer>>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::RigContainer>>* GlobalNamespace::VRRigCache::getStaticF_freeRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::UnityW<::GlobalNamespace::RigContainer>>*, "freeRigs", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF_rigsInUse(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityW<::GlobalNamespace::RigContainer>>*, "rigsInUse", ::GlobalNamespace::VRRigCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityW<::GlobalNamespace::RigContainer>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityW<::GlobalNamespace::RigContainer>>* GlobalNamespace::VRRigCache::getStaticF_rigsInUse()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::UnityW<::GlobalNamespace::RigContainer>>*, "rigsInUse", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF_m_activeRigContainers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*, "m_activeRigContainers", ::GlobalNamespace::VRRigCache*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>* GlobalNamespace::VRRigCache::getStaticF_m_activeRigContainers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*, "m_activeRigContainers", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF_m_activeRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "m_activeRigs", ::GlobalNamespace::VRRigCache*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::VRRigCache::getStaticF_m_activeRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "m_activeRigs", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF_m_allRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "m_allRigs", ::GlobalNamespace::VRRigCache*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::VRRigCache::getStaticF_m_allRigs()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*, "m_allRigs", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF_m_allRigContainers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*, "m_allRigContainers", ::GlobalNamespace::VRRigCache*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>* GlobalNamespace::VRRigCache::getStaticF_m_allRigContainers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::RigContainer>>*, "m_allRigContainers", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF__isBatchingRigActivations(bool  value)  {
::cordl_internals::setStaticField<bool, "_isBatchingRigActivations", ::GlobalNamespace::VRRigCache*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::VRRigCache::getStaticF__isBatchingRigActivations()  {
return ::cordl_internals::getStaticField<bool, "_isBatchingRigActivations", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF__isInitialized_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<isInitialized>k__BackingField", ::GlobalNamespace::VRRigCache*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::VRRigCache::getStaticF__isInitialized_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<isInitialized>k__BackingField", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF_OnActiveRigsChanged(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnActiveRigsChanged", ::GlobalNamespace::VRRigCache*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::VRRigCache::getStaticF_OnActiveRigsChanged()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnActiveRigsChanged", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF_OnPostInitialize(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnPostInitialize", ::GlobalNamespace::VRRigCache*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::VRRigCache::getStaticF_OnPostInitialize()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnPostInitialize", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF_OnPostSpawnRig(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnPostSpawnRig", ::GlobalNamespace::VRRigCache*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::VRRigCache::getStaticF_OnPostSpawnRig()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnPostSpawnRig", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF_OnRigActivated(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*, "OnRigActivated", ::GlobalNamespace::VRRigCache*>(std::forward<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>(value));
}
inline ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>* GlobalNamespace::VRRigCache::getStaticF_OnRigActivated()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*, "OnRigActivated", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF_OnRigDeactivated(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*, "OnRigDeactivated", ::GlobalNamespace::VRRigCache*>(std::forward<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>(value));
}
inline ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>* GlobalNamespace::VRRigCache::getStaticF_OnRigDeactivated()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*, "OnRigDeactivated", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF_OnRigNameChanged(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*, "OnRigNameChanged", ::GlobalNamespace::VRRigCache*>(std::forward<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>(value));
}
inline ::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>* GlobalNamespace::VRRigCache::getStaticF_OnRigNameChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*, "OnRigNameChanged", ::GlobalNamespace::VRRigCache*>();
}
inline void GlobalNamespace::VRRigCache::setStaticF_rigRGBData(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "rigRGBData", ::GlobalNamespace::VRRigCache*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> GlobalNamespace::VRRigCache::getStaticF_rigRGBData()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "rigRGBData", ::GlobalNamespace::VRRigCache*>();
}
inline ::UnityW<::GlobalNamespace::VRRigCache> GlobalNamespace::VRRigCache::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRigCache>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::VRRigCache::set_Instance(::GlobalNamespace::VRRigCache*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GlobalNamespace::VRRigCache*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::VRRigCache::get_NetworkParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_NetworkParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::RigContainer>>* GlobalNamespace::VRRigCache::get_ActiveRigContainers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_ActiveRigContainers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::RigContainer>>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::VRRigCache::get_ActiveRigs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_ActiveRigs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::VRRig>>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::VRRig>>* GlobalNamespace::VRRigCache::get_AllRigs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_AllRigs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::VRRig>>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::RigContainer>>* GlobalNamespace::VRRigCache::get_AllRigContainers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_AllRigContainers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::RigContainer>>*>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::VRRigCache::get_isInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"get_isInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::VRRigCache::set_isInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"set_isInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::VRRigCache::add_OnActiveRigsChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"add_OnActiveRigsChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::VRRigCache::remove_OnActiveRigsChanged(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"remove_OnActiveRigsChanged", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::VRRigCache::add_OnPostInitialize(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"add_OnPostInitialize", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::VRRigCache::remove_OnPostInitialize(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"remove_OnPostInitialize", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::VRRigCache::add_OnPostSpawnRig(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"add_OnPostSpawnRig", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::VRRigCache::remove_OnPostSpawnRig(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"remove_OnPostSpawnRig", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::VRRigCache::add_OnRigActivated(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"add_OnRigActivated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::VRRigCache::remove_OnRigActivated(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"remove_OnRigActivated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::VRRigCache::add_OnRigDeactivated(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"add_OnRigDeactivated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::VRRigCache::remove_OnRigDeactivated(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"remove_OnRigDeactivated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::VRRigCache::add_OnRigNameChanged(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"add_OnRigNameChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::VRRigCache::remove_OnRigNameChanged(::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"remove_OnRigNameChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::RigContainer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::VRRigCache::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigCache::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigCache::InitializeVRRigCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"InitializeVRRigCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::RigContainer> GlobalNamespace::VRRigCache::SpawnRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"SpawnRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::RigContainer>>(this, ___internal_method);
}
inline bool GlobalNamespace::VRRigCache::TryGetVrrig(::Photon::Realtime::Player*  targetPlayer, ::by_ref<::GlobalNamespace::RigContainer*>  playerRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"TryGetVrrig", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RigContainer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetPlayer, playerRig);
}
inline bool GlobalNamespace::VRRigCache::TryGetVrrig(int32_t  targetPlayerId, ::by_ref<::GlobalNamespace::RigContainer*>  playerRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"TryGetVrrig", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RigContainer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetPlayerId, playerRig);
}
inline bool GlobalNamespace::VRRigCache::TryGetVrrig(::GlobalNamespace::NetPlayer*  targetPlayer, ::by_ref<::GlobalNamespace::RigContainer*>  playerRig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"TryGetVrrig", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::by_ref<::GlobalNamespace::RigContainer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetPlayer, playerRig);
}
inline void GlobalNamespace::VRRigCache::OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  newPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"OnPlayerEnteredRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPlayer);
}
inline void GlobalNamespace::VRRigCache::OnJoinedRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"OnJoinedRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigCache::OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  leavingPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"OnPlayerLeftRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leavingPlayer);
}
inline void GlobalNamespace::VRRigCache::CheckForMissingPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"CheckForMissingPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigCache::OnLeftRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"OnLeftRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::VRRig>> GlobalNamespace::VRRigCache::GetAllRigs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"GetAllRigs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::VRRig>>>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigCache::GetAllUsedRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"GetAllUsedRigs", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigs);
}
inline void GlobalNamespace::VRRigCache::GetActiveRigs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigsListToUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"GetActiveRigs", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigsListToUpdate);
}
inline void GlobalNamespace::VRRigCache::ApplyToAllRigs(::System::Action_1<::UnityW<::GlobalNamespace::VRRig>>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"ApplyToAllRigs", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline void GlobalNamespace::VRRigCache::ApplyToAllActiveRigs(::System::Action_1<::UnityW<::GlobalNamespace::VRRig>>*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"ApplyToAllActiveRigs", {}, {::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::VRRig>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, action);
}
inline int32_t GlobalNamespace::VRRigCache::GetAllRigsHash()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"GetAllRigsHash", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigCache::InstantiateNetworkObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"InstantiateNetworkObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigCache::OnVrrigSerializerSuccesfullySpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"OnVrrigSerializerSuccesfullySpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::VRRigCache::LogInfo(::StringW  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"LogInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, log);
}
inline void GlobalNamespace::VRRigCache::LogWarning(::StringW  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"LogWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, log);
}
inline void GlobalNamespace::VRRigCache::LogError(::StringW  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, log);
}
inline void GlobalNamespace::VRRigCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VRRigCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRRigCache* GlobalNamespace::VRRigCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRRigCache*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRRigCache::VRRigCache()   {
}
