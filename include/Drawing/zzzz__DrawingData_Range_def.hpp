#pragma once
// IWYU pragma private; include "Drawing/DrawingData_Range.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData_Range)
// Forward declare root types
namespace GlobalNamespace {
struct DrawingData_Range;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DrawingData_Range);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DrawingData_Range, "Drawing", "DrawingData/Range");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/Range
struct CORDL_TYPE DrawingData_Range {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DrawingData_Range() ;

// Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "end", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DrawingData_Range(int32_t  start, int32_t  end) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27748};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field start, offset: 0x0, size: 0x4, def value: None
 int32_t  start;

/// @brief Field end, offset: 0x4, size: 0x4, def value: None
 int32_t  end;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DrawingData_Range, start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DrawingData_Range, end) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DrawingData_Range) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
