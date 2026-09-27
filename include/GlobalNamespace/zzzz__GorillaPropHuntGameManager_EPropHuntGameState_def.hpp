#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPropHuntGameManager_EPropHuntGameState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaPropHuntGameManager_EPropHuntGameState)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaPropHuntGameManager_EPropHuntGameState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState, "", "GorillaPropHuntGameManager/EPropHuntGameState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaPropHuntGameManager/EPropHuntGameState
struct CORDL_TYPE GorillaPropHuntGameManager_EPropHuntGameState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaPropHuntGameManager_EPropHuntGameState_Unwrapped
enum struct __GorillaPropHuntGameManager_EPropHuntGameState_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_StoppedGameMode = static_cast<int32_t>(0x1),
__E_StartingGameMode = static_cast<int32_t>(0x2),
__E_WaitingForMorePlayers = static_cast<int32_t>(0x3),
__E_WaitingForRoundToStart = static_cast<int32_t>(0x4),
__E_Hiding = static_cast<int32_t>(0x5),
__E_Playing = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaPropHuntGameManager_EPropHuntGameState_Unwrapped () const noexcept {
return static_cast<__GorillaPropHuntGameManager_EPropHuntGameState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaPropHuntGameManager_EPropHuntGameState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaPropHuntGameManager_EPropHuntGameState(int32_t  value__) noexcept;

/// @brief Field Hiding value: I32(5)
static ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState const Hiding;

/// @brief Field Invalid value: I32(0)
static ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState const Invalid;

/// @brief Field Playing value: I32(6)
static ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState const Playing;

/// @brief Field StartingGameMode value: I32(2)
static ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState const StartingGameMode;

/// @brief Field StoppedGameMode value: I32(1)
static ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState const StoppedGameMode;

/// @brief Field WaitingForMorePlayers value: I32(3)
static ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState const WaitingForMorePlayers;

/// @brief Field WaitingForRoundToStart value: I32(4)
static ::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState const WaitingForRoundToStart;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{625};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPropHuntGameManager_EPropHuntGameState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
