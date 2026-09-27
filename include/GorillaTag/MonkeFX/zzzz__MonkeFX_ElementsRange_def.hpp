#pragma once
// IWYU pragma private; include "GorillaTag/MonkeFX/MonkeFX_ElementsRange.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeFX_ElementsRange)
// Forward declare root types
namespace GlobalNamespace {
struct MonkeFX_ElementsRange;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MonkeFX_ElementsRange);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeFX_ElementsRange, "GorillaTag.MonkeFX", "MonkeFX/ElementsRange");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.MonkeFX.MonkeFX/ElementsRange
struct CORDL_TYPE MonkeFX_ElementsRange {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MonkeFX_ElementsRange() ;

// Ctor Parameters [CppParam { name: "min", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "max", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MonkeFX_ElementsRange(int32_t  min, int32_t  max) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4711};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field min, offset: 0x0, size: 0x4, def value: None
 int32_t  min;

/// @brief Field max, offset: 0x4, size: 0x4, def value: None
 int32_t  max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeFX_ElementsRange, min) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeFX_ElementsRange, max) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeFX_ElementsRange) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
