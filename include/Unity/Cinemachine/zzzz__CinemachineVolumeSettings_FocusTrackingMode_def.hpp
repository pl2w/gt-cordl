#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineVolumeSettings_FocusTrackingMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineVolumeSettings_FocusTrackingMode)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineVolumeSettings_FocusTrackingMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode, "Unity.Cinemachine", "CinemachineVolumeSettings/FocusTrackingMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineVolumeSettings/FocusTrackingMode
struct CORDL_TYPE CinemachineVolumeSettings_FocusTrackingMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineVolumeSettings_FocusTrackingMode_Unwrapped
enum struct __CinemachineVolumeSettings_FocusTrackingMode_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_LookAtTarget = static_cast<int32_t>(0x1),
__E_FollowTarget = static_cast<int32_t>(0x2),
__E_CustomTarget = static_cast<int32_t>(0x3),
__E_Camera = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineVolumeSettings_FocusTrackingMode_Unwrapped () const noexcept {
return static_cast<__CinemachineVolumeSettings_FocusTrackingMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineVolumeSettings_FocusTrackingMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineVolumeSettings_FocusTrackingMode(int32_t  value__) noexcept;

/// @brief Field Camera value: I32(4)
static ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode const Camera;

/// @brief Field CustomTarget value: I32(3)
static ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode const CustomTarget;

/// @brief Field FollowTarget value: I32(2)
static ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode const FollowTarget;

/// @brief Field LookAtTarget value: I32(1)
static ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode const LookAtTarget;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22489};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
