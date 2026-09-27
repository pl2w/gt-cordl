#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SceneDecoration.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Constraint_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__DistributionType_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Mask_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Modifier_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Placement_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SpawnHierarchy_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Target_def.hpp"
#include "Meta/XR/MRUtilityKit/zzzz__MRUKAnchor_SceneLabels_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SceneDecoration)
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class GridDistribution;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class RandomDistribution;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SimplexDistribution;
}
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class StaggeredConcentricDistribution;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
class SceneDecoration;
}
// Write type traits
MARK_REF_T(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration*, "Meta.XR.MRUtilityKit.SceneDecorator", "SceneDecoration");
// [Feature((Meta.XR.Util.Feature)8)]
// [CreateAssetMenu(fileName = "SceneDecoration", menuName = "Meta/MRUK/Scene Decoration")]
// Dependencies Meta.XR.MRUtilityKit.MRUKAnchor::SceneLabels, Meta.XR.MRUtilityKit.SceneDecorator.Constraint, Meta.XR.MRUtilityKit.SceneDecorator.DistributionType, Meta.XR.MRUtilityKit.SceneDecorator.Mask, Meta.XR.MRUtilityKit.SceneDecorator.Modifier, Meta.XR.MRUtilityKit.SceneDecorator.Placement, Meta.XR.MRUtilityKit.SceneDecorator.SpawnHierarchy, Meta.XR.MRUtilityKit.SceneDecorator.Target, UnityEngine.GameObject, UnityEngine.LayerMask, UnityEngine.ScriptableObject, UnityEngine.Vector3
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: false
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecoration
class CORDL_TYPE SceneDecoration : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field DrawDebugRaysAndImpactPoints, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_DrawDebugRaysAndImpactPoints, put=__cordl_internal_set_DrawDebugRaysAndImpactPoints)) bool  DrawDebugRaysAndImpactPoints;

/// @brief Field Poolsize, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_Poolsize, put=__cordl_internal_set_Poolsize)) int32_t  Poolsize;

/// @brief Field constraints, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_constraints, put=__cordl_internal_set_constraints)) ::ArrayW<::Meta::XR::MRUtilityKit::SceneDecorator::Constraint>  constraints;

/// @brief Field decorationPrefabs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_decorationPrefabs, put=__cordl_internal_set_decorationPrefabs)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  decorationPrefabs;

/// @brief Field discardParentScaling, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_discardParentScaling, put=__cordl_internal_set_discardParentScaling)) bool  discardParentScaling;

/// @brief Field distributionType, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_distributionType, put=__cordl_internal_set_distributionType)) ::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType  distributionType;

/// @brief Field executeSceneLabels, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_executeSceneLabels, put=__cordl_internal_set_executeSceneLabels)) ::GlobalNamespace::MRUKAnchor_SceneLabels  executeSceneLabels;

/// @brief Field gridDistribution, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_gridDistribution, put=__cordl_internal_set_gridDistribution)) ::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution*  gridDistribution;

/// @brief Field lifetime, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lifetime, put=__cordl_internal_set_lifetime)) float_t  lifetime;

/// @brief Field masks, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_masks, put=__cordl_internal_set_masks)) ::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>>  masks;

/// @brief Field modifiers, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_modifiers, put=__cordl_internal_set_modifiers)) ::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier>>  modifiers;

/// @brief Field placement, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_placement, put=__cordl_internal_set_placement)) ::Meta::XR::MRUtilityKit::SceneDecorator::Placement  placement;

/// @brief Field placementDirection, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get_placementDirection, put=__cordl_internal_set_placementDirection)) ::UnityEngine::Vector3  placementDirection;

/// @brief Field randomDistribution, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomDistribution, put=__cordl_internal_set_randomDistribution)) ::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution*  randomDistribution;

/// @brief Field rayOffset, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_rayOffset, put=__cordl_internal_set_rayOffset)) ::UnityEngine::Vector3  rayOffset;

/// @brief Field selectBehind, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_selectBehind, put=__cordl_internal_set_selectBehind)) bool  selectBehind;

/// @brief Field simplexDistribution, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_simplexDistribution, put=__cordl_internal_set_simplexDistribution)) ::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*  simplexDistribution;

/// @brief Field spawnHierarchy, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnHierarchy, put=__cordl_internal_set_spawnHierarchy)) ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy  spawnHierarchy;

/// @brief Field staggeredConcentricDistribution, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_staggeredConcentricDistribution, put=__cordl_internal_set_staggeredConcentricDistribution)) ::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution*  staggeredConcentricDistribution;

/// @brief Field targetPhysicsLayers, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetPhysicsLayers, put=__cordl_internal_set_targetPhysicsLayers)) ::UnityEngine::LayerMask  targetPhysicsLayers;

/// @brief Field targets, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_targets, put=__cordl_internal_set_targets)) ::Meta::XR::MRUtilityKit::SceneDecorator::Target  targets;

static inline ::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration* New_ctor() ;

constexpr bool const& __cordl_internal_get_DrawDebugRaysAndImpactPoints() const;

constexpr bool& __cordl_internal_get_DrawDebugRaysAndImpactPoints() ;

constexpr int32_t const& __cordl_internal_get_Poolsize() const;

constexpr int32_t& __cordl_internal_get_Poolsize() ;

constexpr ::ArrayW<::Meta::XR::MRUtilityKit::SceneDecorator::Constraint> const& __cordl_internal_get_constraints() const;

constexpr ::ArrayW<::Meta::XR::MRUtilityKit::SceneDecorator::Constraint>& __cordl_internal_get_constraints() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_decorationPrefabs() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_decorationPrefabs() ;

constexpr bool const& __cordl_internal_get_discardParentScaling() const;

constexpr bool& __cordl_internal_get_discardParentScaling() ;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType const& __cordl_internal_get_distributionType() const;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType& __cordl_internal_get_distributionType() ;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels const& __cordl_internal_get_executeSceneLabels() const;

constexpr ::GlobalNamespace::MRUKAnchor_SceneLabels& __cordl_internal_get_executeSceneLabels() ;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution* const& __cordl_internal_get_gridDistribution() const;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution*& __cordl_internal_get_gridDistribution() ;

constexpr float_t const& __cordl_internal_get_lifetime() const;

constexpr float_t& __cordl_internal_get_lifetime() ;

constexpr ::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>> const& __cordl_internal_get_masks() const;

constexpr ::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>>& __cordl_internal_get_masks() ;

constexpr ::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier>> const& __cordl_internal_get_modifiers() const;

constexpr ::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier>>& __cordl_internal_get_modifiers() ;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Placement const& __cordl_internal_get_placement() const;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Placement& __cordl_internal_get_placement() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_placementDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_placementDirection() ;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution* const& __cordl_internal_get_randomDistribution() const;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution*& __cordl_internal_get_randomDistribution() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rayOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rayOffset() ;

constexpr bool const& __cordl_internal_get_selectBehind() const;

constexpr bool& __cordl_internal_get_selectBehind() ;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution* const& __cordl_internal_get_simplexDistribution() const;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*& __cordl_internal_get_simplexDistribution() ;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy const& __cordl_internal_get_spawnHierarchy() const;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy& __cordl_internal_get_spawnHierarchy() ;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution* const& __cordl_internal_get_staggeredConcentricDistribution() const;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution*& __cordl_internal_get_staggeredConcentricDistribution() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_targetPhysicsLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_targetPhysicsLayers() ;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Target const& __cordl_internal_get_targets() const;

constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::Target& __cordl_internal_get_targets() ;

constexpr void __cordl_internal_set_DrawDebugRaysAndImpactPoints(bool  value) ;

constexpr void __cordl_internal_set_Poolsize(int32_t  value) ;

constexpr void __cordl_internal_set_constraints(::ArrayW<::Meta::XR::MRUtilityKit::SceneDecorator::Constraint>  value) ;

constexpr void __cordl_internal_set_decorationPrefabs(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_discardParentScaling(bool  value) ;

constexpr void __cordl_internal_set_distributionType(::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType  value) ;

constexpr void __cordl_internal_set_executeSceneLabels(::GlobalNamespace::MRUKAnchor_SceneLabels  value) ;

constexpr void __cordl_internal_set_gridDistribution(::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution*  value) ;

constexpr void __cordl_internal_set_lifetime(float_t  value) ;

constexpr void __cordl_internal_set_masks(::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>>  value) ;

constexpr void __cordl_internal_set_modifiers(::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier>>  value) ;

constexpr void __cordl_internal_set_placement(::Meta::XR::MRUtilityKit::SceneDecorator::Placement  value) ;

constexpr void __cordl_internal_set_placementDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_randomDistribution(::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution*  value) ;

constexpr void __cordl_internal_set_rayOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_selectBehind(bool  value) ;

constexpr void __cordl_internal_set_simplexDistribution(::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*  value) ;

constexpr void __cordl_internal_set_spawnHierarchy(::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy  value) ;

constexpr void __cordl_internal_set_staggeredConcentricDistribution(::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution*  value) ;

constexpr void __cordl_internal_set_targetPhysicsLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_targets(::Meta::XR::MRUtilityKit::SceneDecorator::Target  value) ;

/// @brief Method .ctor, addr 0x9f54510, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneDecoration() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneDecoration", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneDecoration(SceneDecoration && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneDecoration", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneDecoration(SceneDecoration const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25968};

/// [SerializeField]
/// [Tooltip("Each prefab has an own pool of this size")]
/// @brief Field Poolsize, offset: 0x18, size: 0x4, def value: None
 int32_t  ___Poolsize;

/// [SerializeField]
/// [Tooltip("Those prefabs will be used (randomly chosen) when a candidate has been found where to spawn.")]
/// @brief Field decorationPrefabs, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___decorationPrefabs;

/// [SerializeField]
/// [Tooltip("The effect will run on all anchors with the given labels.")]
/// @brief Field executeSceneLabels, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::MRUKAnchor_SceneLabels  ___executeSceneLabels;

/// [SerializeField]
/// [Tooltip("Which kind of targets should be used")]
/// @brief Field targets, offset: 0x2c, size: 0x4, def value: None
 ::Meta::XR::MRUtilityKit::SceneDecorator::Target  ___targets;

/// [SerializeField]
/// [Tooltip("If using physics layers as targets")]
/// @brief Field targetPhysicsLayers, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___targetPhysicsLayers;

/// [SerializeField]
/// [Tooltip("Changes the placement direction")]
/// @brief Field placement, offset: 0x34, size: 0x4, def value: None
 ::Meta::XR::MRUtilityKit::SceneDecorator::Placement  ___placement;

/// [SerializeField]
/// [Tooltip("Which direction to shoot")]
/// @brief Field placementDirection, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___placementDirection;

/// [SerializeField]
/// [Tooltip("Shoot backwards")]
/// @brief Field selectBehind, offset: 0x44, size: 0x1, def value: None
 bool  ___selectBehind;

/// [SerializeField]
/// [Tooltip("Offset from where to start the ray")]
/// @brief Field rayOffset, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rayOffset;

/// [SerializeField]
/// [Tooltip("Where to attach the created decorator")]
/// @brief Field spawnHierarchy, offset: 0x54, size: 0x4, def value: None
 ::Meta::XR::MRUtilityKit::SceneDecorator::SpawnHierarchy  ___spawnHierarchy;

/// [SerializeField]
/// [Tooltip("How to distribute the decorations")]
/// @brief Field distributionType, offset: 0x58, size: 0x4, def value: None
 ::Meta::XR::MRUtilityKit::SceneDecorator::DistributionType  ___distributionType;

/// [SerializeField]
/// [Tooltip("Distribute as a grid")]
/// @brief Field gridDistribution, offset: 0x60, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::SceneDecorator::GridDistribution*  ___gridDistribution;

/// [SerializeField]
/// [Tooltip("Generates uniform sampling points with simplex noise")]
/// @brief Field simplexDistribution, offset: 0x68, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::SceneDecorator::SimplexDistribution*  ___simplexDistribution;

/// [SerializeField]
/// [Tooltip("Generates staggered concentric distribution")]
/// @brief Field staggeredConcentricDistribution, offset: 0x70, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::SceneDecorator::StaggeredConcentricDistribution*  ___staggeredConcentricDistribution;

/// [SerializeField]
/// [Tooltip("Random distribution")]
/// @brief Field randomDistribution, offset: 0x78, size: 0x8, def value: None
 ::Meta::XR::MRUtilityKit::SceneDecorator::RandomDistribution*  ___randomDistribution;

/// [SerializeField]
/// @brief Field masks, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Mask>>  ___masks;

/// [SerializeField]
/// @brief Field constraints, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::Meta::XR::MRUtilityKit::SceneDecorator::Constraint>  ___constraints;

/// [SerializeField]
/// @brief Field modifiers, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityW<::Meta::XR::MRUtilityKit::SceneDecorator::Modifier>>  ___modifiers;

/// [SerializeField]
/// @brief Field discardParentScaling, offset: 0x98, size: 0x1, def value: None
 bool  ___discardParentScaling;

/// [SerializeField]
/// @brief Field lifetime, offset: 0x9c, size: 0x4, def value: None
 float_t  ___lifetime;

/// [SerializeField]
/// [Tooltip("Red: Physics Raycast, Magenta: Collider Raycast (only using this collider), Cyan: Startpos, Blue: Endpos")]
/// @brief Field DrawDebugRaysAndImpactPoints, offset: 0xa0, size: 0x1, def value: None
 bool  ___DrawDebugRaysAndImpactPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___Poolsize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___decorationPrefabs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___executeSceneLabels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___targets) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___targetPhysicsLayers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___placement) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___placementDirection) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___selectBehind) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___rayOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___spawnHierarchy) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___distributionType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___gridDistribution) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___simplexDistribution) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___staggeredConcentricDistribution) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___randomDistribution) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___masks) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___constraints) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___modifiers) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___discardParentScaling) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___lifetime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration, ___DrawDebugRaysAndImpactPoints) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::SceneDecoration) == 0xa8, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator
