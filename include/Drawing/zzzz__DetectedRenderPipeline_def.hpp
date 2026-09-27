#pragma once
// IWYU pragma private; include "Drawing/DetectedRenderPipeline.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DetectedRenderPipeline)
// Forward declare root types
namespace Drawing {
struct DetectedRenderPipeline;
}
// Write type traits
MARK_VAL_T(::Drawing::DetectedRenderPipeline);
DEFINE_IL2CPP_CLASS(::Drawing::DetectedRenderPipeline, "Drawing", "DetectedRenderPipeline");
// Dependencies 
namespace Drawing {
// Is value type: true
// CS Name: Drawing.DetectedRenderPipeline
struct CORDL_TYPE DetectedRenderPipeline {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DetectedRenderPipeline_Unwrapped
enum struct __DetectedRenderPipeline_Unwrapped : int32_t {
__E_BuiltInOrCustom = static_cast<int32_t>(0x0),
__E_HDRP = static_cast<int32_t>(0x1),
__E_URP = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DetectedRenderPipeline_Unwrapped () const noexcept {
return static_cast<__DetectedRenderPipeline_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DetectedRenderPipeline() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DetectedRenderPipeline(int32_t  value__) noexcept;

/// @brief Field BuiltInOrCustom value: I32(0)
static ::Drawing::DetectedRenderPipeline const BuiltInOrCustom;

/// @brief Field HDRP value: I32(1)
static ::Drawing::DetectedRenderPipeline const HDRP;

/// @brief Field URP value: I32(2)
static ::Drawing::DetectedRenderPipeline const URP;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27755};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Drawing::DetectedRenderPipeline, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Drawing::DetectedRenderPipeline) == 0x4, "Size mismatch!");

} // namespace end def Drawing
