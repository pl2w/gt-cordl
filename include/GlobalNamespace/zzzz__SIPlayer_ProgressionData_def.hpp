#pragma once
// IWYU pragma private; include "GlobalNamespace/SIPlayer_ProgressionData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SIPlayer_ProgressionData)
namespace GlobalNamespace {
class SIProgression;
}
namespace GlobalNamespace {
struct SIUpgradeType;
}
// Forward declare root types
namespace GlobalNamespace {
struct SIPlayer_ProgressionData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SIPlayer_ProgressionData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIPlayer_ProgressionData, "", "SIPlayer/ProgressionData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SIPlayer/ProgressionData
struct CORDL_TYPE SIPlayer_ProgressionData {
public:
// Declarations
/// @brief Method IsUnlocked, addr 0x59de19c, size 0x68, virtual false, abstract: false, final false
inline bool IsUnlocked(::GlobalNamespace::SIUpgradeType  upgradeType) ;

/// @brief Method .ctor, addr 0x59e0a98, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<int32_t>  _resourceArray, ::ArrayW<int32_t>  _limitedDepositTimeArray, ::ArrayW<::ArrayW<bool>>  _techTreeData, int32_t  _stashedQuests, int32_t  _stashedBonusPoints, int32_t  _bonusProgress, ::ArrayW<int32_t>  _currentQuestIds, ::ArrayW<int32_t>  _currentQuestProgresses) ;

/// @brief Method .ctor, addr 0x59df080, size 0x1f4, virtual false, abstract: false, final false
inline void _ctor(bool  itsNullLol) ;

/// @brief Method .ctor, addr 0x59e08a4, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::SIProgression*  siProgression) ;

// Ctor Parameters []
// @brief default ctor
constexpr SIPlayer_ProgressionData() ;

// Ctor Parameters [CppParam { name: "resourceArray", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "limitedDepositTimeArray", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "techTreeData", ty: "::ArrayW<::ArrayW<bool>>", modifiers: "", def_value: None, comment: None }, CppParam { name: "stashedQuests", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "stashedBonusPoints", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bonusProgress", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentQuestIds", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentQuestProgresses", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None, comment: None }]
constexpr SIPlayer_ProgressionData(::ArrayW<int32_t>  resourceArray, ::ArrayW<int32_t>  limitedDepositTimeArray, ::ArrayW<::ArrayW<bool>>  techTreeData, int32_t  stashedQuests, int32_t  stashedBonusPoints, int32_t  bonusProgress, ::ArrayW<int32_t>  currentQuestIds, ::ArrayW<int32_t>  currentQuestProgresses) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{325};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field resourceArray, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<int32_t>  resourceArray;

/// @brief Field limitedDepositTimeArray, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<int32_t>  limitedDepositTimeArray;

/// @brief Field techTreeData, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::ArrayW<bool>>  techTreeData;

/// @brief Field stashedQuests, offset: 0x18, size: 0x4, def value: None
 int32_t  stashedQuests;

/// @brief Field stashedBonusPoints, offset: 0x1c, size: 0x4, def value: None
 int32_t  stashedBonusPoints;

/// @brief Field bonusProgress, offset: 0x20, size: 0x4, def value: None
 int32_t  bonusProgress;

/// @brief Field currentQuestIds, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  currentQuestIds;

/// @brief Field currentQuestProgresses, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int32_t>  currentQuestProgresses;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIPlayer_ProgressionData, resourceArray) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer_ProgressionData, limitedDepositTimeArray) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer_ProgressionData, techTreeData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer_ProgressionData, stashedQuests) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer_ProgressionData, stashedBonusPoints) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer_ProgressionData, bonusProgress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer_ProgressionData, currentQuestIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIPlayer_ProgressionData, currentQuestProgresses) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIPlayer_ProgressionData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
