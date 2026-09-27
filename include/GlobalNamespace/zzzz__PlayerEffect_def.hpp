#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayerEffect)
// Forward declare root types
namespace GlobalNamespace {
struct PlayerEffect;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlayerEffect);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayerEffect, "", "PlayerEffect");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlayerEffect
struct CORDL_TYPE PlayerEffect {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayerEffect_Unwrapped
enum struct __PlayerEffect_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0xffffffff),
__E_SNOWBALL_IMPACT = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayerEffect_Unwrapped () const noexcept {
return static_cast<__PlayerEffect_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlayerEffect() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlayerEffect(int32_t  value__) noexcept;

/// @brief Field NONE value: I32(-1)
static ::GlobalNamespace::PlayerEffect const NONE;

/// @brief Field SNOWBALL_IMPACT value: I32(0)
static ::GlobalNamespace::PlayerEffect const SNOWBALL_IMPACT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3409};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayerEffect, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayerEffect) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
