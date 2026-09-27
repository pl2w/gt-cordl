#pragma once
// IWYU pragma private; include "GlobalNamespace/MovingPlatform_PlatformType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MovingPlatform_PlatformType)
// Forward declare root types
namespace GlobalNamespace {
struct MovingPlatform_PlatformType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MovingPlatform_PlatformType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MovingPlatform_PlatformType, "", "MovingPlatform/PlatformType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MovingPlatform/PlatformType
struct CORDL_TYPE MovingPlatform_PlatformType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MovingPlatform_PlatformType_Unwrapped
enum struct __MovingPlatform_PlatformType_Unwrapped : int32_t {
__E_PointToPoint = static_cast<int32_t>(0x0),
__E_Arc = static_cast<int32_t>(0x1),
__E_Rotation = static_cast<int32_t>(0x2),
__E_Child = static_cast<int32_t>(0x3),
__E_ContinuousRotation = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MovingPlatform_PlatformType_Unwrapped () const noexcept {
return static_cast<__MovingPlatform_PlatformType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MovingPlatform_PlatformType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MovingPlatform_PlatformType(int32_t  value__) noexcept;

/// @brief Field Arc value: I32(1)
static ::GlobalNamespace::MovingPlatform_PlatformType const Arc;

/// @brief Field Child value: I32(3)
static ::GlobalNamespace::MovingPlatform_PlatformType const Child;

/// @brief Field ContinuousRotation value: I32(4)
static ::GlobalNamespace::MovingPlatform_PlatformType const ContinuousRotation;

/// @brief Field PointToPoint value: I32(0)
static ::GlobalNamespace::MovingPlatform_PlatformType const PointToPoint;

/// @brief Field Rotation value: I32(2)
static ::GlobalNamespace::MovingPlatform_PlatformType const Rotation;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2341};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MovingPlatform_PlatformType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MovingPlatform_PlatformType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
