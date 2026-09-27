#pragma once
// IWYU pragma private; include "Pathfinding/Legacy/LegacyRichAI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__RichAI_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LegacyRichAI)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding::Legacy {
class LegacyRichAI;
}
// Write type traits
MARK_REF_T(::Pathfinding::Legacy::LegacyRichAI*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Legacy::LegacyRichAI*, "Pathfinding.Legacy", "LegacyRichAI");
// [RequireComponent(typeof(Pathfinding.Seeker))]
// [AddComponentMenu("Pathfinding/Legacy/AI/Legacy RichAI (3D, for navmesh)")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_legacy_1_1_legacy_rich_a_i.php")]
// Dependencies Pathfinding.RichAI, UnityEngine.Vector3
namespace Pathfinding::Legacy {
// Is value type: false
// CS Name: Pathfinding.Legacy.LegacyRichAI
class CORDL_TYPE LegacyRichAI : public ::Pathfinding::RichAI {
public:
// Declarations
/// @brief Field currentTargetDirection, offset 0x1ac, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentTargetDirection, put=__cordl_internal_set_currentTargetDirection)) ::UnityEngine::Vector3  currentTargetDirection;

/// @brief Field deltaTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_deltaTime, put=setStaticF_deltaTime)) float_t  deltaTime;

/// @brief Field lastTargetPoint, offset 0x1a0, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastTargetPoint, put=__cordl_internal_set_lastTargetPoint)) ::UnityEngine::Vector3  lastTargetPoint;

/// @brief Field preciseSlowdown, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get_preciseSlowdown, put=__cordl_internal_set_preciseSlowdown)) bool  preciseSlowdown;

/// @brief Field raycastingForGroundPlacement, offset 0x191, size 0x1 
 __declspec(property(get=__cordl_internal_get_raycastingForGroundPlacement, put=__cordl_internal_set_raycastingForGroundPlacement)) bool  raycastingForGroundPlacement;

/// @brief Field velocity, offset 0x194, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method Awake, addr 0x5ebcf1c, size 0x110, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Pathfinding::Legacy::LegacyRichAI* New_ctor() ;

/// @brief Method RaycastPosition, addr 0x5ebe22c, size 0x1cc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 RaycastPosition(::UnityEngine::Vector3  position, float_t  lasty) ;

/// @brief Method RotateTowards, addr 0x5ebdff0, size 0x23c, virtual false, abstract: false, final false
inline bool RotateTowards(::UnityEngine::Vector3  trotdir) ;

/// @brief Method Update, addr 0x5ebd02c, size 0xfc4, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentTargetDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentTargetDirection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastTargetPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastTargetPoint() ;

constexpr bool const& __cordl_internal_get_preciseSlowdown() const;

constexpr bool& __cordl_internal_get_preciseSlowdown() ;

constexpr bool const& __cordl_internal_get_raycastingForGroundPlacement() const;

constexpr bool& __cordl_internal_get_raycastingForGroundPlacement() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_currentTargetDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastTargetPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_preciseSlowdown(bool  value) ;

constexpr void __cordl_internal_set_raycastingForGroundPlacement(bool  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5ebe3f8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_deltaTime() ;

static inline void setStaticF_deltaTime(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyRichAI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyRichAI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyRichAI(LegacyRichAI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyRichAI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyRichAI(LegacyRichAI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21425};

/// @brief Field preciseSlowdown, offset: 0x190, size: 0x1, def value: None
 bool  ___preciseSlowdown;

/// @brief Field raycastingForGroundPlacement, offset: 0x191, size: 0x1, def value: None
 bool  ___raycastingForGroundPlacement;

/// @brief Field velocity, offset: 0x194, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

/// @brief Field lastTargetPoint, offset: 0x1a0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastTargetPoint;

/// @brief Field currentTargetDirection, offset: 0x1ac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentTargetDirection;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Legacy::LegacyRichAI, ___preciseSlowdown) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Legacy::LegacyRichAI, ___raycastingForGroundPlacement) == 0x191, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Legacy::LegacyRichAI, ___velocity) == 0x194, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Legacy::LegacyRichAI, ___lastTargetPoint) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Legacy::LegacyRichAI, ___currentTargetDirection) == 0x1ac, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Legacy::LegacyRichAI) == 0x1b8, "Size mismatch!");

} // namespace end def Pathfinding::Legacy
