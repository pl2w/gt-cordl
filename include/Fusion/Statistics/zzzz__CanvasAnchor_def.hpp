#pragma once
// IWYU pragma private; include "Fusion/Statistics/CanvasAnchor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasAnchor)
// Forward declare root types
namespace Fusion::Statistics {
struct CanvasAnchor;
}
// Write type traits
MARK_VAL_T(::Fusion::Statistics::CanvasAnchor);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::CanvasAnchor, "Fusion.Statistics", "CanvasAnchor");
// Dependencies 
namespace Fusion::Statistics {
// Is value type: true
// CS Name: Fusion.Statistics.CanvasAnchor
struct CORDL_TYPE CanvasAnchor {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CanvasAnchor_Unwrapped
enum struct __CanvasAnchor_Unwrapped : int32_t {
__E_TopLeft = static_cast<int32_t>(0x0),
__E_TopRight = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CanvasAnchor_Unwrapped () const noexcept {
return static_cast<__CanvasAnchor_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CanvasAnchor() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CanvasAnchor(int32_t  value__) noexcept;

/// @brief Field TopLeft value: I32(0)
static ::Fusion::Statistics::CanvasAnchor const TopLeft;

/// @brief Field TopRight value: I32(1)
static ::Fusion::Statistics::CanvasAnchor const TopRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23498};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::CanvasAnchor, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::CanvasAnchor) == 0x4, "Size mismatch!");

} // namespace end def Fusion::Statistics
