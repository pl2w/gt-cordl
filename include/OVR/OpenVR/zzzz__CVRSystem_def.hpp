#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRSystem.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRSystem_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRSystem)
namespace GlobalNamespace {
struct CVRSystem_GetControllerStateUnion;
}
namespace GlobalNamespace {
struct CVRSystem_GetControllerStateWithPoseUnion;
}
namespace GlobalNamespace {
struct CVRSystem_PollNextEventUnion;
}
namespace OVR::OpenVR {
class CVRSystem__GetControllerStatePacked;
}
namespace OVR::OpenVR {
class CVRSystem__GetControllerStateWithPosePacked;
}
namespace OVR::OpenVR {
class CVRSystem__PollNextEventPacked;
}
namespace OVR::OpenVR {
struct DistortionCoordinates_t;
}
namespace OVR::OpenVR {
struct EDeviceActivityLevel;
}
namespace OVR::OpenVR {
struct EHiddenAreaMeshType;
}
namespace OVR::OpenVR {
struct ETextureType;
}
namespace OVR::OpenVR {
struct ETrackedControllerRole;
}
namespace OVR::OpenVR {
struct ETrackedDeviceClass;
}
namespace OVR::OpenVR {
struct ETrackedDeviceProperty;
}
namespace OVR::OpenVR {
struct ETrackedPropertyError;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVRButtonId;
}
namespace OVR::OpenVR {
struct EVRControllerAxisType;
}
namespace OVR::OpenVR {
struct EVREventType;
}
namespace OVR::OpenVR {
struct EVREye;
}
namespace OVR::OpenVR {
struct EVRFirmwareError;
}
namespace OVR::OpenVR {
struct HiddenAreaMesh_t;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct HmdMatrix44_t;
}
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
namespace OVR::OpenVR {
struct VRControllerState_t_Packed;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace OVR::OpenVR {
struct VREvent_t_Packed;
}
namespace OVR::OpenVR {
struct VREvent_t;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRSystem;
}
namespace OVR::OpenVR {
class CVRSystem__GetControllerStatePacked;
}
namespace OVR::OpenVR {
class CVRSystem__GetControllerStateWithPosePacked;
}
namespace OVR::OpenVR {
class CVRSystem__PollNextEventPacked;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::CVRSystem*);
MARK_REF_T(::OVR::OpenVR::CVRSystem__GetControllerStatePacked*);
MARK_REF_T(::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*);
MARK_REF_T(::OVR::OpenVR::CVRSystem__PollNextEventPacked*);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVRSystem*, "OVR.OpenVR", "CVRSystem");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVRSystem__GetControllerStatePacked*, "OVR.OpenVR", "CVRSystem/_GetControllerStatePacked");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked*, "OVR.OpenVR", "CVRSystem/_GetControllerStateWithPosePacked");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVRSystem__PollNextEventPacked*, "OVR.OpenVR", "CVRSystem/_PollNextEventPacked");
// Dependencies OVR.OpenVR.IVRSystem, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRSystem
class CORDL_TYPE CVRSystem : public ::System::Object {
public:
// Declarations
using GetControllerStateUnion = ::GlobalNamespace::CVRSystem_GetControllerStateUnion;

using GetControllerStateWithPoseUnion = ::GlobalNamespace::CVRSystem_GetControllerStateWithPoseUnion;

using PollNextEventUnion = ::GlobalNamespace::CVRSystem_PollNextEventUnion;

using _GetControllerStatePacked = ::OVR::OpenVR::CVRSystem__GetControllerStatePacked;

using _GetControllerStateWithPosePacked = ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked;

using _PollNextEventPacked = ::OVR::OpenVR::CVRSystem__PollNextEventPacked;

/// @brief Field FnTable, offset 0x10, size 0x178 
 __declspec(property(get=__cordl_internal_get_FnTable, put=__cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRSystem  FnTable;

/// @brief Method AcknowledgeQuit_Exiting, addr 0xa5ab1f4, size 0x20, virtual false, abstract: false, final false
inline void AcknowledgeQuit_Exiting() ;

/// @brief Method AcknowledgeQuit_UserPrompt, addr 0xa5ab214, size 0x20, virtual false, abstract: false, final false
inline void AcknowledgeQuit_UserPrompt() ;

/// @brief Method ApplyTransform, addr 0xa5aa704, size 0x20, virtual false, abstract: false, final false
inline void ApplyTransform(::by_ref<::OVR::OpenVR::TrackedDevicePose_t>  pOutputPose, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>  pTrackedDevicePose, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>  pTransform) ;

/// @brief Method ComputeDistortion, addr 0xa5aa49c, size 0x20, virtual false, abstract: false, final false
inline bool ComputeDistortion(::OVR::OpenVR::EVREye  eEye, float_t  fU, float_t  fV, ::by_ref<::OVR::OpenVR::DistortionCoordinates_t>  pDistortionCoordinates) ;

/// @brief Method DriverDebugRequest, addr 0xa5ab1b4, size 0x20, virtual false, abstract: false, final false
inline uint32_t DriverDebugRequest(uint32_t  unDeviceIndex, ::StringW  pchRequest, ::System::Text::StringBuilder*  pchResponseBuffer, uint32_t  unResponseBufferSize) ;

/// @brief Method GetArrayTrackedDeviceProperty, addr 0xa5aa86c, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetArrayTrackedDeviceProperty(uint32_t  unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty  prop, uint32_t  propType, ::System::IntPtr  pBuffer, uint32_t  unBufferSize, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>  pError) ;

/// @brief Method GetBoolTrackedDeviceProperty, addr 0xa5aa7a4, size 0x20, virtual false, abstract: false, final false
inline bool GetBoolTrackedDeviceProperty(uint32_t  unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty  prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>  pError) ;

/// @brief Method GetButtonIdNameFromEnum, addr 0xa5ab02c, size 0x84, virtual false, abstract: false, final false
inline ::StringW GetButtonIdNameFromEnum(::OVR::OpenVR::EVRButtonId  eButtonId) ;

/// @brief Method GetControllerAxisTypeNameFromEnum, addr 0xa5ab0b0, size 0x84, virtual false, abstract: false, final false
inline ::StringW GetControllerAxisTypeNameFromEnum(::OVR::OpenVR::EVRControllerAxisType  eAxisType) ;

/// @brief Method GetControllerRoleForTrackedDeviceIndex, addr 0xa5aa744, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::ETrackedControllerRole GetControllerRoleForTrackedDeviceIndex(uint32_t  unDeviceIndex) ;

/// @brief Method GetControllerState, addr 0xa5aabb0, size 0x1dc, virtual false, abstract: false, final false
inline bool GetControllerState(uint32_t  unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t>  pControllerState, uint32_t  unControllerStateSize) ;

/// @brief Method GetControllerStateWithPose, addr 0xa5aae0c, size 0x200, virtual false, abstract: false, final false
inline bool GetControllerStateWithPose(::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin, uint32_t  unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t>  pControllerState, uint32_t  unControllerStateSize, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>  pTrackedDevicePose) ;

/// @brief Method GetD3D9AdapterIndex, addr 0xa5aa52c, size 0x20, virtual false, abstract: false, final false
inline int32_t GetD3D9AdapterIndex() ;

/// @brief Method GetDXGIOutputInfo, addr 0xa5aa54c, size 0x24, virtual false, abstract: false, final false
inline void GetDXGIOutputInfo(::by_ref<int32_t>  pnAdapterIndex) ;

/// @brief Method GetDeviceToAbsoluteTrackingPose, addr 0xa5aa5d8, size 0x2c, virtual false, abstract: false, final false
inline void GetDeviceToAbsoluteTrackingPose(::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin, float_t  fPredictedSecondsToPhotonsFromNow, ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t>  pTrackedDevicePoseArray) ;

/// @brief Method GetEventTypeNameFromEnum, addr 0xa5aab0c, size 0x84, virtual false, abstract: false, final false
inline ::StringW GetEventTypeNameFromEnum(::OVR::OpenVR::EVREventType  eType) ;

/// @brief Method GetEyeToHeadTransform, addr 0xa5aa4bc, size 0x48, virtual false, abstract: false, final false
inline ::OVR::OpenVR::HmdMatrix34_t GetEyeToHeadTransform(::OVR::OpenVR::EVREye  eEye) ;

/// @brief Method GetFloatTrackedDeviceProperty, addr 0xa5aa7c4, size 0x20, virtual false, abstract: false, final false
inline float_t GetFloatTrackedDeviceProperty(uint32_t  unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty  prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>  pError) ;

/// @brief Method GetHiddenAreaMesh, addr 0xa5aab90, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::HiddenAreaMesh_t GetHiddenAreaMesh(::OVR::OpenVR::EVREye  eEye, ::OVR::OpenVR::EHiddenAreaMeshType  type) ;

/// @brief Method GetInt32TrackedDeviceProperty, addr 0xa5aa7e4, size 0x20, virtual false, abstract: false, final false
inline int32_t GetInt32TrackedDeviceProperty(uint32_t  unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty  prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>  pError) ;

/// @brief Method GetMatrix34TrackedDeviceProperty, addr 0xa5aa824, size 0x48, virtual false, abstract: false, final false
inline ::OVR::OpenVR::HmdMatrix34_t GetMatrix34TrackedDeviceProperty(uint32_t  unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty  prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>  pError) ;

/// @brief Method GetOutputDevice, addr 0xa5aa570, size 0x24, virtual false, abstract: false, final false
inline void GetOutputDevice(::by_ref<uint64_t>  pnDevice, ::OVR::OpenVR::ETextureType  textureType, ::System::IntPtr  pInstance) ;

/// @brief Method GetProjectionMatrix, addr 0xa5aa424, size 0x48, virtual false, abstract: false, final false
inline ::OVR::OpenVR::HmdMatrix44_t GetProjectionMatrix(::OVR::OpenVR::EVREye  eEye, float_t  fNearZ, float_t  fFarZ) ;

/// @brief Method GetProjectionRaw, addr 0xa5aa46c, size 0x30, virtual false, abstract: false, final false
inline void GetProjectionRaw(::OVR::OpenVR::EVREye  eEye, ::by_ref<float_t>  pfLeft, ::by_ref<float_t>  pfRight, ::by_ref<float_t>  pfTop, ::by_ref<float_t>  pfBottom) ;

/// @brief Method GetPropErrorNameFromEnum, addr 0xa5aa8ac, size 0x84, virtual false, abstract: false, final false
inline ::StringW GetPropErrorNameFromEnum(::OVR::OpenVR::ETrackedPropertyError  error) ;

/// @brief Method GetRawZeroPoseToStandingAbsoluteTrackingPose, addr 0xa5aa66c, size 0x48, virtual false, abstract: false, final false
inline ::OVR::OpenVR::HmdMatrix34_t GetRawZeroPoseToStandingAbsoluteTrackingPose() ;

/// @brief Method GetRecommendedRenderTargetSize, addr 0xa5aa3fc, size 0x28, virtual false, abstract: false, final false
inline void GetRecommendedRenderTargetSize(::by_ref<uint32_t>  pnWidth, ::by_ref<uint32_t>  pnHeight) ;

/// @brief Method GetSeatedZeroPoseToStandingAbsoluteTrackingPose, addr 0xa5aa624, size 0x48, virtual false, abstract: false, final false
inline ::OVR::OpenVR::HmdMatrix34_t GetSeatedZeroPoseToStandingAbsoluteTrackingPose() ;

/// @brief Method GetSortedTrackedDeviceIndicesOfClass, addr 0xa5aa6b4, size 0x30, virtual false, abstract: false, final false
inline uint32_t GetSortedTrackedDeviceIndicesOfClass(::OVR::OpenVR::ETrackedDeviceClass  eTrackedDeviceClass, ::ArrayW<uint32_t>  punTrackedDeviceIndexArray, uint32_t  unRelativeToTrackedDeviceIndex) ;

/// @brief Method GetStringTrackedDeviceProperty, addr 0xa5aa88c, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetStringTrackedDeviceProperty(uint32_t  unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty  prop, ::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>  pError) ;

/// @brief Method GetTimeSinceLastVsync, addr 0xa5aa504, size 0x28, virtual false, abstract: false, final false
inline bool GetTimeSinceLastVsync(::by_ref<float_t>  pfSecondsSinceLastVsync, ::by_ref<uint64_t>  pulFrameCounter) ;

/// @brief Method GetTrackedDeviceActivityLevel, addr 0xa5aa6e4, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EDeviceActivityLevel GetTrackedDeviceActivityLevel(uint32_t  unDeviceId) ;

/// @brief Method GetTrackedDeviceClass, addr 0xa5aa764, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::ETrackedDeviceClass GetTrackedDeviceClass(uint32_t  unDeviceIndex) ;

/// @brief Method GetTrackedDeviceIndexForControllerRole, addr 0xa5aa724, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetTrackedDeviceIndexForControllerRole(::OVR::OpenVR::ETrackedControllerRole  unDeviceType) ;

/// @brief Method GetUint64TrackedDeviceProperty, addr 0xa5aa804, size 0x20, virtual false, abstract: false, final false
inline uint64_t GetUint64TrackedDeviceProperty(uint32_t  unDeviceIndex, ::OVR::OpenVR::ETrackedDeviceProperty  prop, ::by_ref<::OVR::OpenVR::ETrackedPropertyError>  pError) ;

/// @brief Method IsDisplayOnDesktop, addr 0xa5aa594, size 0x20, virtual false, abstract: false, final false
inline bool IsDisplayOnDesktop() ;

/// @brief Method IsInputAvailable, addr 0xa5ab134, size 0x20, virtual false, abstract: false, final false
inline bool IsInputAvailable() ;

/// @brief Method IsSteamVRDrawingControllers, addr 0xa5ab154, size 0x20, virtual false, abstract: false, final false
inline bool IsSteamVRDrawingControllers() ;

/// @brief Method IsTrackedDeviceConnected, addr 0xa5aa784, size 0x20, virtual false, abstract: false, final false
inline bool IsTrackedDeviceConnected(uint32_t  unDeviceIndex) ;

static inline ::OVR::OpenVR::CVRSystem* New_ctor(::System::IntPtr  pInterface) ;

/// @brief Method PerformFirmwareUpdate, addr 0xa5ab1d4, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVRFirmwareError PerformFirmwareUpdate(uint32_t  unDeviceIndex) ;

/// @brief Method PollNextEvent, addr 0xa5aa930, size 0x19c, virtual false, abstract: false, final false
inline bool PollNextEvent(::by_ref<::OVR::OpenVR::VREvent_t>  pEvent, uint32_t  uncbVREvent) ;

/// @brief Method PollNextEventWithPose, addr 0xa5aaaec, size 0x20, virtual false, abstract: false, final false
inline bool PollNextEventWithPose(::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin, ::by_ref<::OVR::OpenVR::VREvent_t>  pEvent, uint32_t  uncbVREvent, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>  pTrackedDevicePose) ;

/// @brief Method ResetSeatedZeroPose, addr 0xa5aa604, size 0x20, virtual false, abstract: false, final false
inline void ResetSeatedZeroPose() ;

/// @brief Method SetDisplayVisibility, addr 0xa5aa5b4, size 0x24, virtual false, abstract: false, final false
inline bool SetDisplayVisibility(bool  bIsVisibleOnDesktop) ;

/// @brief Method ShouldApplicationPause, addr 0xa5ab174, size 0x20, virtual false, abstract: false, final false
inline bool ShouldApplicationPause() ;

/// @brief Method ShouldApplicationReduceRenderingWork, addr 0xa5ab194, size 0x20, virtual false, abstract: false, final false
inline bool ShouldApplicationReduceRenderingWork() ;

/// @brief Method TriggerHapticPulse, addr 0xa5ab00c, size 0x20, virtual false, abstract: false, final false
inline void TriggerHapticPulse(uint32_t  unControllerDeviceIndex, uint32_t  unAxisId, uint16_t  usDurationMicroSec) ;

constexpr ::OVR::OpenVR::IVRSystem const& __cordl_internal_get_FnTable() const;

constexpr ::OVR::OpenVR::IVRSystem& __cordl_internal_get_FnTable() ;

constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRSystem  value) ;

/// @brief Method .ctor, addr 0xa5aa2ec, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  pInterface) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CVRSystem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CVRSystem", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CVRSystem(CVRSystem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVRSystem", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVRSystem(CVRSystem const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13102};

/// @brief Field FnTable, offset: 0x10, size: 0x178, def value: None
 ::OVR::OpenVR::IVRSystem  ___FnTable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRSystem, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OVR::OpenVR::CVRSystem) == 0x188, "Size mismatch!");

} // namespace end def OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRSystem/_GetControllerStateWithPosePacked
class CORDL_TYPE CVRSystem__GetControllerStateWithPosePacked : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa5ab62c, size 0x12c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin, uint32_t  unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>  pControllerState, uint32_t  unControllerStateSize, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>  pTrackedDevicePose, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa5ab758, size 0x34, virtual true, abstract: false, final false
inline bool EndInvoke(::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>  pControllerState, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>  pTrackedDevicePose, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa5ab618, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::OVR::OpenVR::ETrackingUniverseOrigin  eOrigin, uint32_t  unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>  pControllerState, uint32_t  unControllerStateSize, ::by_ref<::OVR::OpenVR::TrackedDevicePose_t>  pTrackedDevicePose) ;

static inline ::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa5ab578, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CVRSystem__GetControllerStateWithPosePacked() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CVRSystem__GetControllerStateWithPosePacked", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CVRSystem__GetControllerStateWithPosePacked(CVRSystem__GetControllerStateWithPosePacked && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVRSystem__GetControllerStateWithPosePacked", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVRSystem__GetControllerStateWithPosePacked(CVRSystem__GetControllerStateWithPosePacked const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13100};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::CVRSystem__GetControllerStateWithPosePacked) == 0x80, "Size mismatch!");

} // namespace end def OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRSystem/_GetControllerStatePacked
class CORDL_TYPE CVRSystem__GetControllerStatePacked : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa5ab488, size 0xc8, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint32_t  unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>  pControllerState, uint32_t  unControllerStateSize, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa5ab550, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>  pControllerState, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa5ab474, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(uint32_t  unControllerDeviceIndex, ::by_ref<::OVR::OpenVR::VRControllerState_t_Packed>  pControllerState, uint32_t  unControllerStateSize) ;

static inline ::OVR::OpenVR::CVRSystem__GetControllerStatePacked* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa5ab3d4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CVRSystem__GetControllerStatePacked() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CVRSystem__GetControllerStatePacked", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CVRSystem__GetControllerStatePacked(CVRSystem__GetControllerStatePacked && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVRSystem__GetControllerStatePacked", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVRSystem__GetControllerStatePacked(CVRSystem__GetControllerStatePacked const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13098};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::CVRSystem__GetControllerStatePacked) == 0x80, "Size mismatch!");

} // namespace end def OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRSystem/_PollNextEventPacked
class CORDL_TYPE CVRSystem__PollNextEventPacked : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa5ab2fc, size 0xb0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::OVR::OpenVR::VREvent_t_Packed>  pEvent, uint32_t  uncbVREvent, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa5ab3ac, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::by_ref<::OVR::OpenVR::VREvent_t_Packed>  pEvent, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa5ab2e8, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::by_ref<::OVR::OpenVR::VREvent_t_Packed>  pEvent, uint32_t  uncbVREvent) ;

static inline ::OVR::OpenVR::CVRSystem__PollNextEventPacked* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa5ab234, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CVRSystem__PollNextEventPacked() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CVRSystem__PollNextEventPacked", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CVRSystem__PollNextEventPacked(CVRSystem__PollNextEventPacked && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVRSystem__PollNextEventPacked", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVRSystem__PollNextEventPacked(CVRSystem__PollNextEventPacked const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13096};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::CVRSystem__PollNextEventPacked) == 0x80, "Size mismatch!");

} // namespace end def OVR::OpenVR
