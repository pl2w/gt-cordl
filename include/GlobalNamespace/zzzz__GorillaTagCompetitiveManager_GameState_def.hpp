#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveManager_GameState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagCompetitiveManager_GameState)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaTagCompetitiveManager_GameState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaTagCompetitiveManager_GameState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveManager_GameState, "", "GorillaTagCompetitiveManager/GameState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagCompetitiveManager/GameState
struct CORDL_TYPE GorillaTagCompetitiveManager_GameState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaTagCompetitiveManager_GameState_Unwrapped
enum struct __GorillaTagCompetitiveManager_GameState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_WaitingForPlayers = static_cast<int32_t>(0x1),
__E_StartingCountdown = static_cast<int32_t>(0x2),
__E_Playing = static_cast<int32_t>(0x3),
__E_PostRound = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaTagCompetitiveManager_GameState_Unwrapped () const noexcept {
return static_cast<__GorillaTagCompetitiveManager_GameState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveManager_GameState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaTagCompetitiveManager_GameState(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GorillaTagCompetitiveManager_GameState const None;

/// @brief Field Playing value: I32(3)
static ::GlobalNamespace::GorillaTagCompetitiveManager_GameState const Playing;

/// @brief Field PostRound value: I32(4)
static ::GlobalNamespace::GorillaTagCompetitiveManager_GameState const PostRound;

/// @brief Field StartingCountdown value: I32(2)
static ::GlobalNamespace::GorillaTagCompetitiveManager_GameState const StartingCountdown;

/// @brief Field WaitingForPlayers value: I32(1)
static ::GlobalNamespace::GorillaTagCompetitiveManager_GameState const WaitingForPlayers;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2219};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveManager_GameState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveManager_GameState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
