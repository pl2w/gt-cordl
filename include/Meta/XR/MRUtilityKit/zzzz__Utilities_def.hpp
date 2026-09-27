#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/Utilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Utilities)
namespace GlobalNamespace {
struct MRUKAnchor_SceneLabels;
}
namespace GlobalNamespace {
struct OVRSemanticLabels_Classification;
}
namespace Meta::XR::MRUtilityKit {
class EffectMesh_TextureCoordinateModes;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class Utilities;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::Utilities*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::Utilities*, "Meta.XR.MRUtilityKit", "Utilities");
// [Extension]
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.Utilities
class CORDL_TYPE Utilities : public ::System::Object {
public:
// Declarations
/// @brief Field InvSqrt2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_InvSqrt2, put=setStaticF_InvSqrt2)) float_t  InvSqrt2;

/// @brief Field Sqrt2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Sqrt2, put=setStaticF_Sqrt2)) float_t  Sqrt2;

/// @brief Field prefabBoundsCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_prefabBoundsCache, put=setStaticF_prefabBoundsCache)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Nullable_1<::UnityEngine::Bounds>>*  prefabBoundsCache;

/// @brief Method AddBarycentricCoordinatesToMesh, addr 0x9f4da1c, size 0x294, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> AddBarycentricCoordinatesToMesh(::UnityEngine::Mesh*  originalMesh) ;

/// @brief Method CalculateBoundsRecursively, addr 0x9f4c670, size 0x610, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Bounds> CalculateBoundsRecursively(::UnityEngine::Transform*  transform) ;

/// @brief Method ClassificationToSceneLabel, addr 0x9f4e93c, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MRUKAnchor_SceneLabels ClassificationToSceneLabel(::GlobalNamespace::OVRSemanticLabels_Classification  classification) ;

/// @brief Method CreateInteriorPolygon, addr 0x9f4d8d0, size 0x14c, virtual false, abstract: false, final false
static inline void CreateInteriorPolygon(::by_ref<::ArrayW<int32_t>>  indexArray, ::by_ref<int32_t>  indexCounter, int32_t  baseCount, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  points) ;

/// @brief Method CreateInteriorTriangleFan, addr 0x9f4d834, size 0x9c, virtual false, abstract: false, final false
static inline void CreateInteriorTriangleFan(::by_ref<::ArrayW<int32_t>>  indexArray, ::by_ref<int32_t>  indexCounter, int32_t  baseCount, int32_t  pointsInLoop) ;

/// @brief Method CreatePolygonMesh, addr 0x9f4cc80, size 0x3b0, virtual false, abstract: false, final false
static inline void CreatePolygonMesh(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  meshVertices, ::by_ref<::ArrayW<::UnityEngine::Color32>>  meshColors, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  meshNormals, ::by_ref<::ArrayW<::UnityEngine::Vector4>>  meshTangents, ::by_ref<::ArrayW<int32_t>>  meshTriangles, ::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>  meshUVs, ::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>  textureCoordinateModes) ;

/// @brief Method CreateVolumeMesh, addr 0x9f4d030, size 0x804, virtual false, abstract: false, final false
static inline void CreateVolumeMesh(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  meshVertices, ::by_ref<::ArrayW<::UnityEngine::Color32>>  meshColors, ::by_ref<::ArrayW<::UnityEngine::Vector3>>  meshNormals, ::by_ref<::ArrayW<::UnityEngine::Vector4>>  meshTangents, ::by_ref<::ArrayW<int32_t>>  meshTriangles, ::by_ref<::ArrayW<::ArrayW<::UnityEngine::Vector2>>>  meshUVs, ::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>  textureCoordinateModes) ;

/// @brief Method DestroyGameObjectAndChildren, addr 0x9f4dcb0, size 0x344, virtual false, abstract: false, final false
static inline void DestroyGameObjectAndChildren(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method DrawWireSphere, addr 0x9f4eac8, size 0x400, virtual false, abstract: false, final false
static inline void DrawWireSphere(::UnityEngine::Vector3  center, float_t  radius, ::UnityEngine::Color  color, float_t  duration, int32_t  quality) ;

/// @brief Method GetPrefabBounds, addr 0x9f4c528, size 0x148, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::UnityEngine::Bounds> GetPrefabBounds(::UnityEngine::GameObject*  prefab) ;

/// @brief Method IsPositionInPolygon, addr 0x9f4dff4, size 0x13c, virtual false, abstract: false, final false
static inline bool IsPositionInPolygon(::UnityEngine::Vector2  position, ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  polygon) ;

/// @brief Method ReverseGuidByteOrder, addr 0x9f4e948, size 0x180, virtual false, abstract: false, final false
static inline ::System::Guid ReverseGuidByteOrder(::System::Guid  guid) ;

/// @brief Method SceneLabelsEnumToList, addr 0x9f4e130, size 0x3c8, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::StringW>* SceneLabelsEnumToList(::GlobalNamespace::MRUKAnchor_SceneLabels  labelFlags) ;

/// [Extension]
/// @brief Method SequenceEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool SequenceEqual(::System::Collections::Generic::List_1<T>*  list1, ::System::Collections::Generic::List_1<T>*  list2) ;

/// @brief Method SetupAnchorMeshGeometry, addr 0x9f4b070, size 0x5fc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> SetupAnchorMeshGeometry(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, bool  useFunctionalSurfaces, ::ArrayW<::Meta::XR::MRUtilityKit::EffectMesh_TextureCoordinateModes*>  textureCoordinateModes) ;

/// @brief Method StringLabelToEnum, addr 0x9f4e7d4, size 0x168, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MRUKAnchor_SceneLabels StringLabelToEnum(::StringW  stringLabel) ;

/// @brief Method StringLabelsToEnum, addr 0x9f4e4f8, size 0x2dc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::MRUKAnchor_SceneLabels StringLabelsToEnum(::System::Collections::Generic::IList_1<::StringW>*  labels) ;

static inline float_t getStaticF_InvSqrt2() ;

static inline float_t getStaticF_Sqrt2() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Nullable_1<::UnityEngine::Bounds>>* getStaticF_prefabBoundsCache() ;

static inline void setStaticF_InvSqrt2(float_t  value) ;

static inline void setStaticF_Sqrt2(float_t  value) ;

static inline void setStaticF_prefabBoundsCache(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::GameObject>,::System::Nullable_1<::UnityEngine::Bounds>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Utilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Utilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Utilities(Utilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Utilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Utilities(Utilities const& ) = delete;

/// @brief Field MAX_VERTICES_PER_MESH offset 0xffffffff size 0x4
static constexpr int32_t  MAX_VERTICES_PER_MESH{static_cast<int32_t>(0xffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25909};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::Utilities) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
