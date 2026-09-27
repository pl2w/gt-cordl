#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceInteractor.hpp"
#include "GorillaTagScripts/zzzz__BuilderGridPlaneData_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderPieceData_impl.hpp"
#include "GorillaTagScripts/zzzz__BuilderPotentialPlacement_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeList_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/zzzz__ColliderHit_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__OverlapSphereCommand_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__SpherecastCommand_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceInteractor_def.hpp"
#include "GlobalNamespace/zzzz__BuilderBumpGlow_def.hpp"
#include "GlobalNamespace/zzzz__BuilderLaserSight_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceInteractor_HandState_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceInteractor_HandType_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__EquipmentInteractor_def.hpp"
#include "GlobalNamespace/zzzz__GorillaVelocityEstimator_def.hpp"
#include "GlobalNamespace/zzzz__IHoldableObject_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPotentialPlacement_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)()>(&::GlobalNamespace::BuilderPieceInteractor::Awake)> {
  constexpr static std::size_t size = 0x12cc;
  constexpr static std::size_t addrs = 0x57c7720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.GetIsHolding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderPieceInteractor::*)(::UnityEngine::XR::XRNode)>(&::GlobalNamespace::BuilderPieceInteractor::GetIsHolding)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57c89ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"GetIsHolding", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.PreInteract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)()>(&::GlobalNamespace::BuilderPieceInteractor::PreInteract)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57c8a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"PreInteract", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.StartFindNearbyPieces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)()>(&::GlobalNamespace::BuilderPieceInteractor::StartFindNearbyPieces)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x57c8a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"StartFindNearbyPieces", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.CalcLocalGridPlanes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)()>(&::GlobalNamespace::BuilderPieceInteractor::CalcLocalGridPlanes)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x57c8fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"CalcLocalGridPlanes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)()>(&::GlobalNamespace::BuilderPieceInteractor::OnDestroy)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x57c9488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.BlockSnowballCreation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderPieceInteractor::*)()>(&::GlobalNamespace::BuilderPieceInteractor::BlockSnowballCreation)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x57c9838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"BlockSnowballCreation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.OnLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)()>(&::GlobalNamespace::BuilderPieceInteractor::OnLateUpdate)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x57c9a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"OnLateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.SetHandState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(int32_t, ::GlobalNamespace::BuilderPieceInteractor_HandState)>(&::GlobalNamespace::BuilderPieceInteractor::SetHandState)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x57ccda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"SetHandState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPieceInteractor_HandState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.OnCountChangedForRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderPieceInteractor::OnCountChangedForRoot)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x57cd0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"OnCountChangedForRoot", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.UpdateHandState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(::GlobalNamespace::BuilderPieceInteractor_HandType, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Transform*, bool, bool, ::GlobalNamespace::IHoldableObject*, bool)>(&::GlobalNamespace::BuilderPieceInteractor::UpdateHandState)> {
  constexpr static std::size_t size = 0x2c00;
  constexpr static std::size_t addrs = 0x57ca180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"UpdateHandState", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceInteractor_HandType>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IHoldableObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.ClearGlowBumps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(int32_t)>(&::GlobalNamespace::BuilderPieceInteractor::ClearGlowBumps)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x57cd4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"ClearGlowBumps", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.AddGlowBumps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(int32_t, ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*)>(&::GlobalNamespace::BuilderPieceInteractor::AddGlowBumps)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x57cd6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"AddGlowBumps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.UpdateGlowBumps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(int32_t, float_t)>(&::GlobalNamespace::BuilderPieceInteractor::UpdateGlowBumps)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x57cdf18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"UpdateGlowBumps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.UpdatePullApartOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(int32_t, ::GlobalNamespace::BuilderPiece*, ::UnityEngine::Vector3)>(&::GlobalNamespace::BuilderPieceInteractor::UpdatePullApartOffset)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x57ce0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"UpdatePullApartOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.ClearUnSnapOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(int32_t, ::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderPieceInteractor::ClearUnSnapOffset)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x57cdfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"ClearUnSnapOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.AddPieceToHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(::GlobalNamespace::BuilderPiece*, bool, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::BuilderPieceInteractor::AddPieceToHeld)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x57ce430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"AddPieceToHeld", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.RemovePieceFromHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderPieceInteractor::RemovePieceFromHeld)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x57ce6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"RemovePieceFromHeld", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.AddPieceToHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(::GlobalNamespace::BuilderPiece*, int32_t, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::BuilderPieceInteractor::AddPieceToHand)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x57ce56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"AddPieceToHand", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.RemovePieceFromHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(::GlobalNamespace::BuilderPiece*, int32_t)>(&::GlobalNamespace::BuilderPieceInteractor::RemovePieceFromHand)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x57ce054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"RemovePieceFromHand", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.RemovePiecesFromHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)()>(&::GlobalNamespace::BuilderPieceInteractor::RemovePiecesFromHands)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x57ce7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"RemovePiecesFromHands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.CalcPieceLocalPosAndRot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::GlobalNamespace::BuilderPieceInteractor::CalcPieceLocalPosAndRot)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x57cd31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"CalcPieceLocalPosAndRot", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.DisableCollisionsWithHands
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)()>(&::GlobalNamespace::BuilderPieceInteractor::DisableCollisionsWithHands)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57ce890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"DisableCollisionsWithHands", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.DisableCollisionsWithHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(bool)>(&::GlobalNamespace::BuilderPieceInteractor::DisableCollisionsWithHand)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x57ce8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"DisableCollisionsWithHand", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.UpdatePieceDisables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)()>(&::GlobalNamespace::BuilderPieceInteractor::UpdatePieceDisables)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57ccd80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"UpdatePieceDisables", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor.UpdatePieceDisablesForHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)(bool)>(&::GlobalNamespace::BuilderPieceInteractor::UpdatePieceDisablesForHand)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x57cec78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"UpdatePieceDisablesForHand", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPieceInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPieceInteractor::*)()>(&::GlobalNamespace::BuilderPieceInteractor::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x57cef78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor>& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_equipmentInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equipmentInteractor;
}
constexpr ::UnityW<::GlobalNamespace::EquipmentInteractor> const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_equipmentInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___equipmentInteractor;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_equipmentInteractor(::UnityW<::GlobalNamespace::EquipmentInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___equipmentInteractor = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_velocityEstimatorLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimatorLeft;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_velocityEstimatorLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimatorLeft;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_velocityEstimatorLeft(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimatorLeft = value;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_velocityEstimatorRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimatorRight;
}
constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_velocityEstimatorRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimatorRight;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_velocityEstimatorRight(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimatorRight = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderLaserSight>& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_laserSightLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserSightLeft;
}
constexpr ::UnityW<::GlobalNamespace::BuilderLaserSight> const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_laserSightLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserSightLeft;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_laserSightLeft(::UnityW<::GlobalNamespace::BuilderLaserSight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___laserSightLeft = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderLaserSight>& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_laserSightRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserSightRight;
}
constexpr ::UnityW<::GlobalNamespace::BuilderLaserSight> const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_laserSightRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserSightRight;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_laserSightRight(::UnityW<::GlobalNamespace::BuilderLaserSight>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___laserSightRight = value;
}
constexpr int32_t& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_maxHoldablePieceStackCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHoldablePieceStackCount;
}
constexpr int32_t const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_maxHoldablePieceStackCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxHoldablePieceStackCount;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_maxHoldablePieceStackCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxHoldablePieceStackCount = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaVelocityEstimator>>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_velocityEstimator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaVelocityEstimator>>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_velocityEstimator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityEstimator;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_velocityEstimator(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaVelocityEstimator>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityEstimator = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceInteractor_HandState>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_handState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handState;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceInteractor_HandState>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_handState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handState;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_handState(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderPieceInteractor_HandState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handState = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldPiece;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldPiece;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_heldPiece(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldPiece = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_potentialHeldPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialHeldPiece;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_potentialHeldPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialHeldPiece;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_potentialHeldPiece(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___potentialHeldPiece = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_potentialGrabbedOffsetDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialGrabbedOffsetDist;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_potentialGrabbedOffsetDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialGrabbedOffsetDist;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_potentialGrabbedOffsetDist(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___potentialGrabbedOffsetDist = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldInitialRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldInitialRot;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldInitialRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldInitialRot;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_heldInitialRot(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldInitialRot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldCurrentRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldCurrentRot;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldCurrentRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldCurrentRot;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_heldCurrentRot(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldCurrentRot = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldInitialPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldInitialPos;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldInitialPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldInitialPos;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_heldInitialPos(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldInitialPos = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldCurrentPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldCurrentPos;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldCurrentPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldCurrentPos;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_heldCurrentPos(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldCurrentPos = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_delayedPotentialPlacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedPotentialPlacement;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_delayedPotentialPlacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedPotentialPlacement;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_delayedPotentialPlacement(::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayedPotentialPlacement = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_delayedPlacementTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedPlacementTime;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_delayedPlacementTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayedPlacementTime;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_delayedPlacementTime(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayedPlacementTime = value;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_prevPotentialPlacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPotentialPlacement;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_prevPotentialPlacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPotentialPlacement;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_prevPotentialPlacement(::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevPotentialPlacement = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderLaserSight>>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_laserSight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserSight;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderLaserSight>>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_laserSight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___laserSight;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_laserSight(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderLaserSight>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___laserSight = value;
}
constexpr ::ArrayW<int32_t>& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldChainLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldChainLength;
}
constexpr ::ArrayW<int32_t> const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldChainLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldChainLength;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_heldChainLength(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldChainLength = value;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<int32_t>>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldChainCost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldChainCost;
}
constexpr ::System::Collections::Generic::List_1<::ArrayW<int32_t>>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_heldChainCost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldChainCost;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_heldChainCost(::System::Collections::Generic::List_1<::ArrayW<int32_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldChainCost = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_findNearbyJobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___findNearbyJobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_findNearbyJobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___findNearbyJobHandle;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_findNearbyJobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___findNearbyJobHandle = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_collisionDisabledPiecesLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionDisabledPiecesLeft;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_collisionDisabledPiecesLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionDisabledPiecesLeft;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_collisionDisabledPiecesLeft(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionDisabledPiecesLeft = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_collisionDisabledPiecesRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionDisabledPiecesRight;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_collisionDisabledPiecesRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionDisabledPiecesRight;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_collisionDisabledPiecesRight(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionDisabledPiecesRight = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_checkPiecesInSphere()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkPiecesInSphere;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand> const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_checkPiecesInSphere() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkPiecesInSphere;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_checkPiecesInSphere(::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkPiecesInSphere = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_checkPiecesInSphereResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkPiecesInSphereResults;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit> const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_checkPiecesInSphereResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkPiecesInSphereResults;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_checkPiecesInSphereResults(::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkPiecesInSphereResults = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_checkNearbyPiecesHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkNearbyPiecesHandle;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_checkNearbyPiecesHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkNearbyPiecesHandle;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_checkNearbyPiecesHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkNearbyPiecesHandle = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::SpherecastCommand>& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_grabSphereCast()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabSphereCast;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::SpherecastCommand> const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_grabSphereCast() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabSphereCast;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_grabSphereCast(::Unity::Collections::NativeArray_1<::UnityEngine::SpherecastCommand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabSphereCast = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_grabSphereCastResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabSphereCastResults;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit> const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_grabSphereCastResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabSphereCastResults;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_grabSphereCastResults(::Unity::Collections::NativeArray_1<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabSphereCastResults = value;
}
constexpr ::Unity::Jobs::JobHandle& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_findPiecesToGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___findPiecesToGrab;
}
constexpr ::Unity::Jobs::JobHandle const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_findPiecesToGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___findPiecesToGrab;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_findPiecesToGrab(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___findPiecesToGrab = value;
}
constexpr ::UnityEngine::RaycastHit& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_emptyRaycastHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyRaycastHit;
}
constexpr ::UnityEngine::RaycastHit const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_emptyRaycastHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyRaycastHit;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_emptyRaycastHit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyRaycastHit = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderBumpGlow>& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_glowBumpPrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glowBumpPrefab;
}
constexpr ::UnityW<::GlobalNamespace::BuilderBumpGlow> const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_glowBumpPrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glowBumpPrefab;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_glowBumpPrefab(::UnityW<::GlobalNamespace::BuilderBumpGlow>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___glowBumpPrefab = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*>*& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_glowBumps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glowBumps;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*>* const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_glowBumps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___glowBumps;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_glowBumps(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderBumpGlow>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___glowBumps = value;
}
constexpr bool& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_isRigSmall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRigSmall;
}
constexpr bool const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_isRigSmall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRigSmall;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_isRigSmall(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRigSmall = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_currentTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTable;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& GlobalNamespace::BuilderPieceInteractor::__cordl_internal_get_currentTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentTable;
}
constexpr void GlobalNamespace::BuilderPieceInteractor::__cordl_internal_set_currentTable(::UnityW<::GorillaTagScripts::BuilderTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentTable = value;
}
inline void GlobalNamespace::BuilderPieceInteractor::setStaticF_instance(::UnityW<::GlobalNamespace::BuilderPieceInteractor>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::BuilderPieceInteractor>, "instance", ::GlobalNamespace::BuilderPieceInteractor*>(std::forward<::UnityW<::GlobalNamespace::BuilderPieceInteractor>>(value));
}
inline ::UnityW<::GlobalNamespace::BuilderPieceInteractor> GlobalNamespace::BuilderPieceInteractor::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::BuilderPieceInteractor>, "instance", ::GlobalNamespace::BuilderPieceInteractor*>();
}
inline void GlobalNamespace::BuilderPieceInteractor::setStaticF_hasInstance(bool  value)  {
::cordl_internals::setStaticField<bool, "hasInstance", ::GlobalNamespace::BuilderPieceInteractor*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::BuilderPieceInteractor::getStaticF_hasInstance()  {
return ::cordl_internals::getStaticField<bool, "hasInstance", ::GlobalNamespace::BuilderPieceInteractor*>();
}
inline void GlobalNamespace::BuilderPieceInteractor::setStaticF_allPotentialPlacements(::ArrayW<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*>, "allPotentialPlacements", ::GlobalNamespace::BuilderPieceInteractor*>(std::forward<::ArrayW<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*>>(value));
}
inline ::ArrayW<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*> GlobalNamespace::BuilderPieceInteractor::getStaticF_allPotentialPlacements()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*>, "allPotentialPlacements", ::GlobalNamespace::BuilderPieceInteractor*>();
}
inline void GlobalNamespace::BuilderPieceInteractor::setStaticF_handGridPlaneData(::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>, "handGridPlaneData", ::GlobalNamespace::BuilderPieceInteractor*>(std::forward<::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>>(value));
}
inline ::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>> GlobalNamespace::BuilderPieceInteractor::getStaticF_handGridPlaneData()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>, "handGridPlaneData", ::GlobalNamespace::BuilderPieceInteractor*>();
}
inline void GlobalNamespace::BuilderPieceInteractor::setStaticF_handPieceData(::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>, "handPieceData", ::GlobalNamespace::BuilderPieceInteractor*>(std::forward<::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>>(value));
}
inline ::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>> GlobalNamespace::BuilderPieceInteractor::getStaticF_handPieceData()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>, "handPieceData", ::GlobalNamespace::BuilderPieceInteractor*>();
}
inline void GlobalNamespace::BuilderPieceInteractor::setStaticF_localAttachableGridPlaneData(::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>, "localAttachableGridPlaneData", ::GlobalNamespace::BuilderPieceInteractor*>(std::forward<::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>>(value));
}
inline ::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>> GlobalNamespace::BuilderPieceInteractor::getStaticF_localAttachableGridPlaneData()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>>, "localAttachableGridPlaneData", ::GlobalNamespace::BuilderPieceInteractor*>();
}
inline void GlobalNamespace::BuilderPieceInteractor::setStaticF_localAttachablePieceData(::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>, "localAttachablePieceData", ::GlobalNamespace::BuilderPieceInteractor*>(std::forward<::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>>(value));
}
inline ::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>> GlobalNamespace::BuilderPieceInteractor::getStaticF_localAttachablePieceData()  {
return ::cordl_internals::getStaticField<::ArrayW<::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>>, "localAttachablePieceData", ::GlobalNamespace::BuilderPieceInteractor*>();
}
inline void GlobalNamespace::BuilderPieceInteractor::setStaticF_tempPieceSet(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "tempPieceSet", ::GlobalNamespace::BuilderPieceInteractor*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>* GlobalNamespace::BuilderPieceInteractor::getStaticF_tempPieceSet()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>*, "tempPieceSet", ::GlobalNamespace::BuilderPieceInteractor*>();
}
inline void GlobalNamespace::BuilderPieceInteractor::setStaticF_tempHitResults(::ArrayW<::UnityEngine::RaycastHit>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::RaycastHit>, "tempHitResults", ::GlobalNamespace::BuilderPieceInteractor*>(std::forward<::ArrayW<::UnityEngine::RaycastHit>>(value));
}
inline ::ArrayW<::UnityEngine::RaycastHit> GlobalNamespace::BuilderPieceInteractor::getStaticF_tempHitResults()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::RaycastHit>, "tempHitResults", ::GlobalNamespace::BuilderPieceInteractor*>();
}
inline void GlobalNamespace::BuilderPieceInteractor::setStaticF_tempDisableColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "tempDisableColliders", ::GlobalNamespace::BuilderPieceInteractor*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Collider>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> GlobalNamespace::BuilderPieceInteractor::getStaticF_tempDisableColliders()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Collider>>, "tempDisableColliders", ::GlobalNamespace::BuilderPieceInteractor*>();
}
inline void GlobalNamespace::BuilderPieceInteractor::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderPieceInteractor::GetIsHolding(::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"GetIsHolding", {}, {::i2c::type_of<::UnityEngine::XR::XRNode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline void GlobalNamespace::BuilderPieceInteractor::PreInteract()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"PreInteract", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceInteractor::StartFindNearbyPieces()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"StartFindNearbyPieces", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceInteractor::CalcLocalGridPlanes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"CalcLocalGridPlanes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceInteractor::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderPieceInteractor::BlockSnowballCreation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"BlockSnowballCreation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceInteractor::OnLateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"OnLateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceInteractor::SetHandState(int32_t  handIndex, ::GlobalNamespace::BuilderPieceInteractor_HandState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"SetHandState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPieceInteractor_HandState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex, newState);
}
inline void GlobalNamespace::BuilderPieceInteractor::OnCountChangedForRoot(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"OnCountChangedForRoot", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GlobalNamespace::BuilderPieceInteractor::UpdateHandState(::GlobalNamespace::BuilderPieceInteractor_HandType  handType, ::UnityEngine::Transform*  handTransform, ::UnityEngine::Vector3  palmForwardLocal, ::UnityEngine::Transform*  handAttachPoint, bool  isGrabbing, bool  wasGrabPressed, ::GlobalNamespace::IHoldableObject*  heldEquipment, bool  grabDisabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"UpdateHandState", {}, {::i2c::type_of<::GlobalNamespace::BuilderPieceInteractor_HandType>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IHoldableObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handType, handTransform, palmForwardLocal, handAttachPoint, isGrabbing, wasGrabPressed, heldEquipment, grabDisabled);
}
inline void GlobalNamespace::BuilderPieceInteractor::ClearGlowBumps(int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"ClearGlowBumps", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex);
}
inline void GlobalNamespace::BuilderPieceInteractor::AddGlowBumps(int32_t  handIndex, ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  allPotentialPlacements)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"AddGlowBumps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex, allPotentialPlacements);
}
inline void GlobalNamespace::BuilderPieceInteractor::UpdateGlowBumps(int32_t  handIndex, float_t  intensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"UpdateGlowBumps", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex, intensity);
}
inline void GlobalNamespace::BuilderPieceInteractor::UpdatePullApartOffset(int32_t  handIndex, ::GlobalNamespace::BuilderPiece*  potentialGrabPiece, ::UnityEngine::Vector3  pullApartDiff)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"UpdatePullApartOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex, potentialGrabPiece, pullApartDiff);
}
inline void GlobalNamespace::BuilderPieceInteractor::ClearUnSnapOffset(int32_t  handIndex, ::GlobalNamespace::BuilderPiece*  potentialGrabPiece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"ClearUnSnapOffset", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handIndex, potentialGrabPiece);
}
inline void GlobalNamespace::BuilderPieceInteractor::AddPieceToHeld(::GlobalNamespace::BuilderPiece*  piece, bool  isLeft, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"AddPieceToHeld", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, isLeft, localPosition, localRotation);
}
inline void GlobalNamespace::BuilderPieceInteractor::RemovePieceFromHeld(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"RemovePieceFromHeld", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GlobalNamespace::BuilderPieceInteractor::AddPieceToHand(::GlobalNamespace::BuilderPiece*  piece, int32_t  handIndex, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"AddPieceToHand", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, handIndex, localPosition, localRotation);
}
inline void GlobalNamespace::BuilderPieceInteractor::RemovePieceFromHand(::GlobalNamespace::BuilderPiece*  piece, int32_t  handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"RemovePieceFromHand", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece, handIndex);
}
inline void GlobalNamespace::BuilderPieceInteractor::RemovePiecesFromHands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"RemovePiecesFromHands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceInteractor::CalcPieceLocalPosAndRot(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Quaternion  worldRotation, ::UnityEngine::Transform*  attachPoint, ::by_ref<::UnityEngine::Vector3>  localPosition, ::by_ref<::UnityEngine::Quaternion>  localRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"CalcPieceLocalPosAndRot", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldPosition, worldRotation, attachPoint, localPosition, localRotation);
}
inline void GlobalNamespace::BuilderPieceInteractor::DisableCollisionsWithHands()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"DisableCollisionsWithHands", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceInteractor::DisableCollisionsWithHand(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"DisableCollisionsWithHand", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand);
}
inline void GlobalNamespace::BuilderPieceInteractor::UpdatePieceDisables()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"UpdatePieceDisables", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPieceInteractor::UpdatePieceDisablesForHand(bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {"UpdatePieceDisablesForHand", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHand);
}
inline void GlobalNamespace::BuilderPieceInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPieceInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderPieceInteractor* GlobalNamespace::BuilderPieceInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPieceInteractor*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPieceInteractor::BuilderPieceInteractor()   {
}
