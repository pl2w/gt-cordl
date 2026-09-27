#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallGame_RPC.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeBallGame_RPC)
// Forward declare root types
namespace GlobalNamespace {
struct MonkeBallGame_RPC;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MonkeBallGame_RPC);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallGame_RPC, "", "MonkeBallGame/RPC");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MonkeBallGame/RPC
struct CORDL_TYPE MonkeBallGame_RPC {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonkeBallGame_RPC_Unwrapped
enum struct __MonkeBallGame_RPC_Unwrapped : int32_t {
__E_SetGameState = static_cast<int32_t>(0x0),
__E_RequestSetGameState = static_cast<int32_t>(0x1),
__E_RequestResetGame = static_cast<int32_t>(0x2),
__E_SetScore = static_cast<int32_t>(0x3),
__E_RequestSetTeam = static_cast<int32_t>(0x4),
__E_SetTeam = static_cast<int32_t>(0x5),
__E_SetRestrictBallToTeam = static_cast<int32_t>(0x6),
__E_SetResetButton = static_cast<int32_t>(0x7),
__E_Count = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonkeBallGame_RPC_Unwrapped () const noexcept {
return static_cast<__MonkeBallGame_RPC_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallGame_RPC() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MonkeBallGame_RPC(int32_t  value__) noexcept;

/// @brief Field Count value: I32(8)
static ::GlobalNamespace::MonkeBallGame_RPC const Count;

/// @brief Field RequestResetGame value: I32(2)
static ::GlobalNamespace::MonkeBallGame_RPC const RequestResetGame;

/// @brief Field RequestSetGameState value: I32(1)
static ::GlobalNamespace::MonkeBallGame_RPC const RequestSetGameState;

/// @brief Field RequestSetTeam value: I32(4)
static ::GlobalNamespace::MonkeBallGame_RPC const RequestSetTeam;

/// @brief Field SetGameState value: I32(0)
static ::GlobalNamespace::MonkeBallGame_RPC const SetGameState;

/// @brief Field SetResetButton value: I32(7)
static ::GlobalNamespace::MonkeBallGame_RPC const SetResetButton;

/// @brief Field SetRestrictBallToTeam value: I32(6)
static ::GlobalNamespace::MonkeBallGame_RPC const SetRestrictBallToTeam;

/// @brief Field SetScore value: I32(3)
static ::GlobalNamespace::MonkeBallGame_RPC const SetScore;

/// @brief Field SetTeam value: I32(5)
static ::GlobalNamespace::MonkeBallGame_RPC const SetTeam;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1551};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallGame_RPC, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallGame_RPC) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
