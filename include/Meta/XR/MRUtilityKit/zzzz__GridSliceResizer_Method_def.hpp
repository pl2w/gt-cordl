#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/GridSliceResizer_Method.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GridSliceResizer_Method)
// Forward declare root types
namespace GlobalNamespace {
struct GridSliceResizer_Method;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GridSliceResizer_Method);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GridSliceResizer_Method, "Meta.XR.MRUtilityKit", "GridSliceResizer/Method");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.GridSliceResizer/Method
struct CORDL_TYPE GridSliceResizer_Method {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GridSliceResizer_Method_Unwrapped
enum struct __GridSliceResizer_Method_Unwrapped : int32_t {
__E_SLICE = static_cast<int32_t>(0x0),
__E_SLICE_WITH_ASYMMETRICAL_BORDER = static_cast<int32_t>(0x1),
__E_SCALE = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GridSliceResizer_Method_Unwrapped () const noexcept {
return static_cast<__GridSliceResizer_Method_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GridSliceResizer_Method() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GridSliceResizer_Method(int32_t  value__) noexcept;

/// @brief Field SCALE value: I32(2)
static ::GlobalNamespace::GridSliceResizer_Method const SCALE;

/// @brief Field SLICE value: I32(0)
static ::GlobalNamespace::GridSliceResizer_Method const SLICE;

/// @brief Field SLICE_WITH_ASYMMETRICAL_BORDER value: I32(1)
static ::GlobalNamespace::GridSliceResizer_Method const SLICE_WITH_ASYMMETRICAL_BORDER;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25849};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GridSliceResizer_Method, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GridSliceResizer_Method) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
