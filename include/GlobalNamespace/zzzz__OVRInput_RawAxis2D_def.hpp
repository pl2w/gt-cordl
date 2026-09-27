#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRInput_RawAxis2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRInput_RawAxis2D)
// Forward declare root types
namespace GlobalNamespace {
struct OVRInput_RawAxis2D;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRInput_RawAxis2D);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRInput_RawAxis2D, "", "OVRInput/RawAxis2D");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRInput/RawAxis2D
struct CORDL_TYPE OVRInput_RawAxis2D {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRInput_RawAxis2D_Unwrapped
enum struct __OVRInput_RawAxis2D_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LThumbstick = static_cast<int32_t>(0x1),
__E_LTouchpad = static_cast<int32_t>(0x4),
__E_RThumbstick = static_cast<int32_t>(0x2),
__E_RTouchpad = static_cast<int32_t>(0x8),
__E_Any = static_cast<int32_t>(0xffffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRInput_RawAxis2D_Unwrapped () const noexcept {
return static_cast<__OVRInput_RawAxis2D_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRInput_RawAxis2D() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRInput_RawAxis2D(int32_t  value__) noexcept;

/// @brief Field Any value: I32(-1)
static ::GlobalNamespace::OVRInput_RawAxis2D const Any;

/// @brief Field LThumbstick value: I32(1)
static ::GlobalNamespace::OVRInput_RawAxis2D const LThumbstick;

/// @brief Field LTouchpad value: I32(4)
static ::GlobalNamespace::OVRInput_RawAxis2D const LTouchpad;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::OVRInput_RawAxis2D const None;

/// @brief Field RThumbstick value: I32(2)
static ::GlobalNamespace::OVRInput_RawAxis2D const RThumbstick;

/// @brief Field RTouchpad value: I32(8)
static ::GlobalNamespace::OVRInput_RawAxis2D const RTouchpad;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11939};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRInput_RawAxis2D, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRInput_RawAxis2D) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
