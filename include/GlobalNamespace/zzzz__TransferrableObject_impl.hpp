#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableObject.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_DropPositions_impl.hpp"
#include "GlobalNamespace/zzzz__HoldableObject_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_GrabType_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_InterpolateState_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_SyncOptions_impl.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__AdvancedItemState_def.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_DropPositions_def.hpp"
#include "GlobalNamespace/zzzz__BodyDockPositions_def.hpp"
#include "GlobalNamespace/zzzz__DropZone_def.hpp"
#include "GlobalNamespace/zzzz__IBuildValidation_def.hpp"
#include "GlobalNamespace/zzzz__IPreDisable_def.hpp"
#include "GlobalNamespace/zzzz__IRequestableOwnershipGuardCallbacks_def.hpp"
#include "GlobalNamespace/zzzz__InteractionPoint_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableItemSlotTransformOverride_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_GrabType_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_InterpolateState_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_ItemStates_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_PositionState_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_SyncOptions_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GlobalNamespace/zzzz__VRRigAnchorOverrides_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GlobalNamespace/zzzz__WorldShareableItem_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "GorillaTag/zzzz__ISpawnable_def.hpp"
#include "Sirenix/OdinInspector/zzzz__ISelfValidator_def.hpp"
#include "Sirenix/OdinInspector/zzzz__SelfValidationResult_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.FixTransformOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::FixTransformOverride)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x576b55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"FixTransformOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(::Sirenix::OdinInspector::SelfValidationResult*)>(&::GlobalNamespace::TransferrableObject::Validate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x576b5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"Validate", {}, {::i2c::type_of<::Sirenix::OdinInspector::SelfValidationResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.get_myRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::get_myRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_myRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.set_myRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::TransferrableObject::set_myRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_myRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.get_isMyRigValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::get_isMyRigValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_isMyRigValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.set_isMyRigValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(bool)>(&::GlobalNamespace::TransferrableObject::set_isMyRigValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_isMyRigValid", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.get_myOnlineRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRRig> (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::get_myOnlineRig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_myOnlineRig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.set_myOnlineRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::TransferrableObject::set_myOnlineRig)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x576b5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_myOnlineRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.get_isMyOnlineRigValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::get_isMyOnlineRigValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_isMyOnlineRigValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.set_isMyOnlineRigValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(bool)>(&::GlobalNamespace::TransferrableObject::set_isMyOnlineRigValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576b60c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_isMyOnlineRigValid", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.SetTargetRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::TransferrableObject::SetTargetRig)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x576b614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetTargetRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.get_IsLocalOwnedWorldShareable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::get_IsLocalOwnedWorldShareable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x576b8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_IsLocalOwnedWorldShareable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.WorldShareableRequestOwnership
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::WorldShareableRequestOwnership)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x576b92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"WorldShareableRequestOwnership", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.get_isRigidbodySet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::get_isRigidbodySet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576ba8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_isRigidbodySet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.set_isRigidbodySet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(bool)>(&::GlobalNamespace::TransferrableObject::set_isRigidbodySet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576ba94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_isRigidbodySet", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.get_shouldUseGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::get_shouldUseGravity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576ba9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_shouldUseGravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.set_shouldUseGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(bool)>(&::GlobalNamespace::TransferrableObject::set_shouldUseGravity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576baa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_shouldUseGravity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::Awake)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57616c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.get_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::get_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576baac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.set_IsSpawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(bool)>(&::GlobalNamespace::TransferrableObject::set_IsSpawned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576bab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.get_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GorillaTag::CosmeticSystem::ECosmeticSelectSide (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::get_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576babc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.set_CosmeticSelectedSide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(::GorillaTag::CosmeticSystem::ECosmeticSelectSide)>(&::GlobalNamespace::TransferrableObject::set_CosmeticSelectedSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576bac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::TransferrableObject::OnSpawn)> {
  constexpr static std::size_t size = 0x74c;
  constexpr static std::size_t addrs = 0x57617f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnDespawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnDespawn)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x576c038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.SetInitMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::SetInitMatrix)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x576bacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetInitMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x576c300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnEnable)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x576c304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnEnable_AfterAllCosmeticsSpawnedOrIsSceneObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnEnable_AfterAllCosmeticsSpawnedOrIsSceneObject)> {
  constexpr static std::size_t size = 0x91c;
  constexpr static std::size_t addrs = 0x576c5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnDisable)> {
  constexpr static std::size_t size = 0x5a0;
  constexpr static std::size_t addrs = 0x576d2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnDestroy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x576d940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.CleanupDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::CleanupDisable)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x576d994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"CleanupDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.PreDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::PreDisable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x576daf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.GetDefaultTransformationMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::GetDefaultTransformationMatrix)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x576db24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ShouldBeKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::ShouldBeKinematic)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5763874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.SpawnShareableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::SpawnShareableObject)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x576db58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SpawnShareableObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.SpawnTransferableObjectViews
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::SpawnTransferableObjectViews)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x576d0e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SpawnTransferableObjectViews", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnJoinedRoom)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x576dd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnLeftRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnLeftRoom)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x576dea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.IsLocalObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::IsLocalObject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x576d038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"IsLocalObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.SetWorldShareableItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::WorldShareableItem*)>(&::GlobalNamespace::TransferrableObject::SetWorldShareableItem)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x576e0ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetWorldShareableItem", {}, {::i2c::type_of<::GlobalNamespace::WorldShareableItem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnWorldShareableItemSpawn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnWorldShareableItemSpawn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x576e118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.PlayDestroyedOrDisabledEffect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::PlayDestroyedOrDisabledEffect)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x576e11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnItemDestroyedOrDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnItemDestroyedOrDisabled)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x576e120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.TriggeredLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::TriggeredLateUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5765e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.DefaultAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::DefaultAnchor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x576e27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"DefaultAnchor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.GetAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::TransferrableObject_PositionState)>(&::GlobalNamespace::TransferrableObject::GetAnchor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x576d058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"GetAnchor", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.Attached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::Attached)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x576e330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"Attached", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.GetTargetStorageZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::BodyDockPositions_DropPositions)>(&::GlobalNamespace::TransferrableObject::GetTargetStorageZone)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x576e374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"GetTargetStorageZone", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.GetTargetDock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::GlobalNamespace::TransferrableObject_PositionState, ::GlobalNamespace::VRRig*)>(&::GlobalNamespace::TransferrableObject::GetTargetDock)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x576e444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"GetTargetDock", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.GetTargetDock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::GlobalNamespace::TransferrableObject_PositionState, ::GlobalNamespace::BodyDockPositions*, ::GlobalNamespace::VRRigAnchorOverrides*)>(&::GlobalNamespace::TransferrableObject::GetTargetDock)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x576e4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"GetTargetDock", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions*>(), ::i2c::type_of<::GlobalNamespace::VRRigAnchorOverrides*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.UpdateFollowXform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::UpdateFollowXform)> {
  constexpr static std::size_t size = 0xe08;
  constexpr static std::size_t addrs = 0x576e634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"UpdateFollowXform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.DropItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::DropItem)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x5762648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnStateChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x576f5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.LateUpdateShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::LateUpdateShared)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x5762cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ResetToHome
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::ResetToHome)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x576f6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ResetXf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::ResetXf)> {
  constexpr static std::size_t size = 0x7c0;
  constexpr static std::size_t addrs = 0x576f720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ResetXf", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ReDock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::ReDock)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x576fee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ReDock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.HandleLocalInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::HandleLocalInput)> {
  constexpr static std::size_t size = 0x52c;
  constexpr static std::size_t addrs = 0x576ffac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"HandleLocalInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.LocalMyObjectValidation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::LocalMyObjectValidation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57704d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.LocalPersistanceValidation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::LocalPersistanceValidation)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x57704dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ObjectBeingTaken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::ObjectBeingTaken)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x57707e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ObjectBeingTaken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.LateUpdateLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::LateUpdateLocal)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5762abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.LateUpdateReplicatedSceneObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::LateUpdateReplicatedSceneObject)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5770adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"LateUpdateReplicatedSceneObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.LateUpdateReplicated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::LateUpdateReplicated)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x5770ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ResetToDefaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::ResetToDefaultState)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5771164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::TransferrableObject::OnGrab)> {
  constexpr static std::size_t size = 0x764;
  constexpr static std::size_t addrs = 0x57630d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.SetupMatrixForFreeGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Transform*, bool)>(&::GlobalNamespace::TransferrableObject::SetupMatrixForFreeGrab)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x576f43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetupMatrixForFreeGrab", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.SetupHandMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::GlobalNamespace::TransferrableObject::SetupHandMatrix)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5771340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetupHandMatrix", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnHandMatrixUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool)>(&::GlobalNamespace::TransferrableObject::OnHandMatrixUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x57714b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::DropZone*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::TransferrableObject::OnRelease)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x57714b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.DropItemCleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::DropItemCleanup)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5771834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::InteractionPoint*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::TransferrableObject::OnHover)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5771894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ActivateItemFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(float_t, float_t, int32_t, float_t)>(&::GlobalNamespace::TransferrableObject::ActivateItemFX)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5771a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ActivateItemFX", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.PlayNote
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(int32_t, float_t)>(&::GlobalNamespace::TransferrableObject::PlayNote)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5771d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.AutoGrabTrue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)(bool)>(&::GlobalNamespace::TransferrableObject::AutoGrabTrue)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5771d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.CanActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::CanActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5771d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.CanDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::CanDeactivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5771d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnActivate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5771d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnDeactivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5771d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.IsMyItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::IsMyItem)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5771d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.IsHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::IsHeld)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5771e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.IsGrabbable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::IsGrabbable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5771f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.InHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::InHand)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x576e31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"InHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.Dropped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::Dropped)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x576e364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"Dropped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.InLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::InLeftHand)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5771f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"InLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.InRightHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::InRightHand)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5771f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"InRightHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnChest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnChest)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5771fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnChest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnShoulder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnShoulder)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5771fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnShoulder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OwningPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OwningPlayer)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5771fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OwningPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ValidateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::TransferrableObject_PositionState)>(&::GlobalNamespace::TransferrableObject::ValidateState)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5770f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ValidateState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnNetworkItemStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(int32_t)>(&::GlobalNamespace::TransferrableObject::OnNetworkItemStateChanged)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5770ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnNetworkItemStateChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ToggleNetworkedItemStateBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::ToggleNetworkedItemStateBool)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5772098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ToggleNetworkedItemStateBool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ToggleNetworkedItemStateBoolB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::ToggleNetworkedItemStateBoolB)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57720e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ToggleNetworkedItemStateBoolB", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ToggleNetworkedItemStateBoolC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::ToggleNetworkedItemStateBoolC)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57720f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ToggleNetworkedItemStateBoolC", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ToggleNetworkedItemStateBoolD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::ToggleNetworkedItemStateBoolD)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5772110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ToggleNetworkedItemStateBoolD", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ResetStateBools
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::ResetStateBools)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x576f634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ResetStateBools", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.SetItemStateBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(bool)>(&::GlobalNamespace::TransferrableObject::SetItemStateBool)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5772160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetItemStateBool", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.SetItemStateBoolB
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(bool)>(&::GlobalNamespace::TransferrableObject::SetItemStateBoolB)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x577217c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetItemStateBoolB", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.SetItemStateBoolC
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(bool)>(&::GlobalNamespace::TransferrableObject::SetItemStateBoolC)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5772198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetItemStateBoolC", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.SetItemStateBoolD
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(bool)>(&::GlobalNamespace::TransferrableObject::SetItemStateBoolD)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x57721b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetItemStateBoolD", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.SetStateBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(bool, int32_t)>(&::GlobalNamespace::TransferrableObject::SetStateBit)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5772128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetStateBit", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.ToggleStateBit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(int32_t)>(&::GlobalNamespace::TransferrableObject::ToggleStateBit)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x57720b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ToggleStateBit", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.SetItemStateInt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(int32_t)>(&::GlobalNamespace::TransferrableObject::SetItemStateInt)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x576f660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetItemStateInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnOwnershipTransferred
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::TransferrableObject::OnOwnershipTransferred)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x57639ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                    {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnOwnershipRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::TransferrableObject::OnOwnershipRequest)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x57721d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnMasterClientAssistedTakeoverRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)(::GlobalNamespace::NetPlayer*, ::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::TransferrableObject::OnMasterClientAssistedTakeoverRequest)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x57723e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnMyOwnerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnMyOwnerLeft)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x57725f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.OnMyCreatorLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::OnMyCreatorLeft)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5772730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject.BuildValidationCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::BuildValidationCheck)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x57727b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject::*)()>(&::GlobalNamespace::TransferrableObject::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5763dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::TransferrableObject::__cordl_internal_get__myRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::TransferrableObject::__cordl_internal_get__myRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myRig;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set__myRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____myRig = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get__isMyRigValid_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMyRigValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get__isMyRigValid_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMyRigValid_k__BackingField;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set__isMyRigValid_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMyRigValid_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::TransferrableObject::__cordl_internal_get__myOnlineRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myOnlineRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::TransferrableObject::__cordl_internal_get__myOnlineRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myOnlineRig;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set__myOnlineRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____myOnlineRig = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get__isMyOnlineRigValid_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMyOnlineRigValid_k__BackingField;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get__isMyOnlineRigValid_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMyOnlineRigValid_k__BackingField;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set__isMyOnlineRigValid_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMyOnlineRigValid_k__BackingField = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_latched()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latched;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_latched() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___latched;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_latched(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___latched = value;
}
constexpr float_t& GlobalNamespace::TransferrableObject::__cordl_internal_get_indexTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexTrigger;
}
constexpr float_t const& GlobalNamespace::TransferrableObject::__cordl_internal_get_indexTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___indexTrigger;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_indexTrigger(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___indexTrigger = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_testActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testActivate;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_testActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testActivate;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_testActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testActivate = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_testDeactivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testDeactivate;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_testDeactivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testDeactivate;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_testDeactivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testDeactivate = value;
}
constexpr float_t& GlobalNamespace::TransferrableObject::__cordl_internal_get_myThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myThreshold;
}
constexpr float_t const& GlobalNamespace::TransferrableObject::__cordl_internal_get_myThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myThreshold;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_myThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myThreshold = value;
}
constexpr float_t& GlobalNamespace::TransferrableObject::__cordl_internal_get_hysterisis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hysterisis;
}
constexpr float_t const& GlobalNamespace::TransferrableObject::__cordl_internal_get_hysterisis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hysterisis;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_hysterisis(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hysterisis = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_flipOnXForLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flipOnXForLeftHand;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_flipOnXForLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flipOnXForLeftHand;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_flipOnXForLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flipOnXForLeftHand = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_flipOnYForLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flipOnYForLeftHand;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_flipOnYForLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flipOnYForLeftHand;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_flipOnYForLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flipOnYForLeftHand = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_flipOnXForLeftArm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flipOnXForLeftArm;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_flipOnXForLeftArm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flipOnXForLeftArm;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_flipOnXForLeftArm(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flipOnXForLeftArm = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_disableStealing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableStealing;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_disableStealing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableStealing;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_disableStealing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableStealing = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_allowPlayerStealing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowPlayerStealing;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_allowPlayerStealing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowPlayerStealing;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_allowPlayerStealing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowPlayerStealing = value;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState& GlobalNamespace::TransferrableObject::__cordl_internal_get_initState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initState;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState const& GlobalNamespace::TransferrableObject::__cordl_internal_get_initState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initState;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_initState(::GlobalNamespace::TransferrableObject_PositionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initState = value;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates& GlobalNamespace::TransferrableObject::__cordl_internal_get_itemState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemState;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& GlobalNamespace::TransferrableObject::__cordl_internal_get_itemState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___itemState;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_itemState(::GlobalNamespace::TransferrableObject_ItemStates  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___itemState = value;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates& GlobalNamespace::TransferrableObject::__cordl_internal_get_previousItemState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousItemState;
}
constexpr ::GlobalNamespace::TransferrableObject_ItemStates const& GlobalNamespace::TransferrableObject::__cordl_internal_get_previousItemState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousItemState;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_previousItemState(::GlobalNamespace::TransferrableObject_ItemStates  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousItemState = value;
}
constexpr ::GlobalNamespace::BodyDockPositions_DropPositions& GlobalNamespace::TransferrableObject::__cordl_internal_get_storedZone()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedZone;
}
constexpr ::GlobalNamespace::BodyDockPositions_DropPositions const& GlobalNamespace::TransferrableObject::__cordl_internal_get_storedZone() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___storedZone;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_storedZone(::GlobalNamespace::BodyDockPositions_DropPositions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___storedZone = value;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState& GlobalNamespace::TransferrableObject::__cordl_internal_get_previousState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousState;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState const& GlobalNamespace::TransferrableObject::__cordl_internal_get_previousState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousState;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_previousState(::GlobalNamespace::TransferrableObject_PositionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousState = value;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState& GlobalNamespace::TransferrableObject::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::TransferrableObject_PositionState const& GlobalNamespace::TransferrableObject::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_currentState(::GlobalNamespace::TransferrableObject_PositionState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::GlobalNamespace::BodyDockPositions_DropPositions& GlobalNamespace::TransferrableObject::__cordl_internal_get_dockPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockPositions;
}
constexpr ::GlobalNamespace::BodyDockPositions_DropPositions const& GlobalNamespace::TransferrableObject::__cordl_internal_get_dockPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dockPositions;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_dockPositions(::GlobalNamespace::BodyDockPositions_DropPositions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dockPositions = value;
}
constexpr ::GlobalNamespace::AdvancedItemState*& GlobalNamespace::TransferrableObject::__cordl_internal_get_advancedGrabState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___advancedGrabState;
}
constexpr ::GlobalNamespace::AdvancedItemState* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_advancedGrabState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___advancedGrabState;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_advancedGrabState(::GlobalNamespace::AdvancedItemState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___advancedGrabState = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::TransferrableObject::__cordl_internal_get_targetRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_targetRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRig;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_targetRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRig = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_targetRigSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRigSet;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_targetRigSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetRigSet;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_targetRigSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetRigSet = value;
}
constexpr ::GlobalNamespace::TransferrableObject_GrabType& GlobalNamespace::TransferrableObject::__cordl_internal_get_useGrabType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGrabType;
}
constexpr ::GlobalNamespace::TransferrableObject_GrabType const& GlobalNamespace::TransferrableObject::__cordl_internal_get_useGrabType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useGrabType;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_useGrabType(::GlobalNamespace::TransferrableObject_GrabType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useGrabType = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::TransferrableObject::__cordl_internal_get_ownerRig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_ownerRig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ownerRig;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ownerRig = value;
}
constexpr ::UnityW<::GlobalNamespace::BodyDockPositions>& GlobalNamespace::TransferrableObject::__cordl_internal_get_targetDockPositions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetDockPositions;
}
constexpr ::UnityW<::GlobalNamespace::BodyDockPositions> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_targetDockPositions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetDockPositions;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_targetDockPositions(::UnityW<::GlobalNamespace::BodyDockPositions>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetDockPositions = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides>& GlobalNamespace::TransferrableObject::__cordl_internal_get_anchorOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorOverrides;
}
constexpr ::UnityW<::GlobalNamespace::VRRigAnchorOverrides> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_anchorOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchorOverrides;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_anchorOverrides(::UnityW<::GlobalNamespace::VRRigAnchorOverrides>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchorOverrides = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_canAutoGrabLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canAutoGrabLeft;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_canAutoGrabLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canAutoGrabLeft;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_canAutoGrabLeft(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canAutoGrabLeft = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_canAutoGrabRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canAutoGrabRight;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_canAutoGrabRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canAutoGrabRight;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_canAutoGrabRight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canAutoGrabRight = value;
}
constexpr int32_t& GlobalNamespace::TransferrableObject::__cordl_internal_get_objectIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectIndex;
}
constexpr int32_t const& GlobalNamespace::TransferrableObject::__cordl_internal_get_objectIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___objectIndex;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_objectIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___objectIndex = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TransferrableObject::__cordl_internal_get_anchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_anchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___anchor;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_anchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___anchor = value;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& GlobalNamespace::TransferrableObject::__cordl_internal_get_gripInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripInteractor;
}
constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_gripInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gripInteractor;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_gripInteractor(::UnityW<::GlobalNamespace::InteractionPoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gripInteractor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TransferrableObject::__cordl_internal_get_grabAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_grabAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___grabAnchor;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_grabAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___grabAnchor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TransferrableObject::__cordl_internal_get_handPoseLeft()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPoseLeft;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_handPoseLeft() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPoseLeft;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_handPoseLeft(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPoseLeft = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TransferrableObject::__cordl_internal_get_handPoseRight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPoseRight;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_handPoseRight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handPoseRight;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_handPoseRight(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handPoseRight = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_isGrabAnchorSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGrabAnchorSet;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_isGrabAnchorSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isGrabAnchorSet;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_isGrabAnchorSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isGrabAnchorSet = value;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride>& GlobalNamespace::TransferrableObject::__cordl_internal_get_transferrableItemSlotTransformOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableItemSlotTransformOverride;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_transferrableItemSlotTransformOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableItemSlotTransformOverride;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_transferrableItemSlotTransformOverride(::UnityW<::GlobalNamespace::TransferrableItemSlotTransformOverride>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableItemSlotTransformOverride = value;
}
constexpr int32_t& GlobalNamespace::TransferrableObject::__cordl_internal_get_myIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myIndex;
}
constexpr int32_t const& GlobalNamespace::TransferrableObject::__cordl_internal_get_myIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___myIndex;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_myIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___myIndex = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::TransferrableObject::__cordl_internal_get_gameObjectsActiveOnlyWhileHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectsActiveOnlyWhileHeld;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_gameObjectsActiveOnlyWhileHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectsActiveOnlyWhileHeld;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_gameObjectsActiveOnlyWhileHeld(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjectsActiveOnlyWhileHeld = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::TransferrableObject::__cordl_internal_get_gameObjectsActiveOnlyWhileDocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectsActiveOnlyWhileDocked;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_gameObjectsActiveOnlyWhileDocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjectsActiveOnlyWhileDocked;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_gameObjectsActiveOnlyWhileDocked(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjectsActiveOnlyWhileDocked = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>>& GlobalNamespace::TransferrableObject::__cordl_internal_get_behavioursEnabledOnlyWhileHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behavioursEnabledOnlyWhileHeld;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_behavioursEnabledOnlyWhileHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behavioursEnabledOnlyWhileHeld;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_behavioursEnabledOnlyWhileHeld(::ArrayW<::UnityW<::UnityEngine::Behaviour>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behavioursEnabledOnlyWhileHeld = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>>& GlobalNamespace::TransferrableObject::__cordl_internal_get_behavioursEnabledOnlyWhileDocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behavioursEnabledOnlyWhileDocked;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Behaviour>> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_behavioursEnabledOnlyWhileDocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behavioursEnabledOnlyWhileDocked;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_behavioursEnabledOnlyWhileDocked(::ArrayW<::UnityW<::UnityEngine::Behaviour>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behavioursEnabledOnlyWhileDocked = value;
}
constexpr ::UnityW<::GlobalNamespace::WorldShareableItem>& GlobalNamespace::TransferrableObject::__cordl_internal_get_worldShareableInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldShareableInstance;
}
constexpr ::UnityW<::GlobalNamespace::WorldShareableItem> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_worldShareableInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___worldShareableInstance;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_worldShareableInstance(::UnityW<::GlobalNamespace::WorldShareableItem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___worldShareableInstance = value;
}
constexpr float_t& GlobalNamespace::TransferrableObject::__cordl_internal_get_interpTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpTime;
}
constexpr float_t const& GlobalNamespace::TransferrableObject::__cordl_internal_get_interpTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpTime;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_interpTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpTime = value;
}
constexpr float_t& GlobalNamespace::TransferrableObject::__cordl_internal_get_interpDt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpDt;
}
constexpr float_t const& GlobalNamespace::TransferrableObject::__cordl_internal_get_interpDt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpDt;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_interpDt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpDt = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransferrableObject::__cordl_internal_get_interpStartPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpStartPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransferrableObject::__cordl_internal_get_interpStartPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpStartPos;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_interpStartPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpStartPos = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::TransferrableObject::__cordl_internal_get_interpStartRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpStartRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::TransferrableObject::__cordl_internal_get_interpStartRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpStartRot;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_interpStartRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpStartRot = value;
}
constexpr int32_t& GlobalNamespace::TransferrableObject::__cordl_internal_get_enabledOnFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledOnFrame;
}
constexpr int32_t const& GlobalNamespace::TransferrableObject::__cordl_internal_get_enabledOnFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledOnFrame;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_enabledOnFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabledOnFrame = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TransferrableObject::__cordl_internal_get_initOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TransferrableObject::__cordl_internal_get_initOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initOffset;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_initOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::TransferrableObject::__cordl_internal_get_initRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::TransferrableObject::__cordl_internal_get_initRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initRotation;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_initRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initRotation = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::TransferrableObject::__cordl_internal_get_initMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::TransferrableObject::__cordl_internal_get_initMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initMatrix;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_initMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initMatrix = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::TransferrableObject::__cordl_internal_get_leftHandMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::TransferrableObject::__cordl_internal_get_leftHandMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftHandMatrix;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_leftHandMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftHandMatrix = value;
}
constexpr ::UnityEngine::Matrix4x4& GlobalNamespace::TransferrableObject::__cordl_internal_get_rightHandMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& GlobalNamespace::TransferrableObject::__cordl_internal_get_rightHandMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightHandMatrix;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_rightHandMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightHandMatrix = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_positionInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionInitialized;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_positionInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionInitialized;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_positionInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionInitialized = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_isSceneObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSceneObject;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_isSceneObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isSceneObject;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_isSceneObject(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isSceneObject = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::TransferrableObject::__cordl_internal_get_rigidbodyInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbodyInstance;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_rigidbodyInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidbodyInstance;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_rigidbodyInstance(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidbodyInstance = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get__isRigidbodySet_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRigidbodySet_k__BackingField;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get__isRigidbodySet_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isRigidbodySet_k__BackingField;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set__isRigidbodySet_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isRigidbodySet_k__BackingField = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get__shouldUseGravity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldUseGravity_k__BackingField;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get__shouldUseGravity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldUseGravity_k__BackingField;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set__shouldUseGravity_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldUseGravity_k__BackingField = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_canDrop()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canDrop;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_canDrop() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canDrop;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_canDrop(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canDrop = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_allowReparenting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowReparenting;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_allowReparenting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowReparenting;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_allowReparenting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowReparenting = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_shareable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shareable;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_shareable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shareable;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_shareable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shareable = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_detatchOnGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detatchOnGrab;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_detatchOnGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detatchOnGrab;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_detatchOnGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detatchOnGrab = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_allowWorldSharableInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowWorldSharableInstance;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_allowWorldSharableInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___allowWorldSharableInstance;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_allowWorldSharableInstance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___allowWorldSharableInstance = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TransferrableObject::__cordl_internal_get_originPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_originPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originPoint;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_originPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originPoint = value;
}
constexpr float_t& GlobalNamespace::TransferrableObject::__cordl_internal_get_maxDistanceFromOriginBeforeRespawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromOriginBeforeRespawn;
}
constexpr float_t const& GlobalNamespace::TransferrableObject::__cordl_internal_get_maxDistanceFromOriginBeforeRespawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromOriginBeforeRespawn;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_maxDistanceFromOriginBeforeRespawn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceFromOriginBeforeRespawn = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::TransferrableObject::__cordl_internal_get_resetPositionAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetPositionAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_resetPositionAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetPositionAudioClip;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_resetPositionAudioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetPositionAudioClip = value;
}
constexpr float_t& GlobalNamespace::TransferrableObject::__cordl_internal_get_maxDistanceFromTargetPlayerBeforeRespawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromTargetPlayerBeforeRespawn;
}
constexpr float_t const& GlobalNamespace::TransferrableObject::__cordl_internal_get_maxDistanceFromTargetPlayerBeforeRespawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceFromTargetPlayerBeforeRespawn;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_maxDistanceFromTargetPlayerBeforeRespawn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceFromTargetPlayerBeforeRespawn = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_wasHover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHover;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_wasHover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHover;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_wasHover(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasHover = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_isHover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHover;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_isHover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHover;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_isHover(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHover = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_disableItem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableItem;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_disableItem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableItem;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_disableItem(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableItem = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_loaded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loaded;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_loaded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loaded;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_loaded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loaded = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_ClearLocalPositionOnReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClearLocalPositionOnReset;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_ClearLocalPositionOnReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ClearLocalPositionOnReset;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_ClearLocalPositionOnReset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ClearLocalPositionOnReset = value;
}
constexpr ::GlobalNamespace::TransferrableObject_SyncOptions& GlobalNamespace::TransferrableObject::__cordl_internal_get_networkedStateEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedStateEvents;
}
constexpr ::GlobalNamespace::TransferrableObject_SyncOptions const& GlobalNamespace::TransferrableObject::__cordl_internal_get_networkedStateEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___networkedStateEvents;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_networkedStateEvents(::GlobalNamespace::TransferrableObject_SyncOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___networkedStateEvents = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_resetOnDocked()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetOnDocked;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_resetOnDocked() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resetOnDocked;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_resetOnDocked(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resetOnDocked = value;
}
constexpr ::StringW& GlobalNamespace::TransferrableObject::__cordl_internal_get_boolADebugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolADebugName;
}
constexpr ::StringW const& GlobalNamespace::TransferrableObject::__cordl_internal_get_boolADebugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolADebugName;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_boolADebugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boolADebugName = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolTrue;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_OnItemStateBoolTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolFalse;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_OnItemStateBoolFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolFalse = value;
}
constexpr ::StringW& GlobalNamespace::TransferrableObject::__cordl_internal_get_boolBDebugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolBDebugName;
}
constexpr ::StringW const& GlobalNamespace::TransferrableObject::__cordl_internal_get_boolBDebugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolBDebugName;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_boolBDebugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boolBDebugName = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolBTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolBTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolBTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolBTrue;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_OnItemStateBoolBTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolBTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolBFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolBFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolBFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolBFalse;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_OnItemStateBoolBFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolBFalse = value;
}
constexpr ::StringW& GlobalNamespace::TransferrableObject::__cordl_internal_get_boolCDebugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolCDebugName;
}
constexpr ::StringW const& GlobalNamespace::TransferrableObject::__cordl_internal_get_boolCDebugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolCDebugName;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_boolCDebugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boolCDebugName = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolCTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolCTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolCTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolCTrue;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_OnItemStateBoolCTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolCTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolCFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolCFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolCFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolCFalse;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_OnItemStateBoolCFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolCFalse = value;
}
constexpr ::StringW& GlobalNamespace::TransferrableObject::__cordl_internal_get_boolDDebugName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolDDebugName;
}
constexpr ::StringW const& GlobalNamespace::TransferrableObject::__cordl_internal_get_boolDDebugName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___boolDDebugName;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_boolDDebugName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___boolDDebugName = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolDTrue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolDTrue;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolDTrue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolDTrue;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_OnItemStateBoolDTrue(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolDTrue = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolDFalse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolDFalse;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateBoolDFalse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateBoolDFalse;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_OnItemStateBoolDFalse(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateBoolDFalse = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateIntChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateIntChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnItemStateIntChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnItemStateIntChanged;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_OnItemStateIntChanged(::UnityEngine::Events::UnityEvent_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnItemStateIntChanged = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnHeldLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHeldLocal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnHeldLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHeldLocal;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_OnHeldLocal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHeldLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnHeldShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHeldShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnHeldShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnHeldShared;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_OnHeldShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnHeldShared = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnDockedLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDockedLocal;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnDockedLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDockedLocal;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_OnDockedLocal(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDockedLocal = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnDockedShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDockedShared;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::TransferrableObject::__cordl_internal_get_OnDockedShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDockedShared;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_OnDockedShared(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDockedShared = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_wasHeldLocal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHeldLocal;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_wasHeldLocal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHeldLocal;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_wasHeldLocal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasHeldLocal = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_wasHeldShared()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHeldShared;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_wasHeldShared() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasHeldShared;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_wasHeldShared(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasHeldShared = value;
}
constexpr ::StringW& GlobalNamespace::TransferrableObject::__cordl_internal_get_interactEventName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactEventName;
}
constexpr ::StringW const& GlobalNamespace::TransferrableObject::__cordl_internal_get_interactEventName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactEventName;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_interactEventName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactEventName = value;
}
constexpr ::GlobalNamespace::TransferrableObject_InterpolateState& GlobalNamespace::TransferrableObject::__cordl_internal_get_interpState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpState;
}
constexpr ::GlobalNamespace::TransferrableObject_InterpolateState const& GlobalNamespace::TransferrableObject::__cordl_internal_get_interpState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interpState;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_interpState(::GlobalNamespace::TransferrableObject_InterpolateState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interpState = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_startInterpolation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startInterpolation;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_startInterpolation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startInterpolation;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_startInterpolation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startInterpolation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TransferrableObject::__cordl_internal_get_InitialDockObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialDockObject;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_InitialDockObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InitialDockObject;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_InitialDockObject(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InitialDockObject = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::TransferrableObject::__cordl_internal_get_audioSrc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSrc;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_audioSrc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSrc;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_audioSrc(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSrc = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get__IsSpawned_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get__IsSpawned_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsSpawned_k__BackingField;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set__IsSpawned_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsSpawned_k__BackingField = value;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& GlobalNamespace::TransferrableObject::__cordl_internal_get__CosmeticSelectedSide_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& GlobalNamespace::TransferrableObject::__cordl_internal_get__CosmeticSelectedSide_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CosmeticSelectedSide_k__BackingField;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CosmeticSelectedSide_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TransferrableObject::__cordl_internal_get__defaultAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TransferrableObject::__cordl_internal_get__defaultAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultAnchor;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set__defaultAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultAnchor = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get__isDefaultAnchorSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDefaultAnchorSet;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get__isDefaultAnchorSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDefaultAnchorSet;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set__isDefaultAnchorSet(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDefaultAnchorSet = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Matrix4x4>& GlobalNamespace::TransferrableObject::__cordl_internal_get_transferrableItemSlotTransformOverrideCachedMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableItemSlotTransformOverrideCachedMatrix;
}
constexpr ::System::Nullable_1<::UnityEngine::Matrix4x4> const& GlobalNamespace::TransferrableObject::__cordl_internal_get_transferrableItemSlotTransformOverrideCachedMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableItemSlotTransformOverrideCachedMatrix;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_transferrableItemSlotTransformOverrideCachedMatrix(::System::Nullable_1<::UnityEngine::Matrix4x4>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableItemSlotTransformOverrideCachedMatrix = value;
}
constexpr bool& GlobalNamespace::TransferrableObject::__cordl_internal_get_transferrableItemSlotTransformOverrideApplicable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableItemSlotTransformOverrideApplicable;
}
constexpr bool const& GlobalNamespace::TransferrableObject::__cordl_internal_get_transferrableItemSlotTransformOverrideApplicable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transferrableItemSlotTransformOverrideApplicable;
}
constexpr void GlobalNamespace::TransferrableObject::__cordl_internal_set_transferrableItemSlotTransformOverrideApplicable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transferrableItemSlotTransformOverrideApplicable = value;
}
inline void GlobalNamespace::TransferrableObject::setStaticF_handPoseRightReferencePoint(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "handPoseRightReferencePoint", ::GlobalNamespace::TransferrableObject*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::TransferrableObject::getStaticF_handPoseRightReferencePoint()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "handPoseRightReferencePoint", ::GlobalNamespace::TransferrableObject*>();
}
inline void GlobalNamespace::TransferrableObject::setStaticF_handPoseRightReferenceRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setStaticField<::UnityEngine::Quaternion, "handPoseRightReferenceRotation", ::GlobalNamespace::TransferrableObject*>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::TransferrableObject::getStaticF_handPoseRightReferenceRotation()  {
return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "handPoseRightReferenceRotation", ::GlobalNamespace::TransferrableObject*>();
}
inline void GlobalNamespace::TransferrableObject::setStaticF_handPoseLeftReferencePoint(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "handPoseLeftReferencePoint", ::GlobalNamespace::TransferrableObject*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GlobalNamespace::TransferrableObject::getStaticF_handPoseLeftReferencePoint()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "handPoseLeftReferencePoint", ::GlobalNamespace::TransferrableObject*>();
}
inline void GlobalNamespace::TransferrableObject::setStaticF_handPoseLeftReferenceRotation(::UnityEngine::Quaternion  value)  {
::cordl_internals::setStaticField<::UnityEngine::Quaternion, "handPoseLeftReferenceRotation", ::GlobalNamespace::TransferrableObject*>(std::forward<::UnityEngine::Quaternion>(value));
}
inline ::UnityEngine::Quaternion GlobalNamespace::TransferrableObject::getStaticF_handPoseLeftReferenceRotation()  {
return ::cordl_internals::getStaticField<::UnityEngine::Quaternion, "handPoseLeftReferenceRotation", ::GlobalNamespace::TransferrableObject*>();
}
inline void GlobalNamespace::TransferrableObject::FixTransformOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"FixTransformOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::Validate(::Sirenix::OdinInspector::SelfValidationResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"Validate", {}, {::i2c::type_of<::Sirenix::OdinInspector::SelfValidationResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::TransferrableObject::get_myRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_myRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::set_myRig(::GlobalNamespace::VRRig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_myRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TransferrableObject::get_isMyRigValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_isMyRigValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::set_isMyRigValid(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_isMyRigValid", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::VRRig> GlobalNamespace::TransferrableObject::get_myOnlineRig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_myOnlineRig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRRig>>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::set_myOnlineRig(::GlobalNamespace::VRRig*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_myOnlineRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TransferrableObject::get_isMyOnlineRigValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_isMyOnlineRigValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::set_isMyOnlineRigValid(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_isMyOnlineRigValid", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TransferrableObject::SetTargetRig(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetTargetRig", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline bool GlobalNamespace::TransferrableObject::get_IsLocalOwnedWorldShareable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_IsLocalOwnedWorldShareable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::WorldShareableRequestOwnership()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"WorldShareableRequestOwnership", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::get_isRigidbodySet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_isRigidbodySet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::set_isRigidbodySet(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_isRigidbodySet", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::TransferrableObject::get_shouldUseGravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_shouldUseGravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::set_shouldUseGravity(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_shouldUseGravity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TransferrableObject::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::get_IsSpawned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_IsSpawned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::set_IsSpawned(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_IsSpawned", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GlobalNamespace::TransferrableObject::get_CosmeticSelectedSide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"get_CosmeticSelectedSide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"set_CosmeticSelectedSide", {}, {::i2c::type_of<::GorillaTag::CosmeticSystem::ECosmeticSelectSide>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::TransferrableObject::OnSpawn(::GlobalNamespace::VRRig*  rig)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline void GlobalNamespace::TransferrableObject::OnDespawn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::SetInitMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetInitMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::OnEnable_AfterAllCosmeticsSpawnedOrIsSceneObject()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::CleanupDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"CleanupDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::PreDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::TransferrableObject::GetDefaultTransformationMatrix()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::ShouldBeKinematic()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::SpawnShareableObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SpawnShareableObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::SpawnTransferableObjectViews()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SpawnTransferableObjectViews", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::OnJoinedRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::OnLeftRoom()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::IsLocalObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"IsLocalObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::SetWorldShareableItem(::GlobalNamespace::WorldShareableItem*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetWorldShareableItem", {}, {::i2c::type_of<::GlobalNamespace::WorldShareableItem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void GlobalNamespace::TransferrableObject::OnWorldShareableItemSpawn()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::PlayDestroyedOrDisabledEffect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::OnItemDestroyedOrDisabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::TriggeredLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::TransferrableObject::DefaultAnchor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"DefaultAnchor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::TransferrableObject::GetAnchor(::GlobalNamespace::TransferrableObject_PositionState  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"GetAnchor", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, pos);
}
inline bool GlobalNamespace::TransferrableObject::Attached()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"Attached", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::TransferrableObject::GetTargetStorageZone(::GlobalNamespace::BodyDockPositions_DropPositions  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"GetTargetStorageZone", {}, {::i2c::type_of<::GlobalNamespace::BodyDockPositions_DropPositions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, state);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::TransferrableObject::GetTargetDock(::GlobalNamespace::TransferrableObject_PositionState  state, ::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"GetTargetDock", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>(), ::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, state, rig);
}
inline ::UnityW<::UnityEngine::Transform> GlobalNamespace::TransferrableObject::GetTargetDock(::GlobalNamespace::TransferrableObject_PositionState  state, ::GlobalNamespace::BodyDockPositions*  dockPositions, ::GlobalNamespace::VRRigAnchorOverrides*  anchorOverrides)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"GetTargetDock", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>(), ::i2c::type_of<::GlobalNamespace::BodyDockPositions*>(), ::i2c::type_of<::GlobalNamespace::VRRigAnchorOverrides*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, state, dockPositions, anchorOverrides);
}
inline void GlobalNamespace::TransferrableObject::UpdateFollowXform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"UpdateFollowXform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::DropItem()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::OnStateChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::LateUpdateShared()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::ResetToHome()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::ResetXf()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ResetXf", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::ReDock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ReDock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::HandleLocalInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"HandleLocalInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::LocalMyObjectValidation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::LocalPersistanceValidation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::ObjectBeingTaken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ObjectBeingTaken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::LateUpdateLocal()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::LateUpdateReplicatedSceneObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"LateUpdateReplicatedSceneObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::LateUpdateReplicated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::ResetToDefaultState()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointGrabbed, grabbingHand);
}
inline void GlobalNamespace::TransferrableObject::SetupMatrixForFreeGrab(::UnityEngine::Vector3  worldPosition, ::UnityEngine::Quaternion  worldRotation, ::UnityEngine::Transform*  attachPoint, bool  leftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetupMatrixForFreeGrab", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldPosition, worldRotation, attachPoint, leftHand);
}
inline void GlobalNamespace::TransferrableObject::SetupHandMatrix(::UnityEngine::Vector3  leftHandPos, ::UnityEngine::Quaternion  leftHandRot, ::UnityEngine::Vector3  rightHandPos, ::UnityEngine::Quaternion  rightHandRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetupHandMatrix", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftHandPos, leftHandRot, rightHandPos, rightHandRot);
}
inline void GlobalNamespace::TransferrableObject::OnHandMatrixUpdate(::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, bool  leftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localPosition, localRotation, leftHand);
}
inline bool GlobalNamespace::TransferrableObject::OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, zoneReleased, releasingHand);
}
inline void GlobalNamespace::TransferrableObject::DropItemCleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::OnHover(::GlobalNamespace::InteractionPoint*  pointHovered, ::UnityEngine::GameObject*  hoveringHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointHovered, hoveringHand);
}
inline void GlobalNamespace::TransferrableObject::ActivateItemFX(float_t  hapticStrength, float_t  hapticDuration, int32_t  soundIndex, float_t  soundVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ActivateItemFX", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hapticStrength, hapticDuration, soundIndex, soundVolume);
}
inline void GlobalNamespace::TransferrableObject::PlayNote(int32_t  note, float_t  volume)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, note, volume);
}
inline bool GlobalNamespace::TransferrableObject::AutoGrabTrue(bool  leftGrabbingHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, leftGrabbingHand);
}
inline bool GlobalNamespace::TransferrableObject::CanActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::CanDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::OnActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::OnDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::IsMyItem()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::IsHeld()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::IsGrabbable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::InHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"InHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::Dropped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"Dropped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::InLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"InLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::InRightHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"InRightHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::OnChest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnChest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::OnShoulder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnShoulder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::NetPlayer* GlobalNamespace::TransferrableObject::OwningPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OwningPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::ValidateState(::GlobalNamespace::TransferrableObject_PositionState  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ValidateState", {}, {::i2c::type_of<::GlobalNamespace::TransferrableObject_PositionState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, state);
}
inline void GlobalNamespace::TransferrableObject::OnNetworkItemStateChanged(int32_t  stateBits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnNetworkItemStateChanged", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stateBits);
}
inline void GlobalNamespace::TransferrableObject::ToggleNetworkedItemStateBool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ToggleNetworkedItemStateBool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::ToggleNetworkedItemStateBoolB()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ToggleNetworkedItemStateBoolB", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::ToggleNetworkedItemStateBoolC()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ToggleNetworkedItemStateBoolC", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::ToggleNetworkedItemStateBoolD()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ToggleNetworkedItemStateBoolD", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::ResetStateBools()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ResetStateBools", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::SetItemStateBool(bool  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetItemStateBool", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::TransferrableObject::SetItemStateBoolB(bool  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetItemStateBoolB", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::TransferrableObject::SetItemStateBoolC(bool  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetItemStateBoolC", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::TransferrableObject::SetItemStateBoolD(bool  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetItemStateBoolD", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::TransferrableObject::SetStateBit(bool  value, int32_t  bitmask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetStateBit", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, bitmask);
}
inline void GlobalNamespace::TransferrableObject::ToggleStateBit(int32_t  bitmask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"ToggleStateBit", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bitmask);
}
inline void GlobalNamespace::TransferrableObject::SetItemStateInt(int32_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"SetItemStateInt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::TransferrableObject::OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  toPlayer, ::GlobalNamespace::NetPlayer*  fromPlayer)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TransferrableObject*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toPlayer, fromPlayer);
}
inline bool GlobalNamespace::TransferrableObject::OnOwnershipRequest(::GlobalNamespace::NetPlayer*  fromPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnOwnershipRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer);
}
inline bool GlobalNamespace::TransferrableObject::OnMasterClientAssistedTakeoverRequest(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnMasterClientAssistedTakeoverRequest", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fromPlayer, toPlayer);
}
inline void GlobalNamespace::TransferrableObject::OnMyOwnerLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnMyOwnerLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::OnMyCreatorLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"OnMyCreatorLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::TransferrableObject::BuildValidationCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {"BuildValidationCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransferrableObject* GlobalNamespace::TransferrableObject::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransferrableObject*>());
}
/// @brief Convert operator to "::Sirenix::OdinInspector::ISelfValidator"
constexpr  GlobalNamespace::TransferrableObject::operator ::Sirenix::OdinInspector::ISelfValidator*() noexcept {
return static_cast<::Sirenix::OdinInspector::ISelfValidator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Sirenix::OdinInspector::ISelfValidator"
constexpr ::Sirenix::OdinInspector::ISelfValidator* GlobalNamespace::TransferrableObject::i___Sirenix__OdinInspector__ISelfValidator() noexcept {
return static_cast<::Sirenix::OdinInspector::ISelfValidator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr  GlobalNamespace::TransferrableObject::operator ::GlobalNamespace::IRequestableOwnershipGuardCallbacks*() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IRequestableOwnershipGuardCallbacks"
constexpr ::GlobalNamespace::IRequestableOwnershipGuardCallbacks* GlobalNamespace::TransferrableObject::i___GlobalNamespace__IRequestableOwnershipGuardCallbacks() noexcept {
return static_cast<::GlobalNamespace::IRequestableOwnershipGuardCallbacks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPreDisable"
constexpr  GlobalNamespace::TransferrableObject::operator ::GlobalNamespace::IPreDisable*() noexcept {
return static_cast<::GlobalNamespace::IPreDisable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPreDisable"
constexpr ::GlobalNamespace::IPreDisable* GlobalNamespace::TransferrableObject::i___GlobalNamespace__IPreDisable() noexcept {
return static_cast<::GlobalNamespace::IPreDisable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr  GlobalNamespace::TransferrableObject::operator ::GorillaTag::ISpawnable*() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* GlobalNamespace::TransferrableObject::i___GorillaTag__ISpawnable() noexcept {
return static_cast<::GorillaTag::ISpawnable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr  GlobalNamespace::TransferrableObject::operator ::GlobalNamespace::IBuildValidation*() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* GlobalNamespace::TransferrableObject::i___GlobalNamespace__IBuildValidation() noexcept {
return static_cast<::GlobalNamespace::IBuildValidation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableObject::TransferrableObject()   {
}
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject___c__DisplayClass161_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject___c__DisplayClass161_0::*)()>(&::GlobalNamespace::TransferrableObject___c__DisplayClass161_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x576dd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c__DisplayClass161_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject___c__DisplayClass161_0._SpawnTransferableObjectViews_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject___c__DisplayClass161_0::*)()>(&::GlobalNamespace::TransferrableObject___c__DisplayClass161_0::_SpawnTransferableObjectViews_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5772c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c__DisplayClass161_0*>(),
                        {"<SpawnTransferableObjectViews>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& GlobalNamespace::TransferrableObject___c__DisplayClass161_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& GlobalNamespace::TransferrableObject___c__DisplayClass161_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::TransferrableObject___c__DisplayClass161_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::TransferrableObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::NetPlayer*& GlobalNamespace::TransferrableObject___c__DisplayClass161_0::__cordl_internal_get_owner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr ::GlobalNamespace::NetPlayer* const& GlobalNamespace::TransferrableObject___c__DisplayClass161_0::__cordl_internal_get_owner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___owner;
}
constexpr void GlobalNamespace::TransferrableObject___c__DisplayClass161_0::__cordl_internal_set_owner(::GlobalNamespace::NetPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___owner = value;
}
inline void GlobalNamespace::TransferrableObject___c__DisplayClass161_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c__DisplayClass161_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject___c__DisplayClass161_0::_SpawnTransferableObjectViews_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c__DisplayClass161_0*>(),
                        {"<SpawnTransferableObjectViews>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransferrableObject___c__DisplayClass161_0* GlobalNamespace::TransferrableObject___c__DisplayClass161_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransferrableObject___c__DisplayClass161_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableObject___c__DisplayClass161_0::TransferrableObject___c__DisplayClass161_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject___c::*)()>(&::GlobalNamespace::TransferrableObject___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5772bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject___c._WorldShareableRequestOwnership_b__79_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject___c::*)()>(&::GlobalNamespace::TransferrableObject___c::_WorldShareableRequestOwnership_b__79_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5772c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c*>(),
                        {"<WorldShareableRequestOwnership>b__79_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject___c._OnDisable_b__154_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject___c::*)()>(&::GlobalNamespace::TransferrableObject___c::_OnDisable_b__154_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5772c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c*>(),
                        {"<OnDisable>b__154_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject___c._ResetToDefaultState_b__194_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject___c::*)()>(&::GlobalNamespace::TransferrableObject___c::_ResetToDefaultState_b__194_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5772c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c*>(),
                        {"<ResetToDefaultState>b__194_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TransferrableObject___c._OnGrab_b__195_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TransferrableObject___c::*)()>(&::GlobalNamespace::TransferrableObject___c::_OnGrab_b__195_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5772c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c*>(),
                        {"<OnGrab>b__195_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TransferrableObject___c::setStaticF___9(::GlobalNamespace::TransferrableObject___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::TransferrableObject___c*, "<>9", ::GlobalNamespace::TransferrableObject___c*>(std::forward<::GlobalNamespace::TransferrableObject___c*>(value));
}
inline ::GlobalNamespace::TransferrableObject___c* GlobalNamespace::TransferrableObject___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::TransferrableObject___c*, "<>9", ::GlobalNamespace::TransferrableObject___c*>();
}
inline void GlobalNamespace::TransferrableObject___c::setStaticF___9__79_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__79_0", ::GlobalNamespace::TransferrableObject___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::TransferrableObject___c::getStaticF___9__79_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__79_0", ::GlobalNamespace::TransferrableObject___c*>();
}
inline void GlobalNamespace::TransferrableObject___c::setStaticF___9__154_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__154_0", ::GlobalNamespace::TransferrableObject___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::TransferrableObject___c::getStaticF___9__154_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__154_0", ::GlobalNamespace::TransferrableObject___c*>();
}
inline void GlobalNamespace::TransferrableObject___c::setStaticF___9__194_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__194_0", ::GlobalNamespace::TransferrableObject___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::TransferrableObject___c::getStaticF___9__194_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__194_0", ::GlobalNamespace::TransferrableObject___c*>();
}
inline void GlobalNamespace::TransferrableObject___c::setStaticF___9__195_0(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__195_0", ::GlobalNamespace::TransferrableObject___c*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GlobalNamespace::TransferrableObject___c::getStaticF___9__195_0()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__195_0", ::GlobalNamespace::TransferrableObject___c*>();
}
inline void GlobalNamespace::TransferrableObject___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject___c::_WorldShareableRequestOwnership_b__79_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c*>(),
                        {"<WorldShareableRequestOwnership>b__79_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject___c::_OnDisable_b__154_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c*>(),
                        {"<OnDisable>b__154_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject___c::_ResetToDefaultState_b__194_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c*>(),
                        {"<ResetToDefaultState>b__194_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TransferrableObject___c::_OnGrab_b__195_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TransferrableObject___c*>(),
                        {"<OnGrab>b__195_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TransferrableObject___c* GlobalNamespace::TransferrableObject___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TransferrableObject___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TransferrableObject___c::TransferrableObject___c()   {
}
