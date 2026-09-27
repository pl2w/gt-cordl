#pragma once
// IWYU pragma private; include "UnityEngine/UI/CanvasScaler_ScreenMatchMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CanvasScaler_ScreenMatchMode)
// Forward declare root types
namespace GlobalNamespace {
struct CanvasScaler_ScreenMatchMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CanvasScaler_ScreenMatchMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CanvasScaler_ScreenMatchMode, "UnityEngine.UI", "CanvasScaler/ScreenMatchMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.CanvasScaler/ScreenMatchMode
struct CORDL_TYPE CanvasScaler_ScreenMatchMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CanvasScaler_ScreenMatchMode_Unwrapped
enum struct __CanvasScaler_ScreenMatchMode_Unwrapped : int32_t {
__E_MatchWidthOrHeight = static_cast<int32_t>(0x0),
__E_Expand = static_cast<int32_t>(0x1),
__E_Shrink = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CanvasScaler_ScreenMatchMode_Unwrapped () const noexcept {
return static_cast<__CanvasScaler_ScreenMatchMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CanvasScaler_ScreenMatchMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CanvasScaler_ScreenMatchMode(int32_t  value__) noexcept;

/// @brief Field Expand value: I32(1)
static ::GlobalNamespace::CanvasScaler_ScreenMatchMode const Expand;

/// @brief Field MatchWidthOrHeight value: I32(0)
static ::GlobalNamespace::CanvasScaler_ScreenMatchMode const MatchWidthOrHeight;

/// @brief Field Shrink value: I32(2)
static ::GlobalNamespace::CanvasScaler_ScreenMatchMode const Shrink;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26051};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CanvasScaler_ScreenMatchMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CanvasScaler_ScreenMatchMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
