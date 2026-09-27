#pragma once
// IWYU pragma private; include "Oculus/Interaction/TransformerUtils_ConstrainedAxis.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__TransformerUtils_FloatRange_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TransformerUtils_ConstrainedAxis)
// Forward declare root types
namespace GlobalNamespace {
struct TransformerUtils_ConstrainedAxis;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TransformerUtils_ConstrainedAxis);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransformerUtils_ConstrainedAxis, "Oculus.Interaction", "TransformerUtils/ConstrainedAxis");
// Dependencies Oculus.Interaction.TransformerUtils::FloatRange
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.TransformerUtils/ConstrainedAxis
struct CORDL_TYPE TransformerUtils_ConstrainedAxis {
public:
// Declarations
/// @brief Method get_Unconstrained, addr 0xa48e594, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TransformerUtils_ConstrainedAxis get_Unconstrained() ;

// Ctor Parameters []
// @brief default ctor
constexpr TransformerUtils_ConstrainedAxis() ;

// Ctor Parameters [CppParam { name: "ConstrainAxis", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "AxisRange", ty: "::GlobalNamespace::TransformerUtils_FloatRange", modifiers: "", def_value: None, comment: None }]
constexpr TransformerUtils_ConstrainedAxis(bool  ConstrainAxis, ::GlobalNamespace::TransformerUtils_FloatRange  AxisRange) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16041};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field ConstrainAxis, offset: 0x0, size: 0x1, def value: None
 bool  ConstrainAxis;

/// @brief Field AxisRange, offset: 0x4, size: 0x8, def value: None
 ::GlobalNamespace::TransformerUtils_FloatRange  AxisRange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransformerUtils_ConstrainedAxis, ConstrainAxis) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransformerUtils_ConstrainedAxis, AxisRange) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransformerUtils_ConstrainedAxis) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
