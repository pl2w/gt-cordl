#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/SimpleTransformAnimatorCosmetic_animModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimpleTransformAnimatorCosmetic_animModes)
// Forward declare root types
namespace GlobalNamespace {
struct SimpleTransformAnimatorCosmetic_animModes;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimpleTransformAnimatorCosmetic_animModes);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimpleTransformAnimatorCosmetic_animModes, "GorillaTag.Cosmetics", "SimpleTransformAnimatorCosmetic/animModes");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.SimpleTransformAnimatorCosmetic/animModes
struct CORDL_TYPE SimpleTransformAnimatorCosmetic_animModes {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimpleTransformAnimatorCosmetic_animModes_Unwrapped
enum struct __SimpleTransformAnimatorCosmetic_animModes_Unwrapped : int32_t {
__E_stepToTargetPos = static_cast<int32_t>(0x0),
__E_animateBounce = static_cast<int32_t>(0x1),
__E_animateOneshot = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimpleTransformAnimatorCosmetic_animModes_Unwrapped () const noexcept {
return static_cast<__SimpleTransformAnimatorCosmetic_animModes_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimpleTransformAnimatorCosmetic_animModes() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimpleTransformAnimatorCosmetic_animModes(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4991};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field animateBounce value: I32(1)
static ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animModes const animateBounce;

/// @brief Field animateOneshot value: I32(2)
static ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animModes const animateOneshot;

/// @brief Field stepToTargetPos value: I32(0)
static ::GlobalNamespace::SimpleTransformAnimatorCosmetic_animModes const stepToTargetPos;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleTransformAnimatorCosmetic_animModes, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimpleTransformAnimatorCosmetic_animModes) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
