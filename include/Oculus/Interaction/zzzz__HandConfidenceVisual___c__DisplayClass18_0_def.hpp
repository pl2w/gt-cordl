#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandConfidenceVisual___c__DisplayClass18_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HandConfidenceVisual___c__DisplayClass18_0)
namespace Oculus::Interaction {
class HandConfidenceVisual;
}
// Forward declare root types
namespace GlobalNamespace {
struct HandConfidenceVisual___c__DisplayClass18_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandConfidenceVisual___c__DisplayClass18_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandConfidenceVisual___c__DisplayClass18_0, "Oculus.Interaction", "HandConfidenceVisual/<>c__DisplayClass18_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.HandConfidenceVisual/<>c__DisplayClass18_0
struct CORDL_TYPE HandConfidenceVisual___c__DisplayClass18_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr HandConfidenceVisual___c__DisplayClass18_0() ;

// Ctor Parameters [CppParam { name: "__4__this", ty: "::UnityW<::Oculus::Interaction::HandConfidenceVisual>", modifiers: "", def_value: None, comment: None }, CppParam { name: "changeRate", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr HandConfidenceVisual___c__DisplayClass18_0(::UnityW<::Oculus::Interaction::HandConfidenceVisual>  __4__this, float_t  changeRate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15917};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <>4__this, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandConfidenceVisual>  __4__this;

/// @brief Field changeRate, offset: 0x8, size: 0x4, def value: None
 float_t  changeRate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandConfidenceVisual___c__DisplayClass18_0, __4__this) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandConfidenceVisual___c__DisplayClass18_0, changeRate) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandConfidenceVisual___c__DisplayClass18_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
