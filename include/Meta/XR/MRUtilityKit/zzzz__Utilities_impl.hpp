#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/Utilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__Utilities_def.hpp"
#include "GlobalNamespace/zzzz__OVRSemanticLabels_Classification_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__EffectMesh_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.GetPrefabBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Bounds> (*)(::UnityEngine::GameObject*)>(&::Meta::XR::MRUtilityKit::Utilities::GetPrefabBounds)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x9f4c528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"GetPrefabBounds", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.CalculateBoundsRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::UnityEngine::Bounds> (*)(::UnityEngine::Transform*)>(&::Meta::XR::MRUtilityKit::Utilities::CalculateBoundsRecursively)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x9f4c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"CalculateBoundsRecursively", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.SetupAnchorMeshGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, bool, ::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>)>(&::Meta::XR::MRUtilityKit::Utilities::SetupAnchorMeshGeometry)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x9f4b070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"SetupAnchorMeshGeometry", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.CreateVolumeMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::by_ref<::ArrayW<::UnityEngine::Color32>>, ::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::by_ref<::ArrayW<::UnityEngine::Vector4>>, ::by_ref<::ArrayW<int32_t>>, ::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>, ::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>)>(&::Meta::XR::MRUtilityKit::Utilities::CreateVolumeMesh)> {
  constexpr static std::size_t size = 0x804;
  constexpr static std::size_t addrs = 0x9f4d030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"CreateVolumeMesh", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Color32>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>>(), ::i2c::type_of<::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.CreatePolygonMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::XR::MRUtilityKit::MRUKAnchor*, ::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::by_ref<::ArrayW<::UnityEngine::Color32>>, ::by_ref<::ArrayW<::UnityEngine::Vector3>>, ::by_ref<::ArrayW<::UnityEngine::Vector4>>, ::by_ref<::ArrayW<int32_t>>, ::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>, ::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>)>(&::Meta::XR::MRUtilityKit::Utilities::CreatePolygonMesh)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x9f4cc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"CreatePolygonMesh", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Color32>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>>(), ::i2c::type_of<::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.CreateInteriorPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<int32_t>>, ::by_ref<int32_t>, int32_t, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*)>(&::Meta::XR::MRUtilityKit::Utilities::CreateInteriorPolygon)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9f4d8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"CreateInteriorPolygon", {}, {::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.CreateInteriorTriangleFan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::ArrayW<int32_t>>, ::by_ref<int32_t>, int32_t, int32_t)>(&::Meta::XR::MRUtilityKit::Utilities::CreateInteriorTriangleFan)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9f4d834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"CreateInteriorTriangleFan", {}, {::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.AddBarycentricCoordinatesToMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Mesh*)>(&::Meta::XR::MRUtilityKit::Utilities::AddBarycentricCoordinatesToMesh)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x9f4da1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"AddBarycentricCoordinatesToMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.DestroyGameObjectAndChildren
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*)>(&::Meta::XR::MRUtilityKit::Utilities::DestroyGameObjectAndChildren)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x9f4dcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"DestroyGameObjectAndChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.IsPositionInPolygon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*)>(&::Meta::XR::MRUtilityKit::Utilities::IsPositionInPolygon)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9f4dff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"IsPositionInPolygon", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.SceneLabelsEnumToList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (*)(::GlobalNamespace::MRUKAnchor_SceneLabels)>(&::Meta::XR::MRUtilityKit::Utilities::SceneLabelsEnumToList)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x9f4e130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"SceneLabelsEnumToList", {}, {::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.StringLabelsToEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKAnchor_SceneLabels (*)(::System::Collections::Generic::IList_1<::StringW>*)>(&::Meta::XR::MRUtilityKit::Utilities::StringLabelsToEnum)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x9f4e4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"StringLabelsToEnum", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.StringLabelToEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKAnchor_SceneLabels (*)(::StringW)>(&::Meta::XR::MRUtilityKit::Utilities::StringLabelToEnum)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x9f4e7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"StringLabelToEnum", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.ClassificationToSceneLabel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MRUKAnchor_SceneLabels (*)(::GlobalNamespace::OVRSemanticLabels_Classification)>(&::Meta::XR::MRUtilityKit::Utilities::ClassificationToSceneLabel)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9f4e93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"ClassificationToSceneLabel", {}, {::i2c::type_of<::GlobalNamespace::OVRSemanticLabels_Classification>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.ReverseGuidByteOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::System::Guid)>(&::Meta::XR::MRUtilityKit::Utilities::ReverseGuidByteOrder)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x9f4e948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"ReverseGuidByteOrder", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MRUtilityKit::Utilities.DrawWireSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3, float_t, ::UnityEngine::Color, float_t, int32_t)>(&::Meta::XR::MRUtilityKit::Utilities::DrawWireSphere)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x9f4eac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"DrawWireSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::MRUtilityKit::Utilities::setStaticF_prefabBoundsCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Nullable_1<::UnityEngine::Bounds>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Nullable_1<::UnityEngine::Bounds>>*, "prefabBoundsCache", ::Meta::XR::MRUtilityKit::Utilities*>(std::forward<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Nullable_1<::UnityEngine::Bounds>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Nullable_1<::UnityEngine::Bounds>>* Meta::XR::MRUtilityKit::Utilities::getStaticF_prefabBoundsCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Nullable_1<::UnityEngine::Bounds>>*, "prefabBoundsCache", ::Meta::XR::MRUtilityKit::Utilities*>();
}
inline void Meta::XR::MRUtilityKit::Utilities::setStaticF_Sqrt2(float_t  value)  {
::cordl_internals::setStaticField<float_t, "Sqrt2", ::Meta::XR::MRUtilityKit::Utilities*>(std::forward<float_t>(value));
}
inline float_t Meta::XR::MRUtilityKit::Utilities::getStaticF_Sqrt2()  {
return ::cordl_internals::getStaticField<float_t, "Sqrt2", ::Meta::XR::MRUtilityKit::Utilities*>();
}
inline void Meta::XR::MRUtilityKit::Utilities::setStaticF_InvSqrt2(float_t  value)  {
::cordl_internals::setStaticField<float_t, "InvSqrt2", ::Meta::XR::MRUtilityKit::Utilities*>(std::forward<float_t>(value));
}
inline float_t Meta::XR::MRUtilityKit::Utilities::getStaticF_InvSqrt2()  {
return ::cordl_internals::getStaticField<float_t, "InvSqrt2", ::Meta::XR::MRUtilityKit::Utilities*>();
}
inline ::System::Nullable_1<::UnityEngine::Bounds> Meta::XR::MRUtilityKit::Utilities::GetPrefabBounds(::UnityEngine::GameObject*  prefab)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"GetPrefabBounds", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Bounds>>(nullptr, ___internal_method, prefab);
}
inline ::System::Nullable_1<::UnityEngine::Bounds> Meta::XR::MRUtilityKit::Utilities::CalculateBoundsRecursively(::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"CalculateBoundsRecursively", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::UnityEngine::Bounds>>(nullptr, ___internal_method, transform);
}
inline ::UnityW<::UnityEngine::Mesh> Meta::XR::MRUtilityKit::Utilities::SetupAnchorMeshGeometry(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, bool  useFunctionalSurfaces, ::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>  textureCoordinateModes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"SetupAnchorMeshGeometry", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, anchorInfo, useFunctionalSurfaces, textureCoordinateModes);
}
inline void Meta::XR::MRUtilityKit::Utilities::CreateVolumeMesh(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  meshVertices, ::by_ref<::ArrayW<::UnityEngine::Color32>>  meshColors, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  meshNormals, ::by_ref<::ArrayW<::UnityEngine::Vector4>>  meshTangents, ::by_ref<::ArrayW<int32_t>>  meshTriangles, ::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>  meshUVs, ::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>  textureCoordinateModes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"CreateVolumeMesh", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Color32>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>>(), ::i2c::type_of<::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, anchorInfo, meshVertices, meshColors, meshNormals, meshTangents, meshTriangles, meshUVs, textureCoordinateModes);
}
inline void Meta::XR::MRUtilityKit::Utilities::CreatePolygonMesh(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  meshVertices, ::by_ref<::ArrayW<::UnityEngine::Color32>>  meshColors, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  meshNormals, ::by_ref<::ArrayW<::UnityEngine::Vector4>>  meshTangents, ::by_ref<::ArrayW<int32_t>>  meshTriangles, ::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>  meshUVs, ::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>  textureCoordinateModes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"CreatePolygonMesh", {}, {::i2c::type_of<::Meta::XR::MRUtilityKit::MRUKAnchor*>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Color32>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector4>>>(), ::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>>(), ::i2c::type_of<::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, anchorInfo, meshVertices, meshColors, meshNormals, meshTangents, meshTriangles, meshUVs, textureCoordinateModes);
}
inline void Meta::XR::MRUtilityKit::Utilities::CreateInteriorPolygon(::by_ref<::ArrayW<int32_t>>  indexArray, ::by_ref<int32_t>  indexCounter, int32_t  baseCount, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  points)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"CreateInteriorPolygon", {}, {::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, indexArray, indexCounter, baseCount, points);
}
inline void Meta::XR::MRUtilityKit::Utilities::CreateInteriorTriangleFan(::by_ref<::ArrayW<int32_t>>  indexArray, ::by_ref<int32_t>  indexCounter, int32_t  baseCount, int32_t  pointsInLoop)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"CreateInteriorTriangleFan", {}, {::i2c::type_of<::by_ref<::ArrayW<int32_t>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, indexArray, indexCounter, baseCount, pointsInLoop);
}
inline ::UnityW<::UnityEngine::Mesh> Meta::XR::MRUtilityKit::Utilities::AddBarycentricCoordinatesToMesh(::UnityEngine::Mesh*  originalMesh)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"AddBarycentricCoordinatesToMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, originalMesh);
}
inline void Meta::XR::MRUtilityKit::Utilities::DestroyGameObjectAndChildren(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"DestroyGameObjectAndChildren", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject);
}
template<typename T>
inline bool Meta::XR::MRUtilityKit::Utilities::SequenceEqual(::System::Collections::Generic::List_1<T>*  list1, ::System::Collections::Generic::List_1<T>*  list2)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                    {"SequenceEqual", {::i2c::class_of<T>()}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, list1, list2);
}
inline bool Meta::XR::MRUtilityKit::Utilities::IsPositionInPolygon(::UnityEngine::Vector2  position, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  polygon)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"IsPositionInPolygon", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, position, polygon);
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::XR::MRUtilityKit::Utilities::SceneLabelsEnumToList(::GlobalNamespace::MRUKAnchor_SceneLabels  labelFlags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"SceneLabelsEnumToList", {}, {::i2c::type_of<::GlobalNamespace::MRUKAnchor_SceneLabels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(nullptr, ___internal_method, labelFlags);
}
inline ::GlobalNamespace::MRUKAnchor_SceneLabels Meta::XR::MRUtilityKit::Utilities::StringLabelsToEnum(::System::Collections::Generic::IList_1<::StringW>*  labels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"StringLabelsToEnum", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKAnchor_SceneLabels>(nullptr, ___internal_method, labels);
}
inline ::GlobalNamespace::MRUKAnchor_SceneLabels Meta::XR::MRUtilityKit::Utilities::StringLabelToEnum(::StringW  stringLabel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"StringLabelToEnum", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKAnchor_SceneLabels>(nullptr, ___internal_method, stringLabel);
}
inline ::GlobalNamespace::MRUKAnchor_SceneLabels Meta::XR::MRUtilityKit::Utilities::ClassificationToSceneLabel(::GlobalNamespace::OVRSemanticLabels_Classification  classification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"ClassificationToSceneLabel", {}, {::i2c::type_of<::GlobalNamespace::OVRSemanticLabels_Classification>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MRUKAnchor_SceneLabels>(nullptr, ___internal_method, classification);
}
inline ::System::Guid Meta::XR::MRUtilityKit::Utilities::ReverseGuidByteOrder(::System::Guid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"ReverseGuidByteOrder", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, guid);
}
inline void Meta::XR::MRUtilityKit::Utilities::DrawWireSphere(::UnityEngine::Vector3  center, float_t  radius, ::UnityEngine::Color  color, float_t  duration, int32_t  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::Utilities*>(),
                        {"DrawWireSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, center, radius, color, duration, quality);
}
// Ctor Parameters []
constexpr ::Meta::XR::MRUtilityKit::Utilities::Utilities()   {
}
