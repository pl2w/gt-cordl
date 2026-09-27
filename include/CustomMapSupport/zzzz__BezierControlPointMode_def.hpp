#pragma once
// IWYU pragma private; include "CustomMapSupport/BezierControlPointMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BezierControlPointMode)
// Forward declare root types
namespace CustomMapSupport {
struct BezierControlPointMode;
}
// Write type traits
MARK_VAL_T(::CustomMapSupport::BezierControlPointMode);
DEFINE_IL2CPP_CLASS(::CustomMapSupport::BezierControlPointMode, "CustomMapSupport", "BezierControlPointMode");
// Dependencies 
namespace CustomMapSupport {
// Is value type: true
// CS Name: CustomMapSupport.BezierControlPointMode
struct CORDL_TYPE BezierControlPointMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BezierControlPointMode_Unwrapped
enum struct __BezierControlPointMode_Unwrapped : int32_t {
__E_Free = static_cast<int32_t>(0x0),
__E_Aligned = static_cast<int32_t>(0x1),
__E_Mirrored = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BezierControlPointMode_Unwrapped () const noexcept {
return static_cast<__BezierControlPointMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BezierControlPointMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BezierControlPointMode(int32_t  value__) noexcept;

/// @brief Field Aligned value: I32(1)
static ::CustomMapSupport::BezierControlPointMode const Aligned;

/// @brief Field Free value: I32(0)
static ::CustomMapSupport::BezierControlPointMode const Free;

/// @brief Field Mirrored value: I32(2)
static ::CustomMapSupport::BezierControlPointMode const Mirrored;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30869};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::CustomMapSupport::BezierControlPointMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::CustomMapSupport::BezierControlPointMode) == 0x4, "Size mismatch!");

} // namespace end def CustomMapSupport
