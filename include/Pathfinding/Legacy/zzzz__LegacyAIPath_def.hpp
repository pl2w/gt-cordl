#pragma once
// IWYU pragma private; include "Pathfinding/Legacy/LegacyAIPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__AIPath_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LegacyAIPath)
namespace Pathfinding {
class Path;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Legacy {
class LegacyAIPath;
}
// Write type traits
MARK_REF_T(::Pathfinding::Legacy::LegacyAIPath*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Legacy::LegacyAIPath*, "Pathfinding.Legacy", "LegacyAIPath");
// [RequireComponent(typeof(Pathfinding.Seeker))]
// [AddComponentMenu("Pathfinding/Legacy/AI/Legacy AIPath (3D)")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_legacy_1_1_legacy_a_i_path.php")]
// Dependencies Pathfinding.AIPath, UnityEngine.Vector3
namespace Pathfinding::Legacy {
// Is value type: false
// CS Name: Pathfinding.Legacy.LegacyAIPath
class CORDL_TYPE LegacyAIPath : public ::Pathfinding::AIPath {
public:
// Declarations
/// @brief Field closestOnPathCheck, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get_closestOnPathCheck, put=__cordl_internal_set_closestOnPathCheck)) bool  closestOnPathCheck;

/// @brief Field currentWaypointIndex, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentWaypointIndex, put=__cordl_internal_set_currentWaypointIndex)) int32_t  currentWaypointIndex;

/// @brief Field forwardLook, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_forwardLook, put=__cordl_internal_set_forwardLook)) float_t  forwardLook;

/// @brief Field lastFoundWaypointPosition, offset 0x174, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastFoundWaypointPosition, put=__cordl_internal_set_lastFoundWaypointPosition)) ::UnityEngine::Vector3  lastFoundWaypointPosition;

/// @brief Field lastFoundWaypointTime, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastFoundWaypointTime, put=__cordl_internal_set_lastFoundWaypointTime)) float_t  lastFoundWaypointTime;

/// @brief Field minMoveScale, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minMoveScale, put=__cordl_internal_set_minMoveScale)) float_t  minMoveScale;

/// @brief Field targetDirection, offset 0x184, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetDirection, put=__cordl_internal_set_targetDirection)) ::UnityEngine::Vector3  targetDirection;

/// @brief Method Awake, addr 0x5ebc134, size 0x110, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateTargetPoint, addr 0x5ebcc78, size 0x224, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateTargetPoint(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

/// @brief Method CalculateVelocity, addr 0x5ebc4c4, size 0x414, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CalculateVelocity(::UnityEngine::Vector3  currentPosition) ;

static inline ::Pathfinding::Legacy::LegacyAIPath* New_ctor() ;

/// @brief Method OnPathComplete, addr 0x5ebc244, size 0x280, virtual true, abstract: false, final false
inline void OnPathComplete(::Pathfinding::Path*  _p) ;

/// @brief Method RotateTowards, addr 0x5ebcab0, size 0x1b0, virtual false, abstract: false, final false
inline void RotateTowards(::UnityEngine::Vector3  dir) ;

/// @brief Method Update, addr 0x5ebc8d8, size 0x1d8, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method XZSqrMagnitude, addr 0x5ebcc60, size 0x18, virtual false, abstract: false, final false
inline float_t XZSqrMagnitude(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b) ;

constexpr bool const& __cordl_internal_get_closestOnPathCheck() const;

constexpr bool& __cordl_internal_get_closestOnPathCheck() ;

constexpr int32_t const& __cordl_internal_get_currentWaypointIndex() const;

constexpr int32_t& __cordl_internal_get_currentWaypointIndex() ;

constexpr float_t const& __cordl_internal_get_forwardLook() const;

constexpr float_t& __cordl_internal_get_forwardLook() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastFoundWaypointPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastFoundWaypointPosition() ;

constexpr float_t const& __cordl_internal_get_lastFoundWaypointTime() const;

constexpr float_t& __cordl_internal_get_lastFoundWaypointTime() ;

constexpr float_t const& __cordl_internal_get_minMoveScale() const;

constexpr float_t& __cordl_internal_get_minMoveScale() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetDirection() ;

constexpr void __cordl_internal_set_closestOnPathCheck(bool  value) ;

constexpr void __cordl_internal_set_currentWaypointIndex(int32_t  value) ;

constexpr void __cordl_internal_set_forwardLook(float_t  value) ;

constexpr void __cordl_internal_set_lastFoundWaypointPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastFoundWaypointTime(float_t  value) ;

constexpr void __cordl_internal_set_minMoveScale(float_t  value) ;

constexpr void __cordl_internal_set_targetDirection(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5ebce9c, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyAIPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyAIPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyAIPath(LegacyAIPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyAIPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyAIPath(LegacyAIPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21424};

/// @brief Field forwardLook, offset: 0x164, size: 0x4, def value: None
 float_t  ___forwardLook;

/// @brief Field closestOnPathCheck, offset: 0x168, size: 0x1, def value: None
 bool  ___closestOnPathCheck;

/// @brief Field minMoveScale, offset: 0x16c, size: 0x4, def value: None
 float_t  ___minMoveScale;

/// @brief Field currentWaypointIndex, offset: 0x170, size: 0x4, def value: None
 int32_t  ___currentWaypointIndex;

/// @brief Field lastFoundWaypointPosition, offset: 0x174, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastFoundWaypointPosition;

/// @brief Field lastFoundWaypointTime, offset: 0x180, size: 0x4, def value: None
 float_t  ___lastFoundWaypointTime;

/// @brief Field targetDirection, offset: 0x184, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetDirection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Legacy::LegacyAIPath, ___forwardLook) == 0x164, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Legacy::LegacyAIPath, ___closestOnPathCheck) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Legacy::LegacyAIPath, ___minMoveScale) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Legacy::LegacyAIPath, ___currentWaypointIndex) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Legacy::LegacyAIPath, ___lastFoundWaypointPosition) == 0x174, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Legacy::LegacyAIPath, ___lastFoundWaypointTime) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Legacy::LegacyAIPath, ___targetDirection) == 0x184, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Legacy::LegacyAIPath) == 0x190, "Size mismatch!");

} // namespace end def Pathfinding::Legacy
