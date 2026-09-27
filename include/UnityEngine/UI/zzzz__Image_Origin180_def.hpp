#pragma once
// IWYU pragma private; include "UnityEngine/UI/Image_Origin180.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Image_Origin180)
// Forward declare root types
namespace GlobalNamespace {
struct Image_Origin180;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Image_Origin180);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Image_Origin180, "UnityEngine.UI", "Image/Origin180");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.Image/Origin180
struct CORDL_TYPE Image_Origin180 {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Image_Origin180_Unwrapped
enum struct __Image_Origin180_Unwrapped : int32_t {
__E_Bottom = static_cast<int32_t>(0x0),
__E_Left = static_cast<int32_t>(0x1),
__E_Top = static_cast<int32_t>(0x2),
__E_Right = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Image_Origin180_Unwrapped () const noexcept {
return static_cast<__Image_Origin180_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Image_Origin180() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Image_Origin180(int32_t  value__) noexcept;

/// @brief Field Bottom value: I32(0)
static ::GlobalNamespace::Image_Origin180 const Bottom;

/// @brief Field Left value: I32(1)
static ::GlobalNamespace::Image_Origin180 const Left;

/// @brief Field Right value: I32(3)
static ::GlobalNamespace::Image_Origin180 const Right;

/// @brief Field Top value: I32(2)
static ::GlobalNamespace::Image_Origin180 const Top;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26031};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Image_Origin180, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Image_Origin180) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
