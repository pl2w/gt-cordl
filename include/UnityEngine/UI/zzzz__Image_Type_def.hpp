#pragma once
// IWYU pragma private; include "UnityEngine/UI/Image_Type.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Image_Type)
// Forward declare root types
namespace GlobalNamespace {
struct Image_Type;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Image_Type);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Image_Type, "UnityEngine.UI", "Image/Type");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.Image/Type
struct CORDL_TYPE Image_Type {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Image_Type_Unwrapped
enum struct __Image_Type_Unwrapped : int32_t {
__E_Simple = static_cast<int32_t>(0x0),
__E_Sliced = static_cast<int32_t>(0x1),
__E_Tiled = static_cast<int32_t>(0x2),
__E_Filled = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Image_Type_Unwrapped () const noexcept {
return static_cast<__Image_Type_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Image_Type() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Image_Type(int32_t  value__) noexcept;

/// @brief Field Filled value: I32(3)
static ::GlobalNamespace::Image_Type const Filled;

/// @brief Field Simple value: I32(0)
static ::GlobalNamespace::Image_Type const Simple;

/// @brief Field Sliced value: I32(1)
static ::GlobalNamespace::Image_Type const Sliced;

/// @brief Field Tiled value: I32(2)
static ::GlobalNamespace::Image_Type const Tiled;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26026};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Image_Type, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Image_Type) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
