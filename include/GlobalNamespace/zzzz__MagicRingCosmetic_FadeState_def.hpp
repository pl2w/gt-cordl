#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicRingCosmetic_FadeState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MagicRingCosmetic_FadeState)
// Forward declare root types
namespace GlobalNamespace {
struct MagicRingCosmetic_FadeState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MagicRingCosmetic_FadeState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicRingCosmetic_FadeState, "", "MagicRingCosmetic/FadeState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MagicRingCosmetic/FadeState
struct CORDL_TYPE MagicRingCosmetic_FadeState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MagicRingCosmetic_FadeState_Unwrapped
enum struct __MagicRingCosmetic_FadeState_Unwrapped : int32_t {
__E_FadedOut = static_cast<int32_t>(0x0),
__E_FadedIn = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MagicRingCosmetic_FadeState_Unwrapped () const noexcept {
return static_cast<__MagicRingCosmetic_FadeState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MagicRingCosmetic_FadeState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MagicRingCosmetic_FadeState(int32_t  value__) noexcept;

/// @brief Field FadedIn value: I32(1)
static ::GlobalNamespace::MagicRingCosmetic_FadeState const FadedIn;

/// @brief Field FadedOut value: I32(0)
static ::GlobalNamespace::MagicRingCosmetic_FadeState const FadedOut;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{529};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MagicRingCosmetic_FadeState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MagicRingCosmetic_FadeState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
