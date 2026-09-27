#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/AnchorPrefabSpawner_AnchorPrefabGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawner_AlignMode_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawner_ScalingMode_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__AnchorPrefabSpawner_SelectionMode_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnchorPrefabSpawner_AnchorPrefabGroup)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct AnchorPrefabSpawner_AnchorPrefabGroup;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup, "Meta.XR.MRUtilityKit", "AnchorPrefabSpawner/AnchorPrefabGroup");
// Dependencies Meta.XR.MRUtilityKit.AnchorPrefabSpawner::AlignMode, Meta.XR.MRUtilityKit.AnchorPrefabSpawner::ScalingMode, Meta.XR.MRUtilityKit.AnchorPrefabSpawner::SelectionMode, Meta.XR.MRUtilityKit.MRUKAnchor::SceneLabels
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.AnchorPrefabSpawner/AnchorPrefabGroup
struct CORDL_TYPE AnchorPrefabSpawner_AnchorPrefabGroup {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>*() ;

/// @brief Method Equals, addr 0x9f06d1c, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x9f06c60, size 0xbc, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup  other) ;

/// @brief Method GetHashCode, addr 0x9f06dac, size 0xd8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>"
constexpr ::System::IEquatable_1<::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup>* i___System__IEquatable_1___GlobalNamespace__AnchorPrefabSpawner_AnchorPrefabGroup_() ;

/// @brief Method op_Equality, addr 0x9f06e84, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup  left, ::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup  right) ;

/// @brief Method op_Inequality, addr 0x9f06eb4, size 0x34, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup  left, ::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr AnchorPrefabSpawner_AnchorPrefabGroup() ;

// Ctor Parameters [CppParam { name: "Labels", ty: "::GlobalNamespace::MRUKAnchor_SceneLabels", modifiers: "", def_value: None, comment: None }, CppParam { name: "Prefabs", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "PrefabSelection", ty: "::GlobalNamespace::AnchorPrefabSpawner_SelectionMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "MatchAspectRatio", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "CalculateFacingDirection", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "Scaling", ty: "::GlobalNamespace::AnchorPrefabSpawner_ScalingMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "Alignment", ty: "::GlobalNamespace::AnchorPrefabSpawner_AlignMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "IgnorePrefabSize", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr AnchorPrefabSpawner_AnchorPrefabGroup(::GlobalNamespace::MRUKAnchor_SceneLabels  Labels, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  Prefabs, ::GlobalNamespace::AnchorPrefabSpawner_SelectionMode  PrefabSelection, bool  MatchAspectRatio, bool  CalculateFacingDirection, ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  Scaling, ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  Alignment, bool  IgnorePrefabSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25764};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// [FormerlySerializedAs("_include")]
/// [SerializeField]
/// [Tooltip("Anchors to include.")]
/// @brief Field Labels, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::MRUKAnchor_SceneLabels  Labels;

/// [SerializeField]
/// [Tooltip("Prefab(s) to spawn (randomly chosen from list.)")]
/// @brief Field Prefabs, offset: 0x8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  Prefabs;

/// [SerializeField]
/// [Tooltip("The logic that determines what prefab to chose when spawning the relative labels\' game objects")]
/// @brief Field PrefabSelection, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::AnchorPrefabSpawner_SelectionMode  PrefabSelection;

/// [SerializeField]
/// [Tooltip("When enabled, the prefab will be rotated to try and match the aspect ratio of the volume as closely as possible. This is most useful for long and thin volumes, keep this disabled for objects with an aspect ratio close to 1:1. Only applies to volumes.")]
/// @brief Field MatchAspectRatio, offset: 0x14, size: 0x1, def value: None
 bool  MatchAspectRatio;

/// [SerializeField]
/// [Tooltip("When calculate facing direction is enabled the prefab will be rotated to face away from the closest wall. If match aspect ratio is also enabled then that will take precedence and it will be constrained to a choice between 2 directions only.Only applies to volumes.")]
/// @brief Field CalculateFacingDirection, offset: 0x15, size: 0x1, def value: None
 bool  CalculateFacingDirection;

/// [SerializeField]
/// [Tooltip("Set what scaling mode to apply to the prefab. By default the prefab will be stretched to fit the size of the plane/volume. But in some cases this may not be desirable and can be customized here.")]
/// @brief Field Scaling, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::AnchorPrefabSpawner_ScalingMode  Scaling;

/// [SerializeField]
/// [Tooltip("Spawn new object at the center, top or bottom of the anchor.")]
/// @brief Field Alignment, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::AnchorPrefabSpawner_AlignMode  Alignment;

/// [SerializeField]
/// [Tooltip("Don\'t analyze prefab, just assume a default scale of 1.")]
/// @brief Field IgnorePrefabSize, offset: 0x20, size: 0x1, def value: None
 bool  IgnorePrefabSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup, Labels) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup, Prefabs) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup, PrefabSelection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup, MatchAspectRatio) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup, CalculateFacingDirection) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup, Scaling) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup, Alignment) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup, IgnorePrefabSize) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AnchorPrefabSpawner_AnchorPrefabGroup) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
