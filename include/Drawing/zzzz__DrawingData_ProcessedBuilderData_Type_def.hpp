#pragma once
// IWYU pragma private; include "Drawing/DrawingData_ProcessedBuilderData_Type.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawingData_ProcessedBuilderData_Type)
// Forward declare root types
namespace GlobalNamespace {
struct ProcessedBuilderData_DrawingData_Type;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProcessedBuilderData_DrawingData_Type);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProcessedBuilderData_DrawingData_Type, "Drawing", "DrawingData/ProcessedBuilderData/Type");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Drawing.DrawingData/ProcessedBuilderData/Type
struct CORDL_TYPE ProcessedBuilderData_DrawingData_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProcessedBuilderData_DrawingData_Type_Unwrapped
enum struct __ProcessedBuilderData_DrawingData_Type_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0x0),
__E_Static = static_cast<int32_t>(0x1),
__E_Dynamic = static_cast<int32_t>(0x2),
__E_Persistent = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProcessedBuilderData_DrawingData_Type_Unwrapped () const noexcept {
return static_cast<__ProcessedBuilderData_DrawingData_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProcessedBuilderData_DrawingData_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProcessedBuilderData_DrawingData_Type(int32_t  value__) noexcept;

/// @brief Field Dynamic value: I32(2)
static ::GlobalNamespace::ProcessedBuilderData_DrawingData_Type const Dynamic;

/// @brief Field Invalid value: I32(0)
static ::GlobalNamespace::ProcessedBuilderData_DrawingData_Type const Invalid;

/// @brief Field Persistent value: I32(3)
static ::GlobalNamespace::ProcessedBuilderData_DrawingData_Type const Persistent;

/// @brief Field Static value: I32(1)
static ::GlobalNamespace::ProcessedBuilderData_DrawingData_Type const Static;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27728};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProcessedBuilderData_DrawingData_Type, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProcessedBuilderData_DrawingData_Type) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
