#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderTransparencyMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTShaderTransparencyMode)
// Forward declare root types
namespace GlobalNamespace {
struct GTShaderTransparencyMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTShaderTransparencyMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTShaderTransparencyMode, "", "GTShaderTransparencyMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTShaderTransparencyMode
struct CORDL_TYPE GTShaderTransparencyMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTShaderTransparencyMode_Unwrapped
enum struct __GTShaderTransparencyMode_Unwrapped : int32_t {
__E_Opaque = static_cast<int32_t>(0x0),
__E_AlphaTest = static_cast<int32_t>(0x1),
__E_Transparent = static_cast<int32_t>(0x2),
__E_Premultiplied = static_cast<int32_t>(0x3),
__E_Add = static_cast<int32_t>(0x4),
__E_Multiply = static_cast<int32_t>(0x5),
__E_DitherBlueLive = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTShaderTransparencyMode_Unwrapped () const noexcept {
return static_cast<__GTShaderTransparencyMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTShaderTransparencyMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTShaderTransparencyMode(int32_t  value__) noexcept;

/// @brief Field Add value: I32(4)
static ::GlobalNamespace::GTShaderTransparencyMode const Add;

/// @brief Field AlphaTest value: I32(1)
static ::GlobalNamespace::GTShaderTransparencyMode const AlphaTest;

/// @brief Field DitherBlueLive value: I32(6)
static ::GlobalNamespace::GTShaderTransparencyMode const DitherBlueLive;

/// @brief Field Multiply value: I32(5)
static ::GlobalNamespace::GTShaderTransparencyMode const Multiply;

/// @brief Field Opaque value: I32(0)
static ::GlobalNamespace::GTShaderTransparencyMode const Opaque;

/// @brief Field Premultiplied value: I32(3)
static ::GlobalNamespace::GTShaderTransparencyMode const Premultiplied;

/// @brief Field Transparent value: I32(2)
static ::GlobalNamespace::GTShaderTransparencyMode const Transparent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3701};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTShaderTransparencyMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTShaderTransparencyMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
