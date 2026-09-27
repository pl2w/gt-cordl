#pragma once
// IWYU pragma private; include "UnityEngine/SpatialTracking/TrackedPoseDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_DeviceType_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_TrackedPose_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_TrackingType_def.hpp"
#include "UnityEngine/SpatialTracking/zzzz__TrackedPoseDriver_UpdateType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
CORDL_MODULE_EXPORT(TrackedPoseDriver)
namespace GlobalNamespace {
struct TrackedPoseDriver_DeviceType;
}
namespace GlobalNamespace {
struct TrackedPoseDriver_TrackedPose;
}
namespace GlobalNamespace {
struct TrackedPoseDriver_TrackingType;
}
namespace GlobalNamespace {
struct TrackedPoseDriver_UpdateType;
}
namespace UnityEngine::Experimental::XR::Interaction {
class BasePoseProvider;
}
namespace UnityEngine::SpatialTracking {
struct PoseDataFlags;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::SpatialTracking {
class TrackedPoseDriver;
}
// Write type traits
MARK_REF_T(::UnityEngine::SpatialTracking::TrackedPoseDriver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::SpatialTracking::TrackedPoseDriver*, "UnityEngine.SpatialTracking", "TrackedPoseDriver");
// [DefaultExecutionOrder(-30000)]
// [AddComponentMenu("XR/Tracked Pose Driver")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.legacyinputhelpers@2.1/manual/index.html")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Pose, UnityEngine.SpatialTracking.TrackedPoseDriver::DeviceType, UnityEngine.SpatialTracking.TrackedPoseDriver::TrackedPose, UnityEngine.SpatialTracking.TrackedPoseDriver::TrackingType, UnityEngine.SpatialTracking.TrackedPoseDriver::UpdateType
namespace UnityEngine::SpatialTracking {
// Is value type: false
// CS Name: UnityEngine.SpatialTracking.TrackedPoseDriver
class CORDL_TYPE TrackedPoseDriver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DeviceType = ::GlobalNamespace::TrackedPoseDriver_DeviceType;

using TrackedPose = ::GlobalNamespace::TrackedPoseDriver_TrackedPose;

using TrackingType = ::GlobalNamespace::TrackedPoseDriver_TrackingType;

using UpdateType = ::GlobalNamespace::TrackedPoseDriver_UpdateType;

 __declspec(property(get=get_UseRelativeTransform, put=set_UseRelativeTransform)) bool  UseRelativeTransform;

 __declspec(property(get=get_deviceType, put=set_deviceType)) ::GlobalNamespace::TrackedPoseDriver_DeviceType  deviceType;

/// @brief Field m_Device, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Device, put=__cordl_internal_set_m_Device)) ::GlobalNamespace::TrackedPoseDriver_DeviceType  m_Device;

/// @brief Field m_OriginPose, offset 0x3c, size 0x1c 
 __declspec(property(get=__cordl_internal_get_m_OriginPose, put=__cordl_internal_set_m_OriginPose)) ::UnityEngine::Pose  m_OriginPose;

/// @brief Field m_PoseProviderComponent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PoseProviderComponent, put=__cordl_internal_set_m_PoseProviderComponent)) ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>  m_PoseProviderComponent;

/// @brief Field m_PoseSource, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PoseSource, put=__cordl_internal_set_m_PoseSource)) ::GlobalNamespace::TrackedPoseDriver_TrackedPose  m_PoseSource;

/// @brief Field m_TrackingType, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TrackingType, put=__cordl_internal_set_m_TrackingType)) ::GlobalNamespace::TrackedPoseDriver_TrackingType  m_TrackingType;

/// @brief Field m_UpdateType, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UpdateType, put=__cordl_internal_set_m_UpdateType)) ::GlobalNamespace::TrackedPoseDriver_UpdateType  m_UpdateType;

/// @brief Field m_UseRelativeTransform, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseRelativeTransform, put=__cordl_internal_set_m_UseRelativeTransform)) bool  m_UseRelativeTransform;

 __declspec(property(get=get_originPose, put=set_originPose)) ::UnityEngine::Pose  originPose;

 __declspec(property(get=get_poseProviderComponent, put=set_poseProviderComponent)) ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>  poseProviderComponent;

 __declspec(property(get=get_poseSource, put=set_poseSource)) ::GlobalNamespace::TrackedPoseDriver_TrackedPose  poseSource;

 __declspec(property(get=get_trackingType, put=set_trackingType)) ::GlobalNamespace::TrackedPoseDriver_TrackingType  trackingType;

 __declspec(property(get=get_updateType, put=set_updateType)) ::GlobalNamespace::TrackedPoseDriver_UpdateType  updateType;

/// @brief Method Awake, addr 0xb6add28, size 0x4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CacheLocalPosition, addr 0xb6adcb8, size 0x50, virtual false, abstract: false, final false
inline void CacheLocalPosition() ;

/// @brief Method FixedUpdate, addr 0xb6ade60, size 0x1c, virtual true, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetPoseData, addr 0xb6adb8c, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::SpatialTracking::PoseDataFlags GetPoseData(::GlobalNamespace::TrackedPoseDriver_DeviceType  device, ::GlobalNamespace::TrackedPoseDriver_TrackedPose  poseSource, ::by_ref<::UnityEngine::Pose>  resultPose) ;

/// @brief Method HasStereoCamera, addr 0xb6ae06c, size 0xb8, virtual false, abstract: false, final false
inline bool HasStereoCamera() ;

static inline ::UnityEngine::SpatialTracking::TrackedPoseDriver* New_ctor() ;

/// [BeforeRenderOrder(-30000)]
/// @brief Method OnBeforeRender, addr 0xb6ade98, size 0x20, virtual true, abstract: false, final false
inline void OnBeforeRender() ;

/// @brief Method OnDestroy, addr 0xb6add2c, size 0x4, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb6addc4, size 0x9c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb6add30, size 0x94, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PerformUpdate, addr 0xb6ae124, size 0x94, virtual true, abstract: false, final false
inline void PerformUpdate() ;

/// @brief Method ResetToCachedLocalPosition, addr 0xb6add08, size 0x20, virtual false, abstract: false, final false
inline void ResetToCachedLocalPosition() ;

/// @brief Method SetLocalTransform, addr 0xb6adeb8, size 0xf4, virtual true, abstract: false, final false
inline void SetLocalTransform(::UnityEngine::Vector3  newPosition, ::UnityEngine::Quaternion  newRotation, ::UnityEngine::SpatialTracking::PoseDataFlags  poseFlags) ;

/// @brief Method SetPoseSource, addr 0xb6ada38, size 0x144, virtual false, abstract: false, final false
inline bool SetPoseSource(::GlobalNamespace::TrackedPoseDriver_DeviceType  deviceType, ::GlobalNamespace::TrackedPoseDriver_TrackedPose  pose) ;

/// @brief Method TransformPoseByOriginIfNeeded, addr 0xb6adfac, size 0xc0, virtual false, abstract: false, final false
inline ::UnityEngine::Pose TransformPoseByOriginIfNeeded(::UnityEngine::Pose  pose) ;

/// @brief Method Update, addr 0xb6ade7c, size 0x1c, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::TrackedPoseDriver_DeviceType const& __cordl_internal_get_m_Device() const;

constexpr ::GlobalNamespace::TrackedPoseDriver_DeviceType& __cordl_internal_get_m_Device() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_m_OriginPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_m_OriginPose() ;

constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> const& __cordl_internal_get_m_PoseProviderComponent() const;

constexpr ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>& __cordl_internal_get_m_PoseProviderComponent() ;

constexpr ::GlobalNamespace::TrackedPoseDriver_TrackedPose const& __cordl_internal_get_m_PoseSource() const;

constexpr ::GlobalNamespace::TrackedPoseDriver_TrackedPose& __cordl_internal_get_m_PoseSource() ;

constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingType const& __cordl_internal_get_m_TrackingType() const;

constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingType& __cordl_internal_get_m_TrackingType() ;

constexpr ::GlobalNamespace::TrackedPoseDriver_UpdateType const& __cordl_internal_get_m_UpdateType() const;

constexpr ::GlobalNamespace::TrackedPoseDriver_UpdateType& __cordl_internal_get_m_UpdateType() ;

constexpr bool const& __cordl_internal_get_m_UseRelativeTransform() const;

constexpr bool& __cordl_internal_get_m_UseRelativeTransform() ;

constexpr void __cordl_internal_set_m_Device(::GlobalNamespace::TrackedPoseDriver_DeviceType  value) ;

constexpr void __cordl_internal_set_m_OriginPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_m_PoseProviderComponent(::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>  value) ;

constexpr void __cordl_internal_set_m_PoseSource(::GlobalNamespace::TrackedPoseDriver_TrackedPose  value) ;

constexpr void __cordl_internal_set_m_TrackingType(::GlobalNamespace::TrackedPoseDriver_TrackingType  value) ;

constexpr void __cordl_internal_set_m_UpdateType(::GlobalNamespace::TrackedPoseDriver_UpdateType  value) ;

constexpr void __cordl_internal_set_m_UseRelativeTransform(bool  value) ;

/// @brief Method .ctor, addr 0xb6ae1b8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_UseRelativeTransform, addr 0xb6adc78, size 0x8, virtual false, abstract: false, final false
inline bool get_UseRelativeTransform() ;

/// @brief Method get_deviceType, addr 0xb6ada18, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TrackedPoseDriver_DeviceType get_deviceType() ;

/// @brief Method get_originPose, addr 0xb6adc88, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Pose get_originPose() ;

/// @brief Method get_poseProviderComponent, addr 0xb6adb7c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider> get_poseProviderComponent() ;

/// @brief Method get_poseSource, addr 0xb6ada28, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TrackedPoseDriver_TrackedPose get_poseSource() ;

/// @brief Method get_trackingType, addr 0xb6adc58, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TrackedPoseDriver_TrackingType get_trackingType() ;

/// @brief Method get_updateType, addr 0xb6adc68, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TrackedPoseDriver_UpdateType get_updateType() ;

/// @brief Method set_UseRelativeTransform, addr 0xb6adc80, size 0x8, virtual false, abstract: false, final false
inline void set_UseRelativeTransform(bool  value) ;

/// @brief Method set_deviceType, addr 0xb6ada20, size 0x8, virtual false, abstract: false, final false
inline void set_deviceType(::GlobalNamespace::TrackedPoseDriver_DeviceType  value) ;

/// @brief Method set_originPose, addr 0xb6adc9c, size 0x1c, virtual false, abstract: false, final false
inline void set_originPose(::UnityEngine::Pose  value) ;

/// @brief Method set_poseProviderComponent, addr 0xb6adb84, size 0x8, virtual false, abstract: false, final false
inline void set_poseProviderComponent(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*  value) ;

/// @brief Method set_poseSource, addr 0xb6ada30, size 0x8, virtual false, abstract: false, final false
inline void set_poseSource(::GlobalNamespace::TrackedPoseDriver_TrackedPose  value) ;

/// @brief Method set_trackingType, addr 0xb6adc60, size 0x8, virtual false, abstract: false, final false
inline void set_trackingType(::GlobalNamespace::TrackedPoseDriver_TrackingType  value) ;

/// @brief Method set_updateType, addr 0xb6adc70, size 0x8, virtual false, abstract: false, final false
inline void set_updateType(::GlobalNamespace::TrackedPoseDriver_UpdateType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedPoseDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedPoseDriver(TrackedPoseDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedPoseDriver(TrackedPoseDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32927};

/// [SerializeField]
/// @brief Field m_Device, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::TrackedPoseDriver_DeviceType  ___m_Device;

/// [SerializeField]
/// @brief Field m_PoseSource, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::TrackedPoseDriver_TrackedPose  ___m_PoseSource;

/// [SerializeField]
/// @brief Field m_PoseProviderComponent, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Experimental::XR::Interaction::BasePoseProvider>  ___m_PoseProviderComponent;

/// [SerializeField]
/// @brief Field m_TrackingType, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::TrackedPoseDriver_TrackingType  ___m_TrackingType;

/// [SerializeField]
/// @brief Field m_UpdateType, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::TrackedPoseDriver_UpdateType  ___m_UpdateType;

/// [SerializeField]
/// @brief Field m_UseRelativeTransform, offset: 0x38, size: 0x1, def value: None
 bool  ___m_UseRelativeTransform;

/// @brief Field m_OriginPose, offset: 0x3c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___m_OriginPose;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_Device) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_PoseSource) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_PoseProviderComponent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_TrackingType) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_UpdateType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_UseRelativeTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::SpatialTracking::TrackedPoseDriver, ___m_OriginPose) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::SpatialTracking::TrackedPoseDriver) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::SpatialTracking
