#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_TrackingOrigin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_TrackingOrigin)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_TrackingOrigin;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_TrackingOrigin);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_TrackingOrigin, "", "OVRPlugin/TrackingOrigin");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/TrackingOrigin
struct CORDL_TYPE OVRPlugin_TrackingOrigin {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_TrackingOrigin_Unwrapped
enum struct __OVRPlugin_TrackingOrigin_Unwrapped : int32_t {
__E_EyeLevel = static_cast<int32_t>(0x0),
__E_FloorLevel = static_cast<int32_t>(0x1),
__E_Stage = static_cast<int32_t>(0x2),
__E_View = static_cast<int32_t>(0x4),
__E_Stationary = static_cast<int32_t>(0x6),
__E_Count = static_cast<int32_t>(0x7),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_TrackingOrigin_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_TrackingOrigin_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_TrackingOrigin() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_TrackingOrigin(int32_t  value__) noexcept;

/// @brief Field Count value: I32(7)
static ::GlobalNamespace::OVRPlugin_TrackingOrigin const Count;

/// @brief Field EyeLevel value: I32(0)
static ::GlobalNamespace::OVRPlugin_TrackingOrigin const EyeLevel;

/// @brief Field FloorLevel value: I32(1)
static ::GlobalNamespace::OVRPlugin_TrackingOrigin const FloorLevel;

/// @brief Field Stage value: I32(2)
static ::GlobalNamespace::OVRPlugin_TrackingOrigin const Stage;

/// @brief Field Stationary value: I32(6)
static ::GlobalNamespace::OVRPlugin_TrackingOrigin const Stationary;

/// @brief Field View value: I32(4)
static ::GlobalNamespace::OVRPlugin_TrackingOrigin const View;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12060};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_TrackingOrigin, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_TrackingOrigin) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
