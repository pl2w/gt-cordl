#pragma once
// IWYU pragma private; include "Cosmetics/CosmeticFlickReactor_AxisMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticFlickReactor_AxisMode)
// Forward declare root types
namespace GlobalNamespace {
struct CosmeticFlickReactor_AxisMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CosmeticFlickReactor_AxisMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticFlickReactor_AxisMode, "Cosmetics", "CosmeticFlickReactor/AxisMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Cosmetics.CosmeticFlickReactor/AxisMode
struct CORDL_TYPE CosmeticFlickReactor_AxisMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CosmeticFlickReactor_AxisMode_Unwrapped
enum struct __CosmeticFlickReactor_AxisMode_Unwrapped : int32_t {
__E_X = static_cast<int32_t>(0x0),
__E_Y = static_cast<int32_t>(0x1),
__E_Z = static_cast<int32_t>(0x2),
__E_CustomForward = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CosmeticFlickReactor_AxisMode_Unwrapped () const noexcept {
return static_cast<__CosmeticFlickReactor_AxisMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CosmeticFlickReactor_AxisMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CosmeticFlickReactor_AxisMode(int32_t  value__) noexcept;

/// @brief Field CustomForward value: I32(3)
static ::GlobalNamespace::CosmeticFlickReactor_AxisMode const CustomForward;

/// @brief Field X value: I32(0)
static ::GlobalNamespace::CosmeticFlickReactor_AxisMode const X;

/// @brief Field Y value: I32(1)
static ::GlobalNamespace::CosmeticFlickReactor_AxisMode const Y;

/// @brief Field Z value: I32(2)
static ::GlobalNamespace::CosmeticFlickReactor_AxisMode const Z;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4577};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticFlickReactor_AxisMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticFlickReactor_AxisMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
