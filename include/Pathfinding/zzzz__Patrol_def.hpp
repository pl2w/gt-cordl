#pragma once
// IWYU pragma private; include "Pathfinding/Patrol.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Patrol)
namespace Pathfinding {
class IAstarAI;
}
// Forward declare root types
namespace Pathfinding {
class Patrol;
}
// Write type traits
MARK_REF_T(::Pathfinding::Patrol*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Patrol*, "Pathfinding", "Patrol");
// [UniqueComponent(tag = "ai.destination")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_patrol.php")]
// Dependencies Pathfinding.VersionedMonoBehaviour, UnityEngine.Transform
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.Patrol
class CORDL_TYPE Patrol : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
/// @brief Field agent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_agent, put=__cordl_internal_set_agent)) ::Pathfinding::IAstarAI*  agent;

/// @brief Field delay, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field index, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field switchTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_switchTime, put=__cordl_internal_set_switchTime)) float_t  switchTime;

/// @brief Field targets, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_targets, put=__cordl_internal_set_targets)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  targets;

/// @brief Method Awake, addr 0x5e38144, size 0x64, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Pathfinding::Patrol* New_ctor() ;

/// @brief Method Update, addr 0x5e381a8, size 0x2c8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Pathfinding::IAstarAI* const& __cordl_internal_get_agent() const;

constexpr ::Pathfinding::IAstarAI*& __cordl_internal_get_agent() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr float_t const& __cordl_internal_get_switchTime() const;

constexpr float_t& __cordl_internal_get_switchTime() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_targets() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_targets() ;

constexpr void __cordl_internal_set_agent(::Pathfinding::IAstarAI*  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_switchTime(float_t  value) ;

constexpr void __cordl_internal_set_targets(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

/// @brief Method .ctor, addr 0x5e38470, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Patrol() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Patrol", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Patrol(Patrol && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Patrol", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Patrol(Patrol const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21174};

/// @brief Field targets, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___targets;

/// @brief Field delay, offset: 0x30, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field index, offset: 0x34, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field agent, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::IAstarAI*  ___agent;

/// @brief Field switchTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___switchTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Patrol, ___targets) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Patrol, ___delay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Patrol, ___index) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Patrol, ___agent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Patrol, ___switchTime) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Patrol) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding
