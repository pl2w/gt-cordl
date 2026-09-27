#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_Axis2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_Axis2D)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_Axis2D;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_Axis2D);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_Axis2D, "", "OVRInput/Axis2D");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/Axis2D
struct CORDL_TYPE OVRInput_Axis2D {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInput_Axis2D_Unwrapped
enum struct __OVRInput_Axis2D_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_PrimaryThumbstick = static_cast<int32_t>(0x1),
__E_PrimaryTouchpad = static_cast<int32_t>(0x4),
__E_SecondaryThumbstick = static_cast<int32_t>(0x2),
__E_SecondaryTouchpad = static_cast<int32_t>(0x8),
__E_Any = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_Axis2D_Unwrapped () const noexcept {
return static_cast<__OVRInput_Axis2D_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_Axis2D() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_Axis2D(int32_t  value__) noexcept;

/// @brief Field Any value: I32(-1)
static ::GlobalNamespace::OVRInput_Axis2D const Any;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRInput_Axis2D const None;

/// @brief Field PrimaryThumbstick value: I32(1)
static ::GlobalNamespace::OVRInput_Axis2D const PrimaryThumbstick;

/// @brief Field PrimaryTouchpad value: I32(4)
static ::GlobalNamespace::OVRInput_Axis2D const PrimaryTouchpad;

/// @brief Field SecondaryThumbstick value: I32(2)
static ::GlobalNamespace::OVRInput_Axis2D const SecondaryThumbstick;

/// @brief Field SecondaryTouchpad value: I32(8)
static ::GlobalNamespace::OVRInput_Axis2D const SecondaryTouchpad;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11938};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_Axis2D, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_Axis2D) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
