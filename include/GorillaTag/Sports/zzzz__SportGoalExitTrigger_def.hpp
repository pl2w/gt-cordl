#pragma once
// IWYU pragma private; include "GorillaTag/Sports/SportGoalExitTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SportGoalExitTrigger)
namespace GorillaTag::Sports {
class SportGoalTrigger;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTag::Sports {
class SportGoalExitTrigger;
}
// Write type traits
MARK_REF_T(::GorillaTag::Sports::SportGoalExitTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Sports::SportGoalExitTrigger*, "GorillaTag.Sports", "SportGoalExitTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Sports {
// Is value type: false
// CS Name: GorillaTag.Sports.SportGoalExitTrigger
class CORDL_TYPE SportGoalExitTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field goalTrigger, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_goalTrigger, put=__cordl_internal_set_goalTrigger)) ::UnityW<::GorillaTag::Sports::SportGoalTrigger>  goalTrigger;

static inline ::GorillaTag::Sports::SportGoalExitTrigger* New_ctor() ;

/// @brief Method OnTriggerExit, addr 0x5d3bca4, size 0xd8, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

constexpr ::UnityW<::GorillaTag::Sports::SportGoalTrigger> const& __cordl_internal_get_goalTrigger() const;

constexpr ::UnityW<::GorillaTag::Sports::SportGoalTrigger>& __cordl_internal_get_goalTrigger() ;

constexpr void __cordl_internal_set_goalTrigger(::UnityW<::GorillaTag::Sports::SportGoalTrigger>  value) ;

/// @brief Method .ctor, addr 0x5d3be0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SportGoalExitTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SportGoalExitTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SportGoalExitTrigger(SportGoalExitTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SportGoalExitTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SportGoalExitTrigger(SportGoalExitTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4692};

/// [SerializeField]
/// @brief Field goalTrigger, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Sports::SportGoalTrigger>  ___goalTrigger;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Sports::SportGoalExitTrigger, ___goalTrigger) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Sports::SportGoalExitTrigger) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Sports
