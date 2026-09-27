#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/RigidColliderCreator.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__RigidColliderCreator_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Technie/PhysicsCreator/Rigid/zzzz__Hull_def.hpp"
#include "Technie/PhysicsCreator/zzzz__HullData_def.hpp"
#include "Technie/PhysicsCreator/zzzz__HullMapping_def.hpp"
#include "Technie/PhysicsCreator/zzzz__HullType_def.hpp"
#include "Technie/PhysicsCreator/zzzz__ICreatorComponent_def.hpp"
#include "Technie/PhysicsCreator/zzzz__IEditorData_def.hpp"
#include "Technie/PhysicsCreator/zzzz__PaintingData_def.hpp"
#include "Technie/PhysicsCreator/zzzz__RigidColliderCreatorChild_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__PhysicsMaterial_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)()>(&::Technie::PhysicsCreator::RigidColliderCreator::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xadce464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.GetGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Technie::PhysicsCreator::RigidColliderCreator::*)()>(&::Technie::PhysicsCreator::RigidColliderCreator::GetGameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadce468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"GetGameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.HasEditorData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::RigidColliderCreator::*)()>(&::Technie::PhysicsCreator::RigidColliderCreator::HasEditorData)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xadce470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"HasEditorData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.GetEditorData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::IEditorData* (::Technie::PhysicsCreator::RigidColliderCreator::*)()>(&::Technie::PhysicsCreator::RigidColliderCreator::GetEditorData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadce4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"GetEditorData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.CreateColliderComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)(::ArrayW<::UnityEngine::Mesh*>)>(&::Technie::PhysicsCreator::RigidColliderCreator::CreateColliderComponents)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xadce4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"CreateColliderComponents", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.RemoveAllColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)()>(&::Technie::PhysicsCreator::RigidColliderCreator::RemoveAllColliders)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xadd1968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"RemoveAllColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.RemoveAllGenerated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)()>(&::Technie::PhysicsCreator::RigidColliderCreator::RemoveAllGenerated)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xadd1c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"RemoveAllGenerated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.IsDeletable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::GameObject*)>(&::Technie::PhysicsCreator::RigidColliderCreator::IsDeletable)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xadd1f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"IsDeletable", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.DestroyImmediateWithUndo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::Technie::PhysicsCreator::RigidColliderCreator::DestroyImmediateWithUndo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xadd1bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"DestroyImmediateWithUndo", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.CreateHullMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)()>(&::Technie::PhysicsCreator::RigidColliderCreator::CreateHullMapping)> {
  constexpr static std::size_t size = 0x238c;
  constexpr static std::size_t addrs = 0xadce6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"CreateHullMapping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.Approximately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Technie::PhysicsCreator::RigidColliderCreator::Approximately)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xadd293c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"Approximately", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.Approximately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t)>(&::Technie::PhysicsCreator::RigidColliderCreator::Approximately)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xadd2a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"Approximately", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.RecreateChildCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)(::Technie::PhysicsCreator::HullMapping*)>(&::Technie::PhysicsCreator::RigidColliderCreator::RecreateChildCollider)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xadd2d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"RecreateChildCollider", {}, {::i2c::type_of<::Technie::PhysicsCreator::HullMapping*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.UpdateCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)(::Technie::PhysicsCreator::Rigid::Hull*)>(&::Technie::PhysicsCreator::RigidColliderCreator::UpdateCollider)> {
  constexpr static std::size_t size = 0x62c;
  constexpr static std::size_t addrs = 0xadd0a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"UpdateCollider", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.SetAllTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)(::Technie::PhysicsCreator::HullType)>(&::Technie::PhysicsCreator::RigidColliderCreator::SetAllTypes)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xadd2e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"SetAllTypes", {}, {::i2c::type_of<::Technie::PhysicsCreator::HullType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.SetAllMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)(::UnityEngine::PhysicsMaterial*)>(&::Technie::PhysicsCreator::RigidColliderCreator::SetAllMaterials)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xadd2f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"SetAllMaterials", {}, {::i2c::type_of<::UnityEngine::PhysicsMaterial*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.SetAllAsChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)(bool)>(&::Technie::PhysicsCreator::RigidColliderCreator::SetAllAsChild)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xadd30a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"SetAllAsChild", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.SetAllAsTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)(bool)>(&::Technie::PhysicsCreator::RigidColliderCreator::SetAllAsTrigger)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xadd31e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"SetAllAsTrigger", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.IsMapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::RigidColliderCreator::*)(::Technie::PhysicsCreator::Rigid::Hull*)>(&::Technie::PhysicsCreator::RigidColliderCreator::IsMapped)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xadd20cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"IsMapped", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.IsMapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::RigidColliderCreator::*)(::UnityEngine::Collider*)>(&::Technie::PhysicsCreator::RigidColliderCreator::IsMapped)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xadd2428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"IsMapped", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.IsMapped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Technie::PhysicsCreator::RigidColliderCreator::*)(::Technie::PhysicsCreator::RigidColliderCreatorChild*)>(&::Technie::PhysicsCreator::RigidColliderCreator::IsMapped)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xadd25ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"IsMapped", {}, {::i2c::type_of<::Technie::PhysicsCreator::RigidColliderCreatorChild*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.AddMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)(::Technie::PhysicsCreator::Rigid::Hull*, ::UnityEngine::Collider*, ::Technie::PhysicsCreator::RigidColliderCreatorChild*)>(&::Technie::PhysicsCreator::RigidColliderCreator::AddMapping)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xadd2ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"AddMapping", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::Technie::PhysicsCreator::RigidColliderCreatorChild*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.RemoveMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)(::Technie::PhysicsCreator::Rigid::Hull*)>(&::Technie::PhysicsCreator::RigidColliderCreator::RemoveMapping)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xadd2358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"RemoveMapping", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.FindMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::HullMapping* (::Technie::PhysicsCreator::RigidColliderCreator::*)(::Technie::PhysicsCreator::RigidColliderCreatorChild*)>(&::Technie::PhysicsCreator::RigidColliderCreator::FindMapping)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xadd2bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"FindMapping", {}, {::i2c::type_of<::Technie::PhysicsCreator::RigidColliderCreatorChild*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.FindMapping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::HullMapping* (::Technie::PhysicsCreator::RigidColliderCreator::*)(::Technie::PhysicsCreator::Rigid::Hull*)>(&::Technie::PhysicsCreator::RigidColliderCreator::FindMapping)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xadd27f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"FindMapping", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.FindSourceHull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Technie::PhysicsCreator::Rigid::Hull* (::Technie::PhysicsCreator::RigidColliderCreator::*)(::Technie::PhysicsCreator::RigidColliderCreatorChild*)>(&::Technie::PhysicsCreator::RigidColliderCreator::FindSourceHull)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xadd3328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"FindSourceHull", {}, {::i2c::type_of<::Technie::PhysicsCreator::RigidColliderCreatorChild*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.FindExistingCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (*)(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::HullMapping*>*, ::Technie::PhysicsCreator::Rigid::Hull*)>(&::Technie::PhysicsCreator::RigidColliderCreator::FindExistingCollider)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xadd2210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"FindExistingCollider", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::HullMapping*>*>(), ::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.CreateAutoHulls
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)(::Technie::PhysicsCreator::Rigid::Hull*, ::ArrayW<::UnityEngine::Mesh*>)>(&::Technie::PhysicsCreator::RigidColliderCreator::CreateAutoHulls)> {
  constexpr static std::size_t size = 0x8e0;
  constexpr static std::size_t addrs = 0xadd1088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"CreateAutoHulls", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.CreateGameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (*)(::StringW)>(&::Technie::PhysicsCreator::RigidColliderCreator::CreateGameObject)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xadd3540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"CreateGameObject", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)()>(&::Technie::PhysicsCreator::RigidColliderCreator::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xadd359c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::RigidColliderCreator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::RigidColliderCreator::*)()>(&::Technie::PhysicsCreator::RigidColliderCreator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadd35a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Technie::PhysicsCreator::PaintingData>& Technie::PhysicsCreator::RigidColliderCreator::__cordl_internal_get_paintingData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintingData;
}
constexpr ::UnityW<::Technie::PhysicsCreator::PaintingData> const& Technie::PhysicsCreator::RigidColliderCreator::__cordl_internal_get_paintingData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintingData;
}
constexpr void Technie::PhysicsCreator::RigidColliderCreator::__cordl_internal_set_paintingData(::UnityW<::Technie::PhysicsCreator::PaintingData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintingData = value;
}
constexpr ::UnityW<::Technie::PhysicsCreator::HullData>& Technie::PhysicsCreator::RigidColliderCreator::__cordl_internal_get_hullData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hullData;
}
constexpr ::UnityW<::Technie::PhysicsCreator::HullData> const& Technie::PhysicsCreator::RigidColliderCreator::__cordl_internal_get_hullData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hullData;
}
constexpr void Technie::PhysicsCreator::RigidColliderCreator::__cordl_internal_set_hullData(::UnityW<::Technie::PhysicsCreator::HullData>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hullData = value;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::HullMapping*>*& Technie::PhysicsCreator::RigidColliderCreator::__cordl_internal_get_hullMapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hullMapping;
}
constexpr ::System::Collections::Generic::List_1<::Technie::PhysicsCreator::HullMapping*>* const& Technie::PhysicsCreator::RigidColliderCreator::__cordl_internal_get_hullMapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hullMapping;
}
constexpr void Technie::PhysicsCreator::RigidColliderCreator::__cordl_internal_set_hullMapping(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::HullMapping*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hullMapping = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Technie::PhysicsCreator::RigidColliderCreator::__cordl_internal_get_debugMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Technie::PhysicsCreator::RigidColliderCreator::__cordl_internal_get_debugMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMesh;
}
constexpr void Technie::PhysicsCreator::RigidColliderCreator::__cordl_internal_set_debugMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugMesh = value;
}
inline void Technie::PhysicsCreator::RigidColliderCreator::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Technie::PhysicsCreator::RigidColliderCreator::GetGameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"GetGameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::RigidColliderCreator::HasEditorData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"HasEditorData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::IEditorData* Technie::PhysicsCreator::RigidColliderCreator::GetEditorData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"GetEditorData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::IEditorData*>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::CreateColliderComponents(::ArrayW<::UnityEngine::Mesh*>  autoHulls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"CreateColliderComponents", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, autoHulls);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::RemoveAllColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"RemoveAllColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::RemoveAllGenerated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"RemoveAllGenerated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::RigidColliderCreator::IsDeletable(::UnityEngine::GameObject*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"IsDeletable", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::DestroyImmediateWithUndo(::UnityEngine::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"DestroyImmediateWithUndo", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::CreateHullMapping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"CreateHullMapping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::RigidColliderCreator::Approximately(::UnityEngine::Vector3  lhs, ::UnityEngine::Vector3  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"Approximately", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool Technie::PhysicsCreator::RigidColliderCreator::Approximately(float_t  lhs, float_t  rhs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"Approximately", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Collider*>)
inline void Technie::PhysicsCreator::RigidColliderCreator::CreateCollider(::Technie::PhysicsCreator::Rigid::Hull*  sourceHull)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                    {"CreateCollider", {::i2c::class_of<T>()}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceHull);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::RecreateChildCollider(::Technie::PhysicsCreator::HullMapping*  mapping)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"RecreateChildCollider", {}, {::i2c::type_of<::Technie::PhysicsCreator::HullMapping*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapping);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Collider*>)
inline void Technie::PhysicsCreator::RigidColliderCreator::RecreateChildCollider(::Technie::PhysicsCreator::HullMapping*  mapping)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                    {"RecreateChildCollider", {::i2c::class_of<T>()}, {::i2c::type_of<::Technie::PhysicsCreator::HullMapping*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mapping);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::UpdateCollider(::Technie::PhysicsCreator::Rigid::Hull*  hull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"UpdateCollider", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hull);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::SetAllTypes(::Technie::PhysicsCreator::HullType  newType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"SetAllTypes", {}, {::i2c::type_of<::Technie::PhysicsCreator::HullType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newType);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::SetAllMaterials(::UnityEngine::PhysicsMaterial*  newMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"SetAllMaterials", {}, {::i2c::type_of<::UnityEngine::PhysicsMaterial*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newMaterial);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::SetAllAsChild(bool  isChild)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"SetAllAsChild", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isChild);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::SetAllAsTrigger(bool  isTrigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"SetAllAsTrigger", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isTrigger);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline ::System::Collections::Generic::List_1<T>* Technie::PhysicsCreator::RigidColliderCreator::FindLocal()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                    {"FindLocal", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method);
}
inline bool Technie::PhysicsCreator::RigidColliderCreator::IsMapped(::Technie::PhysicsCreator::Rigid::Hull*  hull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"IsMapped", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hull);
}
inline bool Technie::PhysicsCreator::RigidColliderCreator::IsMapped(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"IsMapped", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, col);
}
inline bool Technie::PhysicsCreator::RigidColliderCreator::IsMapped(::Technie::PhysicsCreator::RigidColliderCreatorChild*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"IsMapped", {}, {::i2c::type_of<::Technie::PhysicsCreator::RigidColliderCreatorChild*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, child);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::AddMapping(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::UnityEngine::Collider*  col, ::Technie::PhysicsCreator::RigidColliderCreatorChild*  painterChild)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"AddMapping", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::Technie::PhysicsCreator::RigidColliderCreatorChild*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hull, col, painterChild);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::RemoveMapping(::Technie::PhysicsCreator::Rigid::Hull*  hull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"RemoveMapping", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hull);
}
inline ::Technie::PhysicsCreator::HullMapping* Technie::PhysicsCreator::RigidColliderCreator::FindMapping(::Technie::PhysicsCreator::RigidColliderCreatorChild*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"FindMapping", {}, {::i2c::type_of<::Technie::PhysicsCreator::RigidColliderCreatorChild*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::HullMapping*>(this, ___internal_method, child);
}
inline ::Technie::PhysicsCreator::HullMapping* Technie::PhysicsCreator::RigidColliderCreator::FindMapping(::Technie::PhysicsCreator::Rigid::Hull*  hull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"FindMapping", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::HullMapping*>(this, ___internal_method, hull);
}
inline ::Technie::PhysicsCreator::Rigid::Hull* Technie::PhysicsCreator::RigidColliderCreator::FindSourceHull(::Technie::PhysicsCreator::RigidColliderCreatorChild*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"FindSourceHull", {}, {::i2c::type_of<::Technie::PhysicsCreator::RigidColliderCreatorChild*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Technie::PhysicsCreator::Rigid::Hull*>(this, ___internal_method, child);
}
inline ::UnityW<::UnityEngine::Collider> Technie::PhysicsCreator::RigidColliderCreator::FindExistingCollider(::System::Collections::Generic::List_1<::Technie::PhysicsCreator::HullMapping*>*  mappings, ::Technie::PhysicsCreator::Rigid::Hull*  hull)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"FindExistingCollider", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Technie::PhysicsCreator::HullMapping*>*>(), ::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(nullptr, ___internal_method, mappings, hull);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::CreateAutoHulls(::Technie::PhysicsCreator::Rigid::Hull*  hull, ::ArrayW<::UnityEngine::Mesh*>  autoHulls)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"CreateAutoHulls", {}, {::i2c::type_of<::Technie::PhysicsCreator::Rigid::Hull*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Mesh*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hull, autoHulls);
}
inline ::UnityW<::UnityEngine::GameObject> Technie::PhysicsCreator::RigidColliderCreator::CreateGameObject(::StringW  goName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"CreateGameObject", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(nullptr, ___internal_method, goName);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T Technie::PhysicsCreator::RigidColliderCreator::AddComponent(::UnityEngine::GameObject*  targetObj)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                    {"AddComponent", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, targetObj);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Technie::PhysicsCreator::RigidColliderCreator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::RigidColliderCreator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::RigidColliderCreator* Technie::PhysicsCreator::RigidColliderCreator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::RigidColliderCreator*>());
}
/// @brief Convert operator to "::Technie::PhysicsCreator::ICreatorComponent"
constexpr  Technie::PhysicsCreator::RigidColliderCreator::operator ::Technie::PhysicsCreator::ICreatorComponent*() noexcept {
return static_cast<::Technie::PhysicsCreator::ICreatorComponent*>(static_cast<void*>(this));
}
/// @brief Convert to "::Technie::PhysicsCreator::ICreatorComponent"
constexpr ::Technie::PhysicsCreator::ICreatorComponent* Technie::PhysicsCreator::RigidColliderCreator::i___Technie__PhysicsCreator__ICreatorComponent() noexcept {
return static_cast<::Technie::PhysicsCreator::ICreatorComponent*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::RigidColliderCreator::RigidColliderCreator()   {
}
