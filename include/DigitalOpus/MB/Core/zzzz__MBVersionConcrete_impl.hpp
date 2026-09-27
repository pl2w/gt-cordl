#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MBVersionConcrete.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MBVersionConcrete_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MBVersionConcrete_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MBVersionInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MBVersion_PipelineType_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete::version)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9dec4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.Is_2017_1_OrNewer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete::Is_2017_1_OrNewer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dec4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"Is_2017_1_OrNewer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.Is_2018_3_OrNewer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete::Is_2018_3_OrNewer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dec4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"Is_2018_3_OrNewer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.GetActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MBVersionConcrete::GetActive)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9dec4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetActive", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.SetActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::GameObject*, bool)>(&::DigitalOpus::MB::Core::MBVersionConcrete::SetActive)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9dec50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"SetActive", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.SetActiveRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::GameObject*, bool)>(&::DigitalOpus::MB::Core::MBVersionConcrete::SetActiveRecursively)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9dec528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"SetActiveRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.FindSceneObjectsOfType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::System::Type*)>(&::DigitalOpus::MB::Core::MBVersionConcrete::FindSceneObjectsOfType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9dec544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"FindSceneObjectsOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.IsSwizzledNormalMapPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete::IsSwizzledNormalMapPlatform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9dec59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"IsSwizzledNormalMapPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.IsMaterialKeywordValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Material*, ::StringW)>(&::DigitalOpus::MB::Core::MBVersionConcrete::IsMaterialKeywordValid)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9dec630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"IsMaterialKeywordValid", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.OptimizeMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MBVersionConcrete::OptimizeMesh)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dec6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"OptimizeMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.IsRunningAndMeshNotReadWriteable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MBVersionConcrete::IsRunningAndMeshNotReadWriteable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9dec6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"IsRunningAndMeshNotReadWriteable", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.GetMeshUV1s
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MBVersionConcrete::GetMeshUV1s)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x9dec72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetMeshUV1s", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.GetMeshUVChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (::DigitalOpus::MB::Core::MBVersionConcrete::*)(int32_t, ::UnityEngine::Mesh*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MBVersionConcrete::GetMeshUVChannel)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x9dec9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetMeshUVChannel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.MeshClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, bool)>(&::DigitalOpus::MB::Core::MBVersionConcrete::MeshClear)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9decddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"MeshClear", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.MeshAssignUVChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete::*)(int32_t, ::UnityEngine::Mesh*, ::ArrayW<::UnityEngine::Vector2>)>(&::DigitalOpus::MB::Core::MBVersionConcrete::MeshAssignUVChannel)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9decdf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"MeshAssignUVChannel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.GetLightmapTilingOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Renderer*)>(&::DigitalOpus::MB::Core::MBVersionConcrete::GetLightmapTilingOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9decffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetLightmapTilingOffset", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.GetBones
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>> (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Renderer*, bool)>(&::DigitalOpus::MB::Core::MBVersionConcrete::GetBones)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x9ded014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetBones", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.GetBlendShapeFrameCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, int32_t)>(&::DigitalOpus::MB::Core::MBVersionConcrete::GetBlendShapeFrameCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9ded1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetBlendShapeFrameCount", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.GetBlendShapeFrameWeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, int32_t, int32_t)>(&::DigitalOpus::MB::Core::MBVersionConcrete::GetBlendShapeFrameWeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ded1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetBlendShapeFrameWeight", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.GetBlendShapeFrameVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, int32_t, int32_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&::DigitalOpus::MB::Core::MBVersionConcrete::GetBlendShapeFrameVertices)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9ded218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetBlendShapeFrameVertices", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.ClearBlendShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*)>(&::DigitalOpus::MB::Core::MBVersionConcrete::ClearBlendShapes)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ded244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"ClearBlendShapes", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.AddBlendShapeFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, ::StringW, float_t, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::UnityEngine::Vector3>)>(&::DigitalOpus::MB::Core::MBVersionConcrete::AddBlendShapeFrame)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9ded25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"AddBlendShapeFrame", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.MaxMeshVertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete::MaxMeshVertexCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ded284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"MaxMeshVertexCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.SetMeshIndexFormatAndClearMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Mesh*, int32_t, bool, bool)>(&::DigitalOpus::MB::Core::MBVersionConcrete::SetMeshIndexFormatAndClearMesh)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9ded28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"SetMeshIndexFormatAndClearMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.GraphicsUVStartsAtTop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete::GraphicsUVStartsAtTop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ded354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GraphicsUVStartsAtTop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.IsTexture_sRGBgammaCorrected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Texture2D*, bool)>(&::DigitalOpus::MB::Core::MBVersionConcrete::IsTexture_sRGBgammaCorrected)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ded35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"IsTexture_sRGBgammaCorrected", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.IsTextureReadable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Texture2D*)>(&::DigitalOpus::MB::Core::MBVersionConcrete::IsTextureReadable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ded374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"IsTextureReadable", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.GetScaleInLightmap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::MeshRenderer*)>(&::DigitalOpus::MB::Core::MBVersionConcrete::GetScaleInLightmap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ded394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetScaleInLightmap", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.CollectPropertyNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, ::UnityEngine::Material*, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MBVersionConcrete::CollectPropertyNames)> {
  constexpr static std::size_t size = 0x788;
  constexpr static std::size_t addrs = 0x9ded39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"CollectPropertyNames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.DoSpecialRenderPipeline_TexturePackerFastSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::GameObject*)>(&::DigitalOpus::MB::Core::MBVersionConcrete::DoSpecialRenderPipeline_TexturePackerFastSetup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dedcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"DoSpecialRenderPipeline_TexturePackerFastSetup", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.GetProjectColorSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ColorSpace (::DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete::GetProjectColorSpace)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x9dedcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetProjectColorSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.DetectPipeline
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MBVersion_PipelineType (::DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete::DetectPipeline)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x9dedb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"DetectPipeline", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.UnescapeURL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::StringW)>(&::DigitalOpus::MB::Core::MBVersionConcrete::UnescapeURL)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9dedeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"UnescapeURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.FindRuntimeMaterialsFromAddresses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::GlobalNamespace::MB2_TextureBakeResults*, ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*)>(&::DigitalOpus::MB::Core::MBVersionConcrete::FindRuntimeMaterialsFromAddresses)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9dedeb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"FindRuntimeMaterialsFromAddresses", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete.IsAssetInProject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete::*)(::UnityEngine::Object*)>(&::DigitalOpus::MB::Core::MBVersionConcrete::IsAssetInProject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dedf4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"IsAssetInProject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9dedf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector2& DigitalOpus::MB::Core::MBVersionConcrete::__cordl_internal_get__HALF_UV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HALF_UV;
}
constexpr ::UnityEngine::Vector2 const& DigitalOpus::MB::Core::MBVersionConcrete::__cordl_internal_get__HALF_UV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HALF_UV;
}
constexpr void DigitalOpus::MB::Core::MBVersionConcrete::__cordl_internal_set__HALF_UV(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HALF_UV = value;
}
inline ::StringW DigitalOpus::MB::Core::MBVersionConcrete::version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete::Is_2017_1_OrNewer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"Is_2017_1_OrNewer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete::Is_2018_3_OrNewer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"Is_2018_3_OrNewer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete::GetActive(::UnityEngine::GameObject*  go)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetActive", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, go);
}
inline void DigitalOpus::MB::Core::MBVersionConcrete::SetActive(::UnityEngine::GameObject*  go, bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"SetActive", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go, isActive);
}
inline void DigitalOpus::MB::Core::MBVersionConcrete::SetActiveRecursively(::UnityEngine::GameObject*  go, bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"SetActiveRecursively", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, go, isActive);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> DigitalOpus::MB::Core::MBVersionConcrete::FindSceneObjectsOfType(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"FindSceneObjectsOfType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(this, ___internal_method, t);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete::IsSwizzledNormalMapPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"IsSwizzledNormalMapPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete::IsMaterialKeywordValid(::UnityEngine::Material*  mat, ::StringW  keyword)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"IsMaterialKeywordValid", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mat, keyword);
}
inline void DigitalOpus::MB::Core::MBVersionConcrete::OptimizeMesh(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"OptimizeMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete::IsRunningAndMeshNotReadWriteable(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"IsRunningAndMeshNotReadWriteable", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityEngine::Vector2> DigitalOpus::MB::Core::MBVersionConcrete::GetMeshUV1s(::UnityEngine::Mesh*  m, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetMeshUV1s", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method, m, LOG_LEVEL);
}
inline ::ArrayW<::UnityEngine::Vector2> DigitalOpus::MB::Core::MBVersionConcrete::GetMeshUVChannel(int32_t  channel, ::UnityEngine::Mesh*  m, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetMeshUVChannel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(this, ___internal_method, channel, m, LOG_LEVEL);
}
inline void DigitalOpus::MB::Core::MBVersionConcrete::MeshClear(::UnityEngine::Mesh*  m, bool  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"MeshClear", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, t);
}
inline void DigitalOpus::MB::Core::MBVersionConcrete::MeshAssignUVChannel(int32_t  channel, ::UnityEngine::Mesh*  m, ::ArrayW<::UnityEngine::Vector2>  uvs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"MeshAssignUVChannel", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, channel, m, uvs);
}
inline ::UnityEngine::Vector4 DigitalOpus::MB::Core::MBVersionConcrete::GetLightmapTilingOffset(::UnityEngine::Renderer*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetLightmapTilingOffset", {}, {::i2c::type_of<::UnityEngine::Renderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, r);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>> DigitalOpus::MB::Core::MBVersionConcrete::GetBones(::UnityEngine::Renderer*  r, bool  isSkinnedMeshWithBones)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetBones", {}, {::i2c::type_of<::UnityEngine::Renderer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>>>(this, ___internal_method, r, isSkinnedMeshWithBones);
}
inline int32_t DigitalOpus::MB::Core::MBVersionConcrete::GetBlendShapeFrameCount(::UnityEngine::Mesh*  m, int32_t  shapeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetBlendShapeFrameCount", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, m, shapeIndex);
}
inline float_t DigitalOpus::MB::Core::MBVersionConcrete::GetBlendShapeFrameWeight(::UnityEngine::Mesh*  m, int32_t  shapeIndex, int32_t  frameIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetBlendShapeFrameWeight", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, m, shapeIndex, frameIndex);
}
inline void DigitalOpus::MB::Core::MBVersionConcrete::GetBlendShapeFrameVertices(::UnityEngine::Mesh*  m, int32_t  shapeIndex, int32_t  frameIndex, ::ArrayW<::UnityEngine::Vector3>  vs, ::ArrayW<::UnityEngine::Vector3>  ns, ::ArrayW<::UnityEngine::Vector3>  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetBlendShapeFrameVertices", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, shapeIndex, frameIndex, vs, ns, ts);
}
inline void DigitalOpus::MB::Core::MBVersionConcrete::ClearBlendShapes(::UnityEngine::Mesh*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"ClearBlendShapes", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline void DigitalOpus::MB::Core::MBVersionConcrete::AddBlendShapeFrame(::UnityEngine::Mesh*  m, ::StringW  nm, float_t  wt, ::ArrayW<::UnityEngine::Vector3>  vs, ::ArrayW<::UnityEngine::Vector3>  ns, ::ArrayW<::UnityEngine::Vector3>  ts)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"AddBlendShapeFrame", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, nm, wt, vs, ns, ts);
}
inline int32_t DigitalOpus::MB::Core::MBVersionConcrete::MaxMeshVertexCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"MaxMeshVertexCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MBVersionConcrete::SetMeshIndexFormatAndClearMesh(::UnityEngine::Mesh*  m, int32_t  numVerts, bool  vertices, bool  justClearTriangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"SetMeshIndexFormatAndClearMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, numVerts, vertices, justClearTriangles);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete::GraphicsUVStartsAtTop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GraphicsUVStartsAtTop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete::IsTexture_sRGBgammaCorrected(::UnityEngine::Texture2D*  tex, bool  hint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"IsTexture_sRGBgammaCorrected", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tex, hint);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete::IsTextureReadable(::UnityEngine::Texture2D*  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"IsTextureReadable", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tex);
}
inline float_t DigitalOpus::MB::Core::MBVersionConcrete::GetScaleInLightmap(::UnityEngine::MeshRenderer*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetScaleInLightmap", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, r);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete::CollectPropertyNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  texPropertyNames, ::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>  shaderTexPropertyNames, ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  _customShaderPropNames, ::UnityEngine::Material*  resultMaterial, ::DigitalOpus::MB::Core::MB2_LogLevel  LOG_LEVEL)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"CollectPropertyNames", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::ArrayW<::DigitalOpus::MB::Core::ShaderTextureProperty*>>(), ::i2c::type_of<::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, texPropertyNames, shaderTexPropertyNames, _customShaderPropNames, resultMaterial, LOG_LEVEL);
}
inline void DigitalOpus::MB::Core::MBVersionConcrete::DoSpecialRenderPipeline_TexturePackerFastSetup(::UnityEngine::GameObject*  cameraGameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"DoSpecialRenderPipeline_TexturePackerFastSetup", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraGameObject);
}
inline ::UnityEngine::ColorSpace DigitalOpus::MB::Core::MBVersionConcrete::GetProjectColorSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"GetProjectColorSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ColorSpace>(this, ___internal_method);
}
inline ::GlobalNamespace::MBVersion_PipelineType DigitalOpus::MB::Core::MBVersionConcrete::DetectPipeline()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"DetectPipeline", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MBVersion_PipelineType>(this, ___internal_method);
}
inline ::StringW DigitalOpus::MB::Core::MBVersionConcrete::UnescapeURL(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"UnescapeURL", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, url);
}
inline ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MBVersionConcrete::FindRuntimeMaterialsFromAddresses(::GlobalNamespace::MB2_TextureBakeResults*  texBakeResult, ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  isComplete)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"FindRuntimeMaterialsFromAddresses", {}, {::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults*>(), ::i2c::type_of<::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, texBakeResult, isComplete);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete::IsAssetInProject(::UnityEngine::Object*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {"IsAssetInProject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, target);
}
inline void DigitalOpus::MB::Core::MBVersionConcrete::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MBVersionConcrete* DigitalOpus::MB::Core::MBVersionConcrete::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MBVersionConcrete*>());
}
/// @brief Convert operator to "::DigitalOpus::MB::Core::MBVersionInterface"
constexpr  DigitalOpus::MB::Core::MBVersionConcrete::operator ::DigitalOpus::MB::Core::MBVersionInterface*() noexcept {
return static_cast<::DigitalOpus::MB::Core::MBVersionInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::DigitalOpus::MB::Core::MBVersionInterface"
constexpr ::DigitalOpus::MB::Core::MBVersionInterface* DigitalOpus::MB::Core::MBVersionConcrete::i___DigitalOpus__MB__Core__MBVersionInterface() noexcept {
return static_cast<::DigitalOpus::MB::Core::MBVersionInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MBVersionConcrete::MBVersionConcrete()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::*)(int32_t)>(&::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9dedf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9dee0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9dee0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dee1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9dee1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dee220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*& DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::__cordl_internal_get_isComplete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isComplete;
}
constexpr ::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult* const& DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::__cordl_internal_get_isComplete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isComplete;
}
constexpr void DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::__cordl_internal_set_isComplete(::GlobalNamespace::MB2_TextureBakeResults_CoroutineResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isComplete = value;
}
inline void DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34* DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34::MBVersionConcrete__FindRuntimeMaterialsFromAddresses_d__34()   {
}
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MBVersionConcrete___c::*)()>(&::DigitalOpus::MB::Core::MBVersionConcrete___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9dedfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete___c._CollectPropertyNames_b__29_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete___c::*)(::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MBVersionConcrete___c::_CollectPropertyNames_b__29_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9dedfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete___c*>(),
                        {"<CollectPropertyNames>b__29_0", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete___c._CollectPropertyNames_b__29_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete___c::*)(::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MBVersionConcrete___c::_CollectPropertyNames_b__29_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9dee02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete___c*>(),
                        {"<CollectPropertyNames>b__29_1", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MBVersionConcrete___c._CollectPropertyNames_b__29_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MBVersionConcrete___c::*)(::DigitalOpus::MB::Core::ShaderTextureProperty*)>(&::DigitalOpus::MB::Core::MBVersionConcrete___c::_CollectPropertyNames_b__29_2)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9dee084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete___c*>(),
                        {"<CollectPropertyNames>b__29_2", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MBVersionConcrete___c::setStaticF___9(::DigitalOpus::MB::Core::MBVersionConcrete___c*  value)  {
::cordl_internals::setStaticField<::DigitalOpus::MB::Core::MBVersionConcrete___c*, "<>9", ::DigitalOpus::MB::Core::MBVersionConcrete___c*>(std::forward<::DigitalOpus::MB::Core::MBVersionConcrete___c*>(value));
}
inline ::DigitalOpus::MB::Core::MBVersionConcrete___c* DigitalOpus::MB::Core::MBVersionConcrete___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::DigitalOpus::MB::Core::MBVersionConcrete___c*, "<>9", ::DigitalOpus::MB::Core::MBVersionConcrete___c*>();
}
inline void DigitalOpus::MB::Core::MBVersionConcrete___c::setStaticF___9__29_0(::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, "<>9__29_0", ::DigitalOpus::MB::Core::MBVersionConcrete___c*>(std::forward<::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(value));
}
inline ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* DigitalOpus::MB::Core::MBVersionConcrete___c::getStaticF___9__29_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, "<>9__29_0", ::DigitalOpus::MB::Core::MBVersionConcrete___c*>();
}
inline void DigitalOpus::MB::Core::MBVersionConcrete___c::setStaticF___9__29_1(::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, "<>9__29_1", ::DigitalOpus::MB::Core::MBVersionConcrete___c*>(std::forward<::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(value));
}
inline ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* DigitalOpus::MB::Core::MBVersionConcrete___c::getStaticF___9__29_1()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, "<>9__29_1", ::DigitalOpus::MB::Core::MBVersionConcrete___c*>();
}
inline void DigitalOpus::MB::Core::MBVersionConcrete___c::setStaticF___9__29_2(::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, "<>9__29_2", ::DigitalOpus::MB::Core::MBVersionConcrete___c*>(std::forward<::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*>(value));
}
inline ::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* DigitalOpus::MB::Core::MBVersionConcrete___c::getStaticF___9__29_2()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*, "<>9__29_2", ::DigitalOpus::MB::Core::MBVersionConcrete___c*>();
}
inline void DigitalOpus::MB::Core::MBVersionConcrete___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete___c::_CollectPropertyNames_b__29_0(::DigitalOpus::MB::Core::ShaderTextureProperty*  pn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete___c*>(),
                        {"<CollectPropertyNames>b__29_0", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pn);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete___c::_CollectPropertyNames_b__29_1(::DigitalOpus::MB::Core::ShaderTextureProperty*  pn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete___c*>(),
                        {"<CollectPropertyNames>b__29_1", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pn);
}
inline bool DigitalOpus::MB::Core::MBVersionConcrete___c::_CollectPropertyNames_b__29_2(::DigitalOpus::MB::Core::ShaderTextureProperty*  pn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MBVersionConcrete___c*>(),
                        {"<CollectPropertyNames>b__29_2", {}, {::i2c::type_of<::DigitalOpus::MB::Core::ShaderTextureProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pn);
}
inline ::DigitalOpus::MB::Core::MBVersionConcrete___c* DigitalOpus::MB::Core::MBVersionConcrete___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MBVersionConcrete___c*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MBVersionConcrete___c::MBVersionConcrete___c()   {
}
