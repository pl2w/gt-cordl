#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateScene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphModifier_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphUpdateScene)
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace Pathfinding {
class GraphUpdateScene;
}
// Write type traits
MARK_REF_T(::Pathfinding::GraphUpdateScene*);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphUpdateScene*, "Pathfinding", "GraphUpdateScene");
// [AddComponentMenu("Pathfinding/GraphUpdateScene")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_graph_update_scene.php")]
// Dependencies Pathfinding.GraphModifier, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphUpdateScene
class CORDL_TYPE GraphUpdateScene : public ::Pathfinding::GraphModifier {
public:
// Declarations
/// @brief Field applyOnScan, offset 0x5f, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyOnScan, put=__cordl_internal_set_applyOnScan)) bool  applyOnScan;

/// @brief Field applyOnStart, offset 0x5e, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyOnStart, put=__cordl_internal_set_applyOnStart)) bool  applyOnStart;

/// @brief Field convex, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_convex, put=__cordl_internal_set_convex)) bool  convex;

/// @brief Field convexPoints, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_convexPoints, put=__cordl_internal_set_convexPoints)) ::ArrayW<::UnityEngine::Vector3>  convexPoints;

/// @brief Field firstApplied, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstApplied, put=__cordl_internal_set_firstApplied)) bool  firstApplied;

/// @brief Field legacyMode, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_legacyMode, put=__cordl_internal_set_legacyMode)) bool  legacyMode;

/// @brief Field legacyUseWorldSpace, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_legacyUseWorldSpace, put=__cordl_internal_set_legacyUseWorldSpace)) bool  legacyUseWorldSpace;

/// @brief Field minBoundsHeight, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_minBoundsHeight, put=__cordl_internal_set_minBoundsHeight)) float_t  minBoundsHeight;

/// @brief Field modifyTag, offset 0x63, size 0x1 
 __declspec(property(get=__cordl_internal_get_modifyTag, put=__cordl_internal_set_modifyTag)) bool  modifyTag;

/// @brief Field modifyWalkability, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_modifyWalkability, put=__cordl_internal_set_modifyWalkability)) bool  modifyWalkability;

/// @brief Field penaltyDelta, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_penaltyDelta, put=__cordl_internal_set_penaltyDelta)) int32_t  penaltyDelta;

/// @brief Field points, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_points, put=__cordl_internal_set_points)) ::ArrayW<::UnityEngine::Vector3>  points;

/// @brief Field resetPenaltyOnPhysics, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_resetPenaltyOnPhysics, put=__cordl_internal_set_resetPenaltyOnPhysics)) bool  resetPenaltyOnPhysics;

/// @brief Field serializedVersion, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_serializedVersion, put=__cordl_internal_set_serializedVersion)) int32_t  serializedVersion;

/// @brief Field setTag, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_setTag, put=__cordl_internal_set_setTag)) int32_t  setTag;

/// @brief Field setTagInvert, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_setTagInvert, put=__cordl_internal_set_setTagInvert)) int32_t  setTagInvert;

/// @brief Field setWalkability, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get_setWalkability, put=__cordl_internal_set_setWalkability)) bool  setWalkability;

/// @brief Field updateErosion, offset 0x62, size 0x1 
 __declspec(property(get=__cordl_internal_get_updateErosion, put=__cordl_internal_set_updateErosion)) bool  updateErosion;

/// @brief Field updatePhysics, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_updatePhysics, put=__cordl_internal_set_updatePhysics)) bool  updatePhysics;

/// @brief Method Apply, addr 0x5e50b50, size 0x78c, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method Awake, addr 0x5e523e4, size 0x30, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DisableLegacyMode, addr 0x5e52314, size 0xd0, virtual false, abstract: false, final false
inline void DisableLegacyMode() ;

/// @brief Method GetBounds, addr 0x5e513ac, size 0x35c, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method InvertSettings, addr 0x5e512ec, size 0x40, virtual true, abstract: false, final false
inline void InvertSettings() ;

/// [Obsolete("The Y coordinate is no longer important. Use the position of the object instead", true)]
/// @brief Method LockToY, addr 0x5e513a8, size 0x4, virtual false, abstract: false, final false
inline void LockToY() ;

static inline ::Pathfinding::GraphUpdateScene* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x5e51bd8, size 0x8, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnDrawGizmos, addr 0x5e51be0, size 0x72c, virtual false, abstract: false, final false
inline void OnDrawGizmos(bool  selected) ;

/// @brief Method OnDrawGizmosSelected, addr 0x5e5230c, size 0x8, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnPostScan, addr 0x5e512dc, size 0x10, virtual true, abstract: false, final false
inline void OnPostScan() ;

/// @brief Method RecalcConvex, addr 0x5e5132c, size 0x78, virtual false, abstract: false, final false
inline void RecalcConvex() ;

/// @brief Method Start, addr 0x5e50ad4, size 0x7c, virtual false, abstract: false, final false
inline void Start() ;

/// [Obsolete("World space can no longer be used as it does not work well with rotated graphs. Use transform.InverseTransformPoint to transform points to local space.", true)]
/// @brief Method ToggleUseWorldSpace, addr 0x5e513a4, size 0x4, virtual false, abstract: false, final false
inline void ToggleUseWorldSpace() ;

constexpr bool const& __cordl_internal_get_applyOnScan() const;

constexpr bool& __cordl_internal_get_applyOnScan() ;

constexpr bool const& __cordl_internal_get_applyOnStart() const;

constexpr bool& __cordl_internal_get_applyOnStart() ;

constexpr bool const& __cordl_internal_get_convex() const;

constexpr bool& __cordl_internal_get_convex() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_convexPoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_convexPoints() ;

constexpr bool const& __cordl_internal_get_firstApplied() const;

constexpr bool& __cordl_internal_get_firstApplied() ;

constexpr bool const& __cordl_internal_get_legacyMode() const;

constexpr bool& __cordl_internal_get_legacyMode() ;

constexpr bool const& __cordl_internal_get_legacyUseWorldSpace() const;

constexpr bool& __cordl_internal_get_legacyUseWorldSpace() ;

constexpr float_t const& __cordl_internal_get_minBoundsHeight() const;

constexpr float_t& __cordl_internal_get_minBoundsHeight() ;

constexpr bool const& __cordl_internal_get_modifyTag() const;

constexpr bool& __cordl_internal_get_modifyTag() ;

constexpr bool const& __cordl_internal_get_modifyWalkability() const;

constexpr bool& __cordl_internal_get_modifyWalkability() ;

constexpr int32_t const& __cordl_internal_get_penaltyDelta() const;

constexpr int32_t& __cordl_internal_get_penaltyDelta() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_points() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_points() ;

constexpr bool const& __cordl_internal_get_resetPenaltyOnPhysics() const;

constexpr bool& __cordl_internal_get_resetPenaltyOnPhysics() ;

constexpr int32_t const& __cordl_internal_get_serializedVersion() const;

constexpr int32_t& __cordl_internal_get_serializedVersion() ;

constexpr int32_t const& __cordl_internal_get_setTag() const;

constexpr int32_t& __cordl_internal_get_setTag() ;

constexpr int32_t const& __cordl_internal_get_setTagInvert() const;

constexpr int32_t& __cordl_internal_get_setTagInvert() ;

constexpr bool const& __cordl_internal_get_setWalkability() const;

constexpr bool& __cordl_internal_get_setWalkability() ;

constexpr bool const& __cordl_internal_get_updateErosion() const;

constexpr bool& __cordl_internal_get_updateErosion() ;

constexpr bool const& __cordl_internal_get_updatePhysics() const;

constexpr bool& __cordl_internal_get_updatePhysics() ;

constexpr void __cordl_internal_set_applyOnScan(bool  value) ;

constexpr void __cordl_internal_set_applyOnStart(bool  value) ;

constexpr void __cordl_internal_set_convex(bool  value) ;

constexpr void __cordl_internal_set_convexPoints(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_firstApplied(bool  value) ;

constexpr void __cordl_internal_set_legacyMode(bool  value) ;

constexpr void __cordl_internal_set_legacyUseWorldSpace(bool  value) ;

constexpr void __cordl_internal_set_minBoundsHeight(float_t  value) ;

constexpr void __cordl_internal_set_modifyTag(bool  value) ;

constexpr void __cordl_internal_set_modifyWalkability(bool  value) ;

constexpr void __cordl_internal_set_penaltyDelta(int32_t  value) ;

constexpr void __cordl_internal_set_points(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_resetPenaltyOnPhysics(bool  value) ;

constexpr void __cordl_internal_set_serializedVersion(int32_t  value) ;

constexpr void __cordl_internal_set_setTag(int32_t  value) ;

constexpr void __cordl_internal_set_setTagInvert(int32_t  value) ;

constexpr void __cordl_internal_set_setWalkability(bool  value) ;

constexpr void __cordl_internal_set_updateErosion(bool  value) ;

constexpr void __cordl_internal_set_updatePhysics(bool  value) ;

/// @brief Method .ctor, addr 0x5e52414, size 0x74, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphUpdateScene() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphUpdateScene", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphUpdateScene(GraphUpdateScene && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphUpdateScene", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphUpdateScene(GraphUpdateScene const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21231};

/// @brief Field points, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___points;

/// @brief Field convexPoints, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___convexPoints;

/// @brief Field convex, offset: 0x50, size: 0x1, def value: None
 bool  ___convex;

/// @brief Field minBoundsHeight, offset: 0x54, size: 0x4, def value: None
 float_t  ___minBoundsHeight;

/// @brief Field penaltyDelta, offset: 0x58, size: 0x4, def value: None
 int32_t  ___penaltyDelta;

/// @brief Field modifyWalkability, offset: 0x5c, size: 0x1, def value: None
 bool  ___modifyWalkability;

/// @brief Field setWalkability, offset: 0x5d, size: 0x1, def value: None
 bool  ___setWalkability;

/// @brief Field applyOnStart, offset: 0x5e, size: 0x1, def value: None
 bool  ___applyOnStart;

/// @brief Field applyOnScan, offset: 0x5f, size: 0x1, def value: None
 bool  ___applyOnScan;

/// @brief Field updatePhysics, offset: 0x60, size: 0x1, def value: None
 bool  ___updatePhysics;

/// @brief Field resetPenaltyOnPhysics, offset: 0x61, size: 0x1, def value: None
 bool  ___resetPenaltyOnPhysics;

/// @brief Field updateErosion, offset: 0x62, size: 0x1, def value: None
 bool  ___updateErosion;

/// @brief Field modifyTag, offset: 0x63, size: 0x1, def value: None
 bool  ___modifyTag;

/// @brief Field setTag, offset: 0x64, size: 0x4, def value: None
 int32_t  ___setTag;

/// [HideInInspector]
/// @brief Field legacyMode, offset: 0x68, size: 0x1, def value: None
 bool  ___legacyMode;

/// @brief Field setTagInvert, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___setTagInvert;

/// @brief Field firstApplied, offset: 0x70, size: 0x1, def value: None
 bool  ___firstApplied;

/// [SerializeField]
/// @brief Field serializedVersion, offset: 0x74, size: 0x4, def value: None
 int32_t  ___serializedVersion;

/// [SerializeField]
/// [FormerlySerializedAs("useWorldSpace")]
/// @brief Field legacyUseWorldSpace, offset: 0x78, size: 0x1, def value: None
 bool  ___legacyUseWorldSpace;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___points) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___convexPoints) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___convex) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___minBoundsHeight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___penaltyDelta) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___modifyWalkability) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___setWalkability) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___applyOnStart) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___applyOnScan) == 0x5f, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___updatePhysics) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___resetPenaltyOnPhysics) == 0x61, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___updateErosion) == 0x62, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___modifyTag) == 0x63, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___setTag) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___legacyMode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___setTagInvert) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___firstApplied) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___serializedVersion) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateScene, ___legacyUseWorldSpace) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphUpdateScene) == 0x80, "Size mismatch!");

} // namespace end def Pathfinding
