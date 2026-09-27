#pragma once
// IWYU pragma private; include "Fusion/RenderSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderSource)
// Forward declare root types
namespace Fusion {
struct RenderSource;
}
// Write type traits
MARK_VAL_T(::Fusion::RenderSource);
DEFINE_IL2CPP_CLASS(::Fusion::RenderSource, "Fusion", "RenderSource");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RenderSource
struct CORDL_TYPE RenderSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderSource_Unwrapped
enum struct __RenderSource_Unwrapped : int32_t {
__E_Interpolated = static_cast<int32_t>(0x0),
__E_From = static_cast<int32_t>(0x1),
__E_To = static_cast<int32_t>(0x2),
__E_Latest = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderSource_Unwrapped () const noexcept {
return static_cast<__RenderSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderSource(int32_t  value__) noexcept;

/// @brief Field From value: I32(1)
static ::Fusion::RenderSource const From;

/// @brief Field Interpolated value: I32(0)
static ::Fusion::RenderSource const Interpolated;

/// @brief Field Latest value: I32(3)
static ::Fusion::RenderSource const Latest;

/// @brief Field To value: I32(2)
static ::Fusion::RenderSource const To;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19297};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RenderSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::RenderSource) == 0x4, "Size mismatch!");

} // namespace end def Fusion
