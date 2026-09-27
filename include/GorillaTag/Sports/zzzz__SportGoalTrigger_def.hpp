#pragma once
// IWYU pragma private; include "GorillaTag/Sports/SportGoalTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SportGoalTrigger)
namespace GorillaTag::Sports {
class SportBall;
}
namespace GorillaTag::Sports {
class SportScoreboard;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Collider;
}
// Forward declare root types
namespace GorillaTag::Sports {
class SportGoalTrigger;
}
// Write type traits
MARK_REF_T(::GorillaTag::Sports::SportGoalTrigger*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Sports::SportGoalTrigger*, "GorillaTag.Sports", "SportGoalTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Sports {
// Is value type: false
// CS Name: GorillaTag.Sports.SportGoalTrigger
class CORDL_TYPE SportGoalTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ballTriggerExitDistanceFallback, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_ballTriggerExitDistanceFallback, put=__cordl_internal_set_ballTriggerExitDistanceFallback)) float_t  ballTriggerExitDistanceFallback;

/// @brief Field ballsPendingTriggerExit, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ballsPendingTriggerExit, put=__cordl_internal_set_ballsPendingTriggerExit)) ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Sports::SportBall>>*  ballsPendingTriggerExit;

/// @brief Field scoreboard, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreboard, put=__cordl_internal_set_scoreboard)) ::UnityW<::GorillaTag::Sports::SportScoreboard>  scoreboard;

/// @brief Field teamScoringOnThisGoal, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_teamScoringOnThisGoal, put=__cordl_internal_set_teamScoringOnThisGoal)) int32_t  teamScoringOnThisGoal;

/// @brief Method BallExitedGoalTrigger, addr 0x5d3bd7c, size 0x90, virtual false, abstract: false, final false
inline void BallExitedGoalTrigger(::GorillaTag::Sports::SportBall*  ball) ;

static inline ::GorillaTag::Sports::SportGoalTrigger* New_ctor() ;

/// @brief Method OnTriggerEnter, addr 0x5d3c020, size 0x134, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method PruneBallsPendingTriggerExitByDistance, addr 0x5d3be14, size 0x20c, virtual false, abstract: false, final false
inline void PruneBallsPendingTriggerExitByDistance() ;

constexpr float_t const& __cordl_internal_get_ballTriggerExitDistanceFallback() const;

constexpr float_t& __cordl_internal_get_ballTriggerExitDistanceFallback() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Sports::SportBall>>* const& __cordl_internal_get_ballsPendingTriggerExit() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Sports::SportBall>>*& __cordl_internal_get_ballsPendingTriggerExit() ;

constexpr ::UnityW<::GorillaTag::Sports::SportScoreboard> const& __cordl_internal_get_scoreboard() const;

constexpr ::UnityW<::GorillaTag::Sports::SportScoreboard>& __cordl_internal_get_scoreboard() ;

constexpr int32_t const& __cordl_internal_get_teamScoringOnThisGoal() const;

constexpr int32_t& __cordl_internal_get_teamScoringOnThisGoal() ;

constexpr void __cordl_internal_set_ballTriggerExitDistanceFallback(float_t  value) ;

constexpr void __cordl_internal_set_ballsPendingTriggerExit(::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Sports::SportBall>>*  value) ;

constexpr void __cordl_internal_set_scoreboard(::UnityW<::GorillaTag::Sports::SportScoreboard>  value) ;

constexpr void __cordl_internal_set_teamScoringOnThisGoal(int32_t  value) ;

/// @brief Method .ctor, addr 0x5d3c220, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SportGoalTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SportGoalTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SportGoalTrigger(SportGoalTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SportGoalTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SportGoalTrigger(SportGoalTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4693};

/// [SerializeField]
/// @brief Field scoreboard, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Sports::SportScoreboard>  ___scoreboard;

/// [SerializeField]
/// @brief Field teamScoringOnThisGoal, offset: 0x28, size: 0x4, def value: None
 int32_t  ___teamScoringOnThisGoal;

/// [SerializeField]
/// @brief Field ballTriggerExitDistanceFallback, offset: 0x2c, size: 0x4, def value: None
 float_t  ___ballTriggerExitDistanceFallback;

/// @brief Field ballsPendingTriggerExit, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::GorillaTag::Sports::SportBall>>*  ___ballsPendingTriggerExit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Sports::SportGoalTrigger, ___scoreboard) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportGoalTrigger, ___teamScoringOnThisGoal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportGoalTrigger, ___ballTriggerExitDistanceFallback) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportGoalTrigger, ___ballsPendingTriggerExit) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Sports::SportGoalTrigger) == 0x38, "Size mismatch!");

} // namespace end def GorillaTag::Sports
