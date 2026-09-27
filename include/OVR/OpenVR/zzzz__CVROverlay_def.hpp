#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVROverlay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVROverlay_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVROverlay)
namespace GlobalNamespace {
struct CVROverlay_PollNextOverlayEventUnion;
}
namespace OVR::OpenVR {
class CVROverlay__PollNextOverlayEventPacked;
}
namespace OVR::OpenVR {
struct EColorSpace;
}
namespace OVR::OpenVR {
struct EDualAnalogWhich;
}
namespace OVR::OpenVR {
struct EOverlayDirection;
}
namespace OVR::OpenVR {
struct ETextureType;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVROverlayError;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct HmdRect2_t;
}
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
struct Texture_t;
}
namespace OVR::OpenVR {
struct VREvent_t_Packed;
}
namespace OVR::OpenVR {
struct VREvent_t;
}
namespace OVR::OpenVR {
struct VRMessageOverlayResponse;
}
namespace OVR::OpenVR {
struct VROverlayFlags;
}
namespace OVR::OpenVR {
struct VROverlayInputMethod;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_t;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionParams_t;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionResults_t;
}
namespace OVR::OpenVR {
struct VROverlayTransformType;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
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
class CVROverlay;
}
namespace OVR::OpenVR {
class CVROverlay__PollNextOverlayEventPacked;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::CVROverlay*);
MARK_REF_T(::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVROverlay*, "OVR.OpenVR", "CVROverlay");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked*, "OVR.OpenVR", "CVROverlay/_PollNextOverlayEventPacked");
// Dependencies OVR.OpenVR.IVROverlay, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVROverlay
class CORDL_TYPE CVROverlay : public ::System::Object {
public:
// Declarations
using PollNextOverlayEventUnion = ::GlobalNamespace::CVROverlay_PollNextOverlayEventUnion;

using _PollNextOverlayEventPacked = ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked;

/// @brief Field FnTable, offset 0x10, size 0x290 
 __declspec(property(get=__cordl_internal_get_FnTable, put=__cordl_internal_set_FnTable)) ::OVR::OpenVR::IVROverlay  FnTable;

/// @brief Method ClearOverlayTexture, addr 0xa5adba4, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError ClearOverlayTexture(uint64_t  ulOverlayHandle) ;

/// @brief Method CloseMessageOverlay, addr 0xa5adeb4, size 0x20, virtual false, abstract: false, final false
inline void CloseMessageOverlay() ;

/// @brief Method ComputeOverlayIntersection, addr 0xa5ada80, size 0x20, virtual false, abstract: false, final false
inline bool ComputeOverlayIntersection(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionParams_t>  pParams, ::by_ref<::OVR::OpenVR::VROverlayIntersectionResults_t>  pResults) ;

/// @brief Method CreateDashboardOverlay, addr 0xa5adc88, size 0x28, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError CreateDashboardOverlay(::StringW  pchOverlayKey, ::StringW  pchOverlayFriendlyName, ::by_ref<uint64_t>  pMainHandle, ::by_ref<uint64_t>  pThumbnailHandle) ;

/// @brief Method CreateOverlay, addr 0xa5ad230, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError CreateOverlay(::StringW  pchOverlayKey, ::StringW  pchOverlayName, ::by_ref<uint64_t>  pOverlayHandle) ;

/// @brief Method DestroyOverlay, addr 0xa5ad254, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError DestroyOverlay(uint64_t  ulOverlayHandle) ;

/// @brief Method FindOverlay, addr 0xa5ad20c, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError FindOverlay(::StringW  pchOverlayKey, ::by_ref<uint64_t>  pOverlayHandle) ;

/// @brief Method GetDashboardOverlaySceneProcess, addr 0xa5add10, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetDashboardOverlaySceneProcess(uint64_t  ulOverlayHandle, ::by_ref<uint32_t>  punProcessId) ;

/// @brief Method GetGamepadFocusOverlay, addr 0xa5adac0, size 0x20, virtual false, abstract: false, final false
inline uint64_t GetGamepadFocusOverlay() ;

/// @brief Method GetHighQualityOverlay, addr 0xa5ad294, size 0x20, virtual false, abstract: false, final false
inline uint64_t GetHighQualityOverlay() ;

/// @brief Method GetKeyboardText, addr 0xa5addd0, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetKeyboardText(::System::Text::StringBuilder*  pchText, uint32_t  cchText) ;

/// @brief Method GetOverlayAlpha, addr 0xa5ad4b4, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayAlpha(uint64_t  ulOverlayHandle, ::by_ref<float_t>  pfAlpha) ;

/// @brief Method GetOverlayAutoCurveDistanceRangeInMeters, addr 0xa5ad5c4, size 0x28, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayAutoCurveDistanceRangeInMeters(uint64_t  ulOverlayHandle, ::by_ref<float_t>  pfMinDistanceInMeters, ::by_ref<float_t>  pfMaxDistanceInMeters) ;

/// @brief Method GetOverlayColor, addr 0xa5ad468, size 0x2c, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayColor(uint64_t  ulOverlayHandle, ::by_ref<float_t>  pfRed, ::by_ref<float_t>  pfGreen, ::by_ref<float_t>  pfBlue) ;

/// @brief Method GetOverlayDualAnalogTransform, addr 0xa5adb60, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayDualAnalogTransform(uint64_t  ulOverlay, ::OVR::OpenVR::EDualAnalogWhich  eWhich, ::by_ref<::OVR::OpenVR::HmdVector2_t>  pvCenter, ::by_ref<float_t>  pfRadius) ;

/// @brief Method GetOverlayErrorNameFromEnum, addr 0xa5ad33c, size 0x84, virtual false, abstract: false, final false
inline ::StringW GetOverlayErrorNameFromEnum(::OVR::OpenVR::EVROverlayError  error) ;

/// @brief Method GetOverlayFlag, addr 0xa5ad424, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayFlag(uint64_t  ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags  eOverlayFlag, ::by_ref<bool>  pbEnabled) ;

/// @brief Method GetOverlayFlags, addr 0xa5ade70, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayFlags(uint64_t  ulOverlayHandle, ::by_ref<uint32_t>  pFlags) ;

/// @brief Method GetOverlayImageData, addr 0xa5ad314, size 0x28, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayImageData(uint64_t  ulOverlayHandle, ::System::IntPtr  pvBuffer, uint32_t  unBufferSize, ::by_ref<uint32_t>  punWidth, ::by_ref<uint32_t>  punHeight) ;

/// @brief Method GetOverlayInputMethod, addr 0xa5ada00, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayInputMethod(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayInputMethod>  peInputMethod) ;

/// @brief Method GetOverlayKey, addr 0xa5ad2b4, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetOverlayKey(uint64_t  ulOverlayHandle, ::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize, ::by_ref<::OVR::OpenVR::EVROverlayError>  pError) ;

/// @brief Method GetOverlayMouseScale, addr 0xa5ada40, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayMouseScale(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t>  pvecMouseScale) ;

/// @brief Method GetOverlayName, addr 0xa5ad2d4, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetOverlayName(uint64_t  ulOverlayHandle, ::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize, ::by_ref<::OVR::OpenVR::EVROverlayError>  pError) ;

/// @brief Method GetOverlayRenderModel, addr 0xa5ad66c, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetOverlayRenderModel(uint64_t  ulOverlayHandle, ::System::Text::StringBuilder*  pchValue, uint32_t  unBufferSize, ::by_ref<::OVR::OpenVR::HmdColor_t>  pColor, ::by_ref<::OVR::OpenVR::EVROverlayError>  pError) ;

/// @brief Method GetOverlayRenderingPid, addr 0xa5ad3e0, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetOverlayRenderingPid(uint64_t  ulOverlayHandle) ;

/// @brief Method GetOverlaySortOrder, addr 0xa5ad53c, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlaySortOrder(uint64_t  ulOverlayHandle, ::by_ref<uint32_t>  punSortOrder) ;

/// @brief Method GetOverlayTexelAspect, addr 0xa5ad4f8, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayTexelAspect(uint64_t  ulOverlayHandle, ::by_ref<float_t>  pfTexelAspect) ;

/// @brief Method GetOverlayTexture, addr 0xa5adc04, size 0x3c, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayTexture(uint64_t  ulOverlayHandle, ::by_ref<::System::IntPtr>  pNativeTextureHandle, ::System::IntPtr  pNativeTextureRef, ::by_ref<uint32_t>  pWidth, ::by_ref<uint32_t>  pHeight, ::by_ref<uint32_t>  pNativeFormat, ::by_ref<::OVR::OpenVR::ETextureType>  pAPIType, ::by_ref<::OVR::OpenVR::EColorSpace>  pColorSpace, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>  pTextureBounds) ;

/// @brief Method GetOverlayTextureBounds, addr 0xa5ad64c, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayTextureBounds(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>  pOverlayTextureBounds) ;

/// @brief Method GetOverlayTextureColorSpace, addr 0xa5ad60c, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayTextureColorSpace(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::EColorSpace>  peTextureColorSpace) ;

/// @brief Method GetOverlayTextureSize, addr 0xa5adc60, size 0x28, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayTextureSize(uint64_t  ulOverlayHandle, ::by_ref<uint32_t>  pWidth, ::by_ref<uint32_t>  pHeight) ;

/// @brief Method GetOverlayTransformAbsolute, addr 0xa5ad6ec, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformAbsolute(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::ETrackingUniverseOrigin>  peTrackingOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>  pmatTrackingOriginToOverlayTransform) ;

/// @brief Method GetOverlayTransformOverlayRelative, addr 0xa5ad794, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformOverlayRelative(uint64_t  ulOverlayHandle, ::by_ref<uint64_t>  ulOverlayHandleParent, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>  pmatParentOverlayToOverlayTransform) ;

/// @brief Method GetOverlayTransformTrackedDeviceComponent, addr 0xa5ad770, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformTrackedDeviceComponent(uint64_t  ulOverlayHandle, ::by_ref<uint32_t>  punDeviceIndex, ::System::Text::StringBuilder*  pchComponentName, uint32_t  unComponentNameSize) ;

/// @brief Method GetOverlayTransformTrackedDeviceRelative, addr 0xa5ad72c, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformTrackedDeviceRelative(uint64_t  ulOverlayHandle, ::by_ref<uint32_t>  punTrackedDevice, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>  pmatTrackedDeviceToOverlayTransform) ;

/// @brief Method GetOverlayTransformType, addr 0xa5ad6ac, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformType(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayTransformType>  peTransformType) ;

/// @brief Method GetOverlayWidthInMeters, addr 0xa5ad580, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetOverlayWidthInMeters(uint64_t  ulOverlayHandle, ::by_ref<float_t>  pfWidthInMeters) ;

/// @brief Method GetPrimaryDashboardDevice, addr 0xa5add54, size 0x20, virtual false, abstract: false, final false
inline uint32_t GetPrimaryDashboardDevice() ;

/// @brief Method GetTransformForOverlayCoordinates, addr 0xa5ad838, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError GetTransformForOverlayCoordinates(uint64_t  ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin  eTrackingOrigin, ::OVR::OpenVR::HmdVector2_t  coordinatesInOverlay, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>  pmatTransform) ;

/// @brief Method HideKeyboard, addr 0xa5addf0, size 0x20, virtual false, abstract: false, final false
inline void HideKeyboard() ;

/// @brief Method HideOverlay, addr 0xa5ad7f8, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError HideOverlay(uint64_t  ulOverlayHandle) ;

/// @brief Method IsActiveDashboardOverlay, addr 0xa5adcd0, size 0x20, virtual false, abstract: false, final false
inline bool IsActiveDashboardOverlay(uint64_t  ulOverlayHandle) ;

/// @brief Method IsDashboardVisible, addr 0xa5adcb0, size 0x20, virtual false, abstract: false, final false
inline bool IsDashboardVisible() ;

/// @brief Method IsHoverTargetOverlay, addr 0xa5adaa0, size 0x20, virtual false, abstract: false, final false
inline bool IsHoverTargetOverlay(uint64_t  ulOverlayHandle) ;

/// @brief Method IsOverlayVisible, addr 0xa5ad818, size 0x20, virtual false, abstract: false, final false
inline bool IsOverlayVisible(uint64_t  ulOverlayHandle) ;

/// @brief Method MoveGamepadFocusToNeighbor, addr 0xa5adb20, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError MoveGamepadFocusToNeighbor(::OVR::OpenVR::EOverlayDirection  eDirection, uint64_t  ulFrom) ;

static inline ::OVR::OpenVR::CVROverlay* New_ctor(::System::IntPtr  pInterface) ;

/// @brief Method PollNextOverlayEvent, addr 0xa5ad858, size 0x1a8, virtual false, abstract: false, final false
inline bool PollNextOverlayEvent(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::VREvent_t>  pEvent, uint32_t  uncbVREvent) ;

/// @brief Method ReleaseNativeOverlayHandle, addr 0xa5adc40, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError ReleaseNativeOverlayHandle(uint64_t  ulOverlayHandle, ::System::IntPtr  pNativeTextureHandle) ;

/// @brief Method SetDashboardOverlaySceneProcess, addr 0xa5adcf0, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetDashboardOverlaySceneProcess(uint64_t  ulOverlayHandle, uint32_t  unProcessId) ;

/// @brief Method SetGamepadFocusOverlay, addr 0xa5adae0, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetGamepadFocusOverlay(uint64_t  ulNewFocusOverlay) ;

/// @brief Method SetHighQualityOverlay, addr 0xa5ad274, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetHighQualityOverlay(uint64_t  ulOverlayHandle) ;

/// @brief Method SetKeyboardPositionForOverlay, addr 0xa5ade30, size 0x20, virtual false, abstract: false, final false
inline void SetKeyboardPositionForOverlay(uint64_t  ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t  avoidRect) ;

/// @brief Method SetKeyboardTransformAbsolute, addr 0xa5ade10, size 0x20, virtual false, abstract: false, final false
inline void SetKeyboardTransformAbsolute(::OVR::OpenVR::ETrackingUniverseOrigin  eTrackingOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>  pmatTrackingOriginToKeyboardTransform) ;

/// @brief Method SetOverlayAlpha, addr 0xa5ad494, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayAlpha(uint64_t  ulOverlayHandle, float_t  fAlpha) ;

/// @brief Method SetOverlayAutoCurveDistanceRangeInMeters, addr 0xa5ad5a4, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayAutoCurveDistanceRangeInMeters(uint64_t  ulOverlayHandle, float_t  fMinDistanceInMeters, float_t  fMaxDistanceInMeters) ;

/// @brief Method SetOverlayColor, addr 0xa5ad448, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayColor(uint64_t  ulOverlayHandle, float_t  fRed, float_t  fGreen, float_t  fBlue) ;

/// @brief Method SetOverlayDualAnalogTransform, addr 0xa5adb40, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayDualAnalogTransform(uint64_t  ulOverlay, ::OVR::OpenVR::EDualAnalogWhich  eWhich, ::System::IntPtr  vCenter, float_t  fRadius) ;

/// @brief Method SetOverlayFlag, addr 0xa5ad400, size 0x24, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayFlag(uint64_t  ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags  eOverlayFlag, bool  bEnabled) ;

/// @brief Method SetOverlayFromFile, addr 0xa5adbe4, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayFromFile(uint64_t  ulOverlayHandle, ::StringW  pchFilePath) ;

/// @brief Method SetOverlayInputMethod, addr 0xa5ada20, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayInputMethod(uint64_t  ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod  eInputMethod) ;

/// @brief Method SetOverlayIntersectionMask, addr 0xa5ade50, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayIntersectionMask(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>  pMaskPrimitives, uint32_t  unNumMaskPrimitives, uint32_t  unPrimitiveSize) ;

/// @brief Method SetOverlayMouseScale, addr 0xa5ada60, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayMouseScale(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::HmdVector2_t>  pvecMouseScale) ;

/// @brief Method SetOverlayName, addr 0xa5ad2f4, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayName(uint64_t  ulOverlayHandle, ::StringW  pchName) ;

/// @brief Method SetOverlayNeighbor, addr 0xa5adb00, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayNeighbor(::OVR::OpenVR::EOverlayDirection  eDirection, uint64_t  ulFrom, uint64_t  ulTo) ;

/// @brief Method SetOverlayRaw, addr 0xa5adbc4, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayRaw(uint64_t  ulOverlayHandle, ::System::IntPtr  pvBuffer, uint32_t  unWidth, uint32_t  unHeight, uint32_t  unDepth) ;

/// @brief Method SetOverlayRenderModel, addr 0xa5ad68c, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayRenderModel(uint64_t  ulOverlayHandle, ::StringW  pchRenderModel, ::by_ref<::OVR::OpenVR::HmdColor_t>  pColor) ;

/// @brief Method SetOverlayRenderingPid, addr 0xa5ad3c0, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayRenderingPid(uint64_t  ulOverlayHandle, uint32_t  unPID) ;

/// @brief Method SetOverlaySortOrder, addr 0xa5ad51c, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlaySortOrder(uint64_t  ulOverlayHandle, uint32_t  unSortOrder) ;

/// @brief Method SetOverlayTexelAspect, addr 0xa5ad4d8, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayTexelAspect(uint64_t  ulOverlayHandle, float_t  fTexelAspect) ;

/// @brief Method SetOverlayTexture, addr 0xa5adb84, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayTexture(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::Texture_t>  pTexture) ;

/// @brief Method SetOverlayTextureBounds, addr 0xa5ad62c, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayTextureBounds(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::VRTextureBounds_t>  pOverlayTextureBounds) ;

/// @brief Method SetOverlayTextureColorSpace, addr 0xa5ad5ec, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayTextureColorSpace(uint64_t  ulOverlayHandle, ::OVR::OpenVR::EColorSpace  eTextureColorSpace) ;

/// @brief Method SetOverlayTransformAbsolute, addr 0xa5ad6cc, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayTransformAbsolute(uint64_t  ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin  eTrackingOrigin, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>  pmatTrackingOriginToOverlayTransform) ;

/// @brief Method SetOverlayTransformOverlayRelative, addr 0xa5ad7b8, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayTransformOverlayRelative(uint64_t  ulOverlayHandle, uint64_t  ulOverlayHandleParent, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>  pmatParentOverlayToOverlayTransform) ;

/// @brief Method SetOverlayTransformTrackedDeviceComponent, addr 0xa5ad750, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayTransformTrackedDeviceComponent(uint64_t  ulOverlayHandle, uint32_t  unDeviceIndex, ::StringW  pchComponentName) ;

/// @brief Method SetOverlayTransformTrackedDeviceRelative, addr 0xa5ad70c, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayTransformTrackedDeviceRelative(uint64_t  ulOverlayHandle, uint32_t  unTrackedDevice, ::by_ref<::OVR::OpenVR::HmdMatrix34_t>  pmatTrackedDeviceToOverlayTransform) ;

/// @brief Method SetOverlayWidthInMeters, addr 0xa5ad560, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError SetOverlayWidthInMeters(uint64_t  ulOverlayHandle, float_t  fWidthInMeters) ;

/// @brief Method ShowDashboard, addr 0xa5add34, size 0x20, virtual false, abstract: false, final false
inline void ShowDashboard(::StringW  pchOverlayToShow) ;

/// @brief Method ShowKeyboard, addr 0xa5add74, size 0x2c, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError ShowKeyboard(int32_t  eInputMode, int32_t  eLineInputMode, ::StringW  pchDescription, uint32_t  unCharMax, ::StringW  pchExistingText, bool  bUseMinimalMode, uint64_t  uUserValue) ;

/// @brief Method ShowKeyboardForOverlay, addr 0xa5adda0, size 0x30, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError ShowKeyboardForOverlay(uint64_t  ulOverlayHandle, int32_t  eInputMode, int32_t  eLineInputMode, ::StringW  pchDescription, uint32_t  unCharMax, ::StringW  pchExistingText, bool  bUseMinimalMode, uint64_t  uUserValue) ;

/// @brief Method ShowMessageOverlay, addr 0xa5ade94, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::VRMessageOverlayResponse ShowMessageOverlay(::StringW  pchText, ::StringW  pchCaption, ::StringW  pchButton0Text, ::StringW  pchButton1Text, ::StringW  pchButton2Text, ::StringW  pchButton3Text) ;

/// @brief Method ShowOverlay, addr 0xa5ad7d8, size 0x20, virtual false, abstract: false, final false
inline ::OVR::OpenVR::EVROverlayError ShowOverlay(uint64_t  ulOverlayHandle) ;

constexpr ::OVR::OpenVR::IVROverlay const& __cordl_internal_get_FnTable() const;

constexpr ::OVR::OpenVR::IVROverlay& __cordl_internal_get_FnTable() ;

constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVROverlay  value) ;

/// @brief Method .ctor, addr 0xa5ad0fc, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  pInterface) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CVROverlay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CVROverlay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CVROverlay(CVROverlay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVROverlay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVROverlay(CVROverlay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13111};

/// @brief Field FnTable, offset: 0x10, size: 0x290, def value: None
 ::OVR::OpenVR::IVROverlay  ___FnTable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVROverlay, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OVR::OpenVR::CVROverlay) == 0x2a0, "Size mismatch!");

} // namespace end def OVR::OpenVR
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)3)]
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVROverlay/_PollNextOverlayEventPacked
class CORDL_TYPE CVROverlay__PollNextOverlayEventPacked : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa5adf88, size 0xc4, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::VREvent_t_Packed>  pEvent, uint32_t  uncbVREvent, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa5ae04c, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::by_ref<::OVR::OpenVR::VREvent_t_Packed>  pEvent, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa5adf74, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(uint64_t  ulOverlayHandle, ::by_ref<::OVR::OpenVR::VREvent_t_Packed>  pEvent, uint32_t  uncbVREvent) ;

static inline ::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa5aded4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CVROverlay__PollNextOverlayEventPacked() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CVROverlay__PollNextOverlayEventPacked", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CVROverlay__PollNextOverlayEventPacked(CVROverlay__PollNextOverlayEventPacked && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CVROverlay__PollNextOverlayEventPacked", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CVROverlay__PollNextOverlayEventPacked(CVROverlay__PollNextOverlayEventPacked const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13109};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::CVROverlay__PollNextOverlayEventPacked) == 0x80, "Size mismatch!");

} // namespace end def OVR::OpenVR
