#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderStencilCompare.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTShaderStencilCompare)
// Forward declare root types
namespace GlobalNamespace {
struct GTShaderStencilCompare;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTShaderStencilCompare);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTShaderStencilCompare, "", "GTShaderStencilCompare");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTShaderStencilCompare
struct CORDL_TYPE GTShaderStencilCompare {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTShaderStencilCompare_Unwrapped
enum struct __GTShaderStencilCompare_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0x0),
__E_Never = static_cast<int32_t>(0x1),
__E_Less = static_cast<int32_t>(0x2),
__E_Equal = static_cast<int32_t>(0x3),
__E_LEqual = static_cast<int32_t>(0x4),
__E_Greater = static_cast<int32_t>(0x5),
__E_NotEqual = static_cast<int32_t>(0x6),
__E_GEqual = static_cast<int32_t>(0x7),
__E_Always = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTShaderStencilCompare_Unwrapped () const noexcept {
return static_cast<__GTShaderStencilCompare_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTShaderStencilCompare() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTShaderStencilCompare(int32_t  value__) noexcept;

/// @brief Field Always value: I32(8)
static ::GlobalNamespace::GTShaderStencilCompare const Always;

/// @brief Field Disabled value: I32(0)
static ::GlobalNamespace::GTShaderStencilCompare const Disabled;

/// @brief Field Equal value: I32(3)
static ::GlobalNamespace::GTShaderStencilCompare const Equal;

/// @brief Field GEqual value: I32(7)
static ::GlobalNamespace::GTShaderStencilCompare const GEqual;

/// @brief Field Greater value: I32(5)
static ::GlobalNamespace::GTShaderStencilCompare const Greater;

/// @brief Field LEqual value: I32(4)
static ::GlobalNamespace::GTShaderStencilCompare const LEqual;

/// @brief Field Less value: I32(2)
static ::GlobalNamespace::GTShaderStencilCompare const Less;

/// @brief Field Never value: I32(1)
static ::GlobalNamespace::GTShaderStencilCompare const Never;

/// @brief Field NotEqual value: I32(6)
static ::GlobalNamespace::GTShaderStencilCompare const NotEqual;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3707};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTShaderStencilCompare, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTShaderStencilCompare) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
