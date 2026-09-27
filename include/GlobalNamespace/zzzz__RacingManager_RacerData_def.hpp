#pragma once
// IWYU pragma private; include "GlobalNamespace/RacingManager_RacerData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RacingManager_RacerData)
// Forward declare root types
namespace GlobalNamespace {
struct RacingManager_RacerData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RacingManager_RacerData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RacingManager_RacerData, "", "RacingManager/RacerData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RacingManager/RacerData
struct CORDL_TYPE RacingManager_RacerData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RacingManager_RacerData() ;

// Ctor Parameters [CppParam { name: "actorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "playerName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "numCheckpointsPassed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "latestCheckpointTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isDisqualified", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr RacingManager_RacerData(int32_t  actorNumber, ::StringW  playerName, int32_t  numCheckpointsPassed, double_t  latestCheckpointTime, bool  isDisqualified) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{881};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field actorNumber, offset: 0x0, size: 0x4, def value: None
 int32_t  actorNumber;

/// @brief Field playerName, offset: 0x8, size: 0x8, def value: None
 ::StringW  playerName;

/// @brief Field numCheckpointsPassed, offset: 0x10, size: 0x4, def value: None
 int32_t  numCheckpointsPassed;

/// @brief Field latestCheckpointTime, offset: 0x18, size: 0x8, def value: None
 double_t  latestCheckpointTime;

/// @brief Field isDisqualified, offset: 0x20, size: 0x1, def value: None
 bool  isDisqualified;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RacingManager_RacerData, actorNumber) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_RacerData, playerName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_RacerData, numCheckpointsPassed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_RacerData, latestCheckpointTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RacingManager_RacerData, isDisqualified) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RacingManager_RacerData) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
