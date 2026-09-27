#pragma once
// IWYU pragma private; include "Fusion/RenderTimeframe.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTimeframe)
// Forward declare root types
namespace Fusion {
struct RenderTimeframe;
}
// Write type traits
MARK_VAL_T(::Fusion::RenderTimeframe);
DEFINE_IL2CPP_CLASS(::Fusion::RenderTimeframe, "Fusion", "RenderTimeframe");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.RenderTimeframe
struct CORDL_TYPE RenderTimeframe {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RenderTimeframe_Unwrapped
enum struct __RenderTimeframe_Unwrapped : int32_t {
__E_Local = static_cast<int32_t>(0x0),
__E_Remote = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderTimeframe_Unwrapped () const noexcept {
return static_cast<__RenderTimeframe_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RenderTimeframe() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RenderTimeframe(int32_t  value__) noexcept;

/// @brief Field Local value: I32(0)
static ::Fusion::RenderTimeframe const Local;

/// @brief Field Remote value: I32(1)
static ::Fusion::RenderTimeframe const Remote;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19296};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RenderTimeframe, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::RenderTimeframe) == 0x4, "Size mismatch!");

} // namespace end def Fusion
