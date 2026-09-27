#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/XROrigin_TrackingOriginMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XROrigin_TrackingOriginMode)
// Forward declare root types
namespace GlobalNamespace {
struct XROrigin_TrackingOriginMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XROrigin_TrackingOriginMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XROrigin_TrackingOriginMode, "Unity.XR.CoreUtils", "XROrigin/TrackingOriginMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.XR.CoreUtils.XROrigin/TrackingOriginMode
struct CORDL_TYPE XROrigin_TrackingOriginMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XROrigin_TrackingOriginMode_Unwrapped
enum struct __XROrigin_TrackingOriginMode_Unwrapped : int32_t {
__E_NotSpecified = static_cast<int32_t>(0x0),
__E_Device = static_cast<int32_t>(0x1),
__E_Floor = static_cast<int32_t>(0x2),
__E_Unbounded = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XROrigin_TrackingOriginMode_Unwrapped () const noexcept {
return static_cast<__XROrigin_TrackingOriginMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XROrigin_TrackingOriginMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XROrigin_TrackingOriginMode(int32_t  value__) noexcept;

/// @brief Field Device value: I32(1)
static ::GlobalNamespace::XROrigin_TrackingOriginMode const Device;

/// @brief Field Floor value: I32(2)
static ::GlobalNamespace::XROrigin_TrackingOriginMode const Floor;

/// @brief Field NotSpecified value: I32(0)
static ::GlobalNamespace::XROrigin_TrackingOriginMode const NotSpecified;

/// @brief Field Unbounded value: I32(3)
static ::GlobalNamespace::XROrigin_TrackingOriginMode const Unbounded;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30435};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XROrigin_TrackingOriginMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XROrigin_TrackingOriginMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
