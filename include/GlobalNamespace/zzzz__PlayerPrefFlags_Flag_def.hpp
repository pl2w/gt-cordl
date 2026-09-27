#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPrefFlags_Flag.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerPrefFlags_Flag)
// Forward declare root types
namespace GlobalNamespace {
struct PlayerPrefFlags_Flag;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerPrefFlags_Flag);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerPrefFlags_Flag, "", "PlayerPrefFlags/Flag");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerPrefFlags/Flag
struct CORDL_TYPE PlayerPrefFlags_Flag {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerPrefFlags_Flag_Unwrapped
enum struct __PlayerPrefFlags_Flag_Unwrapped : int32_t {
__E_SHOW_1P_COSMETICS = static_cast<int32_t>(0x1),
__E_SWAP_HELD_COSMETICS = static_cast<int32_t>(0x2),
__E_GAME_MODE_SELECTOR_IS_SUPER = static_cast<int32_t>(0x4),
__E_GTV_MUTED = static_cast<int32_t>(0x8),
__E_ANTI_NAUSEA_ON = static_cast<int32_t>(0x10),
__E_GRAVDASH_FLIP_X = static_cast<int32_t>(0x20),
__E_GRAVDASH_FLIP_Y = static_cast<int32_t>(0x40),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerPrefFlags_Flag_Unwrapped () const noexcept {
return static_cast<__PlayerPrefFlags_Flag_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerPrefFlags_Flag() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayerPrefFlags_Flag(int32_t  value__) noexcept;

/// @brief Field ANTI_NAUSEA_ON value: I32(16)
static ::GlobalNamespace::PlayerPrefFlags_Flag const ANTI_NAUSEA_ON;

/// @brief Field GAME_MODE_SELECTOR_IS_SUPER value: I32(4)
static ::GlobalNamespace::PlayerPrefFlags_Flag const GAME_MODE_SELECTOR_IS_SUPER;

/// @brief Field GRAVDASH_FLIP_X value: I32(32)
static ::GlobalNamespace::PlayerPrefFlags_Flag const GRAVDASH_FLIP_X;

/// @brief Field GRAVDASH_FLIP_Y value: I32(64)
static ::GlobalNamespace::PlayerPrefFlags_Flag const GRAVDASH_FLIP_Y;

/// @brief Field GTV_MUTED value: I32(8)
static ::GlobalNamespace::PlayerPrefFlags_Flag const GTV_MUTED;

/// @brief Field SHOW_1P_COSMETICS value: I32(1)
static ::GlobalNamespace::PlayerPrefFlags_Flag const SHOW_1P_COSMETICS;

/// @brief Field SWAP_HELD_COSMETICS value: I32(2)
static ::GlobalNamespace::PlayerPrefFlags_Flag const SWAP_HELD_COSMETICS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1183};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerPrefFlags_Flag, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerPrefFlags_Flag) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
