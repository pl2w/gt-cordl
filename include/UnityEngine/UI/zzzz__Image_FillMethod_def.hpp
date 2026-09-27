#pragma once
// IWYU pragma private; include "UnityEngine/UI/Image_FillMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Image_FillMethod)
// Forward declare root types
namespace GlobalNamespace {
struct Image_FillMethod;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Image_FillMethod);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Image_FillMethod, "UnityEngine.UI", "Image/FillMethod");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.Image/FillMethod
struct CORDL_TYPE Image_FillMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Image_FillMethod_Unwrapped
enum struct __Image_FillMethod_Unwrapped : int32_t {
__E_Horizontal = static_cast<int32_t>(0x0),
__E_Vertical = static_cast<int32_t>(0x1),
__E_Radial90 = static_cast<int32_t>(0x2),
__E_Radial180 = static_cast<int32_t>(0x3),
__E_Radial360 = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Image_FillMethod_Unwrapped () const noexcept {
return static_cast<__Image_FillMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Image_FillMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Image_FillMethod(int32_t  value__) noexcept;

/// @brief Field Horizontal value: I32(0)
static ::GlobalNamespace::Image_FillMethod const Horizontal;

/// @brief Field Radial180 value: I32(3)
static ::GlobalNamespace::Image_FillMethod const Radial180;

/// @brief Field Radial360 value: I32(4)
static ::GlobalNamespace::Image_FillMethod const Radial360;

/// @brief Field Radial90 value: I32(2)
static ::GlobalNamespace::Image_FillMethod const Radial90;

/// @brief Field Vertical value: I32(1)
static ::GlobalNamespace::Image_FillMethod const Vertical;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26027};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Image_FillMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Image_FillMethod) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
