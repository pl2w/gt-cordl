#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerCosmeticsSystem.hpp"
#include "GlobalNamespace/zzzz__TimeSince_impl.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerCosmeticsSystem_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPre_def.hpp"
#include "GlobalNamespace/zzzz__IUserCosmeticsCallback_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerCosmeticsSystem_def.hpp"
#include "GlobalNamespace/zzzz__RigContainer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetSharedGroupDataResult_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.ITickSystemPre_get_PreTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerCosmeticsSystem::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem::ITickSystemPre_get_PreTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac7380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"ITickSystemPre.get_PreTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.ITickSystemPre_set_PreTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem::*)(bool)>(&::GlobalNamespace::PlayerCosmeticsSystem::ITickSystemPre_set_PreTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ac7388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"ITickSystemPre.set_PreTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem::Awake)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x5ac7390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem::Start)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5ac7690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem::OnDestroy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5ac787c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.LookUpPlayerCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem::*)(bool)>(&::GlobalNamespace::PlayerCosmeticsSystem::LookUpPlayerCosmetics)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5ac7940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LookUpPlayerCosmetics", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.PreTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem::PreTick)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5ac79e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"PreTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.NewCosmeticsPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem::NewCosmeticsPath)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5ac7ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"NewCosmeticsPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.NewCosmeticsPathCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::PlayerCosmeticsSystem::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem::NewCosmeticsPathCoroutine)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5ac7b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"NewCosmeticsPathCoroutine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.OnNetEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem::*)(uint8_t, ::System::Object*, int32_t)>(&::GlobalNamespace::PlayerCosmeticsSystem::OnNetEvent)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5ac7b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"OnNetEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.get_nullInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::PlayerCosmeticsSystem::get_nullInstance)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5ac7e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"get_nullInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.get_TempUnlocksEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::PlayerCosmeticsSystem::get_TempUnlocksEnabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ac7f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"get_TempUnlocksEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.set_TempUnlocksEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::PlayerCosmeticsSystem::set_TempUnlocksEnabled)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ac7fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"set_TempUnlocksEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.get_TempUnlockCosmeticString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)()>(&::GlobalNamespace::PlayerCosmeticsSystem::get_TempUnlockCosmeticString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ac8000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"get_TempUnlockCosmeticString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.set_TempUnlockCosmeticString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::StringW>)>(&::GlobalNamespace::PlayerCosmeticsSystem::set_TempUnlockCosmeticString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5ac8058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"set_TempUnlockCosmeticString", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.RegisterCosmeticCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::GlobalNamespace::IUserCosmeticsCallback*)>(&::GlobalNamespace::PlayerCosmeticsSystem::RegisterCosmeticCallback)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x5ac80b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"RegisterCosmeticCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::IUserCosmeticsCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.RemoveCosmeticCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::GlobalNamespace::PlayerCosmeticsSystem::RemoveCosmeticCallback)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5ac82a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"RemoveCosmeticCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.UpdatePlayerCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::PlayerCosmeticsSystem::UpdatePlayerCosmetics)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5ac7ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"UpdatePlayerCosmetics", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.UpdatePlayerCosmetics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*)>(&::GlobalNamespace::PlayerCosmeticsSystem::UpdatePlayerCosmetics)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5ac8378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"UpdatePlayerCosmetics", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.SetRigTryOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::PlayerCosmeticsSystem::SetRigTryOn)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5ac8660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"SetRigTryOn", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.SetRigTemporarySpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool, ::GlobalNamespace::RigContainer*, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(&::GlobalNamespace::PlayerCosmeticsSystem::SetRigTemporarySpace)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5ac8890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"SetRigTemporarySpace", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::RigContainer*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.UnlockTemporaryCosmeticsForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::PlayerCosmeticsSystem::UnlockTemporaryCosmeticsForPlayer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ac9278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"UnlockTemporaryCosmeticsForPlayer", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.UnlockTemporaryCosmeticsForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RigContainer*, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(&::GlobalNamespace::PlayerCosmeticsSystem::UnlockTemporaryCosmeticsForPlayer)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x5ac89a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"UnlockTemporaryCosmeticsForPlayer", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.LockTemporaryCosmeticsForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RigContainer*)>(&::GlobalNamespace::PlayerCosmeticsSystem::LockTemporaryCosmeticsForPlayer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5ac9308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LockTemporaryCosmeticsForPlayer", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.LockTemporaryCosmeticsForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::RigContainer*, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(&::GlobalNamespace::PlayerCosmeticsSystem::LockTemporaryCosmeticsForPlayer)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x5ac8e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LockTemporaryCosmeticsForPlayer", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.UnlockTemporaryCosmeticsGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(&::GlobalNamespace::PlayerCosmeticsSystem::UnlockTemporaryCosmeticsGlobal)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5ac9398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"UnlockTemporaryCosmeticsGlobal", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.UnlockTemporaryCosmeticGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::PlayerCosmeticsSystem::UnlockTemporaryCosmeticGlobal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ac9508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"UnlockTemporaryCosmeticGlobal", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.LockTemporaryCosmeticsGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IReadOnlyList_1<::StringW>*)>(&::GlobalNamespace::PlayerCosmeticsSystem::LockTemporaryCosmeticsGlobal)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5ac961c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LockTemporaryCosmeticsGlobal", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.LockTemporaryCosmeticGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::PlayerCosmeticsSystem::LockTemporaryCosmeticGlobal)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5ac978c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LockTemporaryCosmeticGlobal", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.IsTemporaryCosmeticAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::VRRig*, ::StringW)>(&::GlobalNamespace::PlayerCosmeticsSystem::IsTemporaryCosmeticAllowed)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5ac9904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"IsTemporaryCosmeticAllowed", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.LocalIsTemporaryCosmetic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::GlobalNamespace::PlayerCosmeticsSystem::LocalIsTemporaryCosmetic)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5ac99ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LocalIsTemporaryCosmetic", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.LocalPlayerInTemporaryCosmeticSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::PlayerCosmeticsSystem::LocalPlayerInTemporaryCosmeticSpace)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5ac9ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LocalPlayerInTemporaryCosmeticSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem.StaticReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::PlayerCosmeticsSystem::StaticReset)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5ac9b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"StaticReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5ac9cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get__ITickSystemPre_PreTickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPre_PreTickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get__ITickSystemPre_PreTickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPre_PreTickRunning_k__BackingField;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_set__ITickSystemPre_PreTickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemPre_PreTickRunning_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_playerLookUpCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLookUpCooldown;
}
constexpr float_t const& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_playerLookUpCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLookUpCooldown;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_set_playerLookUpCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLookUpCooldown = value;
}
constexpr float_t& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_getSharedGroupDataCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getSharedGroupDataCooldown;
}
constexpr float_t const& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_getSharedGroupDataCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___getSharedGroupDataCooldown;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_set_getSharedGroupDataCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___getSharedGroupDataCooldown = value;
}
constexpr float_t& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_startSearchingTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSearchingTime;
}
constexpr float_t const& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_startSearchingTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startSearchingTime;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_set_startSearchingTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startSearchingTime = value;
}
constexpr bool& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_isLookingUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLookingUp;
}
constexpr bool const& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_isLookingUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLookingUp;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_set_isLookingUp(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLookingUp = value;
}
constexpr bool& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_isLookingUpNew()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLookingUpNew;
}
constexpr bool const& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_isLookingUpNew() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isLookingUpNew;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_set_isLookingUpNew(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isLookingUpNew = value;
}
constexpr ::StringW& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_tempCosmetics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempCosmetics;
}
constexpr ::StringW const& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_tempCosmetics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempCosmetics;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_set_tempCosmetics(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempCosmetics = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_playerTemp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTemp;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_playerTemp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerTemp;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_set_playerTemp(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerTemp = value;
}
constexpr ::UnityW<::GlobalNamespace::RigContainer>& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_tempRC()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRC;
}
constexpr ::UnityW<::GlobalNamespace::RigContainer> const& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_tempRC() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tempRC;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_set_tempRC(::UnityW<::GlobalNamespace::RigContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tempRC = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_inventory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventory;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_get_inventory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inventory;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem::__cordl_internal_set_inventory(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inventory = value;
}
inline void GlobalNamespace::PlayerCosmeticsSystem::setStaticF_subscriptionKey(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "subscriptionKey", ::GlobalNamespace::PlayerCosmeticsSystem*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PlayerCosmeticsSystem::getStaticF_subscriptionKey()  {
return ::cordl_internals::getStaticField<::StringW, "subscriptionKey", ::GlobalNamespace::PlayerCosmeticsSystem*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem::setStaticF_instance(::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>, "instance", ::GlobalNamespace::PlayerCosmeticsSystem*>(std::forward<::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>>(value));
}
inline ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem> GlobalNamespace::PlayerCosmeticsSystem::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>, "instance", ::GlobalNamespace::PlayerCosmeticsSystem*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem::setStaticF_playersToLookUp(::System::Collections::Generic::Queue_1<::GlobalNamespace::NetPlayer*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<::GlobalNamespace::NetPlayer*>*, "playersToLookUp", ::GlobalNamespace::PlayerCosmeticsSystem*>(std::forward<::System::Collections::Generic::Queue_1<::GlobalNamespace::NetPlayer*>*>(value));
}
inline ::System::Collections::Generic::Queue_1<::GlobalNamespace::NetPlayer*>* GlobalNamespace::PlayerCosmeticsSystem::getStaticF_playersToLookUp()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<::GlobalNamespace::NetPlayer*>*, "playersToLookUp", ::GlobalNamespace::PlayerCosmeticsSystem*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem::setStaticF_userCosmeticCallback(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::IUserCosmeticsCallback*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::IUserCosmeticsCallback*>*, "userCosmeticCallback", ::GlobalNamespace::PlayerCosmeticsSystem*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::IUserCosmeticsCallback*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::IUserCosmeticsCallback*>* GlobalNamespace::PlayerCosmeticsSystem::getStaticF_userCosmeticCallback()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::IUserCosmeticsCallback*>*, "userCosmeticCallback", ::GlobalNamespace::PlayerCosmeticsSystem*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem::setStaticF_userCosmeticsWaiting(::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "userCosmeticsWaiting", ::GlobalNamespace::PlayerCosmeticsSystem*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::StringW>* GlobalNamespace::PlayerCosmeticsSystem::getStaticF_userCosmeticsWaiting()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::StringW>*, "userCosmeticsWaiting", ::GlobalNamespace::PlayerCosmeticsSystem*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem::setStaticF_playerIDsList(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "playerIDsList", ::GlobalNamespace::PlayerCosmeticsSystem*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* GlobalNamespace::PlayerCosmeticsSystem::getStaticF_playerIDsList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "playerIDsList", ::GlobalNamespace::PlayerCosmeticsSystem*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem::setStaticF_playerActorNumberList(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "playerActorNumberList", ::GlobalNamespace::PlayerCosmeticsSystem*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::PlayerCosmeticsSystem::getStaticF_playerActorNumberList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "playerActorNumberList", ::GlobalNamespace::PlayerCosmeticsSystem*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem::setStaticF_playersWaiting(::System::Collections::Generic::List_1<int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<int32_t>*, "playersWaiting", ::GlobalNamespace::PlayerCosmeticsSystem*>(std::forward<::System::Collections::Generic::List_1<int32_t>*>(value));
}
inline ::System::Collections::Generic::List_1<int32_t>* GlobalNamespace::PlayerCosmeticsSystem::getStaticF_playersWaiting()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<int32_t>*, "playersWaiting", ::GlobalNamespace::PlayerCosmeticsSystem*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem::setStaticF_sinceLastTryOnEvent(::GlobalNamespace::TimeSince  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::TimeSince, "sinceLastTryOnEvent", ::GlobalNamespace::PlayerCosmeticsSystem*>(std::forward<::GlobalNamespace::TimeSince>(value));
}
inline ::GlobalNamespace::TimeSince GlobalNamespace::PlayerCosmeticsSystem::getStaticF_sinceLastTryOnEvent()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::TimeSince, "sinceLastTryOnEvent", ::GlobalNamespace::PlayerCosmeticsSystem*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem::setStaticF_k_tempUnlockedCosmetics(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "k_tempUnlockedCosmetics", ::GlobalNamespace::PlayerCosmeticsSystem*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* GlobalNamespace::PlayerCosmeticsSystem::getStaticF_k_tempUnlockedCosmetics()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "k_tempUnlockedCosmetics", ::GlobalNamespace::PlayerCosmeticsSystem*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem::setStaticF__TempUnlocksEnabled_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<TempUnlocksEnabled>k__BackingField", ::GlobalNamespace::PlayerCosmeticsSystem*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::PlayerCosmeticsSystem::getStaticF__TempUnlocksEnabled_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<TempUnlocksEnabled>k__BackingField", ::GlobalNamespace::PlayerCosmeticsSystem*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem::setStaticF__TempUnlockCosmeticString_k__BackingField(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "<TempUnlockCosmeticString>k__BackingField", ::GlobalNamespace::PlayerCosmeticsSystem*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GlobalNamespace::PlayerCosmeticsSystem::getStaticF__TempUnlockCosmeticString_k__BackingField()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "<TempUnlockCosmeticString>k__BackingField", ::GlobalNamespace::PlayerCosmeticsSystem*>();
}
inline bool GlobalNamespace::PlayerCosmeticsSystem::ITickSystemPre_get_PreTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"ITickSystemPre.get_PreTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::ITickSystemPre_set_PreTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"ITickSystemPre.set_PreTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::LookUpPlayerCosmetics(bool  wait)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LookUpPlayerCosmetics", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wait);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::PreTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"PreTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::NewCosmeticsPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"NewCosmeticsPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::PlayerCosmeticsSystem::NewCosmeticsPathCoroutine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"NewCosmeticsPathCoroutine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::OnNetEvent(uint8_t  code, ::System::Object*  data, int32_t  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"OnNetEvent", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, data, source);
}
inline bool GlobalNamespace::PlayerCosmeticsSystem::get_nullInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"get_nullInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::PlayerCosmeticsSystem::get_TempUnlocksEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"get_TempUnlocksEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::set_TempUnlocksEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"set_TempUnlocksEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::ArrayW<::StringW> GlobalNamespace::PlayerCosmeticsSystem::get_TempUnlockCosmeticString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"get_TempUnlockCosmeticString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::set_TempUnlockCosmeticString(::ArrayW<::StringW>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"set_TempUnlockCosmeticString", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::RegisterCosmeticCallback(int32_t  playerID, ::GlobalNamespace::IUserCosmeticsCallback*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"RegisterCosmeticCallback", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::IUserCosmeticsCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerID, callback);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::RemoveCosmeticCallback(int32_t  playerID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"RemoveCosmeticCallback", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, playerID);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::UpdatePlayerCosmetics(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"UpdatePlayerCosmetics", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::UpdatePlayerCosmetics(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  players)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"UpdatePlayerCosmetics", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, players);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::SetRigTryOn(bool  inTryon, ::GlobalNamespace::RigContainer*  rigRefg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"SetRigTryOn", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inTryon, rigRefg);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::SetRigTemporarySpace(bool  enteringSpace, ::GlobalNamespace::RigContainer*  rigRef, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  cosmeticIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"SetRigTemporarySpace", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::RigContainer*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, enteringSpace, rigRef, cosmeticIds);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::UnlockTemporaryCosmeticsForPlayer(::GlobalNamespace::RigContainer*  rigRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"UnlockTemporaryCosmeticsForPlayer", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rigRef);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::UnlockTemporaryCosmeticsForPlayer(::GlobalNamespace::RigContainer*  rigRef, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  cosmeticIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"UnlockTemporaryCosmeticsForPlayer", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rigRef, cosmeticIds);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::LockTemporaryCosmeticsForPlayer(::GlobalNamespace::RigContainer*  rigRef)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LockTemporaryCosmeticsForPlayer", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rigRef);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::LockTemporaryCosmeticsForPlayer(::GlobalNamespace::RigContainer*  rigRef, ::System::Collections::Generic::IReadOnlyList_1<::StringW>*  cosmeticIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LockTemporaryCosmeticsForPlayer", {}, {::i2c::type_of<::GlobalNamespace::RigContainer*>(), ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rigRef, cosmeticIds);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::UnlockTemporaryCosmeticsGlobal(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  cosmeticIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"UnlockTemporaryCosmeticsGlobal", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cosmeticIds);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::UnlockTemporaryCosmeticGlobal(::StringW  cosmeticId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"UnlockTemporaryCosmeticGlobal", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cosmeticId);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::LockTemporaryCosmeticsGlobal(::System::Collections::Generic::IReadOnlyList_1<::StringW>*  cosmeticIds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LockTemporaryCosmeticsGlobal", {}, {::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cosmeticIds);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::LockTemporaryCosmeticGlobal(::StringW  cosmeticId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LockTemporaryCosmeticGlobal", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cosmeticId);
}
inline bool GlobalNamespace::PlayerCosmeticsSystem::IsTemporaryCosmeticAllowed(::GlobalNamespace::VRRig*  rigRef, ::StringW  cosmeticId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"IsTemporaryCosmeticAllowed", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rigRef, cosmeticId);
}
inline bool GlobalNamespace::PlayerCosmeticsSystem::LocalIsTemporaryCosmetic(::StringW  cosmeticId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LocalIsTemporaryCosmetic", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, cosmeticId);
}
inline bool GlobalNamespace::PlayerCosmeticsSystem::LocalPlayerInTemporaryCosmeticSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"LocalPlayerInTemporaryCosmeticSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::StaticReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {"StaticReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::PlayerCosmeticsSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerCosmeticsSystem* GlobalNamespace::PlayerCosmeticsSystem::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCosmeticsSystem*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPre"
constexpr  GlobalNamespace::PlayerCosmeticsSystem::operator ::GlobalNamespace::ITickSystemPre*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPre*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPre"
constexpr ::GlobalNamespace::ITickSystemPre* GlobalNamespace::PlayerCosmeticsSystem::i___GlobalNamespace__ITickSystemPre() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPre*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCosmeticsSystem::PlayerCosmeticsSystem()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::*)(int32_t)>(&::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5acaff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5acb01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x6e8;
  constexpr static std::size_t addrs = 0x5acb020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5acb708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5acb710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5acb748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>& GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem> const& GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*& GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_get___8__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0* const& GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_get___8__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____8__1;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_set___8__1(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____8__1 = value;
}
constexpr int32_t& GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_get__i_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr int32_t const& GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_get__i_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__2;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::__cordl_internal_set__i_5__2(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__2 = value;
}
inline void GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21* GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21::PlayerCosmeticsSystem__NewCosmeticsPathCoroutine_d__21()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aca4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1._NewCosmeticsPathCoroutine_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::*)(::PlayFab::ClientModels::GetSharedGroupDataResult*)>(&::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::_NewCosmeticsPathCoroutine_b__0)> {
  constexpr static std::size_t size = 0xb38;
  constexpr static std::size_t addrs = 0x5aca4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1*>(),
                        {"<NewCosmeticsPathCoroutine>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::__cordl_internal_get_j()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___j;
}
constexpr int32_t const& GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::__cordl_internal_get_j() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___j;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::__cordl_internal_set_j(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___j = value;
}
constexpr ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*& GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::__cordl_internal_get_CS$__8__locals1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0* const& GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::__cordl_internal_get_CS$__8__locals1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CS$__8__locals1;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::__cordl_internal_set_CS$__8__locals1(::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CS$__8__locals1 = value;
}
inline void GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::_NewCosmeticsPathCoroutine_b__0(::PlayFab::ClientModels::GetSharedGroupDataResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1*>(),
                        {"<NewCosmeticsPathCoroutine>b__0", {}, {::i2c::type_of<::PlayFab::ClientModels::GetSharedGroupDataResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1* GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_1::PlayerCosmeticsSystem___c__DisplayClass21_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aca4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>& GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::PlayerCosmeticsSystem> const& GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::PlayerCosmeticsSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0::__cordl_internal_get_player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0::__cordl_internal_get_player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___player;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0::__cordl_internal_set_player(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___player = value;
}
inline void GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0* GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCosmeticsSystem___c__DisplayClass21_0::PlayerCosmeticsSystem___c__DisplayClass21_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem___c::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aca2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem___c._Start_b__16_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem___c::*)(::StringW)>(&::GlobalNamespace::PlayerCosmeticsSystem___c::_Start_b__16_0)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5aca304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c*>(),
                        {"<Start>b__16_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem___c._Start_b__16_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem___c::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::PlayerCosmeticsSystem___c::_Start_b__16_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5aca414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c*>(),
                        {"<Start>b__16_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem___c._NewCosmeticsPathCoroutine_b__21_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem___c::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::PlayerCosmeticsSystem___c::_NewCosmeticsPathCoroutine_b__21_1)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5aca418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c*>(),
                        {"<NewCosmeticsPathCoroutine>b__21_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PlayerCosmeticsSystem___c::setStaticF___9(::GlobalNamespace::PlayerCosmeticsSystem___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::PlayerCosmeticsSystem___c*, "<>9", ::GlobalNamespace::PlayerCosmeticsSystem___c*>(std::forward<::GlobalNamespace::PlayerCosmeticsSystem___c*>(value));
}
inline ::GlobalNamespace::PlayerCosmeticsSystem___c* GlobalNamespace::PlayerCosmeticsSystem___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::PlayerCosmeticsSystem___c*, "<>9", ::GlobalNamespace::PlayerCosmeticsSystem___c*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem___c::setStaticF___9__16_0(::System::Action_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::StringW>*, "<>9__16_0", ::GlobalNamespace::PlayerCosmeticsSystem___c*>(std::forward<::System::Action_1<::StringW>*>(value));
}
inline ::System::Action_1<::StringW>* GlobalNamespace::PlayerCosmeticsSystem___c::getStaticF___9__16_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::StringW>*, "<>9__16_0", ::GlobalNamespace::PlayerCosmeticsSystem___c*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem___c::setStaticF___9__16_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__16_1", ::GlobalNamespace::PlayerCosmeticsSystem___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GlobalNamespace::PlayerCosmeticsSystem___c::getStaticF___9__16_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__16_1", ::GlobalNamespace::PlayerCosmeticsSystem___c*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem___c::setStaticF___9__21_1(::System::Action_1<::PlayFab::PlayFabError*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__21_1", ::GlobalNamespace::PlayerCosmeticsSystem___c*>(std::forward<::System::Action_1<::PlayFab::PlayFabError*>*>(value));
}
inline ::System::Action_1<::PlayFab::PlayFabError*>* GlobalNamespace::PlayerCosmeticsSystem___c::getStaticF___9__21_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::PlayFab::PlayFabError*>*, "<>9__21_1", ::GlobalNamespace::PlayerCosmeticsSystem___c*>();
}
inline void GlobalNamespace::PlayerCosmeticsSystem___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerCosmeticsSystem___c::_Start_b__16_0(::StringW  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c*>(),
                        {"<Start>b__16_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void GlobalNamespace::PlayerCosmeticsSystem___c::_Start_b__16_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c*>(),
                        {"<Start>b__16_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::PlayerCosmeticsSystem___c::_NewCosmeticsPathCoroutine_b__21_1(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem___c*>(),
                        {"<NewCosmeticsPathCoroutine>b__21_1", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline ::GlobalNamespace::PlayerCosmeticsSystem___c* GlobalNamespace::PlayerCosmeticsSystem___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCosmeticsSystem___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCosmeticsSystem___c::PlayerCosmeticsSystem___c()   {
}
//  Writing Method size for method: ::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::*)()>(&::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aca28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::__cordl_internal_get_Sku()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sku;
}
constexpr ::StringW const& GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::__cordl_internal_get_Sku() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sku;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::__cordl_internal_set_Sku(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sku = value;
}
constexpr ::System::Nullable_1<::System::DateTimeOffset>& GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::__cordl_internal_get_ExpirationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpirationTime;
}
constexpr ::System::Nullable_1<::System::DateTimeOffset> const& GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::__cordl_internal_get_ExpirationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpirationTime;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::__cordl_internal_set_ExpirationTime(::System::Nullable_1<::System::DateTimeOffset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpirationTime = value;
}
constexpr int32_t& GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::__cordl_internal_get_TotalLifetimeSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalLifetimeSeconds;
}
constexpr int32_t const& GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::__cordl_internal_get_TotalLifetimeSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalLifetimeSeconds;
}
constexpr void GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::__cordl_internal_set_TotalLifetimeSeconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalLifetimeSeconds = value;
}
inline void GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData* GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerCosmeticsSystem_SharedSubscriptionData::PlayerCosmeticsSystem_SharedSubscriptionData()   {
}
