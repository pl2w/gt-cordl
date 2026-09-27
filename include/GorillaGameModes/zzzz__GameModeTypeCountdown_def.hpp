#pragma once
// IWYU pragma private; include "GorillaGameModes/GameModeTypeCountdown.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameModeTypeCountdown)
namespace GameObjectScheduling {
class CountdownTextDate;
}
// Forward declare root types
namespace GorillaGameModes {
struct GameModeTypeCountdown;
}
// Write type traits
MARK_VAL_T(::GorillaGameModes::GameModeTypeCountdown);
DEFINE_IL2CPP_CLASS(::GorillaGameModes::GameModeTypeCountdown, "GorillaGameModes", "GameModeTypeCountdown");
// Dependencies GorillaGameModes.GameModeType
namespace GorillaGameModes {
// Is value type: true
// CS Name: GorillaGameModes.GameModeTypeCountdown
struct CORDL_TYPE GameModeTypeCountdown {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameModeTypeCountdown() ;

// Ctor Parameters [CppParam { name: "mode", ty: "::GorillaGameModes::GameModeType", modifiers: "", def_value: None, comment: None }, CppParam { name: "countdownTextDate", ty: "::UnityW<::GameObjectScheduling::CountdownTextDate>", modifiers: "", def_value: None, comment: None }]
constexpr GameModeTypeCountdown(::GorillaGameModes::GameModeType  mode, ::UnityW<::GameObjectScheduling::CountdownTextDate>  countdownTextDate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3892};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field mode, offset: 0x0, size: 0x4, def value: None
 ::GorillaGameModes::GameModeType  mode;

/// @brief Field countdownTextDate, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GameObjectScheduling::CountdownTextDate>  countdownTextDate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaGameModes::GameModeTypeCountdown, mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeTypeCountdown, countdownTextDate) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GorillaGameModes::GameModeTypeCountdown) == 0x10, "Size mismatch!");

} // namespace end def GorillaGameModes
