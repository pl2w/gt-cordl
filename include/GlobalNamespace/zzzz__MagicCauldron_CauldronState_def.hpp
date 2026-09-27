#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicCauldron_CauldronState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MagicCauldron_CauldronState)
// Forward declare root types
namespace GlobalNamespace {
struct MagicCauldron_CauldronState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MagicCauldron_CauldronState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicCauldron_CauldronState, "", "MagicCauldron/CauldronState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MagicCauldron/CauldronState
struct CORDL_TYPE MagicCauldron_CauldronState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MagicCauldron_CauldronState_Unwrapped
enum struct __MagicCauldron_CauldronState_Unwrapped : int32_t {
__E_notReady = static_cast<int32_t>(0x0),
__E_ready = static_cast<int32_t>(0x1),
__E_recipeCollecting = static_cast<int32_t>(0x2),
__E_recipeActivated = static_cast<int32_t>(0x3),
__E_summoned = static_cast<int32_t>(0x4),
__E_failed = static_cast<int32_t>(0x5),
__E_cooldown = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MagicCauldron_CauldronState_Unwrapped () const noexcept {
return static_cast<__MagicCauldron_CauldronState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MagicCauldron_CauldronState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MagicCauldron_CauldronState(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2324};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field cooldown value: I32(6)
static ::GlobalNamespace::MagicCauldron_CauldronState const cooldown;

/// @brief Field failed value: I32(5)
static ::GlobalNamespace::MagicCauldron_CauldronState const failed;

/// @brief Field notReady value: I32(0)
static ::GlobalNamespace::MagicCauldron_CauldronState const notReady;

/// @brief Field ready value: I32(1)
static ::GlobalNamespace::MagicCauldron_CauldronState const ready;

/// @brief Field recipeActivated value: I32(3)
static ::GlobalNamespace::MagicCauldron_CauldronState const recipeActivated;

/// @brief Field recipeCollecting value: I32(2)
static ::GlobalNamespace::MagicCauldron_CauldronState const recipeCollecting;

/// @brief Field summoned value: I32(4)
static ::GlobalNamespace::MagicCauldron_CauldronState const summoned;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MagicCauldron_CauldronState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MagicCauldron_CauldronState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
