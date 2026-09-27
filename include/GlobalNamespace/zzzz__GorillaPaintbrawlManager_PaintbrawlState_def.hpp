#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaPaintbrawlManager_PaintbrawlState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaPaintbrawlManager_PaintbrawlState)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaPaintbrawlManager_PaintbrawlState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState, "", "GorillaPaintbrawlManager/PaintbrawlState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaPaintbrawlManager/PaintbrawlState
struct CORDL_TYPE GorillaPaintbrawlManager_PaintbrawlState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaPaintbrawlManager_PaintbrawlState_Unwrapped
enum struct __GorillaPaintbrawlManager_PaintbrawlState_Unwrapped : int32_t {
__E_NotEnoughPlayers = static_cast<int32_t>(0x0),
__E_GameEnd = static_cast<int32_t>(0x1),
__E_GameEndWaiting = static_cast<int32_t>(0x2),
__E_StartCountdown = static_cast<int32_t>(0x3),
__E_CountingDownToStart = static_cast<int32_t>(0x4),
__E_GameStart = static_cast<int32_t>(0x5),
__E_GameRunning = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaPaintbrawlManager_PaintbrawlState_Unwrapped () const noexcept {
return static_cast<__GorillaPaintbrawlManager_PaintbrawlState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaPaintbrawlManager_PaintbrawlState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaPaintbrawlManager_PaintbrawlState(int32_t  value__) noexcept;

/// @brief Field CountingDownToStart value: I32(4)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState const CountingDownToStart;

/// @brief Field GameEnd value: I32(1)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState const GameEnd;

/// @brief Field GameEndWaiting value: I32(2)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState const GameEndWaiting;

/// @brief Field GameRunning value: I32(6)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState const GameRunning;

/// @brief Field GameStart value: I32(5)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState const GameStart;

/// @brief Field NotEnoughPlayers value: I32(0)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState const NotEnoughPlayers;

/// @brief Field StartCountdown value: I32(3)
static ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState const StartCountdown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2206};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
