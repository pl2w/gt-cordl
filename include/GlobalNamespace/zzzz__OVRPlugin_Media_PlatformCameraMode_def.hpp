#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_Media_PlatformCameraMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_Media_PlatformCameraMode)
// Forward declare root types
namespace GlobalNamespace {
struct Media_OVRPlugin_PlatformCameraMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode, "", "OVRPlugin/Media/PlatformCameraMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/Media/PlatformCameraMode
struct CORDL_TYPE Media_OVRPlugin_PlatformCameraMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Media_OVRPlugin_PlatformCameraMode_Unwrapped
enum struct __Media_OVRPlugin_PlatformCameraMode_Unwrapped : int32_t {
__E_Disabled = static_cast<int32_t>(0xffffffff),
__E_Initialized = static_cast<int32_t>(0x0),
__E_UserControlled = static_cast<int32_t>(0x1),
__E_SmartNavigated = static_cast<int32_t>(0x2),
__E_StabilizedPoV = static_cast<int32_t>(0x3),
__E_RemoteDroneControlled = static_cast<int32_t>(0x4),
__E_RemoteSpatialMapped = static_cast<int32_t>(0x5),
__E_SpectatorMode = static_cast<int32_t>(0x6),
__E_MobileMRC = static_cast<int32_t>(0x7),
__E_EnumSize = static_cast<int32_t>(0x7fffffff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Media_OVRPlugin_PlatformCameraMode_Unwrapped () const noexcept {
return static_cast<__Media_OVRPlugin_PlatformCameraMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Media_OVRPlugin_PlatformCameraMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Media_OVRPlugin_PlatformCameraMode(int32_t  value__) noexcept;

/// @brief Field Disabled value: I32(-1)
static ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode const Disabled;

/// @brief Field EnumSize value: I32(2147483647)
static ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode const EnumSize;

/// @brief Field Initialized value: I32(0)
static ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode const Initialized;

/// @brief Field MobileMRC value: I32(7)
static ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode const MobileMRC;

/// @brief Field RemoteDroneControlled value: I32(4)
static ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode const RemoteDroneControlled;

/// @brief Field RemoteSpatialMapped value: I32(5)
static ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode const RemoteSpatialMapped;

/// @brief Field SmartNavigated value: I32(2)
static ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode const SmartNavigated;

/// @brief Field SpectatorMode value: I32(6)
static ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode const SpectatorMode;

/// @brief Field StabilizedPoV value: I32(3)
static ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode const StabilizedPoV;

/// @brief Field UserControlled value: I32(1)
static ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode const UserControlled;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12227};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
