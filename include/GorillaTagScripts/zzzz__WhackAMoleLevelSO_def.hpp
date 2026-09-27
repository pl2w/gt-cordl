#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMoleLevelSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(WhackAMoleLevelSO)
// Forward declare root types
namespace GorillaTagScripts {
class WhackAMoleLevelSO;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::WhackAMoleLevelSO*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::WhackAMoleLevelSO*, "GorillaTagScripts", "WhackAMoleLevelSO");
// [CreateAssetMenu(fileName = "Data", menuName = "ScriptableObjects/WhackAMoleLevelSetting", order = 1)]
// Dependencies UnityEngine.ScriptableObject, UnityEngine.Vector2
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.WhackAMoleLevelSO
class CORDL_TYPE WhackAMoleLevelSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field hazardMoleChance, offset 0x2c, size 0x8 
 __declspec(property(get=__cordl_internal_get_hazardMoleChance, put=__cordl_internal_set_hazardMoleChance)) ::UnityEngine::Vector2  hazardMoleChance;

/// @brief Field levelDuration, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_levelDuration, put=__cordl_internal_set_levelDuration)) float_t  levelDuration;

/// @brief Field levelNumber, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_levelNumber, put=__cordl_internal_set_levelNumber)) int32_t  levelNumber;

/// @brief Field maximumMoleCount, offset 0x3c, size 0x8 
 __declspec(property(get=__cordl_internal_get_maximumMoleCount, put=__cordl_internal_set_maximumMoleCount)) ::UnityEngine::Vector2  maximumMoleCount;

/// @brief Field minScore, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minScore, put=__cordl_internal_set_minScore)) int32_t  minScore;

/// @brief Field minimumMoleCount, offset 0x34, size 0x8 
 __declspec(property(get=__cordl_internal_get_minimumMoleCount, put=__cordl_internal_set_minimumMoleCount)) ::UnityEngine::Vector2  minimumMoleCount;

/// @brief Field pickNextMoleTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_pickNextMoleTime, put=__cordl_internal_set_pickNextMoleTime)) float_t  pickNextMoleTime;

/// @brief Field showMoleDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_showMoleDuration, put=__cordl_internal_set_showMoleDuration)) float_t  showMoleDuration;

/// @brief Method GetMinScore, addr 0x5b7e008, size 0x10, virtual false, abstract: false, final false
inline int32_t GetMinScore(bool  isCoop) ;

static inline ::GorillaTagScripts::WhackAMoleLevelSO* New_ctor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_hazardMoleChance() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_hazardMoleChance() ;

constexpr float_t const& __cordl_internal_get_levelDuration() const;

constexpr float_t& __cordl_internal_get_levelDuration() ;

constexpr int32_t const& __cordl_internal_get_levelNumber() const;

constexpr int32_t& __cordl_internal_get_levelNumber() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_maximumMoleCount() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_maximumMoleCount() ;

constexpr int32_t const& __cordl_internal_get_minScore() const;

constexpr int32_t& __cordl_internal_get_minScore() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_minimumMoleCount() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_minimumMoleCount() ;

constexpr float_t const& __cordl_internal_get_pickNextMoleTime() const;

constexpr float_t& __cordl_internal_get_pickNextMoleTime() ;

constexpr float_t const& __cordl_internal_get_showMoleDuration() const;

constexpr float_t& __cordl_internal_get_showMoleDuration() ;

constexpr void __cordl_internal_set_hazardMoleChance(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_levelDuration(float_t  value) ;

constexpr void __cordl_internal_set_levelNumber(int32_t  value) ;

constexpr void __cordl_internal_set_maximumMoleCount(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_minScore(int32_t  value) ;

constexpr void __cordl_internal_set_minimumMoleCount(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_pickNextMoleTime(float_t  value) ;

constexpr void __cordl_internal_set_showMoleDuration(float_t  value) ;

/// @brief Method .ctor, addr 0x5b80960, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhackAMoleLevelSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhackAMoleLevelSO", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhackAMoleLevelSO(WhackAMoleLevelSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhackAMoleLevelSO", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhackAMoleLevelSO(WhackAMoleLevelSO const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3916};

/// @brief Field levelNumber, offset: 0x18, size: 0x4, def value: None
 int32_t  ___levelNumber;

/// @brief Field levelDuration, offset: 0x1c, size: 0x4, def value: None
 float_t  ___levelDuration;

/// [Tooltip("For how long do the moles stay visible?")]
/// @brief Field showMoleDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___showMoleDuration;

/// [Tooltip("How fast we pick a random new mole?")]
/// @brief Field pickNextMoleTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___pickNextMoleTime;

/// [Tooltip("Minimum score to get in order to be able to proceed to the next level")]
/// [SerializeField]
/// @brief Field minScore, offset: 0x28, size: 0x4, def value: None
 int32_t  ___minScore;

/// [Tooltip("Chance of each mole being a hazard mole at the start, and end, of the level.")]
/// @brief Field hazardMoleChance, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___hazardMoleChance;

/// [Tooltip("Minimum number of moles selected as level progresses.")]
/// @brief Field minimumMoleCount, offset: 0x34, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___minimumMoleCount;

/// [Tooltip("Minimum number of moles selected as level progresses.")]
/// @brief Field maximumMoleCount, offset: 0x3c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___maximumMoleCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::WhackAMoleLevelSO, ___levelNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMoleLevelSO, ___levelDuration) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMoleLevelSO, ___showMoleDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMoleLevelSO, ___pickNextMoleTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMoleLevelSO, ___minScore) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMoleLevelSO, ___hazardMoleChance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMoleLevelSO, ___minimumMoleCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::WhackAMoleLevelSO, ___maximumMoleCount) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::WhackAMoleLevelSO) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts
