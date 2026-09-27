#pragma once
// IWYU pragma private; include "UnityEngine/UI/Image_Origin90.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Image_Origin90)
// Forward declare root types
namespace GlobalNamespace {
struct Image_Origin90;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Image_Origin90);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Image_Origin90, "UnityEngine.UI", "Image/Origin90");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.Image/Origin90
struct CORDL_TYPE Image_Origin90 {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Image_Origin90_Unwrapped
enum struct __Image_Origin90_Unwrapped : int32_t {
__E_BottomLeft = static_cast<int32_t>(0x0),
__E_TopLeft = static_cast<int32_t>(0x1),
__E_TopRight = static_cast<int32_t>(0x2),
__E_BottomRight = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Image_Origin90_Unwrapped () const noexcept {
return static_cast<__Image_Origin90_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Image_Origin90() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Image_Origin90(int32_t  value__) noexcept;

/// @brief Field BottomLeft value: I32(0)
static ::GlobalNamespace::Image_Origin90 const BottomLeft;

/// @brief Field BottomRight value: I32(3)
static ::GlobalNamespace::Image_Origin90 const BottomRight;

/// @brief Field TopLeft value: I32(1)
static ::GlobalNamespace::Image_Origin90 const TopLeft;

/// @brief Field TopRight value: I32(2)
static ::GlobalNamespace::Image_Origin90 const TopRight;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26030};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Image_Origin90, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Image_Origin90) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
