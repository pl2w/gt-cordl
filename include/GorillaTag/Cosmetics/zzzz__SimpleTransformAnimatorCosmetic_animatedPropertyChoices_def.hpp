#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/SimpleTransformAnimatorCosmetic_animatedPropertyChoices.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleTransformAnimatorCosmetic_animatedPropertyChoices)
// Forward declare root types
namespace GlobalNamespace {
struct SimpleTransformAnimatorCosmetic_animatedPropertyChoices;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimpleTransformAnimatorCosmetic_animatedPropertyChoices);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleTransformAnimatorCosmetic_animatedPropertyChoices, "GorillaTag.Cosmetics", "SimpleTransformAnimatorCosmetic/animatedPropertyChoices");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.SimpleTransformAnimatorCosmetic/animatedPropertyChoices
struct CORDL_TYPE SimpleTransformAnimatorCosmetic_animatedPropertyChoices {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimpleTransformAnimatorCosmetic_animatedPropertyChoices_Unwrapped
enum struct __SimpleTransformAnimatorCosmetic_animatedPropertyChoices_Unwrapped : int32_t {
__E_Position = static_cast<int32_t>(0x0),
__E_Rotation = static_cast<int32_t>(0x1),
__E_PositionAndRotation = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimpleTransformAnimatorCosmetic_animatedPropertyChoices_Unwrapped () const noexcept {
return static_cast<__SimpleTransformAnimatorCosmetic_animatedPropertyChoices_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimpleTransformAnimatorCosmetic_animatedPropertyChoices() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimpleTransformAnimatorCosmetic_animatedPropertyChoices(int32_t  value__) noexcept;

/// @brief Field Position value: I32(0)
static ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animatedPropertyChoices const Position;

/// @brief Field PositionAndRotation value: I32(2)
static ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animatedPropertyChoices const PositionAndRotation;

/// @brief Field Rotation value: I32(1)
static ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animatedPropertyChoices const Rotation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4990};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleTransformAnimatorCosmetic_animatedPropertyChoices, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleTransformAnimatorCosmetic_animatedPropertyChoices) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
