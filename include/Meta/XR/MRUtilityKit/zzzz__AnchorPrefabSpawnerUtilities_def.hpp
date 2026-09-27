#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/AnchorPrefabSpawnerUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AnchorPrefabSpawnerUtilities)
namespace GlobalNamespace {
struct AnchorPrefabSpawner_AlignMode;
}
namespace GlobalNamespace {
struct AnchorPrefabSpawner_ScalingMode;
}
namespace GlobalNamespace {
struct AnchorPrefabSpawner_SelectionMode;
}
namespace Meta::XR::MRUtilityKit {
class MRUKAnchor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Random;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit {
class AnchorPrefabSpawnerUtilities;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities*, "Meta.XR.MRUtilityKit", "AnchorPrefabSpawnerUtilities");
// Dependencies System.Object
namespace Meta::XR::MRUtilityKit {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.AnchorPrefabSpawnerUtilities
class CORDL_TYPE AnchorPrefabSpawnerUtilities : public ::System::Object {
public:
// Declarations
/// @brief Method AlignPrefabPivot, addr 0x9f05fd8, size 0x284, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 AlignPrefabPivot(::UnityEngine::Bounds  anchorVolumeBounds, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::UnityEngine::Vector3  localScale, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  alignMode) ;

/// @brief Method AlignPrefabPivot, addr 0x9f063a0, size 0x2f8, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 AlignPrefabPivot(::UnityEngine::Rect  planeRect, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::UnityEngine::Vector2  localScale, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  alignMode) ;

/// @brief Method GetPoseBasedOnAnchorPlaneRect, addr 0x9f079b4, size 0x198, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose GetPoseBasedOnAnchorPlaneRect(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  alignmentMode, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::UnityEngine::Vector2  localScale) ;

/// @brief Method GetPoseBasedOnAnchorVolume, addr 0x9f071f0, size 0x1f0, virtual false, abstract: false, final false
static inline ::UnityEngine::Pose GetPoseBasedOnAnchorVolume(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, int32_t  cardinalAxisIndex, ::UnityEngine::Vector3  localScale, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  alignment) ;

/// @brief Method GetPrefabScaleBasedOnAnchorPlaneRect, addr 0x9f07844, size 0x170, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetPrefabScaleBasedOnAnchorPlaneRect(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  scalingMode) ;

/// @brief Method GetPrefabScaleBasedOnAnchorVolume, addr 0x9f06fc0, size 0x230, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetPrefabScaleBasedOnAnchorVolume(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, bool  matchAspectRatio, bool  calculateFacingDirection, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::by_ref<int32_t>  cardinalAxisIndex, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  scaling) ;

/// @brief Method GetPrefabWithClosestSizeToAnchor, addr 0x9f073e0, size 0x39c, virtual false, abstract: false, final false
static inline bool GetPrefabWithClosestSizeToAnchor(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  prefabList, ::by_ref<::UnityEngine::GameObject*>  sizeMatchingPrefab) ;

/// @brief Method GetTransformationMatrixMatchingAnchorPlaneRect, addr 0x9f0777c, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetTransformationMatrixMatchingAnchorPlaneRect(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  scaling, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  alignment) ;

/// @brief Method GetTransformationMatrixMatchingAnchorVolume, addr 0x9f06ee8, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityEngine::Matrix4x4 GetTransformationMatrixMatchingAnchorVolume(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, bool  matchAspectRatio, bool  calculateFacingDirection, ::System::Nullable_1<::UnityEngine::Bounds>  prefabBounds, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  scalingMode, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  alignMode) ;

/// @brief Method MatchAspectRatio, addr 0x9f05afc, size 0x370, virtual false, abstract: false, final false
static inline void MatchAspectRatio(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchorInfo, bool  calculateFacingDirection, ::UnityEngine::Vector3  prefabSize, ::UnityEngine::Vector3  volumeSize, ::by_ref<int32_t>  cardinalAxisIndex, ::by_ref<::UnityEngine::Bounds>  volumeBounds, ::by_ref<::UnityEngine::Vector3>  localScale) ;

/// @brief Method RotateVolumeBounds, addr 0x9f05a64, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds RotateVolumeBounds(::UnityEngine::Bounds  bounds, int32_t  rotation) ;

/// @brief Method ScalePrefab, addr 0x9f0625c, size 0x144, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ScalePrefab(::UnityEngine::Vector2  localScale, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  scalingMode) ;

/// @brief Method ScalePrefab, addr 0x9f05e6c, size 0x16c, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 ScalePrefab(::UnityEngine::Vector3  localScale, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  scalingMode) ;

/// @brief Method SelectPrefab, addr 0x9f06698, size 0x1d4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::GameObject> SelectPrefab(::Meta::XR::MRUtilityKit::MRUKAnchor*  anchor, ::GlobalNamespace::AnchorPrefabSpawner_SelectionMode  prefabSelectionMode, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  prefabs, ::System::Random*  random) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AnchorPrefabSpawnerUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AnchorPrefabSpawnerUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AnchorPrefabSpawnerUtilities(AnchorPrefabSpawnerUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AnchorPrefabSpawnerUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AnchorPrefabSpawnerUtilities(AnchorPrefabSpawnerUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25766};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::XR::MRUtilityKit::AnchorPrefabSpawnerUtilities) == 0x10, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit
