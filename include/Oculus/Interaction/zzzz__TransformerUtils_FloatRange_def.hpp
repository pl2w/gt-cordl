#pragma once
// IWYU pragma private; include "Oculus/Interaction/TransformerUtils_FloatRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TransformerUtils_FloatRange)
// Forward declare root types
namespace GlobalNamespace {
struct TransformerUtils_FloatRange;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TransformerUtils_FloatRange);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransformerUtils_FloatRange, "Oculus.Interaction", "TransformerUtils/FloatRange");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.TransformerUtils/FloatRange
struct CORDL_TYPE TransformerUtils_FloatRange {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TransformerUtils_FloatRange() ;

// Ctor Parameters [CppParam { name: "Min", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Max", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr TransformerUtils_FloatRange(float_t  Min, float_t  Max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16040};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Min, offset: 0x0, size: 0x4, def value: None
 float_t  Min;

/// @brief Field Max, offset: 0x4, size: 0x4, def value: None
 float_t  Max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransformerUtils_FloatRange, Min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformerUtils_FloatRange, Max) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransformerUtils_FloatRange) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
