#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagger_StatusEffect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagger_StatusEffect)
// Forward declare root types
namespace GlobalNamespace {
struct GorillaTagger_StatusEffect;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaTagger_StatusEffect);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagger_StatusEffect, "", "GorillaTagger/StatusEffect");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagger/StatusEffect
struct CORDL_TYPE GorillaTagger_StatusEffect {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GorillaTagger_StatusEffect_Unwrapped
enum struct __GorillaTagger_StatusEffect_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Frozen = static_cast<int32_t>(0x1),
__E_Slowed = static_cast<int32_t>(0x2),
__E_Dead = static_cast<int32_t>(0x3),
__E_Infected = static_cast<int32_t>(0x4),
__E_It = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GorillaTagger_StatusEffect_Unwrapped () const noexcept {
return static_cast<__GorillaTagger_StatusEffect_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagger_StatusEffect() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GorillaTagger_StatusEffect(int32_t  value__) noexcept;

/// @brief Field Dead value: I32(3)
static ::GlobalNamespace::GorillaTagger_StatusEffect const Dead;

/// @brief Field Frozen value: I32(1)
static ::GlobalNamespace::GorillaTagger_StatusEffect const Frozen;

/// @brief Field Infected value: I32(4)
static ::GlobalNamespace::GorillaTagger_StatusEffect const Infected;

/// @brief Field It value: I32(5)
static ::GlobalNamespace::GorillaTagger_StatusEffect const It;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::GorillaTagger_StatusEffect const None;

/// @brief Field Slowed value: I32(2)
static ::GlobalNamespace::GorillaTagger_StatusEffect const Slowed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2253};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagger_StatusEffect, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagger_StatusEffect) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
