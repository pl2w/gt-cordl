#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntity.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_impl.hpp"
#include "GlobalNamespace/zzzz__SnapJointType_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__EHandedness_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "GlobalNamespace/zzzz__GameEntityManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntityComponent_def.hpp"
#include "GlobalNamespace/zzzz__IGameEntitySerialize_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SnapJointType_def.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58122fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.set_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameEntity::set_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5812304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_id", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_typeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_typeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x581230c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_typeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.set_typeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(int32_t)>(&::GlobalNamespace::GameEntity::set_typeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5812314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_typeId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_createData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_createData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x581231c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_createData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.set_createData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(int64_t)>(&::GlobalNamespace::GameEntity::set_createData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5812324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_createData", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_createdByEntityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_createdByEntityId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x581232c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_createdByEntityId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.set_createdByEntityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameEntity::set_createdByEntityId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5812334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_createdByEntityId", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_heldByActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_heldByActorNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x581233c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_heldByActorNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.set_heldByActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(int32_t)>(&::GlobalNamespace::GameEntity::set_heldByActorNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5812344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_heldByActorNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_snappedByActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_snappedByActorNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x581234c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_snappedByActorNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.set_snappedByActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(int32_t)>(&::GlobalNamespace::GameEntity::set_snappedByActorNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5812354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_snappedByActorNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_slotIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_slotIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x581235c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_slotIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_snappedJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SnapJointType (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_snappedJoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5812390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_snappedJoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.set_snappedJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::SnapJointType)>(&::GlobalNamespace::GameEntity::set_snappedJoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5812398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_snappedJoint", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_heldByHandIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_heldByHandIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58123a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_heldByHandIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.set_heldByHandIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(int32_t)>(&::GlobalNamespace::GameEntity::set_heldByHandIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58123a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_heldByHandIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_lastHeldByActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_lastHeldByActorNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58123b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_lastHeldByActorNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.set_lastHeldByActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(int32_t)>(&::GlobalNamespace::GameEntity::set_lastHeldByActorNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58123b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_lastHeldByActorNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_onlyGrabActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_onlyGrabActorNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58123c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_onlyGrabActorNumber", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.set_onlyGrabActorNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(int32_t)>(&::GlobalNamespace::GameEntity::set_onlyGrabActorNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58123c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_onlyGrabActorNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_attachedToEntityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_attachedToEntityId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58123d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_attachedToEntityId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.set_attachedToEntityId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameEntity::set_attachedToEntityId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58123d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_attachedToEntityId", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_IsScenePlaced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_IsScenePlaced)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58123e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_IsScenePlaced", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.set_IsScenePlaced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(bool)>(&::GlobalNamespace::GameEntity::set_IsScenePlaced)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58123e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_IsScenePlaced", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.add_OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::GameEntity_StateChangedEvent*)>(&::GlobalNamespace::GameEntity::add_OnStateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58123f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"add_OnStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GameEntity_StateChangedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.remove_OnStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::GameEntity_StateChangedEvent*)>(&::GlobalNamespace::GameEntity::remove_OnStateChanged)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x581248c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"remove_OnStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GameEntity_StateChangedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.add_onEntityDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::GameEntity_EntityDestroyedEvent*)>(&::GlobalNamespace::GameEntity::add_onEntityDestroyed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5812528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"add_onEntityDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.remove_onEntityDestroyed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::GameEntity_EntityDestroyedEvent*)>(&::GlobalNamespace::GameEntity::remove_onEntityDestroyed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x58125c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"remove_onEntityDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::Awake)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5812660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5812a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::GameEntityManager*, int32_t, int32_t)>(&::GlobalNamespace::GameEntity::Create)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5812a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"Create", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(int64_t, int32_t)>(&::GlobalNamespace::GameEntity::Init)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5812bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"Init", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::OnDestroy)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5812d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.GetGrabbableRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntity_RendererSet* (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::GetGrabbableRenderers)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x5812ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"GetGrabbableRenderers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.GetVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::GetVelocity)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x58134fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"GetVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.PlayCatchFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::PlayCatchFx)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x58135b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"PlayCatchFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.PlayThrowFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::PlayThrowFx)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x581366c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"PlayThrowFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.PlaySnapFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::PlaySnapFx)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5813720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"PlaySnapFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.IsGamePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntity::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GameEntity::IsGamePlayer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58137d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsGamePlayer", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.GetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::GetState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5813848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"GetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.RequestState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(int64_t)>(&::GlobalNamespace::GameEntity::RequestState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5813850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"RequestState", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.RequestState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::GameEntityId, int64_t)>(&::GlobalNamespace::GameEntity::RequestState)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5813860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"RequestState", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.IsAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::IsAuthority)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x580d28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.IsValidToMigrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::IsValidToMigrate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x581387c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsValidToMigrate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(int64_t)>(&::GlobalNamespace::GameEntity::SetState)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5813898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"SetState", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.MigrateToEntityManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameEntityId (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::GameEntityManager*)>(&::GlobalNamespace::GameEntity::MigrateToEntityManager)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58139dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"MigrateToEntityManager", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.MigrateHeldBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(int32_t)>(&::GlobalNamespace::GameEntity::MigrateHeldBy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5813ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"MigrateHeldBy", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.MigrateSnappedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)(int32_t)>(&::GlobalNamespace::GameEntity::MigrateSnappedBy)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5813af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"MigrateSnappedBy", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.GetNetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameEntity::GetNetId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5813b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"GetNetId", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.GetNetId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::GetNetId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5813b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"GetNetId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::GameEntity> (*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GameEntity::Get)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5813b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.IsHeldByLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::IsHeldByLocalPlayer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5813c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsHeldByLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.IsSnappedByLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::IsSnappedByLocalPlayer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5813cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsSnappedByLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_IsHeldOrSnappedByLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_IsHeldOrSnappedByLocalPlayer)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5811834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_IsHeldOrSnappedByLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.IsHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::IsHeld)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5813d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_IsSnappedToHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_IsSnappedToHand)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58118c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_IsSnappedToHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_AttachedPlayerActorNr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_AttachedPlayerActorNr)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5813d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_AttachedPlayerActorNr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.GetLastHeldByPlayerForEntityID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::GameEntityId)>(&::GlobalNamespace::GameEntity::GetLastHeldByPlayerForEntityID)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5813d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"GetLastHeldByPlayerForEntityID", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.WasLastHeldByLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::WasLastHeldByLocalPlayer)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5813e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"WasLastHeldByLocalPlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.IsAttachedToPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameEntity::*)(::GlobalNamespace::NetPlayer*)>(&::GlobalNamespace::GameEntity::IsAttachedToPlayer)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5813eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsAttachedToPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_EquippedSlotIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_EquippedSlotIndex)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5811800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_EquippedSlotIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_EquippedHandedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EHandedness (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_EquippedHandedness)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5813f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_EquippedHandedness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity.get_EquippedHandXRNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::XRNode (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::get_EquippedHandXRNode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58118dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_EquippedHandXRNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity::*)()>(&::GlobalNamespace::GameEntity::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5813f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameEntityId& GlobalNamespace::GameEntity::__cordl_internal_get__id_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id_k__BackingField;
}
constexpr ::GlobalNamespace::GameEntityId const& GlobalNamespace::GameEntity::__cordl_internal_get__id_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____id_k__BackingField;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__id_k__BackingField(::GlobalNamespace::GameEntityId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____id_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::GameEntity::__cordl_internal_get__typeId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeId_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GameEntity::__cordl_internal_get__typeId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeId_k__BackingField;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__typeId_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____typeId_k__BackingField = value;
}
constexpr int64_t& GlobalNamespace::GameEntity::__cordl_internal_get__createData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createData_k__BackingField;
}
constexpr int64_t const& GlobalNamespace::GameEntity::__cordl_internal_get__createData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createData_k__BackingField;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__createData_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____createData_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameEntityId& GlobalNamespace::GameEntity::__cordl_internal_get__createdByEntityId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createdByEntityId_k__BackingField;
}
constexpr ::GlobalNamespace::GameEntityId const& GlobalNamespace::GameEntity::__cordl_internal_get__createdByEntityId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____createdByEntityId_k__BackingField;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__createdByEntityId_k__BackingField(::GlobalNamespace::GameEntityId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____createdByEntityId_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*& GlobalNamespace::GameEntity::__cordl_internal_get_builtInEntities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builtInEntities;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>* const& GlobalNamespace::GameEntity::__cordl_internal_get_builtInEntities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___builtInEntities;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_builtInEntities(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameEntity>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___builtInEntities = value;
}
constexpr bool& GlobalNamespace::GameEntity::__cordl_internal_get_isBuiltIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBuiltIn;
}
constexpr bool const& GlobalNamespace::GameEntity::__cordl_internal_get_isBuiltIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBuiltIn;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_isBuiltIn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBuiltIn = value;
}
constexpr bool& GlobalNamespace::GameEntity::__cordl_internal_get_pickupable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupable;
}
constexpr bool const& GlobalNamespace::GameEntity::__cordl_internal_get_pickupable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupable;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_pickupable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pickupable = value;
}
constexpr float_t& GlobalNamespace::GameEntity::__cordl_internal_get_pickupRangeFromSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupRangeFromSurface;
}
constexpr float_t const& GlobalNamespace::GameEntity::__cordl_internal_get_pickupRangeFromSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickupRangeFromSurface;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_pickupRangeFromSurface(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pickupRangeFromSurface = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::GameEntity::__cordl_internal_get_ignoreObjectGrabRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreObjectGrabRenderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::GameEntity::__cordl_internal_get_ignoreObjectGrabRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ignoreObjectGrabRenderers;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_ignoreObjectGrabRenderers(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ignoreObjectGrabRenderers = value;
}
constexpr bool& GlobalNamespace::GameEntity::__cordl_internal_get_canHoldingPlayerUpdateState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canHoldingPlayerUpdateState;
}
constexpr bool const& GlobalNamespace::GameEntity::__cordl_internal_get_canHoldingPlayerUpdateState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canHoldingPlayerUpdateState;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_canHoldingPlayerUpdateState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canHoldingPlayerUpdateState = value;
}
constexpr bool& GlobalNamespace::GameEntity::__cordl_internal_get_canLastHoldingPlayerUpdateState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canLastHoldingPlayerUpdateState;
}
constexpr bool const& GlobalNamespace::GameEntity::__cordl_internal_get_canLastHoldingPlayerUpdateState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canLastHoldingPlayerUpdateState;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_canLastHoldingPlayerUpdateState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canLastHoldingPlayerUpdateState = value;
}
constexpr bool& GlobalNamespace::GameEntity::__cordl_internal_get_canSnapPlayerUpdateState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSnapPlayerUpdateState;
}
constexpr bool const& GlobalNamespace::GameEntity::__cordl_internal_get_canSnapPlayerUpdateState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSnapPlayerUpdateState;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_canSnapPlayerUpdateState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canSnapPlayerUpdateState = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::GameEntity::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::GameEntity::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GameEntity::__cordl_internal_get_catchSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GameEntity::__cordl_internal_get_catchSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSound;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_catchSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchSound = value;
}
constexpr float_t& GlobalNamespace::GameEntity::__cordl_internal_get_catchSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSoundVolume;
}
constexpr float_t const& GlobalNamespace::GameEntity::__cordl_internal_get_catchSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___catchSoundVolume;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_catchSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___catchSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GameEntity::__cordl_internal_get_throwSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GameEntity::__cordl_internal_get_throwSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSound;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_throwSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwSound = value;
}
constexpr float_t& GlobalNamespace::GameEntity::__cordl_internal_get_throwSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSoundVolume;
}
constexpr float_t const& GlobalNamespace::GameEntity::__cordl_internal_get_throwSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___throwSoundVolume;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_throwSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___throwSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::GameEntity::__cordl_internal_get_snapSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::GameEntity::__cordl_internal_get_snapSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapSound;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_snapSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapSound = value;
}
constexpr float_t& GlobalNamespace::GameEntity::__cordl_internal_get_snapSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapSoundVolume;
}
constexpr float_t const& GlobalNamespace::GameEntity::__cordl_internal_get_snapSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapSoundVolume;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_snapSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::GameEntity::__cordl_internal_get_rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::GameEntity::__cordl_internal_get_rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBody = value;
}
constexpr ::UnityW<::GorillaTag::Gravity::MonkeGravityController>& GlobalNamespace::GameEntity::__cordl_internal_get_gravityController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityController;
}
constexpr ::UnityW<::GorillaTag::Gravity::MonkeGravityController> const& GlobalNamespace::GameEntity::__cordl_internal_get_gravityController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravityController;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_gravityController(::UnityW<::GorillaTag::Gravity::MonkeGravityController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravityController = value;
}
constexpr int32_t& GlobalNamespace::GameEntity::__cordl_internal_get__heldByActorNumber_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldByActorNumber_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GameEntity::__cordl_internal_get__heldByActorNumber_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldByActorNumber_k__BackingField;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__heldByActorNumber_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heldByActorNumber_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::GameEntity::__cordl_internal_get__snappedByActorNumber_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snappedByActorNumber_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GameEntity::__cordl_internal_get__snappedByActorNumber_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snappedByActorNumber_k__BackingField;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__snappedByActorNumber_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snappedByActorNumber_k__BackingField = value;
}
constexpr ::GlobalNamespace::SnapJointType& GlobalNamespace::GameEntity::__cordl_internal_get__snappedJoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snappedJoint_k__BackingField;
}
constexpr ::GlobalNamespace::SnapJointType const& GlobalNamespace::GameEntity::__cordl_internal_get__snappedJoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snappedJoint_k__BackingField;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__snappedJoint_k__BackingField(::GlobalNamespace::SnapJointType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snappedJoint_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::GameEntity::__cordl_internal_get__heldByHandIndex_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldByHandIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GameEntity::__cordl_internal_get__heldByHandIndex_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heldByHandIndex_k__BackingField;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__heldByHandIndex_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heldByHandIndex_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::GameEntity::__cordl_internal_get__lastHeldByActorNumber_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHeldByActorNumber_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GameEntity::__cordl_internal_get__lastHeldByActorNumber_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastHeldByActorNumber_k__BackingField;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__lastHeldByActorNumber_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastHeldByActorNumber_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::GameEntity::__cordl_internal_get__onlyGrabActorNumber_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onlyGrabActorNumber_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::GameEntity::__cordl_internal_get__onlyGrabActorNumber_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onlyGrabActorNumber_k__BackingField;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__onlyGrabActorNumber_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onlyGrabActorNumber_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameEntityId& GlobalNamespace::GameEntity::__cordl_internal_get__attachedToEntityId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedToEntityId_k__BackingField;
}
constexpr ::GlobalNamespace::GameEntityId const& GlobalNamespace::GameEntity::__cordl_internal_get__attachedToEntityId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attachedToEntityId_k__BackingField;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__attachedToEntityId_k__BackingField(::GlobalNamespace::GameEntityId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____attachedToEntityId_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager>& GlobalNamespace::GameEntity::__cordl_internal_get_manager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr ::UnityW<::GlobalNamespace::GameEntityManager> const& GlobalNamespace::GameEntity::__cordl_internal_get_manager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manager;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_manager(::UnityW<::GlobalNamespace::GameEntityManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manager = value;
}
constexpr bool& GlobalNamespace::GameEntity::__cordl_internal_get_shouldDestroyOnZoneExit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldDestroyOnZoneExit;
}
constexpr bool const& GlobalNamespace::GameEntity::__cordl_internal_get_shouldDestroyOnZoneExit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shouldDestroyOnZoneExit;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_shouldDestroyOnZoneExit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shouldDestroyOnZoneExit = value;
}
constexpr bool& GlobalNamespace::GameEntity::__cordl_internal_get__IsScenePlaced_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsScenePlaced_k__BackingField;
}
constexpr bool const& GlobalNamespace::GameEntity::__cordl_internal_get__IsScenePlaced_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsScenePlaced_k__BackingField;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__IsScenePlaced_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsScenePlaced_k__BackingField = value;
}
constexpr bool& GlobalNamespace::GameEntity::__cordl_internal_get_scenePlacedInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedInitialized;
}
constexpr bool const& GlobalNamespace::GameEntity::__cordl_internal_get_scenePlacedInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedInitialized;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_scenePlacedInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenePlacedInitialized = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::GameEntity::__cordl_internal_get_scenePlacedHomePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedHomePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::GameEntity::__cordl_internal_get_scenePlacedHomePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedHomePosition;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_scenePlacedHomePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenePlacedHomePosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::GameEntity::__cordl_internal_get_scenePlacedHomeRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedHomeRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::GameEntity::__cordl_internal_get_scenePlacedHomeRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedHomeRotation;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_scenePlacedHomeRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenePlacedHomeRotation = value;
}
constexpr float_t& GlobalNamespace::GameEntity::__cordl_internal_get_scenePlacedHomeScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedHomeScale;
}
constexpr float_t const& GlobalNamespace::GameEntity::__cordl_internal_get_scenePlacedHomeScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scenePlacedHomeScale;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_scenePlacedHomeScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scenePlacedHomeScale = value;
}
constexpr ::System::Action*& GlobalNamespace::GameEntity::__cordl_internal_get_OnGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabbed;
}
constexpr ::System::Action* const& GlobalNamespace::GameEntity::__cordl_internal_get_OnGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnGrabbed;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_OnGrabbed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnGrabbed = value;
}
constexpr ::System::Action*& GlobalNamespace::GameEntity::__cordl_internal_get_OnReleased()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReleased;
}
constexpr ::System::Action* const& GlobalNamespace::GameEntity::__cordl_internal_get_OnReleased() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnReleased;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_OnReleased(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnReleased = value;
}
constexpr ::System::Action*& GlobalNamespace::GameEntity::__cordl_internal_get_OnSnapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSnapped;
}
constexpr ::System::Action* const& GlobalNamespace::GameEntity::__cordl_internal_get_OnSnapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnSnapped;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_OnSnapped(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnSnapped = value;
}
constexpr ::System::Action*& GlobalNamespace::GameEntity::__cordl_internal_get_OnUnsnapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUnsnapped;
}
constexpr ::System::Action* const& GlobalNamespace::GameEntity::__cordl_internal_get_OnUnsnapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnUnsnapped;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_OnUnsnapped(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnUnsnapped = value;
}
constexpr ::System::Action*& GlobalNamespace::GameEntity::__cordl_internal_get_OnAttached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAttached;
}
constexpr ::System::Action* const& GlobalNamespace::GameEntity::__cordl_internal_get_OnAttached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnAttached;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_OnAttached(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnAttached = value;
}
constexpr ::System::Action*& GlobalNamespace::GameEntity::__cordl_internal_get_OnDetached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDetached;
}
constexpr ::System::Action* const& GlobalNamespace::GameEntity::__cordl_internal_get_OnDetached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnDetached;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_OnDetached(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnDetached = value;
}
constexpr ::System::Action*& GlobalNamespace::GameEntity::__cordl_internal_get_OnTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTick;
}
constexpr ::System::Action* const& GlobalNamespace::GameEntity::__cordl_internal_get_OnTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnTick;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_OnTick(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnTick = value;
}
constexpr float_t& GlobalNamespace::GameEntity::__cordl_internal_get_MinTimeBetweenTicks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinTimeBetweenTicks;
}
constexpr float_t const& GlobalNamespace::GameEntity::__cordl_internal_get_MinTimeBetweenTicks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinTimeBetweenTicks;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_MinTimeBetweenTicks(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinTimeBetweenTicks = value;
}
constexpr float_t& GlobalNamespace::GameEntity::__cordl_internal_get_LastTickTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastTickTime;
}
constexpr float_t const& GlobalNamespace::GameEntity::__cordl_internal_get_LastTickTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LastTickTime;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_LastTickTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LastTickTime = value;
}
constexpr ::GlobalNamespace::GameEntity_StateChangedEvent*& GlobalNamespace::GameEntity::__cordl_internal_get_OnStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStateChanged;
}
constexpr ::GlobalNamespace::GameEntity_StateChangedEvent* const& GlobalNamespace::GameEntity::__cordl_internal_get_OnStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStateChanged;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_OnStateChanged(::GlobalNamespace::GameEntity_StateChangedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStateChanged = value;
}
constexpr ::GlobalNamespace::GameEntity_EntityDestroyedEvent*& GlobalNamespace::GameEntity::__cordl_internal_get_onEntityDestroyed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEntityDestroyed;
}
constexpr ::GlobalNamespace::GameEntity_EntityDestroyedEvent* const& GlobalNamespace::GameEntity::__cordl_internal_get_onEntityDestroyed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onEntityDestroyed;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_onEntityDestroyed(::GlobalNamespace::GameEntity_EntityDestroyedEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onEntityDestroyed = value;
}
constexpr int64_t& GlobalNamespace::GameEntity::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr int64_t const& GlobalNamespace::GameEntity::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_state(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityComponent*>*& GlobalNamespace::GameEntity::__cordl_internal_get_entityComponents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityComponents;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityComponent*>* const& GlobalNamespace::GameEntity::__cordl_internal_get_entityComponents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entityComponents;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_entityComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntityComponent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entityComponents = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntitySerialize*>*& GlobalNamespace::GameEntity::__cordl_internal_get_entitySerialize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entitySerialize;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntitySerialize*>* const& GlobalNamespace::GameEntity::__cordl_internal_get_entitySerialize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entitySerialize;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set_entitySerialize(::System::Collections::Generic::List_1<::GlobalNamespace::IGameEntitySerialize*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entitySerialize = value;
}
constexpr ::GlobalNamespace::GameEntity_RendererSet*& GlobalNamespace::GameEntity::__cordl_internal_get__grabbableRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbableRenderers;
}
constexpr ::GlobalNamespace::GameEntity_RendererSet* const& GlobalNamespace::GameEntity::__cordl_internal_get__grabbableRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbableRenderers;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__grabbableRenderers(::GlobalNamespace::GameEntity_RendererSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbableRenderers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*& GlobalNamespace::GameEntity::__cordl_internal_get__meshFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilters;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>* const& GlobalNamespace::GameEntity::__cordl_internal_get__meshFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshFilters;
}
constexpr void GlobalNamespace::GameEntity::__cordl_internal_set__meshFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshFilter>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshFilters = value;
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameEntity::get_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::set_id(::GlobalNamespace::GameEntityId  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_id", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GameEntity::get_typeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_typeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::set_typeId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_typeId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::GameEntity::get_createData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_createData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::set_createData(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_createData", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameEntity::get_createdByEntityId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_createdByEntityId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::set_createdByEntityId(::GlobalNamespace::GameEntityId  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_createdByEntityId", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GameEntity::get_heldByActorNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_heldByActorNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::set_heldByActorNumber(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_heldByActorNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GameEntity::get_snappedByActorNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_snappedByActorNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::set_snappedByActorNumber(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_snappedByActorNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GameEntity::get_slotIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_slotIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::SnapJointType GlobalNamespace::GameEntity::get_snappedJoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_snappedJoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SnapJointType>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::set_snappedJoint(::GlobalNamespace::SnapJointType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_snappedJoint", {}, {::i2c::type_of<::GlobalNamespace::SnapJointType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GameEntity::get_heldByHandIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_heldByHandIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::set_heldByHandIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_heldByHandIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GameEntity::get_lastHeldByActorNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_lastHeldByActorNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::set_lastHeldByActorNumber(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_lastHeldByActorNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GameEntity::get_onlyGrabActorNumber()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_onlyGrabActorNumber", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::set_onlyGrabActorNumber(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_onlyGrabActorNumber", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameEntity::get_attachedToEntityId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_attachedToEntityId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::set_attachedToEntityId(::GlobalNamespace::GameEntityId  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_attachedToEntityId", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameEntity::get_IsScenePlaced()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_IsScenePlaced", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::set_IsScenePlaced(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"set_IsScenePlaced", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEntity::add_OnStateChanged(::GlobalNamespace::GameEntity_StateChangedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"add_OnStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GameEntity_StateChangedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEntity::remove_OnStateChanged(::GlobalNamespace::GameEntity_StateChangedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"remove_OnStateChanged", {}, {::i2c::type_of<::GlobalNamespace::GameEntity_StateChangedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEntity::add_onEntityDestroyed(::GlobalNamespace::GameEntity_EntityDestroyedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"add_onEntityDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEntity::remove_onEntityDestroyed(::GlobalNamespace::GameEntity_EntityDestroyedEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"remove_onEntityDestroyed", {}, {::i2c::type_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEntity::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::Create(::GlobalNamespace::GameEntityManager*  manager, int32_t  netId, int32_t  typeId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"Create", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager, netId, typeId);
}
inline void GlobalNamespace::GameEntity::Init(int64_t  createData, int32_t  createdByEntityNetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"Init", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, createData, createdByEntityNetId);
}
inline void GlobalNamespace::GameEntity::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntity_RendererSet* GlobalNamespace::GameEntity::GetGrabbableRenderers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"GetGrabbableRenderers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntity_RendererSet*>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::GameEntity::GetVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"GetVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::PlayCatchFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"PlayCatchFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::PlayThrowFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"PlayThrowFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::PlaySnapFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"PlaySnapFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntity::IsGamePlayer(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsGamePlayer", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, collider);
}
inline int64_t GlobalNamespace::GameEntity::GetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"GetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::RequestState(int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"RequestState", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GlobalNamespace::GameEntity::RequestState(::GlobalNamespace::GameEntityId  id, int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"RequestState", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, newState);
}
inline bool GlobalNamespace::GameEntity::IsAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntity::IsValidToMigrate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsValidToMigrate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::SetState(int64_t  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"SetState", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline ::GlobalNamespace::GameEntityId GlobalNamespace::GameEntity::MigrateToEntityManager(::GlobalNamespace::GameEntityManager*  newManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"MigrateToEntityManager", {}, {::i2c::type_of<::GlobalNamespace::GameEntityManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameEntityId>(this, ___internal_method, newManager);
}
inline void GlobalNamespace::GameEntity::MigrateHeldBy(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"MigrateHeldBy", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNumber);
}
inline void GlobalNamespace::GameEntity::MigrateSnappedBy(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"MigrateSnappedBy", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, actorNumber);
}
inline int32_t GlobalNamespace::GameEntity::GetNetId(::GlobalNamespace::GameEntityId  gameEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"GetNetId", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, gameEntityId);
}
inline int32_t GlobalNamespace::GameEntity::GetNetId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"GetNetId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::GameEntity> GlobalNamespace::GameEntity::Get(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"Get", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::GameEntity>>(nullptr, ___internal_method, collider);
}
inline bool GlobalNamespace::GameEntity::IsHeldByLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsHeldByLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntity::IsSnappedByLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsSnappedByLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntity::get_IsHeldOrSnappedByLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_IsHeldOrSnappedByLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntity::IsHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntity::get_IsSnappedToHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_IsSnappedToHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GameEntity::get_AttachedPlayerActorNr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_AttachedPlayerActorNr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GameEntity::GetLastHeldByPlayerForEntityID(::GlobalNamespace::GameEntityId  gameEntityId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"GetLastHeldByPlayerForEntityID", {}, {::i2c::type_of<::GlobalNamespace::GameEntityId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, gameEntityId);
}
inline bool GlobalNamespace::GameEntity::WasLastHeldByLocalPlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"WasLastHeldByLocalPlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GameEntity::IsAttachedToPlayer(::GlobalNamespace::NetPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"IsAttachedToPlayer", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player);
}
inline int32_t GlobalNamespace::GameEntity::get_EquippedSlotIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_EquippedSlotIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::EHandedness GlobalNamespace::GameEntity::get_EquippedHandedness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_EquippedHandedness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EHandedness>(this, ___internal_method);
}
inline ::UnityEngine::XR::XRNode GlobalNamespace::GameEntity::get_EquippedHandXRNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {"get_EquippedHandXRNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::XRNode>(this, ___internal_method);
}
inline void GlobalNamespace::GameEntity::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline void GlobalNamespace::GameEntity::_GetGrabbableRenderers_g__RemoveNotOwnedComponents_103_0(::System::Collections::Generic::List_1<T>*  components)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntity*>(),
                    {"<GetGrabbableRenderers>g__RemoveNotOwnedComponents|103_0", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, components);
}
inline ::GlobalNamespace::GameEntity* GlobalNamespace::GameEntity::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntity*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntity::GameEntity()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameEntity_EntityDestroyedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity_EntityDestroyedEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GameEntity_EntityDestroyedEvent::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x58140a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity_EntityDestroyedEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity_EntityDestroyedEvent::*)(::GlobalNamespace::GameEntity*)>(&::GlobalNamespace::GameEntity_EntityDestroyedEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x58141ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity_EntityDestroyedEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GameEntity_EntityDestroyedEvent::*)(::GlobalNamespace::GameEntity*, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GameEntity_EntityDestroyedEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58141c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity_EntityDestroyedEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity_EntityDestroyedEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GameEntity_EntityDestroyedEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58141e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameEntity_EntityDestroyedEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GameEntity_EntityDestroyedEvent::Invoke(::GlobalNamespace::GameEntity*  entity)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entity);
}
inline ::System::IAsyncResult* GlobalNamespace::GameEntity_EntityDestroyedEvent::BeginInvoke(::GlobalNamespace::GameEntity*  entity, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, entity, callback, object);
}
inline void GlobalNamespace::GameEntity_EntityDestroyedEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GameEntity_EntityDestroyedEvent* GlobalNamespace::GameEntity_EntityDestroyedEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntity_EntityDestroyedEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntity_EntityDestroyedEvent::GameEntity_EntityDestroyedEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameEntity_StateChangedEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity_StateChangedEvent::*)(::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::GameEntity_StateChangedEvent::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5813f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity_StateChangedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity_StateChangedEvent.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity_StateChangedEvent::*)(int64_t, int64_t)>(&::GlobalNamespace::GameEntity_StateChangedEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5814008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntity_StateChangedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntity_StateChangedEvent*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity_StateChangedEvent.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::GlobalNamespace::GameEntity_StateChangedEvent::*)(int64_t, int64_t, ::System::AsyncCallback*, ::System::Object*)>(&::GlobalNamespace::GameEntity_StateChangedEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x581401c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntity_StateChangedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntity_StateChangedEvent*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEntity_StateChangedEvent.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity_StateChangedEvent::*)(::System::IAsyncResult*)>(&::GlobalNamespace::GameEntity_StateChangedEvent::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5814098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameEntity_StateChangedEvent*>(),
                    {::i2c::class_of<::GlobalNamespace::GameEntity_StateChangedEvent*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GameEntity_StateChangedEvent::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity_StateChangedEvent*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::GameEntity_StateChangedEvent::Invoke(int64_t  prevState, int64_t  nextState)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntity_StateChangedEvent*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prevState, nextState);
}
inline ::System::IAsyncResult* GlobalNamespace::GameEntity_StateChangedEvent::BeginInvoke(int64_t  prevState, int64_t  nextState, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntity_StateChangedEvent*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, prevState, nextState, callback, object);
}
inline void GlobalNamespace::GameEntity_StateChangedEvent::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameEntity_StateChangedEvent*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::GlobalNamespace::GameEntity_StateChangedEvent* GlobalNamespace::GameEntity_StateChangedEvent::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntity_StateChangedEvent*>(object, method));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntity_StateChangedEvent::GameEntity_StateChangedEvent()   {
}
//  Writing Method size for method: ::GlobalNamespace::GameEntity_RendererSet._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameEntity_RendererSet::*)()>(&::GlobalNamespace::GameEntity_RendererSet::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5813420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity_RendererSet*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::MeshRenderer>>>*& GlobalNamespace::GameEntity_RendererSet::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::MeshRenderer>>>* const& GlobalNamespace::GameEntity_RendererSet::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GlobalNamespace::GameEntity_RendererSet::__cordl_internal_set_renderers(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::UnityEngine::MeshFilter>,::UnityW<::UnityEngine::MeshRenderer>>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*& GlobalNamespace::GameEntity_RendererSet::__cordl_internal_get_skinnedRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedRenderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>* const& GlobalNamespace::GameEntity_RendererSet::__cordl_internal_get_skinnedRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skinnedRenderers;
}
constexpr void GlobalNamespace::GameEntity_RendererSet::__cordl_internal_set_skinnedRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::SkinnedMeshRenderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skinnedRenderers = value;
}
inline void GlobalNamespace::GameEntity_RendererSet::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameEntity_RendererSet*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameEntity_RendererSet* GlobalNamespace::GameEntity_RendererSet::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameEntity_RendererSet*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEntity_RendererSet::GameEntity_RendererSet()   {
}
