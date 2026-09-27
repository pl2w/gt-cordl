#pragma once
// IWYU pragma private; include "Fusion/Histogram___c__DisplayClass26_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Histogram___c__DisplayClass26_0)
// Forward declare root types
namespace GlobalNamespace {
struct Histogram___c__DisplayClass26_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Histogram___c__DisplayClass26_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Histogram___c__DisplayClass26_0, "Fusion", "Histogram/<>c__DisplayClass26_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Histogram/<>c__DisplayClass26_0
struct CORDL_TYPE Histogram___c__DisplayClass26_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Histogram___c__DisplayClass26_0() ;

// Ctor Parameters [CppParam { name: "priorCount", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "binCount", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "binLowerBound", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "binUpperBound", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr Histogram___c__DisplayClass26_0(double_t  priorCount, double_t  binCount, double_t  binLowerBound, double_t  binUpperBound) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19046};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field priorCount, offset: 0x0, size: 0x8, def value: None
 double_t  priorCount;

/// @brief Field binCount, offset: 0x8, size: 0x8, def value: None
 double_t  binCount;

/// @brief Field binLowerBound, offset: 0x10, size: 0x8, def value: None
 double_t  binLowerBound;

/// @brief Field binUpperBound, offset: 0x18, size: 0x8, def value: None
 double_t  binUpperBound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Histogram___c__DisplayClass26_0, priorCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Histogram___c__DisplayClass26_0, binCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Histogram___c__DisplayClass26_0, binLowerBound) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Histogram___c__DisplayClass26_0, binUpperBound) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Histogram___c__DisplayClass26_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
