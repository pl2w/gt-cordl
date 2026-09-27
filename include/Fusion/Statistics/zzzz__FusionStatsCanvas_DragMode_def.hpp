#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsCanvas_DragMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionStatsCanvas_DragMode)
// Forward declare root types
namespace GlobalNamespace {
struct FusionStatsCanvas_DragMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FusionStatsCanvas_DragMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FusionStatsCanvas_DragMode, "Fusion.Statistics", "FusionStatsCanvas/DragMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Statistics.FusionStatsCanvas/DragMode
struct CORDL_TYPE FusionStatsCanvas_DragMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FusionStatsCanvas_DragMode_Unwrapped
enum struct __FusionStatsCanvas_DragMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_DragCanvas = static_cast<int32_t>(0x1),
__E_ResizeContent = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FusionStatsCanvas_DragMode_Unwrapped () const noexcept {
return static_cast<__FusionStatsCanvas_DragMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FusionStatsCanvas_DragMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FusionStatsCanvas_DragMode(int32_t  value__) noexcept;

/// @brief Field DragCanvas value: I32(1)
static ::GlobalNamespace::FusionStatsCanvas_DragMode const DragCanvas;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::FusionStatsCanvas_DragMode const None;

/// @brief Field ResizeContent value: I32(2)
static ::GlobalNamespace::FusionStatsCanvas_DragMode const ResizeContent;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23499};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FusionStatsCanvas_DragMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FusionStatsCanvas_DragMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
