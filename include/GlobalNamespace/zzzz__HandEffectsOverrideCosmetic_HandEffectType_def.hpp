#pragma once
// IWYU pragma private; include "GlobalNamespace/HandEffectsOverrideCosmetic_HandEffectType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HandEffectsOverrideCosmetic_HandEffectType)
// Forward declare root types
namespace GlobalNamespace {
struct HandEffectsOverrideCosmetic_HandEffectType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType, "", "HandEffectsOverrideCosmetic/HandEffectType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: HandEffectsOverrideCosmetic/HandEffectType
struct CORDL_TYPE HandEffectsOverrideCosmetic_HandEffectType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HandEffectsOverrideCosmetic_HandEffectType_Unwrapped
enum struct __HandEffectsOverrideCosmetic_HandEffectType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_FistBump = static_cast<int32_t>(0x1),
__E_HighFive = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HandEffectsOverrideCosmetic_HandEffectType_Unwrapped () const noexcept {
return static_cast<__HandEffectsOverrideCosmetic_HandEffectType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HandEffectsOverrideCosmetic_HandEffectType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HandEffectsOverrideCosmetic_HandEffectType(int32_t  value__) noexcept;

/// @brief Field FistBump value: I32(1)
static ::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType const FistBump;

/// @brief Field HighFive value: I32(2)
static ::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType const HighFive;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{989};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandEffectsOverrideCosmetic_HandEffectType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
