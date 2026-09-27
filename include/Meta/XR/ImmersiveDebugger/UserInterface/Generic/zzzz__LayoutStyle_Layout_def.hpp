#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/LayoutStyle_Layout.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutStyle_Layout)
// Forward declare root types
namespace GlobalNamespace {
struct LayoutStyle_Layout;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LayoutStyle_Layout);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LayoutStyle_Layout, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "LayoutStyle/Layout");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.LayoutStyle/Layout
struct CORDL_TYPE LayoutStyle_Layout {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LayoutStyle_Layout_Unwrapped
enum struct __LayoutStyle_Layout_Unwrapped : int32_t {
__E_Fixed = static_cast<int32_t>(0x0),
__E_Fill = static_cast<int32_t>(0x1),
__E_FillHorizontal = static_cast<int32_t>(0x2),
__E_FillVertical = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LayoutStyle_Layout_Unwrapped () const noexcept {
return static_cast<__LayoutStyle_Layout_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LayoutStyle_Layout() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LayoutStyle_Layout(int32_t  value__) noexcept;

/// @brief Field Fill value: I32(1)
static ::GlobalNamespace::LayoutStyle_Layout const Fill;

/// @brief Field FillHorizontal value: I32(2)
static ::GlobalNamespace::LayoutStyle_Layout const FillHorizontal;

/// @brief Field FillVertical value: I32(3)
static ::GlobalNamespace::LayoutStyle_Layout const FillVertical;

/// @brief Field Fixed value: I32(0)
static ::GlobalNamespace::LayoutStyle_Layout const Fixed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27482};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LayoutStyle_Layout, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LayoutStyle_Layout) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
