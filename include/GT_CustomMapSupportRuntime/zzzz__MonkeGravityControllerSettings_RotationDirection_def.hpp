#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MonkeGravityControllerSettings_RotationDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeGravityControllerSettings_RotationDirection)
// Forward declare root types
namespace GlobalNamespace {
struct MonkeGravityControllerSettings_RotationDirection;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection, "GT_CustomMapSupportRuntime", "MonkeGravityControllerSettings/RotationDirection");
// [NullableContext(0)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.MonkeGravityControllerSettings/RotationDirection
struct CORDL_TYPE MonkeGravityControllerSettings_RotationDirection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonkeGravityControllerSettings_RotationDirection_Unwrapped
enum struct __MonkeGravityControllerSettings_RotationDirection_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Forward = static_cast<int32_t>(0x1),
__E_Backward = static_cast<int32_t>(0x2),
__E_Left = static_cast<int32_t>(0x3),
__E_Right = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MonkeGravityControllerSettings_RotationDirection_Unwrapped () const noexcept {
return static_cast<__MonkeGravityControllerSettings_RotationDirection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MonkeGravityControllerSettings_RotationDirection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MonkeGravityControllerSettings_RotationDirection(int32_t  value__) noexcept;

/// @brief Field Backward value: I32(2)
static ::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection const Backward;

/// @brief Field Forward value: I32(1)
static ::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection const Forward;

/// @brief Field Left value: I32(3)
static ::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection const Left;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection const None;

/// @brief Field Right value: I32(4)
static ::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30916};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeGravityControllerSettings_RotationDirection) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
