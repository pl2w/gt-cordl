#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPiece.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_State_impl.hpp"
#include "GlobalNamespace/zzzz__PieceFallbackInfo_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_def.hpp"
#include "GlobalNamespace/zzzz__BuilderArmShelf_def.hpp"
#include "GlobalNamespace/zzzz__BuilderMaterialOptions_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPieceEffectInfo_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiecePrivatePlot_def.hpp"
#include "GlobalNamespace/zzzz__BuilderPiece_State_def.hpp"
#include "GlobalNamespace/zzzz__BuilderResources_def.hpp"
#include "GlobalNamespace/zzzz__GorillaSurfaceOverride_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceComponent_def.hpp"
#include "GlobalNamespace/zzzz__IBuilderPieceFunctional_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderAttachGridPlane_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPool_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Collision_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::Awake)> {
  constexpr static std::size_t size = 0x9a0;
  constexpr static std::size_t addrs = 0x57bee78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(::GorillaTagScripts::BuilderTable*)>(&::GlobalNamespace::BuilderPiece::SetTable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x57bfd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetTable", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaTagScripts::BuilderTable> (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::GetTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57bfd58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetTable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.OnReturnToPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::OnReturnToPool)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x57bfd60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnReturnToPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.OnCreatedByPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::OnCreatedByPool)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x57c0aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnCreatedByPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetupPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(float_t)>(&::GlobalNamespace::BuilderPiece::SetupPiece)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x57c0bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetupPiece", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(int32_t, bool)>(&::GlobalNamespace::BuilderPiece::SetMaterial)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x57c0c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetMaterial", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetPieceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::GetPieceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57c1678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetPieceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetParentPieceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::GetParentPieceId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x57c1680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetParentPieceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetAttachIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::GetAttachIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57c1700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetAttachIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetParentAttachIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::GetParentAttachIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57c1708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetParentAttachIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetPieceActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceComponent*>*, bool)>(&::GlobalNamespace::BuilderPiece::SetPieceActive)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x57c1710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetPieceActive", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceComponent*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.UpdateCollidersEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(bool)>(&::GlobalNamespace::BuilderPiece::UpdateCollidersEnabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x57c189c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"UpdateCollidersEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*, bool)>(&::GlobalNamespace::BuilderPiece::SetActive)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x57bf818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetActive", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetFunctionalPieceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(uint8_t, ::GlobalNamespace::NetPlayer*, int32_t)>(&::GlobalNamespace::BuilderPiece::SetFunctionalPieceState)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x57c18f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetFunctionalPieceState", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(float_t)>(&::GlobalNamespace::BuilderPiece::SetScale)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x57c1a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::GetScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57c1b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.PaintingTint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(bool)>(&::GlobalNamespace::BuilderPiece::PaintingTint)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57c1b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PaintingTint", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.PotentialGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(bool)>(&::GlobalNamespace::BuilderPiece::PotentialGrab)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x57c1c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PotentialGrab", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.PotentialGrabChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BuilderPiece*, bool)>(&::GlobalNamespace::BuilderPiece::PotentialGrabChildren)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x57c1c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PotentialGrabChildren", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.RefreshTint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::RefreshTint)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x57c1b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"RefreshTint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetTint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(float_t)>(&::GlobalNamespace::BuilderPiece::SetTint)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x57c1d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetTint", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetParentPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(int32_t, ::GlobalNamespace::BuilderPiece*, int32_t)>(&::GlobalNamespace::BuilderPiece::SetParentPiece)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x57c2158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetParentPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.ClearParentPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(bool)>(&::GlobalNamespace::BuilderPiece::ClearParentPiece)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x57c28f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"ClearParentPiece", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.RemoveOverlapsWithDifferentPieceRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BuilderPiece*, ::GlobalNamespace::BuilderPiece*, ::GorillaTagScripts::BuilderPool*)>(&::GlobalNamespace::BuilderPiece::RemoveOverlapsWithDifferentPieceRoot)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x57c2a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"RemoveOverlapsWithDifferentPieceRoot", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GorillaTagScripts::BuilderPool*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.AddPieceToParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderPiece::AddPieceToParent)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x57c27e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"AddPieceToParent", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.RemovePieceFromParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderPiece::RemovePieceFromParent)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x57c2418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"RemovePieceFromParent", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetParentHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(::UnityEngine::Transform*, int32_t, bool)>(&::GlobalNamespace::BuilderPiece::SetParentHeld)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x57c2d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetParentHeld", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.ClearParentHeld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::ClearParentHeld)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x57c31e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"ClearParentHeld", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.IsHeldLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::IsHeldLocal)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x57c3314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"IsHeldLocal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.IsHeldBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderPiece::*)(int32_t)>(&::GlobalNamespace::BuilderPiece::IsHeldBy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57c3394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"IsHeldBy", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.IsHeldInLeftHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::IsHeldInLeftHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57c33b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"IsHeldInLeftHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.IsDroppedState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::BuilderPiece_State)>(&::GlobalNamespace::BuilderPiece::IsDroppedState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57c33bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"IsDroppedState", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece_State>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetActivateTimeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(int32_t)>(&::GlobalNamespace::BuilderPiece::SetActivateTimeStamp)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x57c33d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetActivateTimeStamp", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(::GlobalNamespace::BuilderPiece_State, bool)>(&::GlobalNamespace::BuilderPiece::SetState)> {
  constexpr static std::size_t size = 0x8e4;
  constexpr static std::size_t addrs = 0x57c3464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.OnGrabbedAsRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::OnGrabbedAsRoot)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x57c2f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnGrabbedAsRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.OnReleasedAsRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::OnReleasedAsRoot)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x57c30d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnReleasedAsRoot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetKinematic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(bool, bool)>(&::GlobalNamespace::BuilderPiece::SetKinematic)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x57c3f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetKinematic", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.ClearCollisionHistory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::ClearCollisionHistory)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x57bfc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"ClearCollisionHistory", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.OnCollisionEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(::UnityEngine::Collision*)>(&::GlobalNamespace::BuilderPiece::OnCollisionEnter)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x57c43e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetExpectedGrabCollisionLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::GetExpectedGrabCollisionLayer)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x57c3d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetExpectedGrabCollisionLayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.UpdateGrabbedPieceCollisionLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::UpdateGrabbedPieceCollisionLayer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x57c45a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"UpdateGrabbedPieceCollisionLayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetChildrenCollisionLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(int32_t)>(&::GlobalNamespace::BuilderPiece::SetChildrenCollisionLayer)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x57c3eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetChildrenCollisionLayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(bool, bool)>(&::GlobalNamespace::BuilderPiece::SetStatic)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x57c435c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetStatic", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.FindActiveRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::FindActiveRenderers)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x57bf910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"FindActiveRenderers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetDirectRenderersVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(bool)>(&::GlobalNamespace::BuilderPiece::SetDirectRenderersVisible)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x57c4628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetDirectRenderersVisible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.SetChildrenState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(::GlobalNamespace::BuilderPiece_State, bool)>(&::GlobalNamespace::BuilderPiece::SetChildrenState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x57c42c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetChildrenState", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.OnCreate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::OnCreate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x57c5338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnCreate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.OnPlacementDeserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::OnPlacementDeserialized)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x57c5448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnPlacementDeserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.PlayPlacementFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::PlayPlacementFx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57c5548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayPlacementFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.PlayDisconnectFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::PlayDisconnectFx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57c55f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayDisconnectFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.PlayGrabbedFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::PlayGrabbedFx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57c5610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayGrabbedFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.PlayTooHeavyFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::PlayTooHeavyFx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57c5628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayTooHeavyFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.PlayLocationLockFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::PlayLocationLockFx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57c5640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayLocationLockFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.PlayRecycleFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::PlayRecycleFx)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x57c5658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayRecycleFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.PlayFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::BuilderPiece::PlayFX)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x57c5560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayFX", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetBuilderPieceFromCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BuilderPiece> (*)(::UnityEngine::Collider*)>(&::GlobalNamespace::BuilderPiece::GetBuilderPieceFromCollider)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x57c5670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetBuilderPieceFromCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetBuilderPieceFromTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BuilderPiece> (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::BuilderPiece::GetBuilderPieceFromTransform)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x57c5740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetBuilderPieceFromTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.MakePieceRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderPiece::MakePieceRoot)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x57c581c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"MakePieceRoot", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetRootPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BuilderPiece> (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::GetRootPiece)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x57c2ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetRootPiece", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.IsPrivatePlot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::IsPrivatePlot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57c592c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"IsPrivatePlot", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.TryGetPlotComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderPiece::*)(::by_ref<::GlobalNamespace::BuilderPiecePrivatePlot*>)>(&::GlobalNamespace::BuilderPiece::TryGetPlotComponent)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x57c5934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"TryGetPlotComponent", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BuilderPiecePrivatePlot*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.CanPlayerAttachPieceToPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::GlobalNamespace::BuilderPiece*, ::GlobalNamespace::BuilderPiece*)>(&::GlobalNamespace::BuilderPiece::CanPlayerAttachPieceToPiece)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x57c595c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"CanPlayerAttachPieceToPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.CanPlayerGrabPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderPiece::*)(int32_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::BuilderPiece::CanPlayerGrabPiece)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x57c5da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"CanPlayerGrabPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.IsPieceMoving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::IsPieceMoving)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x57c6014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"IsPieceMoving", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetAttachedBuiltInPiece
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BuilderPiece> (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::GetAttachedBuiltInPiece)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x57c5abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetAttachedBuiltInPiece", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetChainCostAndCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderPiece::*)(::ArrayW<int32_t>)>(&::GlobalNamespace::BuilderPiece::GetChainCostAndCount)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x57c61c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetChainCostAndCount", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetChildCountAndCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderPiece::*)(::ArrayW<int32_t>)>(&::GlobalNamespace::BuilderPiece::GetChildCountAndCost)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x57c6368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetChildCountAndCost", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetChildCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::GetChildCount)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x57c2c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetChildCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetChainCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(::ArrayW<int32_t>)>(&::GlobalNamespace::BuilderPiece::GetChainCost)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x57c656c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetChainCost", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.AddChildCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(::ArrayW<int32_t>)>(&::GlobalNamespace::BuilderPiece::AddChildCost)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x57c6710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"AddChildCost", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.BumpTwistToPositionRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(uint8_t, int8_t, int8_t, int32_t, ::GorillaTagScripts::BuilderAttachGridPlane*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::GlobalNamespace::BuilderPiece::BumpTwistToPositionRotation)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x57c68f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"BumpTwistToPositionRotation", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.TwistToLocalRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::BuilderPiece::*)(uint8_t, int32_t)>(&::GlobalNamespace::BuilderPiece::TwistToLocalRotation)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x57c6d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"TwistToLocalRotation", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetPiecePlacement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::GetPiecePlacement)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x57c6f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetPiecePlacement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetPieceTwist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::GetPieceTwist)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x57c6fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetPieceTwist", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece.GetPieceBumpOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)(uint8_t, ::by_ref<int8_t>, ::by_ref<int8_t>)>(&::GlobalNamespace::BuilderPiece::GetPieceBumpOffset)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x57c71f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetPieceBumpOffset", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<int8_t>>(), ::i2c::type_of<::by_ref<int8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BuilderPiece._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BuilderPiece::*)()>(&::GlobalNamespace::BuilderPiece::_ctor)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x57c7544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BuilderPiece::__cordl_internal_get_displayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr ::StringW const& GlobalNamespace::BuilderPiece::__cordl_internal_get_displayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayName;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_displayName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayName = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderMaterialOptions>& GlobalNamespace::BuilderPiece::__cordl_internal_get_materialOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialOptions;
}
constexpr ::UnityW<::GlobalNamespace::BuilderMaterialOptions> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_materialOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialOptions;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_materialOptions(::UnityW<::GlobalNamespace::BuilderMaterialOptions>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialOptions = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderResources>& GlobalNamespace::BuilderPiece::__cordl_internal_get_cost()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cost;
}
constexpr ::UnityW<::GlobalNamespace::BuilderResources> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_cost() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cost;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_cost(::UnityW<::GlobalNamespace::BuilderResources>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cost = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BuilderPiece::__cordl_internal_get_desiredShelfOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredShelfOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BuilderPiece::__cordl_internal_get_desiredShelfOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredShelfOffset;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_desiredShelfOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___desiredShelfOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BuilderPiece::__cordl_internal_get_desiredShelfRotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredShelfRotationOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BuilderPiece::__cordl_internal_get_desiredShelfRotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___desiredShelfRotationOffset;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_desiredShelfRotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___desiredShelfRotationOffset = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPieceEffectInfo>& GlobalNamespace::BuilderPiece::__cordl_internal_get_fXInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fXInfo;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPieceEffectInfo> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_fXInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fXInfo;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_fXInfo(::UnityW<::GlobalNamespace::BuilderPieceEffectInfo>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fXInfo = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_materialSwapTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialSwapTargets;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_materialSwapTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialSwapTargets;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_materialSwapTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialSwapTargets = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_surfaceOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceOverrides;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_surfaceOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___surfaceOverrides;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_surfaceOverrides(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___surfaceOverrides = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BuilderPiece::__cordl_internal_get_scaleRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_scaleRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scaleRoot;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_scaleRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scaleRoot = value;
}
constexpr bool& GlobalNamespace::BuilderPiece::__cordl_internal_get_isBuiltIntoTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBuiltIntoTable;
}
constexpr bool const& GlobalNamespace::BuilderPiece::__cordl_internal_get_isBuiltIntoTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBuiltIntoTable;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_isBuiltIntoTable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBuiltIntoTable = value;
}
constexpr bool& GlobalNamespace::BuilderPiece::__cordl_internal_get_isArmShelf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isArmShelf;
}
constexpr bool const& GlobalNamespace::BuilderPiece::__cordl_internal_get_isArmShelf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isArmShelf;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_isArmShelf(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isArmShelf = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderArmShelf>& GlobalNamespace::BuilderPiece::__cordl_internal_get_armShelf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armShelf;
}
constexpr ::UnityW<::GlobalNamespace::BuilderArmShelf> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_armShelf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___armShelf;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_armShelf(::UnityW<::GlobalNamespace::BuilderArmShelf>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___armShelf = value;
}
constexpr bool& GlobalNamespace::BuilderPiece::__cordl_internal_get_suppressMaterialWarnings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suppressMaterialWarnings;
}
constexpr bool const& GlobalNamespace::BuilderPiece::__cordl_internal_get_suppressMaterialWarnings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___suppressMaterialWarnings;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_suppressMaterialWarnings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___suppressMaterialWarnings = value;
}
constexpr bool& GlobalNamespace::BuilderPiece::__cordl_internal_get_isPrivatePlot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPrivatePlot;
}
constexpr bool const& GlobalNamespace::BuilderPiece::__cordl_internal_get_isPrivatePlot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPrivatePlot;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_isPrivatePlot(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPrivatePlot = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_privatePlotIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privatePlotIndex;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_privatePlotIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___privatePlotIndex;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_privatePlotIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___privatePlotIndex = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>& GlobalNamespace::BuilderPiece::__cordl_internal_get_plotComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plotComponent;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_plotComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___plotComponent;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_plotComponent(::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___plotComponent = value;
}
constexpr bool& GlobalNamespace::BuilderPiece::__cordl_internal_get_attachPlayerToPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachPlayerToPiece;
}
constexpr bool const& GlobalNamespace::BuilderPiece::__cordl_internal_get_attachPlayerToPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachPlayerToPiece;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_attachPlayerToPiece(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachPlayerToPiece = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceType;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceType;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_pieceType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceType = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceId;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceId;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_pieceId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceId = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceDataIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceDataIndex;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceDataIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceDataIndex;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_pieceDataIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceDataIndex = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_materialType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_materialType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialType;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_materialType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialType = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_heldByPlayerActorNumber()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldByPlayerActorNumber;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_heldByPlayerActorNumber() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldByPlayerActorNumber;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_heldByPlayerActorNumber(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldByPlayerActorNumber = value;
}
constexpr bool& GlobalNamespace::BuilderPiece::__cordl_internal_get_heldInLeftHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldInLeftHand;
}
constexpr bool const& GlobalNamespace::BuilderPiece::__cordl_internal_get_heldInLeftHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heldInLeftHand;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_heldInLeftHand(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heldInLeftHand = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::BuilderPiece::__cordl_internal_get_parentHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHeld;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_parentHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentHeld;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_parentHeld(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentHeld = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GlobalNamespace::BuilderPiece::__cordl_internal_get_parentPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_parentPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentPiece;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_parentPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentPiece = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GlobalNamespace::BuilderPiece::__cordl_internal_get_firstChildPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstChildPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_firstChildPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___firstChildPiece;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_firstChildPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___firstChildPiece = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GlobalNamespace::BuilderPiece::__cordl_internal_get_nextSiblingPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSiblingPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_nextSiblingPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextSiblingPiece;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_nextSiblingPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextSiblingPiece = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_attachIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachIndex;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_attachIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attachIndex;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_attachIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attachIndex = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_parentAttachIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentAttachIndex;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_parentAttachIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentAttachIndex;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_parentAttachIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentAttachIndex = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_shelfOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfOwner;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_shelfOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shelfOwner;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_shelfOwner(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shelfOwner = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_gridPlanes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridPlanes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_gridPlanes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gridPlanes;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_gridPlanes(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gridPlanes = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliders;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliders = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_placedOnlyColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placedOnlyColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_placedOnlyColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___placedOnlyColliders;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_placedOnlyColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___placedOnlyColliders = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_currentColliderLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentColliderLayer;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_currentColliderLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentColliderLayer;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_currentColliderLayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentColliderLayer = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_onlyWhenPlacedBehaviours()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyWhenPlacedBehaviours;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_onlyWhenPlacedBehaviours() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyWhenPlacedBehaviours;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_onlyWhenPlacedBehaviours(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Behaviour>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyWhenPlacedBehaviours = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_onlyWhenPlaced()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyWhenPlaced;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_onlyWhenPlaced() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyWhenPlaced;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_onlyWhenPlaced(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyWhenPlaced = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_onlyWhenNotPlaced()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyWhenNotPlaced;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_onlyWhenNotPlaced() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onlyWhenNotPlaced;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_onlyWhenNotPlaced(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onlyWhenNotPlaced = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceComponent*>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceComponents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceComponents;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceComponent*>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceComponents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceComponents;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_pieceComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceComponent*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceComponents = value;
}
constexpr ::GlobalNamespace::IBuilderPieceFunctional*& GlobalNamespace::BuilderPiece::__cordl_internal_get_functionalPieceComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___functionalPieceComponent;
}
constexpr ::GlobalNamespace::IBuilderPieceFunctional* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_functionalPieceComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___functionalPieceComponent;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_functionalPieceComponent(::GlobalNamespace::IBuilderPieceFunctional*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___functionalPieceComponent = value;
}
constexpr uint8_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_functionalPieceState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___functionalPieceState;
}
constexpr uint8_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_functionalPieceState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___functionalPieceState;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_functionalPieceState(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___functionalPieceState = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceFunctionComponents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceFunctionComponents;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceFunctionComponents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceFunctionComponents;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_pieceFunctionComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceFunctionComponents = value;
}
constexpr bool& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceComponentsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceComponentsActive;
}
constexpr bool const& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceComponentsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceComponentsActive;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_pieceComponentsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceComponentsActive = value;
}
constexpr bool& GlobalNamespace::BuilderPiece::__cordl_internal_get_areMeshesToggledOnPlace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areMeshesToggledOnPlace;
}
constexpr bool const& GlobalNamespace::BuilderPiece::__cordl_internal_get_areMeshesToggledOnPlace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___areMeshesToggledOnPlace;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_areMeshesToggledOnPlace(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___areMeshesToggledOnPlace = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::BuilderPiece::__cordl_internal_get_rigidBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_rigidBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigidBody;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigidBody = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_activatedTimeStamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedTimeStamp;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_activatedTimeStamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___activatedTimeStamp;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_activatedTimeStamp(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___activatedTimeStamp = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_preventSnapUntilMoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preventSnapUntilMoved;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_preventSnapUntilMoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preventSnapUntilMoved;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_preventSnapUntilMoved(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preventSnapUntilMoved = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BuilderPiece::__cordl_internal_get_preventSnapUntilMovedFromPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preventSnapUntilMovedFromPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BuilderPiece::__cordl_internal_get_preventSnapUntilMovedFromPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preventSnapUntilMovedFromPos;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_preventSnapUntilMovedFromPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preventSnapUntilMovedFromPos = value;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& GlobalNamespace::BuilderPiece::__cordl_internal_get_requestedParentPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedParentPiece;
}
constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_requestedParentPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requestedParentPiece;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_requestedParentPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requestedParentPiece = value;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& GlobalNamespace::BuilderPiece::__cordl_internal_get_tableOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableOwner;
}
constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_tableOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tableOwner;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_tableOwner(::UnityW<::GorillaTagScripts::BuilderTable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tableOwner = value;
}
constexpr ::GlobalNamespace::PieceFallbackInfo& GlobalNamespace::BuilderPiece::__cordl_internal_get_fallbackInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackInfo;
}
constexpr ::GlobalNamespace::PieceFallbackInfo const& GlobalNamespace::BuilderPiece::__cordl_internal_get_fallbackInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fallbackInfo;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_fallbackInfo(::GlobalNamespace::PieceFallbackInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fallbackInfo = value;
}
constexpr bool& GlobalNamespace::BuilderPiece::__cordl_internal_get_overrideSavedPiece()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideSavedPiece;
}
constexpr bool const& GlobalNamespace::BuilderPiece::__cordl_internal_get_overrideSavedPiece() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overrideSavedPiece;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_overrideSavedPiece(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overrideSavedPiece = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_savedPieceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedPieceType;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_savedPieceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedPieceType;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_savedPieceType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedPieceType = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_savedMaterialType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedMaterialType;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_savedMaterialType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___savedMaterialType;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_savedMaterialType(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___savedMaterialType = value;
}
constexpr float_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceScale;
}
constexpr float_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_pieceScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pieceScale;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_pieceScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pieceScale = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::BuilderPiece::__cordl_internal_get_collisionEnterHistory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionEnterHistory;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::BuilderPiece::__cordl_internal_get_collisionEnterHistory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionEnterHistory;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_collisionEnterHistory(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionEnterHistory = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_collisionEnterLimit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionEnterLimit;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_collisionEnterLimit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionEnterLimit;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_collisionEnterLimit(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionEnterLimit = value;
}
constexpr float_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_collisionEnterCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionEnterCooldown;
}
constexpr float_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_collisionEnterCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collisionEnterCooldown;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_collisionEnterCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collisionEnterCooldown = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_oldCollisionTimeIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldCollisionTimeIndex;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_oldCollisionTimeIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oldCollisionTimeIndex;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_oldCollisionTimeIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oldCollisionTimeIndex = value;
}
constexpr ::GlobalNamespace::BuilderPiece_State& GlobalNamespace::BuilderPiece::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr ::GlobalNamespace::BuilderPiece_State const& GlobalNamespace::BuilderPiece::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_state(::GlobalNamespace::BuilderPiece_State  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
constexpr bool& GlobalNamespace::BuilderPiece::__cordl_internal_get_isStatic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStatic;
}
constexpr bool const& GlobalNamespace::BuilderPiece::__cordl_internal_get_isStatic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isStatic;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_isStatic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isStatic = value;
}
constexpr bool& GlobalNamespace::BuilderPiece::__cordl_internal_get_listeningToHandLinks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listeningToHandLinks;
}
constexpr bool const& GlobalNamespace::BuilderPiece::__cordl_internal_get_listeningToHandLinks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___listeningToHandLinks;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_listeningToHandLinks(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___listeningToHandLinks = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_renderingDirect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderingDirect;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_renderingDirect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderingDirect;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_renderingDirect(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderingDirect = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_renderingIndirect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderingIndirect;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_renderingIndirect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderingIndirect;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_renderingIndirect(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderingIndirect = value;
}
constexpr ::System::Collections::Generic::List_1<int32_t>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_renderingIndirectTransformIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderingIndirectTransformIndex;
}
constexpr ::System::Collections::Generic::List_1<int32_t>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_renderingIndirectTransformIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderingIndirectTransformIndex;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_renderingIndirectTransformIndex(::System::Collections::Generic::List_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderingIndirectTransformIndex = value;
}
constexpr float_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_tint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tint;
}
constexpr float_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_tint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tint;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_tint(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tint = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_paintingCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintingCount;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_paintingCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintingCount;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_paintingCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintingCount = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_potentialGrabCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialGrabCount;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_potentialGrabCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialGrabCount;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_potentialGrabCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___potentialGrabCount = value;
}
constexpr int32_t& GlobalNamespace::BuilderPiece::__cordl_internal_get_potentialGrabChildCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialGrabChildCount;
}
constexpr int32_t const& GlobalNamespace::BuilderPiece::__cordl_internal_get_potentialGrabChildCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___potentialGrabChildCount;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_potentialGrabChildCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___potentialGrabChildCount = value;
}
constexpr bool& GlobalNamespace::BuilderPiece::__cordl_internal_get_forcedFrozen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedFrozen;
}
constexpr bool const& GlobalNamespace::BuilderPiece::__cordl_internal_get_forcedFrozen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___forcedFrozen;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_forcedFrozen(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___forcedFrozen = value;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& GlobalNamespace::BuilderPiece::__cordl_internal_get_collidersEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersEntered;
}
constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& GlobalNamespace::BuilderPiece::__cordl_internal_get_collidersEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___collidersEntered;
}
constexpr void GlobalNamespace::BuilderPiece::__cordl_internal_set_collidersEntered(::System::Collections::Generic::HashSet_1<int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___collidersEntered = value;
}
inline void GlobalNamespace::BuilderPiece::setStaticF_tempRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*, "tempRenderers", ::GlobalNamespace::BuilderPiece*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* GlobalNamespace::BuilderPiece::getStaticF_tempRenderers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*, "tempRenderers", ::GlobalNamespace::BuilderPiece*>();
}
inline void GlobalNamespace::BuilderPiece::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::SetTable(::GorillaTagScripts::BuilderTable*  table)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetTable", {}, {::i2c::type_of<::GorillaTagScripts::BuilderTable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline ::UnityW<::GorillaTagScripts::BuilderTable> GlobalNamespace::BuilderPiece::GetTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaTagScripts::BuilderTable>>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::OnReturnToPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnReturnToPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::OnCreatedByPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnCreatedByPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::SetupPiece(float_t  gridSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetupPiece", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gridSize);
}
inline void GlobalNamespace::BuilderPiece::SetMaterial(int32_t  inMaterialType, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetMaterial", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inMaterialType, force);
}
inline int32_t GlobalNamespace::BuilderPiece::GetPieceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetPieceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BuilderPiece::GetParentPieceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetParentPieceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BuilderPiece::GetAttachIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetAttachIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BuilderPiece::GetParentAttachIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetParentAttachIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::SetPieceActive(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceComponent*>*  components, bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetPieceActive", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceComponent*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, components, active);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Behaviour*>)
inline void GlobalNamespace::BuilderPiece::SetBehavioursEnabled(::System::Collections::Generic::List_1<T>*  components, bool  enabled)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                    {"SetBehavioursEnabled", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, components, enabled);
}
inline void GlobalNamespace::BuilderPiece::UpdateCollidersEnabled(bool  _enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"UpdateCollidersEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _enabled);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Collider*>)
inline void GlobalNamespace::BuilderPiece::SetCollidersEnabled(::System::Collections::Generic::List_1<T>*  components, bool  enabled)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                    {"SetCollidersEnabled", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, components, enabled);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Collider*>)
inline void GlobalNamespace::BuilderPiece::SetColliderLayers(::System::Collections::Generic::List_1<T>*  components, int32_t  layer)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                    {"SetColliderLayers", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, components, layer);
}
inline void GlobalNamespace::BuilderPiece::SetActive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects, bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetActive", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObjects, active);
}
inline void GlobalNamespace::BuilderPiece::SetFunctionalPieceState(uint8_t  fState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetFunctionalPieceState", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fState, instigator, timeStamp);
}
inline void GlobalNamespace::BuilderPiece::SetScale(float_t  scale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scale);
}
inline float_t GlobalNamespace::BuilderPiece::GetScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::PaintingTint(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PaintingTint", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::BuilderPiece::PotentialGrab(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PotentialGrab", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void GlobalNamespace::BuilderPiece::PotentialGrabChildren(::GlobalNamespace::BuilderPiece*  piece, bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PotentialGrabChildren", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, piece, enable);
}
inline void GlobalNamespace::BuilderPiece::RefreshTint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"RefreshTint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::SetTint(float_t  tint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetTint", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tint);
}
inline void GlobalNamespace::BuilderPiece::SetParentPiece(int32_t  newAttachIndex, ::GlobalNamespace::BuilderPiece*  newParentPiece, int32_t  newParentAttachIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetParentPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAttachIndex, newParentPiece, newParentAttachIndex);
}
inline void GlobalNamespace::BuilderPiece::ClearParentPiece(bool  ignoreSnaps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"ClearParentPiece", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ignoreSnaps);
}
inline void GlobalNamespace::BuilderPiece::RemoveOverlapsWithDifferentPieceRoot(::GlobalNamespace::BuilderPiece*  piece, ::GlobalNamespace::BuilderPiece*  root, ::GorillaTagScripts::BuilderPool*  pool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"RemoveOverlapsWithDifferentPieceRoot", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GorillaTagScripts::BuilderPool*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, piece, root, pool);
}
inline void GlobalNamespace::BuilderPiece::AddPieceToParent(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"AddPieceToParent", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, piece);
}
inline void GlobalNamespace::BuilderPiece::RemovePieceFromParent(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"RemovePieceFromParent", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, piece);
}
inline void GlobalNamespace::BuilderPiece::SetParentHeld(::UnityEngine::Transform*  parentHeld, int32_t  heldByPlayerActorNumber, bool  heldInLeftHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetParentHeld", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentHeld, heldByPlayerActorNumber, heldInLeftHand);
}
inline void GlobalNamespace::BuilderPiece::ClearParentHeld()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"ClearParentHeld", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderPiece::IsHeldLocal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"IsHeldLocal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderPiece::IsHeldBy(int32_t  actorNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"IsHeldBy", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actorNumber);
}
inline bool GlobalNamespace::BuilderPiece::IsHeldInLeftHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"IsHeldInLeftHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderPiece::IsDroppedState(::GlobalNamespace::BuilderPiece_State  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"IsDroppedState", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece_State>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state);
}
inline void GlobalNamespace::BuilderPiece::SetActivateTimeStamp(int32_t  timeStamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetActivateTimeStamp", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeStamp);
}
inline void GlobalNamespace::BuilderPiece::SetState(::GlobalNamespace::BuilderPiece_State  newState, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetState", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, force);
}
inline void GlobalNamespace::BuilderPiece::OnGrabbedAsRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnGrabbedAsRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::OnReleasedAsRoot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnReleasedAsRoot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::SetKinematic(bool  kinematic, bool  destroyImmediate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetKinematic", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, kinematic, destroyImmediate);
}
inline void GlobalNamespace::BuilderPiece::ClearCollisionHistory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"ClearCollisionHistory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::OnCollisionEnter(::UnityEngine::Collision*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnCollisionEnter", {}, {::i2c::type_of<::UnityEngine::Collision*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline int32_t GlobalNamespace::BuilderPiece::GetExpectedGrabCollisionLayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetExpectedGrabCollisionLayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::UpdateGrabbedPieceCollisionLayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"UpdateGrabbedPieceCollisionLayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::SetChildrenCollisionLayer(int32_t  layer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetChildrenCollisionLayer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layer);
}
inline void GlobalNamespace::BuilderPiece::SetStatic(bool  isStatic, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetStatic", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isStatic, force);
}
inline void GlobalNamespace::BuilderPiece::FindActiveRenderers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"FindActiveRenderers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::SetDirectRenderersVisible(bool  visible)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetDirectRenderersVisible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visible);
}
inline void GlobalNamespace::BuilderPiece::SetChildrenState(::GlobalNamespace::BuilderPiece_State  newState, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"SetChildrenState", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece_State>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState, force);
}
inline void GlobalNamespace::BuilderPiece::OnCreate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnCreate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::OnPlacementDeserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"OnPlacementDeserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::PlayPlacementFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayPlacementFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::PlayDisconnectFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayDisconnectFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::PlayGrabbedFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayGrabbedFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::PlayTooHeavyFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayTooHeavyFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::PlayLocationLockFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayLocationLockFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::PlayRecycleFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayRecycleFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::PlayFX(::UnityEngine::GameObject*  fx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"PlayFX", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fx);
}
inline ::UnityW<::GlobalNamespace::BuilderPiece> GlobalNamespace::BuilderPiece::GetBuilderPieceFromCollider(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetBuilderPieceFromCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BuilderPiece>>(nullptr, ___internal_method, collider);
}
inline ::UnityW<::GlobalNamespace::BuilderPiece> GlobalNamespace::BuilderPiece::GetBuilderPieceFromTransform(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetBuilderPieceFromTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BuilderPiece>>(nullptr, ___internal_method, transform);
}
inline void GlobalNamespace::BuilderPiece::MakePieceRoot(::GlobalNamespace::BuilderPiece*  piece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"MakePieceRoot", {}, {::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, piece);
}
inline ::UnityW<::GlobalNamespace::BuilderPiece> GlobalNamespace::BuilderPiece::GetRootPiece()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetRootPiece", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BuilderPiece>>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderPiece::IsPrivatePlot()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"IsPrivatePlot", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::BuilderPiece::TryGetPlotComponent(::by_ref<::GlobalNamespace::BuilderPiecePrivatePlot*>  plot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"TryGetPlotComponent", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::BuilderPiecePrivatePlot*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, plot);
}
inline bool GlobalNamespace::BuilderPiece::CanPlayerAttachPieceToPiece(int32_t  playerActorNumber, ::GlobalNamespace::BuilderPiece*  attachingPiece, ::GlobalNamespace::BuilderPiece*  attachToPiece)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"CanPlayerAttachPieceToPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>(), ::i2c::type_of<::GlobalNamespace::BuilderPiece*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, playerActorNumber, attachingPiece, attachToPiece);
}
inline bool GlobalNamespace::BuilderPiece::CanPlayerGrabPiece(int32_t  actorNumber, ::UnityEngine::Vector3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"CanPlayerGrabPiece", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actorNumber, worldPosition);
}
inline bool GlobalNamespace::BuilderPiece::IsPieceMoving()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"IsPieceMoving", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::BuilderPiece> GlobalNamespace::BuilderPiece::GetAttachedBuiltInPiece()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetAttachedBuiltInPiece", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BuilderPiece>>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BuilderPiece::GetChainCostAndCount(::ArrayW<int32_t>  costArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetChainCostAndCount", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, costArray);
}
inline int32_t GlobalNamespace::BuilderPiece::GetChildCountAndCost(::ArrayW<int32_t>  costArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetChildCountAndCost", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, costArray);
}
inline int32_t GlobalNamespace::BuilderPiece::GetChildCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetChildCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::GetChainCost(::ArrayW<int32_t>  costArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetChainCost", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, costArray);
}
inline void GlobalNamespace::BuilderPiece::AddChildCost(::ArrayW<int32_t>  costArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"AddChildCost", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, costArray);
}
inline void GlobalNamespace::BuilderPiece::BumpTwistToPositionRotation(uint8_t  twist, int8_t  xOffset, int8_t  zOffset, int32_t  potentialAttachIndex, ::GorillaTagScripts::BuilderAttachGridPlane*  potentialParentGridPlane, ::by_ref<::UnityEngine::Vector3>  localPosition, ::by_ref<::UnityEngine::Quaternion>  localRotation, ::by_ref<::UnityEngine::Vector3>  worldPosition, ::by_ref<::UnityEngine::Quaternion>  worldRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"BumpTwistToPositionRotation", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int8_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GorillaTagScripts::BuilderAttachGridPlane*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, twist, xOffset, zOffset, potentialAttachIndex, potentialParentGridPlane, localPosition, localRotation, worldPosition, worldRotation);
}
inline ::UnityEngine::Quaternion GlobalNamespace::BuilderPiece::TwistToLocalRotation(uint8_t  twist, int32_t  potentialAttachIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"TwistToLocalRotation", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, twist, potentialAttachIndex);
}
inline int32_t GlobalNamespace::BuilderPiece::GetPiecePlacement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetPiecePlacement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::BuilderPiece::GetPieceTwist()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetPieceTwist", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void GlobalNamespace::BuilderPiece::GetPieceBumpOffset(uint8_t  twist, ::by_ref<int8_t>  xOffset, ::by_ref<int8_t>  zOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {"GetPieceBumpOffset", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<::by_ref<int8_t>>(), ::i2c::type_of<::by_ref<int8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, twist, xOffset, zOffset);
}
inline void GlobalNamespace::BuilderPiece::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BuilderPiece*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BuilderPiece* GlobalNamespace::BuilderPiece::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BuilderPiece*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BuilderPiece::BuilderPiece()   {
}
