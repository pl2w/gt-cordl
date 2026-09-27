#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/TrackedPoseDriver_TrackedPose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackedPoseDriver_TrackedPose)
// Forward declare root types
namespace GlobalNamespace {
struct TrackedPoseDriver_TrackedPose;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TrackedPoseDriver_TrackedPose);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TrackedPoseDriver_TrackedPose, "UnityEngine.SpatialTracking", "TrackedPoseDriver/TrackedPose");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose
struct CORDL_TYPE TrackedPoseDriver_TrackedPose {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TrackedPoseDriver_TrackedPose_Unwrapped
enum struct __TrackedPoseDriver_TrackedPose_Unwrapped : int32_t {
__E_LeftEye = static_cast<int32_t>(0x0),
__E_RightEye = static_cast<int32_t>(0x1),
__E_Center = static_cast<int32_t>(0x2),
__E_Head = static_cast<int32_t>(0x3),
__E_LeftPose = static_cast<int32_t>(0x4),
__E_RightPose = static_cast<int32_t>(0x5),
__E_ColorCamera = static_cast<int32_t>(0x6),
__E_DepthCameraDeprecated = static_cast<int32_t>(0x7),
__E_FisheyeCameraDeprected = static_cast<int32_t>(0x8),
__E_DeviceDeprecated = static_cast<int32_t>(0x9),
__E_RemotePose = static_cast<int32_t>(0xa),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TrackedPoseDriver_TrackedPose_Unwrapped () const noexcept {
return static_cast<__TrackedPoseDriver_TrackedPose_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TrackedPoseDriver_TrackedPose() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TrackedPoseDriver_TrackedPose(int32_t  value__) noexcept;

/// @brief Field Center value: I32(2)
static ::GlobalNamespace::TrackedPoseDriver_TrackedPose const Center;

/// @brief Field ColorCamera value: I32(6)
static ::GlobalNamespace::TrackedPoseDriver_TrackedPose const ColorCamera;

/// @brief Field DepthCameraDeprecated value: I32(7)
static ::GlobalNamespace::TrackedPoseDriver_TrackedPose const DepthCameraDeprecated;

/// @brief Field DeviceDeprecated value: I32(9)
static ::GlobalNamespace::TrackedPoseDriver_TrackedPose const DeviceDeprecated;

/// @brief Field FisheyeCameraDeprected value: I32(8)
static ::GlobalNamespace::TrackedPoseDriver_TrackedPose const FisheyeCameraDeprected;

/// @brief Field Head value: I32(3)
static ::GlobalNamespace::TrackedPoseDriver_TrackedPose const Head;

/// @brief Field LeftEye value: I32(0)
static ::GlobalNamespace::TrackedPoseDriver_TrackedPose const LeftEye;

/// @brief Field LeftPose value: I32(4)
static ::GlobalNamespace::TrackedPoseDriver_TrackedPose const LeftPose;

/// @brief Field RemotePose value: I32(10)
static ::GlobalNamespace::TrackedPoseDriver_TrackedPose const RemotePose;

/// @brief Field RightEye value: I32(1)
static ::GlobalNamespace::TrackedPoseDriver_TrackedPose const RightEye;

/// @brief Field RightPose value: I32(5)
static ::GlobalNamespace::TrackedPoseDriver_TrackedPose const RightPose;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32924};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TrackedPoseDriver_TrackedPose, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TrackedPoseDriver_TrackedPose) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
