#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaBodyRenderer.hpp"
#include "GlobalNamespace/zzzz__GorillaBodyType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Material_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaBodyRenderer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaBodyRenderer_def.hpp"
#include "GlobalNamespace/zzzz__GorillaBodyType_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__SkinnedMeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.get_bodyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaBodyType (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::get_bodyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5901ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"get_bodyType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.set_bodyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)(::GlobalNamespace::GorillaBodyType)>(&::GlobalNamespace::GorillaBodyRenderer::set_bodyType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5901ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"set_bodyType", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.get_renderFace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::get_renderFace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5902120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"get_renderFace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.get_ForceSkeleton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::GorillaBodyRenderer::get_ForceSkeleton)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5902128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"get_ForceSkeleton", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.get_gameModeBodyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaBodyType (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::get_gameModeBodyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5902180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"get_gameModeBodyType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.set_gameModeBodyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)(::GlobalNamespace::GorillaBodyType)>(&::GlobalNamespace::GorillaBodyRenderer::set_gameModeBodyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5902188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"set_gameModeBodyType", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.get_myDefaultSkinMaterialInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::get_myDefaultSkinMaterialInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5902190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"get_myDefaultSkinMaterialInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.set_myDefaultSkinMaterialInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)(::UnityEngine::Material*)>(&::GlobalNamespace::GorillaBodyRenderer::set_myDefaultSkinMaterialInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5902198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"set_myDefaultSkinMaterialInstance", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.GetBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::SkinnedMeshRenderer> (::GlobalNamespace::GorillaBodyRenderer::*)(::GlobalNamespace::GorillaBodyType)>(&::GlobalNamespace::GorillaBodyRenderer::GetBody)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x59021a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"GetBody", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.get_ActiveBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::SkinnedMeshRenderer> (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::get_ActiveBody)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x59021d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"get_ActiveBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.SetAllSkeletons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GlobalNamespace::GorillaBodyRenderer::SetAllSkeletons)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x590220c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetAllSkeletons", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.SetSkeletonBodyActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)(bool)>(&::GlobalNamespace::GorillaBodyRenderer::SetSkeletonBodyActive)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5902614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetSkeletonBodyActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.EnableSkeletonOverlays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Material*)>(&::GlobalNamespace::GorillaBodyRenderer::EnableSkeletonOverlays)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5902644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"EnableSkeletonOverlays", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.DisableSkeletonOverlays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::GorillaBodyRenderer::DisableSkeletonOverlays)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x590284c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"DisableSkeletonOverlays", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.HideSkeletonOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GorillaBodyRenderer::HideSkeletonOverlay)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5902984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"HideSkeletonOverlay", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.SetGameModeBodyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)(::GlobalNamespace::GorillaBodyType)>(&::GlobalNamespace::GorillaBodyRenderer::SetGameModeBodyType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x59029d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetGameModeBodyType", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.SetCosmeticBodyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)(::GlobalNamespace::GorillaBodyType)>(&::GlobalNamespace::GorillaBodyRenderer::SetCosmeticBodyType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5902a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetCosmeticBodyType", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.SetDefaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::SetDefaults)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5902a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetDefaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::Refresh)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59025f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.SetMaterialIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)(int32_t)>(&::GlobalNamespace::GorillaBodyRenderer::SetMaterialIndex)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5902acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetMaterialIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.SetSkinMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)(::UnityEngine::Material*, ::UnityEngine::Material*, bool)>(&::GlobalNamespace::GorillaBodyRenderer::SetSkinMaterials)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x5902b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetSkinMaterials", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.SetupAsLocalPlayerBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::SetupAsLocalPlayerBody)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58fafd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetupAsLocalPlayerBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.GetActiveBodyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GorillaBodyType (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::GetActiveBodyType)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5902a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"GetActiveBodyType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.SetBodyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)(::GlobalNamespace::GorillaBodyType)>(&::GlobalNamespace::GorillaBodyRenderer::SetBodyType)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5901efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetBodyType", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.SetCosmeticBodyMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)(::UnityEngine::Mesh*)>(&::GlobalNamespace::GorillaBodyRenderer::SetCosmeticBodyMesh)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5903220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetCosmeticBodyMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.ClearCosmeticBodyMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::ClearCosmeticBodyMesh)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x59032cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"ClearCosmeticBodyMesh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.SetBodyEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)(::GlobalNamespace::GorillaBodyType, bool)>(&::GlobalNamespace::GorillaBodyRenderer::SetBodyEnabled)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5903044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetBodyEnabled", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5903354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.SharedStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::SharedStart)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5903664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SharedStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::Setup)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x5903358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"Setup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.EnsureInstantiatedMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::EnsureInstantiatedMaterial)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5902e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"EnsureInstantiatedMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.ResetBodyMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::ResetBodyMaterial)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5903780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"ResetBodyMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)(::UnityEngine::Color)>(&::GlobalNamespace::GorillaBodyRenderer::UpdateColor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5903704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"UpdateColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer.UpdateBodyMaterialColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)(::UnityEngine::Color)>(&::GlobalNamespace::GorillaBodyRenderer::UpdateBodyMaterialColor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x590315c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"UpdateBodyMaterialColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer::*)()>(&::GlobalNamespace::GorillaBodyRenderer::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5903800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GorillaBodyType& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__bodyType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyType;
}
constexpr ::GlobalNamespace::GorillaBodyType const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__bodyType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyType;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set__bodyType(::GlobalNamespace::GorillaBodyType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyType = value;
}
constexpr bool& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__renderFace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderFace;
}
constexpr bool const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__renderFace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderFace;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set__renderFace(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderFace = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_faceRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_faceRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___faceRenderer;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set_faceRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___faceRenderer = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_bodyDefault()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyDefault;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_bodyDefault() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyDefault;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set_bodyDefault(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyDefault = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_bodyNoHead()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyNoHead;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_bodyNoHead() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyNoHead;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set_bodyNoHead(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyNoHead = value;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_bodySkeleton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodySkeleton;
}
constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_bodySkeleton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodySkeleton;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set_bodySkeleton(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodySkeleton = value;
}
constexpr int32_t& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__lastMatIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMatIndex;
}
constexpr int32_t const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__lastMatIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastMatIndex;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set__lastMatIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastMatIndex = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_defaultBodyMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultBodyMesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_defaultBodyMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultBodyMesh;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set_defaultBodyMesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultBodyMesh = value;
}
constexpr ::GlobalNamespace::GorillaBodyType& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__gameModeBodyType_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameModeBodyType_k__BackingField;
}
constexpr ::GlobalNamespace::GorillaBodyType const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__gameModeBodyType_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameModeBodyType_k__BackingField;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set__gameModeBodyType_k__BackingField(::GlobalNamespace::GorillaBodyType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameModeBodyType_k__BackingField = value;
}
constexpr ::GlobalNamespace::GorillaBodyType& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_cosmeticBodyType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticBodyType;
}
constexpr ::GlobalNamespace::GorillaBodyType const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_cosmeticBodyType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cosmeticBodyType;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set_cosmeticBodyType(::GlobalNamespace::GorillaBodyType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cosmeticBodyType = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__myDefaultSkinMaterialInstance_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myDefaultSkinMaterialInstance_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__myDefaultSkinMaterialInstance_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____myDefaultSkinMaterialInstance_k__BackingField;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set__myDefaultSkinMaterialInstance_k__BackingField(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____myDefaultSkinMaterialInstance_k__BackingField = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__cachedSkinMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedSkinMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__cachedSkinMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedSkinMaterials;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set__cachedSkinMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedSkinMaterials = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__defaultSkinMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultSkinMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__defaultSkinMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultSkinMaterials;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set__defaultSkinMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultSkinMaterials = value;
}
constexpr bool& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__applySkinToHeadlessMesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applySkinToHeadlessMesh;
}
constexpr bool const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__applySkinToHeadlessMesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____applySkinToHeadlessMesh;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set__applySkinToHeadlessMesh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____applySkinToHeadlessMesh = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__renderersCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderersCache;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>> const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get__renderersCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderersCache;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set__renderersCache(::ArrayW<::UnityW<::UnityEngine::SkinnedMeshRenderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderersCache = value;
}
constexpr ::UnityW<::GlobalNamespace::VRRig>& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_rig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr ::UnityW<::GlobalNamespace::VRRig> const& GlobalNamespace::GorillaBodyRenderer::__cordl_internal_get_rig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rig;
}
constexpr void GlobalNamespace::GorillaBodyRenderer::__cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rig = value;
}
inline void GlobalNamespace::GorillaBodyRenderer::setStaticF_oopsAllSkeletons(bool  value)  {
::cordl_internals::setStaticField<bool, "oopsAllSkeletons", ::GlobalNamespace::GorillaBodyRenderer*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::GorillaBodyRenderer::getStaticF_oopsAllSkeletons()  {
return ::cordl_internals::getStaticField<bool, "oopsAllSkeletons", ::GlobalNamespace::GorillaBodyRenderer*>();
}
inline void GlobalNamespace::GorillaBodyRenderer::setStaticF_gEmptyDefaultMats(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "gEmptyDefaultMats", ::GlobalNamespace::GorillaBodyRenderer*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* GlobalNamespace::GorillaBodyRenderer::getStaticF_gEmptyDefaultMats()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "gEmptyDefaultMats", ::GlobalNamespace::GorillaBodyRenderer*>();
}
inline ::GlobalNamespace::GorillaBodyType GlobalNamespace::GorillaBodyRenderer::get_bodyType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"get_bodyType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaBodyType>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::set_bodyType(::GlobalNamespace::GorillaBodyType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"set_bodyType", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GorillaBodyRenderer::get_renderFace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"get_renderFace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::GorillaBodyRenderer::get_ForceSkeleton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"get_ForceSkeleton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::GorillaBodyType GlobalNamespace::GorillaBodyRenderer::get_gameModeBodyType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"get_gameModeBodyType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaBodyType>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::set_gameModeBodyType(::GlobalNamespace::GorillaBodyType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"set_gameModeBodyType", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> GlobalNamespace::GorillaBodyRenderer::get_myDefaultSkinMaterialInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"get_myDefaultSkinMaterialInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::set_myDefaultSkinMaterialInstance(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"set_myDefaultSkinMaterialInstance", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> GlobalNamespace::GorillaBodyRenderer::GetBody(::GlobalNamespace::GorillaBodyType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"GetBody", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::SkinnedMeshRenderer>>(this, ___internal_method, type);
}
inline ::UnityW<::UnityEngine::SkinnedMeshRenderer> GlobalNamespace::GorillaBodyRenderer::get_ActiveBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"get_ActiveBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::SkinnedMeshRenderer>>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::SetAllSkeletons(bool  allSkeletons)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetAllSkeletons", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, allSkeletons);
}
inline void GlobalNamespace::GorillaBodyRenderer::SetSkeletonBodyActive(bool  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetSkeletonBodyActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline void GlobalNamespace::GorillaBodyRenderer::EnableSkeletonOverlays(::UnityEngine::Material*  bodyMaterial, ::UnityEngine::Material*  skeletonMaterial)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"EnableSkeletonOverlays", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, bodyMaterial, skeletonMaterial);
}
inline void GlobalNamespace::GorillaBodyRenderer::DisableSkeletonOverlays()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"DisableSkeletonOverlays", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::HideSkeletonOverlay(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"HideSkeletonOverlay", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rig);
}
inline void GlobalNamespace::GorillaBodyRenderer::SetGameModeBodyType(::GlobalNamespace::GorillaBodyType  bodyType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetGameModeBodyType", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bodyType);
}
inline void GlobalNamespace::GorillaBodyRenderer::SetCosmeticBodyType(::GlobalNamespace::GorillaBodyType  bodyType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetCosmeticBodyType", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bodyType);
}
inline void GlobalNamespace::GorillaBodyRenderer::SetDefaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetDefaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::SetMaterialIndex(int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetMaterialIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materialIndex);
}
inline void GlobalNamespace::GorillaBodyRenderer::SetSkinMaterials(::UnityEngine::Material*  bodyMat, ::UnityEngine::Material*  chestMat, bool  allowHeadless)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetSkinMaterials", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bodyMat, chestMat, allowHeadless);
}
inline void GlobalNamespace::GorillaBodyRenderer::SetupAsLocalPlayerBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetupAsLocalPlayerBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaBodyType GlobalNamespace::GorillaBodyRenderer::GetActiveBodyType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"GetActiveBodyType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GorillaBodyType>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::SetBodyType(::GlobalNamespace::GorillaBodyType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetBodyType", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void GlobalNamespace::GorillaBodyRenderer::SetCosmeticBodyMesh(::UnityEngine::Mesh*  mesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetCosmeticBodyMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh);
}
inline void GlobalNamespace::GorillaBodyRenderer::ClearCosmeticBodyMesh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"ClearCosmeticBodyMesh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::SetBodyEnabled(::GlobalNamespace::GorillaBodyType  bodyType, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SetBodyEnabled", {}, {::i2c::type_of<::GlobalNamespace::GorillaBodyType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bodyType, enabled);
}
inline void GlobalNamespace::GorillaBodyRenderer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::SharedStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"SharedStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::Setup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"Setup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::EnsureInstantiatedMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"EnsureInstantiatedMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::ResetBodyMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"ResetBodyMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer::UpdateColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"UpdateColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::GorillaBodyRenderer::UpdateBodyMaterialColor(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {"UpdateBodyMaterialColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::GorillaBodyRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaBodyRenderer* GlobalNamespace::GorillaBodyRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaBodyRenderer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaBodyRenderer::GorillaBodyRenderer()   {
}
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::*)()>(&::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59027ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0._EnableSkeletonOverlays_g__ShowSkeletonOverlay_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::*)(::GlobalNamespace::VRRig*)>(&::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::_EnableSkeletonOverlays_g__ShowSkeletonOverlay_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x59027b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0*>(),
                        {"<EnableSkeletonOverlays>g__ShowSkeletonOverlay|0", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::__cordl_internal_get_bodyMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::__cordl_internal_get_bodyMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bodyMaterial;
}
constexpr void GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::__cordl_internal_set_bodyMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bodyMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::__cordl_internal_get_skeletonMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skeletonMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::__cordl_internal_get_skeletonMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___skeletonMaterial;
}
constexpr void GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::__cordl_internal_set_skeletonMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___skeletonMaterial = value;
}
inline void GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::_EnableSkeletonOverlays_g__ShowSkeletonOverlay_0(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0*>(),
                        {"<EnableSkeletonOverlays>g__ShowSkeletonOverlay|0", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rig);
}
inline ::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0* GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaBodyRenderer___c__DisplayClass33_0::GorillaBodyRenderer___c__DisplayClass33_0()   {
}
