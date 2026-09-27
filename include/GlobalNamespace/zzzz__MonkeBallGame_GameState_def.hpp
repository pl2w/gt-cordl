#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallGame_GameState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeBallGame_GameState)
// Forward declare root types
namespace GlobalNamespace {
struct MonkeBallGame_GameState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MonkeBallGame_GameState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallGame_GameState, "", "MonkeBallGame/GameState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MonkeBallGame/GameState
struct CORDL_TYPE MonkeBallGame_GameState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonkeBallGame_GameState_Unwrapped
enum struct __MonkeBallGame_GameState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PreGame = static_cast<int32_t>(0x1),
__E_Playing = static_cast<int32_t>(0x2),
__E_PostScore = static_cast<int32_t>(0x3),
__E_PostGame = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonkeBallGame_GameState_Unwrapped () const noexcept {
return static_cast<__MonkeBallGame_GameState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallGame_GameState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MonkeBallGame_GameState(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::MonkeBallGame_GameState const None;

/// @brief Field Playing value: I32(2)
static ::GlobalNamespace::MonkeBallGame_GameState const Playing;

/// @brief Field PostGame value: I32(4)
static ::GlobalNamespace::MonkeBallGame_GameState const PostGame;

/// @brief Field PostScore value: I32(3)
static ::GlobalNamespace::MonkeBallGame_GameState const PostScore;

/// @brief Field PreGame value: I32(1)
static ::GlobalNamespace::MonkeBallGame_GameState const PreGame;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1550};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallGame_GameState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallGame_GameState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
