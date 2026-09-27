#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineTrackedDolly_CameraUpMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineTrackedDolly_CameraUpMode)
// Forward declare root types
namespace GlobalNamespace {
struct CinemachineTrackedDolly_CameraUpMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode, "Unity.Cinemachine", "CinemachineTrackedDolly/CameraUpMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.CinemachineTrackedDolly/CameraUpMode
struct CORDL_TYPE CinemachineTrackedDolly_CameraUpMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CinemachineTrackedDolly_CameraUpMode_Unwrapped
enum struct __CinemachineTrackedDolly_CameraUpMode_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_Path = static_cast<int32_t>(0x1),
__E_PathNoRoll = static_cast<int32_t>(0x2),
__E_FollowTarget = static_cast<int32_t>(0x3),
__E_FollowTargetNoRoll = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CinemachineTrackedDolly_CameraUpMode_Unwrapped () const noexcept {
return static_cast<__CinemachineTrackedDolly_CameraUpMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CinemachineTrackedDolly_CameraUpMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CinemachineTrackedDolly_CameraUpMode(int32_t  value__) noexcept;

/// @brief Field Default value: I32(0)
static ::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode const Default;

/// @brief Field FollowTarget value: I32(3)
static ::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode const FollowTarget;

/// @brief Field FollowTargetNoRoll value: I32(4)
static ::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode const FollowTargetNoRoll;

/// @brief Field Path value: I32(1)
static ::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode const Path;

/// @brief Field PathNoRoll value: I32(2)
static ::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode const PathNoRoll;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22441};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CinemachineTrackedDolly_CameraUpMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
