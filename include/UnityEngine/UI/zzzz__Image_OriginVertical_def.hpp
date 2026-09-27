#pragma once
// IWYU pragma private; include "UnityEngine/UI/Image_OriginVertical.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Image_OriginVertical)
// Forward declare root types
namespace GlobalNamespace {
struct Image_OriginVertical;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Image_OriginVertical);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Image_OriginVertical, "UnityEngine.UI", "Image/OriginVertical");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UI.Image/OriginVertical
struct CORDL_TYPE Image_OriginVertical {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Image_OriginVertical_Unwrapped
enum struct __Image_OriginVertical_Unwrapped : int32_t {
__E_Bottom = static_cast<int32_t>(0x0),
__E_Top = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Image_OriginVertical_Unwrapped () const noexcept {
return static_cast<__Image_OriginVertical_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Image_OriginVertical() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Image_OriginVertical(int32_t  value__) noexcept;

/// @brief Field Bottom value: I32(0)
static ::GlobalNamespace::Image_OriginVertical const Bottom;

/// @brief Field Top value: I32(1)
static ::GlobalNamespace::Image_OriginVertical const Top;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26029};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Image_OriginVertical, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Image_OriginVertical) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
