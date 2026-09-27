#pragma once
// IWYU pragma private; include "GlobalNamespace/GTShaderStencilOp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GTShaderStencilOp)
// Forward declare root types
namespace GlobalNamespace {
struct GTShaderStencilOp;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTShaderStencilOp);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTShaderStencilOp, "", "GTShaderStencilOp");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTShaderStencilOp
struct CORDL_TYPE GTShaderStencilOp {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GTShaderStencilOp_Unwrapped
enum struct __GTShaderStencilOp_Unwrapped : int32_t {
__E_Keep = static_cast<int32_t>(0x0),
__E_Zero = static_cast<int32_t>(0x1),
__E_Replace = static_cast<int32_t>(0x2),
__E_IncrSat = static_cast<int32_t>(0x3),
__E_DecrSat = static_cast<int32_t>(0x4),
__E_Invert = static_cast<int32_t>(0x5),
__E_IncrWrap = static_cast<int32_t>(0x6),
__E_DecrWrap = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GTShaderStencilOp_Unwrapped () const noexcept {
return static_cast<__GTShaderStencilOp_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GTShaderStencilOp() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GTShaderStencilOp(int32_t  value__) noexcept;

/// @brief Field DecrSat value: I32(4)
static ::GlobalNamespace::GTShaderStencilOp const DecrSat;

/// @brief Field DecrWrap value: I32(7)
static ::GlobalNamespace::GTShaderStencilOp const DecrWrap;

/// @brief Field IncrSat value: I32(3)
static ::GlobalNamespace::GTShaderStencilOp const IncrSat;

/// @brief Field IncrWrap value: I32(6)
static ::GlobalNamespace::GTShaderStencilOp const IncrWrap;

/// @brief Field Invert value: I32(5)
static ::GlobalNamespace::GTShaderStencilOp const Invert;

/// @brief Field Keep value: I32(0)
static ::GlobalNamespace::GTShaderStencilOp const Keep;

/// @brief Field Replace value: I32(2)
static ::GlobalNamespace::GTShaderStencilOp const Replace;

/// @brief Field Zero value: I32(1)
static ::GlobalNamespace::GTShaderStencilOp const Zero;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3708};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTShaderStencilOp, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTShaderStencilOp) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
