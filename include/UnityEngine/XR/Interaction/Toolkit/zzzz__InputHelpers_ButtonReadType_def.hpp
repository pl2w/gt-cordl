#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InputHelpers_ButtonReadType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputHelpers_ButtonReadType)
// Forward declare root types
namespace GlobalNamespace {
struct InputHelpers_ButtonReadType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputHelpers_ButtonReadType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputHelpers_ButtonReadType, "UnityEngine.XR.Interaction.Toolkit", "InputHelpers/ButtonReadType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.InputHelpers/ButtonReadType
struct CORDL_TYPE InputHelpers_ButtonReadType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputHelpers_ButtonReadType_Unwrapped
enum struct __InputHelpers_ButtonReadType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Binary = static_cast<int32_t>(0x1),
__E_Axis1D = static_cast<int32_t>(0x2),
__E_Axis2DUp = static_cast<int32_t>(0x3),
__E_Axis2DDown = static_cast<int32_t>(0x4),
__E_Axis2DLeft = static_cast<int32_t>(0x5),
__E_Axis2DRight = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputHelpers_ButtonReadType_Unwrapped () const noexcept {
return static_cast<__InputHelpers_ButtonReadType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputHelpers_ButtonReadType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputHelpers_ButtonReadType(int32_t  value__) noexcept;

/// @brief Field Axis1D value: I32(2)
static ::GlobalNamespace::InputHelpers_ButtonReadType const Axis1D;

/// @brief Field Axis2DDown value: I32(4)
static ::GlobalNamespace::InputHelpers_ButtonReadType const Axis2DDown;

/// @brief Field Axis2DLeft value: I32(5)
static ::GlobalNamespace::InputHelpers_ButtonReadType const Axis2DLeft;

/// @brief Field Axis2DRight value: I32(6)
static ::GlobalNamespace::InputHelpers_ButtonReadType const Axis2DRight;

/// @brief Field Axis2DUp value: I32(3)
static ::GlobalNamespace::InputHelpers_ButtonReadType const Axis2DUp;

/// @brief Field Binary value: I32(1)
static ::GlobalNamespace::InputHelpers_ButtonReadType const Binary;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::InputHelpers_ButtonReadType const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11131};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputHelpers_ButtonReadType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputHelpers_ButtonReadType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
