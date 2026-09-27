#pragma once
// IWYU pragma private; include "GlobalNamespace/GamePlayerLocal.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_GrabSlotExtraRecoveryData_impl.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_HandData_impl.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_SlotRecoveryData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityCreateData_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_GrabSlotExtraRecoveryData_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_HandData_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_HandGrabState_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_InputDataMotion_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_SlotRecoveryData_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayerLocal_def.hpp"
#include "GlobalNamespace/zzzz__GamePlayer_def.hpp"
#include "GlobalNamespace/zzzz__IDelayedExecListener_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)()>(&::GlobalNamespace::GamePlayerLocal::Awake)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x583c0c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.OnJoinRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)()>(&::GlobalNamespace::GamePlayerLocal::OnJoinRoom)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x583c3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"OnJoinRoom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.OnUpdateInteract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)()>(&::GlobalNamespace::GamePlayerLocal::OnUpdateInteract)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x583c3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"OnUpdateInteract", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.DebugSlotsReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)(::StringW)>(&::GlobalNamespace::GamePlayerLocal::DebugSlotsReport)> {
  constexpr static std::size_t size = 0x694;
  constexpr static std::size_t addrs = 0x583c64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"DebugSlotsReport", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.UpdateInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)(int32_t)>(&::GlobalNamespace::GamePlayerLocal::UpdateInput)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x583c448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"UpdateInput", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.UpdateHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)(::GlobalNamespace::GameEntityManager*, int32_t)>(&::GlobalNamespace::GamePlayerLocal::UpdateHand)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x583c59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"UpdateHand", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.MigrateToEntityManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)(::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayerLocal::MigrateToEntityManager)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x583e524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"MigrateToEntityManager", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.SetGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)(::GlobalNamespace::GameEntityId, int32_t)>(&::GlobalNamespace::GamePlayerLocal::SetGrabbed)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x583ef94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"SetGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.ClearGrabbedIfHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)(::GlobalNamespace::GameEntityId, ::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GamePlayerLocal::ClearGrabbedIfHeld)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x583f0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"ClearGrabbedIfHeld", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.ClearGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)(int32_t)>(&::GlobalNamespace::GamePlayerLocal::ClearGrabbed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x583e848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"ClearGrabbed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.UpdateStuckState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)()>(&::GlobalNamespace::GamePlayerLocal::UpdateStuckState)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x583f150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"UpdateStuckState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.UpdateHandEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)(::GlobalNamespace::GameEntityManager*, int32_t)>(&::GlobalNamespace::GamePlayerLocal::UpdateHandEmpty)> {
  constexpr static std::size_t size = 0xa80;
  constexpr static std::size_t addrs = 0x583ce1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"UpdateHandEmpty", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.UpdateHandHolding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)(::GlobalNamespace::GameEntityManager*, int32_t)>(&::GlobalNamespace::GamePlayerLocal::UpdateHandHolding)> {
  constexpr static std::size_t size = 0xc88;
  constexpr static std::size_t addrs = 0x583d89c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"UpdateHandHolding", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.GetXRNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRNode (::GlobalNamespace::GamePlayerLocal::*)(int32_t)>(&::GlobalNamespace::GamePlayerLocal::GetXRNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x583cce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"GetXRNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.GetFingerTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::GamePlayerLocal::*)(int32_t)>(&::GlobalNamespace::GamePlayerLocal::GetFingerTransform)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x583f268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"GetFingerTransform", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.GetHandVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GamePlayerLocal::*)(int32_t)>(&::GlobalNamespace::GamePlayerLocal::GetHandVelocity)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5835740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"GetHandVelocity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.GetHandAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GamePlayerLocal::*)(int32_t)>(&::GlobalNamespace::GamePlayerLocal::GetHandAngularVelocity)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5840084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"GetHandAngularVelocity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.GetHandSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GamePlayerLocal::*)(int32_t)>(&::GlobalNamespace::GamePlayerLocal::GetHandSpeed)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5835700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"GetHandSpeed", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.IsHandHolding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::GamePlayerLocal::IsHandHolding)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5840214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"IsHandHolding", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.PlayCatchFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)(bool)>(&::GlobalNamespace::GamePlayerLocal::PlayCatchFx)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x584028c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"PlayCatchFx", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.PlayThrowFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)(bool)>(&::GlobalNamespace::GamePlayerLocal::PlayThrowFx)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5840384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"PlayThrowFx", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.ClearTriggerInteractables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)(int32_t)>(&::GlobalNamespace::GamePlayerLocal::ClearTriggerInteractables)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x583f408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"ClearTriggerInteractables", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.SetSlotRecoveryData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int64_t)>(&::GlobalNamespace::GamePlayerLocal::SetSlotRecoveryData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5840498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"SetSlotRecoveryData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.SetGrabSlotRecoveryData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int64_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::GamePlayerLocal::SetGrabSlotRecoveryData)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x584053c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"SetGrabSlotRecoveryData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.SaveSnapSlotsRateLimited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GamePlayerLocal::SaveSnapSlotsRateLimited)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x583fcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"SaveSnapSlotsRateLimited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.IDelayedExecListener_OnDelayedAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)(int32_t)>(&::GlobalNamespace::GamePlayerLocal::IDelayedExecListener_OnDelayedAction)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5840680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal._SaveSnapSlotsImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GamePlayerLocal::_SaveSnapSlotsImmediately)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x58406d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"_SaveSnapSlotsImmediately", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal._LoadSnappedPlayerPrefsToCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::GamePlayer*)>(&::GlobalNamespace::GamePlayerLocal::_LoadSnappedPlayerPrefsToCache)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5840b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"_LoadSnappedPlayerPrefsToCache", {}, {::i2c::type_of<::GlobalNamespace::GamePlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal._SnapSlotsSave_GetHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::GlobalNamespace::GamePlayerLocal_SlotRecoveryData>)>(&::GlobalNamespace::GamePlayerLocal::_SnapSlotsSave_GetHash)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5840dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"_SnapSlotsSave_GetHash", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::GamePlayerLocal_SlotRecoveryData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal.TryGetMigrationRecoveryList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::GameEntityManager*, ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*>)>(&::GlobalNamespace::GamePlayerLocal::TryGetMigrationRecoveryList)> {
  constexpr static std::size_t size = 0x6dc;
  constexpr static std::size_t addrs = 0x583e8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"TryGetMigrationRecoveryList", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal::*)()>(&::GlobalNamespace::GamePlayerLocal::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5840f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GamePlayer>& GlobalNamespace::GamePlayerLocal::__cordl_internal_get_gamePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamePlayer;
}
constexpr ::UnityW<::GlobalNamespace::GamePlayer> const& GlobalNamespace::GamePlayerLocal::__cordl_internal_get_gamePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gamePlayer;
}
constexpr void GlobalNamespace::GamePlayerLocal::__cordl_internal_set_gamePlayer(::UnityW<::GlobalNamespace::GamePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gamePlayer = value;
}
constexpr ::ArrayW<::GlobalNamespace::GamePlayerLocal_HandData>& GlobalNamespace::GamePlayerLocal::__cordl_internal_get_hands()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hands;
}
constexpr ::ArrayW<::GlobalNamespace::GamePlayerLocal_HandData> const& GlobalNamespace::GamePlayerLocal::__cordl_internal_get_hands() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hands;
}
constexpr void GlobalNamespace::GamePlayerLocal::__cordl_internal_set_hands(::ArrayW<::GlobalNamespace::GamePlayerLocal_HandData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hands = value;
}
constexpr ::ArrayW<::GlobalNamespace::GamePlayerLocal_InputData*>& GlobalNamespace::GamePlayerLocal::__cordl_internal_get_inputData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputData;
}
constexpr ::ArrayW<::GlobalNamespace::GamePlayerLocal_InputData*> const& GlobalNamespace::GamePlayerLocal::__cordl_internal_get_inputData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputData;
}
constexpr void GlobalNamespace::GamePlayerLocal::__cordl_internal_set_inputData(::ArrayW<::GlobalNamespace::GamePlayerLocal_InputData*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputData = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& GlobalNamespace::GamePlayerLocal::__cordl_internal_get_currGameEntityManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currGameEntityManager;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& GlobalNamespace::GamePlayerLocal::__cordl_internal_get_currGameEntityManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currGameEntityManager;
}
constexpr void GlobalNamespace::GamePlayerLocal::__cordl_internal_set_currGameEntityManager(::UnityW<::GlobalNamespace::GameEntityManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currGameEntityManager = value;
}
constexpr bool& GlobalNamespace::GamePlayerLocal::__cordl_internal_get_joinWithItemsSentForCurrentMigration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinWithItemsSentForCurrentMigration;
}
constexpr bool const& GlobalNamespace::GamePlayerLocal::__cordl_internal_get_joinWithItemsSentForCurrentMigration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___joinWithItemsSentForCurrentMigration;
}
constexpr void GlobalNamespace::GamePlayerLocal::__cordl_internal_set_joinWithItemsSentForCurrentMigration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___joinWithItemsSentForCurrentMigration = value;
}
constexpr bool& GlobalNamespace::GamePlayerLocal::__cordl_internal_get_pendingFullMigration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingFullMigration;
}
constexpr bool const& GlobalNamespace::GamePlayerLocal::__cordl_internal_get_pendingFullMigration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pendingFullMigration;
}
constexpr void GlobalNamespace::GamePlayerLocal::__cordl_internal_set_pendingFullMigration(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pendingFullMigration = value;
}
inline void GlobalNamespace::GamePlayerLocal::setStaticF_snapSlotsSave_isQueued(bool  value)  {
::cordl_internals::setStaticField<bool, "snapSlotsSave_isQueued", ::GlobalNamespace::GamePlayerLocal*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GamePlayerLocal::getStaticF_snapSlotsSave_isQueued()  {
return ::cordl_internals::getStaticField<bool, "snapSlotsSave_isQueued", ::GlobalNamespace::GamePlayerLocal*>();
}
inline void GlobalNamespace::GamePlayerLocal::setStaticF_snapSlotsSave_lastSavedHash(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "snapSlotsSave_lastSavedHash", ::GlobalNamespace::GamePlayerLocal*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GamePlayerLocal::getStaticF_snapSlotsSave_lastSavedHash()  {
return ::cordl_internals::getStaticField<int32_t, "snapSlotsSave_lastSavedHash", ::GlobalNamespace::GamePlayerLocal*>();
}
inline void GlobalNamespace::GamePlayerLocal::setStaticF_snapSlotsSave_frameWhenQueued(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "snapSlotsSave_frameWhenQueued", ::GlobalNamespace::GamePlayerLocal*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::GamePlayerLocal::getStaticF_snapSlotsSave_frameWhenQueued()  {
return ::cordl_internals::getStaticField<int32_t, "snapSlotsSave_frameWhenQueued", ::GlobalNamespace::GamePlayerLocal*>();
}
inline void GlobalNamespace::GamePlayerLocal::setStaticF_snapSlotsSave_lastTime(float_t  value)  {
::cordl_internals::setStaticField<float_t, "snapSlotsSave_lastTime", ::GlobalNamespace::GamePlayerLocal*>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::GamePlayerLocal::getStaticF_snapSlotsSave_lastTime()  {
return ::cordl_internals::getStaticField<float_t, "snapSlotsSave_lastTime", ::GlobalNamespace::GamePlayerLocal*>();
}
inline void GlobalNamespace::GamePlayerLocal::setStaticF_slotsRecoveryData(::ArrayW<::GlobalNamespace::GamePlayerLocal_SlotRecoveryData>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::GamePlayerLocal_SlotRecoveryData>, "slotsRecoveryData", ::GlobalNamespace::GamePlayerLocal*>(std::forward<::ArrayW<::GlobalNamespace::GamePlayerLocal_SlotRecoveryData>>(value));
}
inline ::ArrayW<::GlobalNamespace::GamePlayerLocal_SlotRecoveryData> GlobalNamespace::GamePlayerLocal::getStaticF_slotsRecoveryData()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::GamePlayerLocal_SlotRecoveryData>, "slotsRecoveryData", ::GlobalNamespace::GamePlayerLocal*>();
}
inline void GlobalNamespace::GamePlayerLocal::setStaticF_grabSlotsExtraRecoveryData(::ArrayW<::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData>, "grabSlotsExtraRecoveryData", ::GlobalNamespace::GamePlayerLocal*>(std::forward<::ArrayW<::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData>>(value));
}
inline ::ArrayW<::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData> GlobalNamespace::GamePlayerLocal::getStaticF_grabSlotsExtraRecoveryData()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::GamePlayerLocal_GrabSlotExtraRecoveryData>, "grabSlotsExtraRecoveryData", ::GlobalNamespace::GamePlayerLocal*>();
}
inline void GlobalNamespace::GamePlayerLocal::setStaticF_instance(::UnityW<::GlobalNamespace::GamePlayerLocal>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GamePlayerLocal>, "instance", ::GlobalNamespace::GamePlayerLocal*>(std::forward<::UnityW<::GlobalNamespace::GamePlayerLocal>>(value));
}
inline ::UnityW<::GlobalNamespace::GamePlayerLocal> GlobalNamespace::GamePlayerLocal::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GamePlayerLocal>, "instance", ::GlobalNamespace::GamePlayerLocal*>();
}
inline void GlobalNamespace::GamePlayerLocal::setStaticF__migrationRecoveryList(::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*, "_migrationRecoveryList", ::GlobalNamespace::GamePlayerLocal*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>* GlobalNamespace::GamePlayerLocal::getStaticF__migrationRecoveryList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*, "_migrationRecoveryList", ::GlobalNamespace::GamePlayerLocal*>();
}
inline void GlobalNamespace::GamePlayerLocal::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayerLocal::OnJoinRoom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"OnJoinRoom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayerLocal::OnUpdateInteract()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"OnUpdateInteract", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayerLocal::DebugSlotsReport(::StringW  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"DebugSlotsReport", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header);
}
inline void GlobalNamespace::GamePlayerLocal::UpdateInput(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"UpdateInput", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex);
}
inline void GlobalNamespace::GamePlayerLocal::UpdateHand(::GlobalNamespace::GameEntityManager*  emptyHandManager, int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"UpdateHand", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emptyHandManager, handIndex);
}
inline void GlobalNamespace::GamePlayerLocal::MigrateToEntityManager(::GlobalNamespace::GameEntityManager*  newEntityManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"MigrateToEntityManager", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newEntityManager);
}
inline void GlobalNamespace::GamePlayerLocal::SetGrabbed(::GlobalNamespace::GameEntityId  gameBallId, int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"SetGrabbed", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, handIndex);
}
inline void GlobalNamespace::GamePlayerLocal::ClearGrabbedIfHeld(::GlobalNamespace::GameEntityId  gameBallId, ::GlobalNamespace::GameEntityManager*  manager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"ClearGrabbedIfHeld", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameBallId, manager);
}
inline void GlobalNamespace::GamePlayerLocal::ClearGrabbed(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"ClearGrabbed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex);
}
inline void GlobalNamespace::GamePlayerLocal::UpdateStuckState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"UpdateStuckState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GamePlayerLocal::UpdateHandEmpty(::GlobalNamespace::GameEntityManager*  gameEntityManager, int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"UpdateHandEmpty", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntityManager, handIndex);
}
inline void GlobalNamespace::GamePlayerLocal::UpdateHandHolding(::GlobalNamespace::GameEntityManager*  gameEntityManager, int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"UpdateHandHolding", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameEntityManager, handIndex);
}
inline ::UnityEngine::XR::XRNode GlobalNamespace::GamePlayerLocal::GetXRNode(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"GetXRNode", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRNode>(this, ___internal_method, handIndex);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::GamePlayerLocal::GetFingerTransform(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"GetFingerTransform", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, handIndex);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GamePlayerLocal::GetHandVelocity(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"GetHandVelocity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, handIndex);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GamePlayerLocal::GetHandAngularVelocity(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"GetHandAngularVelocity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, handIndex);
}
inline float_t GlobalNamespace::GamePlayerLocal::GetHandSpeed(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"GetHandSpeed", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, handIndex);
}
inline bool GlobalNamespace::GamePlayerLocal::IsHandHolding(::UnityEngine::XR::XRNode  xrNode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"IsHandHolding", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, xrNode);
}
inline void GlobalNamespace::GamePlayerLocal::PlayCatchFx(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"PlayCatchFx", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::GamePlayerLocal::PlayThrowFx(bool  isLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"PlayThrowFx", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::GamePlayerLocal::ClearTriggerInteractables(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"ClearTriggerInteractables", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex);
}
inline void GlobalNamespace::GamePlayerLocal::SetSlotRecoveryData(int32_t  slot, int32_t  typeId, int64_t  createData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"SetSlotRecoveryData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, slot, typeId, createData);
}
inline void GlobalNamespace::GamePlayerLocal::SetGrabSlotRecoveryData(int32_t  slot, int32_t  typeId, int64_t  createData, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"SetGrabSlotRecoveryData", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, slot, typeId, createData, pos, rot);
}
inline void GlobalNamespace::GamePlayerLocal::SaveSnapSlotsRateLimited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"SaveSnapSlotsRateLimited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GamePlayerLocal::IDelayedExecListener_OnDelayedAction(int32_t  contextId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"IDelayedExecListener.OnDelayedAction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contextId);
}
inline void GlobalNamespace::GamePlayerLocal::_SaveSnapSlotsImmediately()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"_SaveSnapSlotsImmediately", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GamePlayerLocal::_LoadSnappedPlayerPrefsToCache(::GlobalNamespace::GamePlayer*  gamePlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"_LoadSnappedPlayerPrefsToCache", {}, {::i2c::type_of<::GlobalNamespace::GamePlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gamePlayer);
}
inline int32_t GlobalNamespace::GamePlayerLocal::_SnapSlotsSave_GetHash(::ArrayW<::GlobalNamespace::GamePlayerLocal_SlotRecoveryData>  slotsCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"_SnapSlotsSave_GetHash", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::GamePlayerLocal_SlotRecoveryData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, slotsCache);
}
inline bool GlobalNamespace::GamePlayerLocal::TryGetMigrationRecoveryList(::GlobalNamespace::GameEntityManager*  newEntityManager, ::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*>  out_recoveryList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {"TryGetMigrationRecoveryList", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::GlobalNamespace::GameEntityCreateData>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, newEntityManager, out_recoveryList);
}
inline void GlobalNamespace::GamePlayerLocal::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GamePlayerLocal* GlobalNamespace::GamePlayerLocal::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GamePlayerLocal*>());
}
/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr  GlobalNamespace::GamePlayerLocal::operator ::GlobalNamespace::IDelayedExecListener*() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* GlobalNamespace::GamePlayerLocal::i___GlobalNamespace__IDelayedExecListener() noexcept {
return static_cast<::GlobalNamespace::IDelayedExecListener*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GamePlayerLocal::GamePlayerLocal()   {
}
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal_InputData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal_InputData::*)(int32_t)>(&::GlobalNamespace::GamePlayerLocal_InputData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x583c31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal_InputData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal_InputData.AddInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GamePlayerLocal_InputData::*)(::GlobalNamespace::GamePlayerLocal_InputDataMotion)>(&::GlobalNamespace::GamePlayerLocal_InputData::AddInput)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x583ccf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal_InputData*>(),
                        {"AddInput", {}, {::i2c::type_of<::GlobalNamespace::GamePlayerLocal_InputDataMotion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal_InputData.GetMaxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::GamePlayerLocal_InputData::*)(float_t, float_t)>(&::GlobalNamespace::GamePlayerLocal_InputData::GetMaxSpeed)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x583fdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal_InputData*>(),
                        {"GetMaxSpeed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GamePlayerLocal_InputData.GetAvgVel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GamePlayerLocal_InputData::*)(float_t, float_t)>(&::GlobalNamespace::GamePlayerLocal_InputData::GetAvgVel)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x583ff04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal_InputData*>(),
                        {"GetAvgVel", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::GamePlayerLocal_InputData::__cordl_internal_get_maxInputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxInputs;
}
constexpr int32_t const& GlobalNamespace::GamePlayerLocal_InputData::__cordl_internal_get_maxInputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxInputs;
}
constexpr void GlobalNamespace::GamePlayerLocal_InputData::__cordl_internal_set_maxInputs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxInputs = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GamePlayerLocal_InputDataMotion>*& GlobalNamespace::GamePlayerLocal_InputData::__cordl_internal_get_inputMotionHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMotionHistory;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GamePlayerLocal_InputDataMotion>* const& GlobalNamespace::GamePlayerLocal_InputData::__cordl_internal_get_inputMotionHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputMotionHistory;
}
constexpr void GlobalNamespace::GamePlayerLocal_InputData::__cordl_internal_set_inputMotionHistory(::System::Collections::Generic::List_1<::GlobalNamespace::GamePlayerLocal_InputDataMotion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputMotionHistory = value;
}
inline void GlobalNamespace::GamePlayerLocal_InputData::_ctor(int32_t  maxInputs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal_InputData*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, maxInputs);
}
inline void GlobalNamespace::GamePlayerLocal_InputData::AddInput(::GlobalNamespace::GamePlayerLocal_InputDataMotion  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal_InputData*>(),
                        {"AddInput", {}, {::i2c::type_of<::GlobalNamespace::GamePlayerLocal_InputDataMotion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline float_t GlobalNamespace::GamePlayerLocal_InputData::GetMaxSpeed(float_t  ignoreRecent, float_t  window)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal_InputData*>(),
                        {"GetMaxSpeed", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, ignoreRecent, window);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GamePlayerLocal_InputData::GetAvgVel(float_t  ignoreRecent, float_t  window)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GamePlayerLocal_InputData*>(),
                        {"GetAvgVel", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, ignoreRecent, window);
}
inline ::GlobalNamespace::GamePlayerLocal_InputData* GlobalNamespace::GamePlayerLocal_InputData::New_ctor(int32_t  maxInputs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GamePlayerLocal_InputData*>(maxInputs));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GamePlayerLocal_InputData::GamePlayerLocal_InputData()   {
}
