#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRHandSkeletonVersion_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointSet_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_EyeGazesStateInternal_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FaceState2Internal_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FaceStateInternal_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FaceVisemesStateInternal_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HandState3Internal_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HandStateInternal_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HandTrackingStateInternal_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_MeshType_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_ProcessorPerformanceLevel_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Skeleton2Internal_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Skeleton3Internal_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Skeleton_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector2f_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector4f_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector4s_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardModelAnimationState_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_XrApi_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin)
namespace GlobalNamespace {
struct Media_OVRPlugin_InputVideoBufferType;
}
namespace GlobalNamespace {
struct Media_OVRPlugin_MrcActivationMode;
}
namespace GlobalNamespace {
struct Media_OVRPlugin_PlatformCameraMode;
}
namespace GlobalNamespace {
struct OVRHandSkeletonVersion;
}
namespace GlobalNamespace {
class OVRNativeBuffer;
}
namespace GlobalNamespace {
struct OVRPlugin_ActionTypes;
}
namespace GlobalNamespace {
struct OVRPlugin_AppPerfFrameStats;
}
namespace GlobalNamespace {
struct OVRPlugin_AppPerfStats;
}
namespace GlobalNamespace {
struct OVRPlugin_BatteryStatus;
}
namespace GlobalNamespace {
struct OVRPlugin_BlendFactor;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyJointLocation;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyJointSet;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyState4Internal;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyStateInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyState;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyTrackingCalibrationInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyTrackingCalibrationState;
}
namespace GlobalNamespace {
struct OVRPlugin_BodyTrackingFidelity2;
}
namespace GlobalNamespace {
struct OVRPlugin_BoneCapsule;
}
namespace GlobalNamespace {
struct OVRPlugin_BoneId;
}
namespace GlobalNamespace {
struct OVRPlugin_Bone;
}
namespace GlobalNamespace {
struct OVRPlugin_Bool;
}
namespace GlobalNamespace {
struct OVRPlugin_BoundaryGeometry;
}
namespace GlobalNamespace {
struct OVRPlugin_BoundaryTestResult;
}
namespace GlobalNamespace {
struct OVRPlugin_BoundaryType;
}
namespace GlobalNamespace {
struct OVRPlugin_BoundaryVisibility;
}
namespace GlobalNamespace {
struct OVRPlugin_Boundsf;
}
namespace GlobalNamespace {
struct OVRPlugin_CameraAnchorType;
}
namespace GlobalNamespace {
struct OVRPlugin_CameraDeviceDepthQuality;
}
namespace GlobalNamespace {
struct OVRPlugin_CameraDeviceDepthSensingMode;
}
namespace GlobalNamespace {
struct OVRPlugin_CameraDeviceIntrinsicsParameters;
}
namespace GlobalNamespace {
struct OVRPlugin_CameraDevice;
}
namespace GlobalNamespace {
struct OVRPlugin_CameraExtrinsics;
}
namespace GlobalNamespace {
struct OVRPlugin_CameraIntrinsics;
}
namespace GlobalNamespace {
struct OVRPlugin_CameraStatus;
}
namespace GlobalNamespace {
struct OVRPlugin_ColocationSessionStartAdvertisementInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_ColorSpace;
}
namespace GlobalNamespace {
struct OVRPlugin_Colorf;
}
namespace GlobalNamespace {
struct OVRPlugin_ControllerState2;
}
namespace GlobalNamespace {
struct OVRPlugin_ControllerState4;
}
namespace GlobalNamespace {
struct OVRPlugin_ControllerState5;
}
namespace GlobalNamespace {
struct OVRPlugin_ControllerState6;
}
namespace GlobalNamespace {
struct OVRPlugin_ControllerState;
}
namespace GlobalNamespace {
struct OVRPlugin_Controller;
}
namespace GlobalNamespace {
struct OVRPlugin_DynamicObjectClass;
}
namespace GlobalNamespace {
struct OVRPlugin_DynamicObjectData;
}
namespace GlobalNamespace {
struct OVRPlugin_DynamicObjectTrackedClassesSetInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_EventDataBuffer;
}
namespace GlobalNamespace {
struct OVRPlugin_EventType;
}
namespace GlobalNamespace {
struct OVRPlugin_EyeGazeState;
}
namespace GlobalNamespace {
struct OVRPlugin_EyeGazesStateInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_EyeGazesState;
}
namespace GlobalNamespace {
struct OVRPlugin_EyeTextureFormat;
}
namespace GlobalNamespace {
struct OVRPlugin_Eye;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceConstants;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceExpression2;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceExpressionStatusInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceExpressionStatus;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceExpression;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceRegionConfidence;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceState2Internal;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceStateInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceState;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceTrackingDataSource;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceViseme;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceVisemesStateInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_FaceVisemesState;
}
namespace GlobalNamespace {
struct OVRPlugin_FeatureType;
}
namespace GlobalNamespace {
struct OVRPlugin_FixedFoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct OVRPlugin_FoveatedRenderingLevel;
}
namespace GlobalNamespace {
struct OVRPlugin_FovfPair;
}
namespace GlobalNamespace {
struct OVRPlugin_Fovf;
}
namespace GlobalNamespace {
struct OVRPlugin_Frustumf2;
}
namespace GlobalNamespace {
struct OVRPlugin_Frustumf;
}
namespace GlobalNamespace {
struct OVRPlugin_FutureState;
}
namespace GlobalNamespace {
class OVRPlugin_GUID;
}
namespace GlobalNamespace {
class OVRPlugin_GetBoneSkeleton2Delegate;
}
namespace GlobalNamespace {
class OVRPlugin_GetBoneSkeleton3Delegate;
}
namespace GlobalNamespace {
struct OVRPlugin_HandFingerPinch;
}
namespace GlobalNamespace {
struct OVRPlugin_HandFinger;
}
namespace GlobalNamespace {
struct OVRPlugin_HandState3Internal;
}
namespace GlobalNamespace {
struct OVRPlugin_HandStateInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_HandState;
}
namespace GlobalNamespace {
struct OVRPlugin_HandStatus;
}
namespace GlobalNamespace {
struct OVRPlugin_HandTrackingStateInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_HandTrackingState;
}
namespace GlobalNamespace {
struct OVRPlugin_Hand;
}
namespace GlobalNamespace {
struct OVRPlugin_Handedness;
}
namespace GlobalNamespace {
struct OVRPlugin_HapticsAmplitudeEnvelopeVibration;
}
namespace GlobalNamespace {
struct OVRPlugin_HapticsBuffer;
}
namespace GlobalNamespace {
struct OVRPlugin_HapticsConstants;
}
namespace GlobalNamespace {
struct OVRPlugin_HapticsDesc;
}
namespace GlobalNamespace {
struct OVRPlugin_HapticsLocation;
}
namespace GlobalNamespace {
struct OVRPlugin_HapticsPcmVibration;
}
namespace GlobalNamespace {
struct OVRPlugin_HapticsState;
}
namespace GlobalNamespace {
struct OVRPlugin_InsightPassthroughColorMapType;
}
namespace GlobalNamespace {
struct OVRPlugin_InsightPassthroughKeyboardHandsIntensity;
}
namespace GlobalNamespace {
struct OVRPlugin_InsightPassthroughStyle2;
}
namespace GlobalNamespace {
struct OVRPlugin_InsightPassthroughStyleFlags;
}
namespace GlobalNamespace {
struct OVRPlugin_InsightPassthroughStyle;
}
namespace GlobalNamespace {
struct OVRPlugin_InteractionProfile;
}
namespace GlobalNamespace {
class OVRPlugin_Ktx;
}
namespace GlobalNamespace {
struct OVRPlugin_LayerDesc;
}
namespace GlobalNamespace {
struct OVRPlugin_LayerFlags;
}
namespace GlobalNamespace {
struct OVRPlugin_LayerLayout;
}
namespace GlobalNamespace {
struct OVRPlugin_LayerSharpenType;
}
namespace GlobalNamespace {
struct OVRPlugin_LayerSubmit;
}
namespace GlobalNamespace {
struct OVRPlugin_LayerSuperSamplingType;
}
namespace GlobalNamespace {
class OVRPlugin_LogCallback2DelegateType;
}
namespace GlobalNamespace {
struct OVRPlugin_LogLevel;
}
namespace GlobalNamespace {
struct OVRPlugin_MarkerTrackerCreateCompletion;
}
namespace GlobalNamespace {
struct OVRPlugin_MarkerTrackerCreateInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_MarkerType;
}
namespace GlobalNamespace {
class OVRPlugin_Media;
}
namespace GlobalNamespace {
struct OVRPlugin_MeshConstants;
}
namespace GlobalNamespace {
struct OVRPlugin_MeshType;
}
namespace GlobalNamespace {
class OVRPlugin_Mesh;
}
namespace GlobalNamespace {
struct OVRPlugin_MicrogestureType;
}
namespace GlobalNamespace {
struct OVRPlugin_Node;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_0_1_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_0_1_1;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_0_1_2;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_0_1_3;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_0_5_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_0_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_100_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_101_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_102_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_103_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_104_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_105_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_106_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_107_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_108_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_109_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_10_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_110_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_111_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_112_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_113_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_114_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_115_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_116_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_117_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_118_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_119_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_11_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_120_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_121_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_122_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_123_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_124_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_125_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_126_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_127_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_128_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_129_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_12_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_15_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_16_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_17_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_18_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_19_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_1_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_21_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_28_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_29_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_2_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_30_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_31_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_32_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_34_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_35_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_36_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_37_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_38_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_39_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_3_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_40_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_41_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_42_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_43_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_44_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_45_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_46_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_47_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_48_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_49_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_50_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_51_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_52_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_53_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_54_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_55_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_55_1;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_56_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_57_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_58_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_59_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_5_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_60_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_61_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_62_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_63_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_64_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_65_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_66_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_67_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_68_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_69_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_6_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_70_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_71_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_72_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_73_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_74_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_75_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_76_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_78_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_79_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_7_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_81_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_82_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_83_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_84_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_85_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_86_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_87_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_88_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_89_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_8_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_90_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_91_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_92_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_93_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_94_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_95_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_96_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_97_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_98_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_99_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_9_0;
}
namespace GlobalNamespace {
class OVRPlugin_OpenXREventDelegateType;
}
namespace GlobalNamespace {
struct OVRPlugin_OptionalBool;
}
namespace GlobalNamespace {
struct OVRPlugin_OverlayFlag;
}
namespace GlobalNamespace {
struct OVRPlugin_OverlayShape;
}
namespace GlobalNamespace {
struct OVRPlugin_PassthroughCapabilities;
}
namespace GlobalNamespace {
struct OVRPlugin_PassthroughCapabilityFields;
}
namespace GlobalNamespace {
struct OVRPlugin_PassthroughCapabilityFlags;
}
namespace GlobalNamespace {
struct OVRPlugin_PassthroughColorLutChannels;
}
namespace GlobalNamespace {
struct OVRPlugin_PassthroughColorLutData;
}
namespace GlobalNamespace {
struct OVRPlugin_PassthroughPreferenceFields;
}
namespace GlobalNamespace {
struct OVRPlugin_PassthroughPreferenceFlags;
}
namespace GlobalNamespace {
struct OVRPlugin_PassthroughPreferences;
}
namespace GlobalNamespace {
struct OVRPlugin_PerfMetrics;
}
namespace GlobalNamespace {
template<typename T>
struct OVRPlugin_PinnedArray_1;
}
namespace GlobalNamespace {
struct OVRPlugin_PlatformUI;
}
namespace GlobalNamespace {
struct OVRPlugin_PolygonalBoundary2DInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_PoseStatef;
}
namespace GlobalNamespace {
struct OVRPlugin_Posef;
}
namespace GlobalNamespace {
struct OVRPlugin_ProcessorPerformanceLevel;
}
namespace GlobalNamespace {
class OVRPlugin_Qpl;
}
namespace GlobalNamespace {
struct OVRPlugin_Quatf;
}
namespace GlobalNamespace {
struct OVRPlugin_RecenterFlags;
}
namespace GlobalNamespace {
struct OVRPlugin_RectfPair;
}
namespace GlobalNamespace {
struct OVRPlugin_Rectf;
}
namespace GlobalNamespace {
struct OVRPlugin_RectiPair;
}
namespace GlobalNamespace {
struct OVRPlugin_Recti;
}
namespace GlobalNamespace {
struct OVRPlugin_RenderModelFlags;
}
namespace GlobalNamespace {
struct OVRPlugin_RenderModelPropertiesInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_RenderModelProperties;
}
namespace GlobalNamespace {
struct OVRPlugin_Result;
}
namespace GlobalNamespace {
struct OVRPlugin_RoomLayoutInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_RoomLayout;
}
namespace GlobalNamespace {
struct OVRPlugin_SceneCaptureRequestInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_ShareSpacesGroupRecipientInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_ShareSpacesInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_ShareSpacesRecipientInfoBase;
}
namespace GlobalNamespace {
struct OVRPlugin_ShareSpacesRecipientType;
}
namespace GlobalNamespace {
struct OVRPlugin_Size3f;
}
namespace GlobalNamespace {
struct OVRPlugin_Sizef;
}
namespace GlobalNamespace {
struct OVRPlugin_Sizei;
}
namespace GlobalNamespace {
struct OVRPlugin_Skeleton2Internal;
}
namespace GlobalNamespace {
struct OVRPlugin_Skeleton2;
}
namespace GlobalNamespace {
struct OVRPlugin_Skeleton3Internal;
}
namespace GlobalNamespace {
struct OVRPlugin_SkeletonConstants;
}
namespace GlobalNamespace {
struct OVRPlugin_SkeletonType;
}
namespace GlobalNamespace {
struct OVRPlugin_Skeleton;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceComponentType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceContainerInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryFilterInfoComponents;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryFilterInfoHeader;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryFilterInfoIds;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryFilterType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryResult;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceDiscoveryResults;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceFilterInfoComponents;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceFilterInfoIds;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceFlags;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceLocationFlags;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceLocationf;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceMarkerPayloadType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceMarkerPayload;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryActionType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryFilterType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryInfo2;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryResult;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceQueryType;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceSemanticLabelInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceStorageLocation;
}
namespace GlobalNamespace {
struct OVRPlugin_SpaceStoragePersistenceMode;
}
namespace GlobalNamespace {
struct OVRPlugin_SpatialAnchorCreateInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_Step;
}
namespace GlobalNamespace {
struct OVRPlugin_SystemHeadset;
}
namespace GlobalNamespace {
struct OVRPlugin_SystemRegion;
}
namespace GlobalNamespace {
struct OVRPlugin_TextureRectMatrixf;
}
namespace GlobalNamespace {
struct OVRPlugin_TiledMultiResLevel;
}
namespace GlobalNamespace {
struct OVRPlugin_Tracker;
}
namespace GlobalNamespace {
struct OVRPlugin_TrackingConfidence;
}
namespace GlobalNamespace {
struct OVRPlugin_TrackingOrigin;
}
namespace GlobalNamespace {
struct OVRPlugin_TriangleMeshInternal;
}
namespace GlobalNamespace {
class OVRPlugin_UnifiedConsent;
}
namespace GlobalNamespace {
class OVRPlugin_UnityOpenXR;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector2f;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector2i;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector3f;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector4f;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector4s;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardCreateInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardInputInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardInputSource;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardInputStateFlags;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardLocationInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardLocationType;
}
namespace GlobalNamespace {
class OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider;
}
namespace GlobalNamespace {
class OVRPlugin_VirtualKeyboardModelAnimationStateHandler;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardModelAnimationState;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardModelAnimationStatesInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardModelAnimationStates;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardModelVisibility;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardSpaceCreateInfo;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardTextureData;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardTextureIdsInternal;
}
namespace GlobalNamespace {
struct OVRPlugin_VirtualKeyboardTextureIds;
}
namespace GlobalNamespace {
struct OVRPlugin_XrApi;
}
namespace GlobalNamespace {
class OVRPlugin___c;
}
namespace GlobalNamespace {
class OVRPlugin___c__DisplayClass531_0;
}
namespace GlobalNamespace {
template<typename TStatus>
struct OVRResult_1;
}
namespace GlobalNamespace {
template<typename TValue,typename TStatus>
struct OVRResult_2;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
namespace GlobalNamespace {
struct Qpl_OVRPlugin_Annotation;
}
namespace GlobalNamespace {
struct Qpl_OVRPlugin_ResultType;
}
namespace GlobalNamespace {
struct Qpl_OVRPlugin_VariantType;
}
namespace GlobalNamespace {
struct Qpl_OVRPlugin_Variant;
}
namespace System {
class AsyncCallback;
}
namespace System {
struct Guid;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
class Version;
}
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings {
struct PerformanceLevelHint;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRPlugin;
}
namespace GlobalNamespace {
class OVRPlugin_GUID;
}
namespace GlobalNamespace {
class OVRPlugin_GetBoneSkeleton2Delegate;
}
namespace GlobalNamespace {
class OVRPlugin_GetBoneSkeleton3Delegate;
}
namespace GlobalNamespace {
class OVRPlugin_Ktx;
}
namespace GlobalNamespace {
class OVRPlugin_LogCallback2DelegateType;
}
namespace GlobalNamespace {
class OVRPlugin_Media;
}
namespace GlobalNamespace {
class OVRPlugin_Mesh;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_0_1_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_0_1_1;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_0_1_2;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_0_1_3;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_0_5_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_0_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_100_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_101_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_102_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_103_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_104_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_105_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_106_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_107_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_108_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_109_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_10_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_110_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_111_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_112_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_113_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_114_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_115_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_116_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_117_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_118_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_119_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_11_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_120_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_121_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_122_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_123_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_124_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_125_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_126_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_127_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_128_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_129_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_12_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_15_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_16_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_17_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_18_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_19_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_1_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_21_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_28_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_29_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_2_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_30_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_31_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_32_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_34_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_35_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_36_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_37_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_38_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_39_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_3_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_40_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_41_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_42_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_43_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_44_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_45_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_46_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_47_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_48_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_49_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_50_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_51_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_52_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_53_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_54_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_55_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_55_1;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_56_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_57_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_58_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_59_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_5_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_60_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_61_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_62_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_63_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_64_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_65_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_66_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_67_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_68_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_69_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_6_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_70_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_71_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_72_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_73_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_74_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_75_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_76_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_78_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_79_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_7_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_81_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_82_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_83_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_84_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_85_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_86_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_87_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_88_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_89_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_8_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_90_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_91_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_92_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_93_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_94_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_95_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_96_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_97_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_98_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_99_0;
}
namespace GlobalNamespace {
class OVRPlugin_OVRP_1_9_0;
}
namespace GlobalNamespace {
class OVRPlugin_OpenXREventDelegateType;
}
namespace GlobalNamespace {
class OVRPlugin_Qpl;
}
namespace GlobalNamespace {
class OVRPlugin_UnifiedConsent;
}
namespace GlobalNamespace {
class OVRPlugin_UnityOpenXR;
}
namespace GlobalNamespace {
class OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider;
}
namespace GlobalNamespace {
class OVRPlugin_VirtualKeyboardModelAnimationStateHandler;
}
namespace GlobalNamespace {
class OVRPlugin___c;
}
namespace GlobalNamespace {
class OVRPlugin___c__DisplayClass531_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRPlugin*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_GUID*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_GetBoneSkeleton2Delegate*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_GetBoneSkeleton3Delegate*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_Ktx*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_LogCallback2DelegateType*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_Media*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_Mesh*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_0_1_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_0_1_1*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_0_1_2*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_0_1_3*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_0_5_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_0_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_100_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_101_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_102_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_103_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_104_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_105_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_106_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_107_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_108_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_109_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_10_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_110_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_111_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_112_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_113_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_114_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_115_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_116_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_117_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_118_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_119_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_11_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_120_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_121_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_122_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_123_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_124_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_125_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_126_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_127_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_128_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_129_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_12_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_15_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_16_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_17_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_18_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_19_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_1_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_21_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_28_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_29_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_2_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_30_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_31_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_32_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_34_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_35_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_36_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_37_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_38_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_39_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_3_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_40_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_41_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_42_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_43_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_44_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_45_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_46_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_47_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_48_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_49_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_50_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_51_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_52_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_53_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_54_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_55_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_55_1*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_56_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_57_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_58_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_59_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_5_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_60_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_61_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_62_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_63_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_64_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_65_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_66_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_67_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_68_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_69_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_6_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_70_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_71_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_72_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_73_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_74_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_75_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_76_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_78_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_79_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_7_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_81_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_82_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_83_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_84_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_85_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_86_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_87_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_88_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_89_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_8_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_90_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_91_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_92_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_93_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_94_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_95_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_96_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_97_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_98_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_99_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OVRP_1_9_0*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_OpenXREventDelegateType*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_Qpl*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_UnifiedConsent*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_UnityOpenXR*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider*);
MARK_REF_T(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStateHandler*);
MARK_REF_T(::GlobalNamespace::OVRPlugin___c*);
MARK_REF_T(::GlobalNamespace::OVRPlugin___c__DisplayClass531_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin*, "", "OVRPlugin");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_GUID*, "", "OVRPlugin/GUID");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_GetBoneSkeleton2Delegate*, "", "OVRPlugin/GetBoneSkeleton2Delegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_GetBoneSkeleton3Delegate*, "", "OVRPlugin/GetBoneSkeleton3Delegate");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Ktx*, "", "OVRPlugin/Ktx");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_LogCallback2DelegateType*, "", "OVRPlugin/LogCallback2DelegateType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Media*, "", "OVRPlugin/Media");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Mesh*, "", "OVRPlugin/Mesh");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_0_1_0*, "", "OVRPlugin/OVRP_0_1_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_0_1_1*, "", "OVRPlugin/OVRP_0_1_1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_0_1_2*, "", "OVRPlugin/OVRP_0_1_2");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_0_1_3*, "", "OVRPlugin/OVRP_0_1_3");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_0_5_0*, "", "OVRPlugin/OVRP_0_5_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_0_0*, "", "OVRPlugin/OVRP_1_0_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_100_0*, "", "OVRPlugin/OVRP_1_100_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_101_0*, "", "OVRPlugin/OVRP_1_101_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_102_0*, "", "OVRPlugin/OVRP_1_102_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_103_0*, "", "OVRPlugin/OVRP_1_103_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_104_0*, "", "OVRPlugin/OVRP_1_104_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_105_0*, "", "OVRPlugin/OVRP_1_105_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_106_0*, "", "OVRPlugin/OVRP_1_106_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_107_0*, "", "OVRPlugin/OVRP_1_107_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_108_0*, "", "OVRPlugin/OVRP_1_108_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_109_0*, "", "OVRPlugin/OVRP_1_109_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_10_0*, "", "OVRPlugin/OVRP_1_10_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_110_0*, "", "OVRPlugin/OVRP_1_110_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_111_0*, "", "OVRPlugin/OVRP_1_111_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_112_0*, "", "OVRPlugin/OVRP_1_112_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_113_0*, "", "OVRPlugin/OVRP_1_113_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_114_0*, "", "OVRPlugin/OVRP_1_114_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_115_0*, "", "OVRPlugin/OVRP_1_115_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_116_0*, "", "OVRPlugin/OVRP_1_116_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_117_0*, "", "OVRPlugin/OVRP_1_117_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_118_0*, "", "OVRPlugin/OVRP_1_118_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_119_0*, "", "OVRPlugin/OVRP_1_119_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_11_0*, "", "OVRPlugin/OVRP_1_11_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_120_0*, "", "OVRPlugin/OVRP_1_120_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_121_0*, "", "OVRPlugin/OVRP_1_121_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_122_0*, "", "OVRPlugin/OVRP_1_122_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_123_0*, "", "OVRPlugin/OVRP_1_123_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_124_0*, "", "OVRPlugin/OVRP_1_124_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_125_0*, "", "OVRPlugin/OVRP_1_125_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_126_0*, "", "OVRPlugin/OVRP_1_126_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_127_0*, "", "OVRPlugin/OVRP_1_127_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_128_0*, "", "OVRPlugin/OVRP_1_128_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_129_0*, "", "OVRPlugin/OVRP_1_129_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_12_0*, "", "OVRPlugin/OVRP_1_12_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_15_0*, "", "OVRPlugin/OVRP_1_15_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_16_0*, "", "OVRPlugin/OVRP_1_16_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_17_0*, "", "OVRPlugin/OVRP_1_17_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_18_0*, "", "OVRPlugin/OVRP_1_18_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_19_0*, "", "OVRPlugin/OVRP_1_19_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_1_0*, "", "OVRPlugin/OVRP_1_1_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_21_0*, "", "OVRPlugin/OVRP_1_21_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_28_0*, "", "OVRPlugin/OVRP_1_28_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_29_0*, "", "OVRPlugin/OVRP_1_29_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_2_0*, "", "OVRPlugin/OVRP_1_2_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_30_0*, "", "OVRPlugin/OVRP_1_30_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_31_0*, "", "OVRPlugin/OVRP_1_31_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_32_0*, "", "OVRPlugin/OVRP_1_32_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_34_0*, "", "OVRPlugin/OVRP_1_34_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_35_0*, "", "OVRPlugin/OVRP_1_35_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_36_0*, "", "OVRPlugin/OVRP_1_36_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_37_0*, "", "OVRPlugin/OVRP_1_37_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_38_0*, "", "OVRPlugin/OVRP_1_38_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_39_0*, "", "OVRPlugin/OVRP_1_39_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_3_0*, "", "OVRPlugin/OVRP_1_3_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_40_0*, "", "OVRPlugin/OVRP_1_40_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_41_0*, "", "OVRPlugin/OVRP_1_41_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_42_0*, "", "OVRPlugin/OVRP_1_42_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_43_0*, "", "OVRPlugin/OVRP_1_43_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_44_0*, "", "OVRPlugin/OVRP_1_44_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_45_0*, "", "OVRPlugin/OVRP_1_45_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_46_0*, "", "OVRPlugin/OVRP_1_46_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_47_0*, "", "OVRPlugin/OVRP_1_47_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_48_0*, "", "OVRPlugin/OVRP_1_48_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_49_0*, "", "OVRPlugin/OVRP_1_49_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_50_0*, "", "OVRPlugin/OVRP_1_50_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_51_0*, "", "OVRPlugin/OVRP_1_51_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_52_0*, "", "OVRPlugin/OVRP_1_52_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_53_0*, "", "OVRPlugin/OVRP_1_53_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_54_0*, "", "OVRPlugin/OVRP_1_54_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_55_0*, "", "OVRPlugin/OVRP_1_55_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_55_1*, "", "OVRPlugin/OVRP_1_55_1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_56_0*, "", "OVRPlugin/OVRP_1_56_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_57_0*, "", "OVRPlugin/OVRP_1_57_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_58_0*, "", "OVRPlugin/OVRP_1_58_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_59_0*, "", "OVRPlugin/OVRP_1_59_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_5_0*, "", "OVRPlugin/OVRP_1_5_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_60_0*, "", "OVRPlugin/OVRP_1_60_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_61_0*, "", "OVRPlugin/OVRP_1_61_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_62_0*, "", "OVRPlugin/OVRP_1_62_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_63_0*, "", "OVRPlugin/OVRP_1_63_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_64_0*, "", "OVRPlugin/OVRP_1_64_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_65_0*, "", "OVRPlugin/OVRP_1_65_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_66_0*, "", "OVRPlugin/OVRP_1_66_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_67_0*, "", "OVRPlugin/OVRP_1_67_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_68_0*, "", "OVRPlugin/OVRP_1_68_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_69_0*, "", "OVRPlugin/OVRP_1_69_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_6_0*, "", "OVRPlugin/OVRP_1_6_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_70_0*, "", "OVRPlugin/OVRP_1_70_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_71_0*, "", "OVRPlugin/OVRP_1_71_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_72_0*, "", "OVRPlugin/OVRP_1_72_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_73_0*, "", "OVRPlugin/OVRP_1_73_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_74_0*, "", "OVRPlugin/OVRP_1_74_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_75_0*, "", "OVRPlugin/OVRP_1_75_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_76_0*, "", "OVRPlugin/OVRP_1_76_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_78_0*, "", "OVRPlugin/OVRP_1_78_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_79_0*, "", "OVRPlugin/OVRP_1_79_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_7_0*, "", "OVRPlugin/OVRP_1_7_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_81_0*, "", "OVRPlugin/OVRP_1_81_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_82_0*, "", "OVRPlugin/OVRP_1_82_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_83_0*, "", "OVRPlugin/OVRP_1_83_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_84_0*, "", "OVRPlugin/OVRP_1_84_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_85_0*, "", "OVRPlugin/OVRP_1_85_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_86_0*, "", "OVRPlugin/OVRP_1_86_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_87_0*, "", "OVRPlugin/OVRP_1_87_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_88_0*, "", "OVRPlugin/OVRP_1_88_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_89_0*, "", "OVRPlugin/OVRP_1_89_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_8_0*, "", "OVRPlugin/OVRP_1_8_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_90_0*, "", "OVRPlugin/OVRP_1_90_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_91_0*, "", "OVRPlugin/OVRP_1_91_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_92_0*, "", "OVRPlugin/OVRP_1_92_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_93_0*, "", "OVRPlugin/OVRP_1_93_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_94_0*, "", "OVRPlugin/OVRP_1_94_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_95_0*, "", "OVRPlugin/OVRP_1_95_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_96_0*, "", "OVRPlugin/OVRP_1_96_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_97_0*, "", "OVRPlugin/OVRP_1_97_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_98_0*, "", "OVRPlugin/OVRP_1_98_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_99_0*, "", "OVRPlugin/OVRP_1_99_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OVRP_1_9_0*, "", "OVRPlugin/OVRP_1_9_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OpenXREventDelegateType*, "", "OVRPlugin/OpenXREventDelegateType");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_Qpl*, "", "OVRPlugin/Qpl");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_UnifiedConsent*, "", "OVRPlugin/UnifiedConsent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_UnityOpenXR*, "", "OVRPlugin/UnityOpenXR");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider*, "", "OVRPlugin/VirtualKeyboardModelAnimationStateBufferProvider");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStateHandler*, "", "OVRPlugin/VirtualKeyboardModelAnimationStateHandler");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin___c*, "", "OVRPlugin/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin___c__DisplayClass531_0*, "", "OVRPlugin/<>c__DisplayClass531_0");
// [Extension]
// Dependencies OVRHandSkeletonVersion, OVRPlugin::BodyJointSet, OVRPlugin::EyeGazesStateInternal, OVRPlugin::FaceState2Internal, OVRPlugin::FaceStateInternal, OVRPlugin::FaceVisemesStateInternal, OVRPlugin::GetBoneSkeleton2Delegate, OVRPlugin::GetBoneSkeleton3Delegate, OVRPlugin::HandState3Internal, OVRPlugin::HandStateInternal, OVRPlugin::HandTrackingStateInternal, OVRPlugin::ProcessorPerformanceLevel, OVRPlugin::Skeleton, OVRPlugin::Skeleton2Internal, OVRPlugin::Skeleton3Internal, OVRPlugin::XrApi, System.Guid, System.Nullable`1<T>, System.Object, UnityEngine.Quaternion
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin
class CORDL_TYPE OVRPlugin : public ::System::Object {
public:
// Declarations
using ActionTypes = ::GlobalNamespace::OVRPlugin_ActionTypes;

using AppPerfFrameStats = ::GlobalNamespace::OVRPlugin_AppPerfFrameStats;

using AppPerfStats = ::GlobalNamespace::OVRPlugin_AppPerfStats;

using BatteryStatus = ::GlobalNamespace::OVRPlugin_BatteryStatus;

using BlendFactor = ::GlobalNamespace::OVRPlugin_BlendFactor;

using BodyJointLocation = ::GlobalNamespace::OVRPlugin_BodyJointLocation;

using BodyJointSet = ::GlobalNamespace::OVRPlugin_BodyJointSet;

using BodyState = ::GlobalNamespace::OVRPlugin_BodyState;

using BodyState4Internal = ::GlobalNamespace::OVRPlugin_BodyState4Internal;

using BodyStateInternal = ::GlobalNamespace::OVRPlugin_BodyStateInternal;

using BodyTrackingCalibrationInfo = ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationInfo;

using BodyTrackingCalibrationState = ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState;

using BodyTrackingFidelity2 = ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2;

using Bone = ::GlobalNamespace::OVRPlugin_Bone;

using BoneCapsule = ::GlobalNamespace::OVRPlugin_BoneCapsule;

using BoneId = ::GlobalNamespace::OVRPlugin_BoneId;

using Bool = ::GlobalNamespace::OVRPlugin_Bool;

using BoundaryGeometry = ::GlobalNamespace::OVRPlugin_BoundaryGeometry;

using BoundaryTestResult = ::GlobalNamespace::OVRPlugin_BoundaryTestResult;

using BoundaryType = ::GlobalNamespace::OVRPlugin_BoundaryType;

using BoundaryVisibility = ::GlobalNamespace::OVRPlugin_BoundaryVisibility;

using Boundsf = ::GlobalNamespace::OVRPlugin_Boundsf;

using CameraAnchorType = ::GlobalNamespace::OVRPlugin_CameraAnchorType;

using CameraDevice = ::GlobalNamespace::OVRPlugin_CameraDevice;

using CameraDeviceDepthQuality = ::GlobalNamespace::OVRPlugin_CameraDeviceDepthQuality;

using CameraDeviceDepthSensingMode = ::GlobalNamespace::OVRPlugin_CameraDeviceDepthSensingMode;

using CameraDeviceIntrinsicsParameters = ::GlobalNamespace::OVRPlugin_CameraDeviceIntrinsicsParameters;

using CameraExtrinsics = ::GlobalNamespace::OVRPlugin_CameraExtrinsics;

using CameraIntrinsics = ::GlobalNamespace::OVRPlugin_CameraIntrinsics;

using CameraStatus = ::GlobalNamespace::OVRPlugin_CameraStatus;

using ColocationSessionStartAdvertisementInfo = ::GlobalNamespace::OVRPlugin_ColocationSessionStartAdvertisementInfo;

using ColorSpace = ::GlobalNamespace::OVRPlugin_ColorSpace;

using Colorf = ::GlobalNamespace::OVRPlugin_Colorf;

using Controller = ::GlobalNamespace::OVRPlugin_Controller;

using ControllerState = ::GlobalNamespace::OVRPlugin_ControllerState;

using ControllerState2 = ::GlobalNamespace::OVRPlugin_ControllerState2;

using ControllerState4 = ::GlobalNamespace::OVRPlugin_ControllerState4;

using ControllerState5 = ::GlobalNamespace::OVRPlugin_ControllerState5;

using ControllerState6 = ::GlobalNamespace::OVRPlugin_ControllerState6;

using DynamicObjectClass = ::GlobalNamespace::OVRPlugin_DynamicObjectClass;

using DynamicObjectData = ::GlobalNamespace::OVRPlugin_DynamicObjectData;

using DynamicObjectTrackedClassesSetInfo = ::GlobalNamespace::OVRPlugin_DynamicObjectTrackedClassesSetInfo;

using EventDataBuffer = ::GlobalNamespace::OVRPlugin_EventDataBuffer;

using EventType = ::GlobalNamespace::OVRPlugin_EventType;

using Eye = ::GlobalNamespace::OVRPlugin_Eye;

using EyeGazeState = ::GlobalNamespace::OVRPlugin_EyeGazeState;

using EyeGazesState = ::GlobalNamespace::OVRPlugin_EyeGazesState;

using EyeGazesStateInternal = ::GlobalNamespace::OVRPlugin_EyeGazesStateInternal;

using EyeTextureFormat = ::GlobalNamespace::OVRPlugin_EyeTextureFormat;

using FaceConstants = ::GlobalNamespace::OVRPlugin_FaceConstants;

using FaceExpression = ::GlobalNamespace::OVRPlugin_FaceExpression;

using FaceExpression2 = ::GlobalNamespace::OVRPlugin_FaceExpression2;

using FaceExpressionStatus = ::GlobalNamespace::OVRPlugin_FaceExpressionStatus;

using FaceExpressionStatusInternal = ::GlobalNamespace::OVRPlugin_FaceExpressionStatusInternal;

using FaceRegionConfidence = ::GlobalNamespace::OVRPlugin_FaceRegionConfidence;

using FaceState = ::GlobalNamespace::OVRPlugin_FaceState;

using FaceState2Internal = ::GlobalNamespace::OVRPlugin_FaceState2Internal;

using FaceStateInternal = ::GlobalNamespace::OVRPlugin_FaceStateInternal;

using FaceTrackingDataSource = ::GlobalNamespace::OVRPlugin_FaceTrackingDataSource;

using FaceViseme = ::GlobalNamespace::OVRPlugin_FaceViseme;

using FaceVisemesState = ::GlobalNamespace::OVRPlugin_FaceVisemesState;

using FaceVisemesStateInternal = ::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal;

using FeatureType = ::GlobalNamespace::OVRPlugin_FeatureType;

using FixedFoveatedRenderingLevel = ::GlobalNamespace::OVRPlugin_FixedFoveatedRenderingLevel;

using FoveatedRenderingLevel = ::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel;

using Fovf = ::GlobalNamespace::OVRPlugin_Fovf;

using FovfPair = ::GlobalNamespace::OVRPlugin_FovfPair;

using Frustumf = ::GlobalNamespace::OVRPlugin_Frustumf;

using Frustumf2 = ::GlobalNamespace::OVRPlugin_Frustumf2;

using FutureState = ::GlobalNamespace::OVRPlugin_FutureState;

using GUID = ::GlobalNamespace::OVRPlugin_GUID;

using GetBoneSkeleton2Delegate = ::GlobalNamespace::OVRPlugin_GetBoneSkeleton2Delegate;

using GetBoneSkeleton3Delegate = ::GlobalNamespace::OVRPlugin_GetBoneSkeleton3Delegate;

using Hand = ::GlobalNamespace::OVRPlugin_Hand;

using HandFinger = ::GlobalNamespace::OVRPlugin_HandFinger;

using HandFingerPinch = ::GlobalNamespace::OVRPlugin_HandFingerPinch;

using HandState = ::GlobalNamespace::OVRPlugin_HandState;

using HandState3Internal = ::GlobalNamespace::OVRPlugin_HandState3Internal;

using HandStateInternal = ::GlobalNamespace::OVRPlugin_HandStateInternal;

using HandStatus = ::GlobalNamespace::OVRPlugin_HandStatus;

using HandTrackingState = ::GlobalNamespace::OVRPlugin_HandTrackingState;

using HandTrackingStateInternal = ::GlobalNamespace::OVRPlugin_HandTrackingStateInternal;

using Handedness = ::GlobalNamespace::OVRPlugin_Handedness;

using HapticsAmplitudeEnvelopeVibration = ::GlobalNamespace::OVRPlugin_HapticsAmplitudeEnvelopeVibration;

using HapticsBuffer = ::GlobalNamespace::OVRPlugin_HapticsBuffer;

using HapticsConstants = ::GlobalNamespace::OVRPlugin_HapticsConstants;

using HapticsDesc = ::GlobalNamespace::OVRPlugin_HapticsDesc;

using HapticsLocation = ::GlobalNamespace::OVRPlugin_HapticsLocation;

using HapticsPcmVibration = ::GlobalNamespace::OVRPlugin_HapticsPcmVibration;

using HapticsState = ::GlobalNamespace::OVRPlugin_HapticsState;

using InsightPassthroughColorMapType = ::GlobalNamespace::OVRPlugin_InsightPassthroughColorMapType;

using InsightPassthroughKeyboardHandsIntensity = ::GlobalNamespace::OVRPlugin_InsightPassthroughKeyboardHandsIntensity;

using InsightPassthroughStyle = ::GlobalNamespace::OVRPlugin_InsightPassthroughStyle;

using InsightPassthroughStyle2 = ::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2;

using InsightPassthroughStyleFlags = ::GlobalNamespace::OVRPlugin_InsightPassthroughStyleFlags;

using InteractionProfile = ::GlobalNamespace::OVRPlugin_InteractionProfile;

using Ktx = ::GlobalNamespace::OVRPlugin_Ktx;

using LayerDesc = ::GlobalNamespace::OVRPlugin_LayerDesc;

using LayerFlags = ::GlobalNamespace::OVRPlugin_LayerFlags;

using LayerLayout = ::GlobalNamespace::OVRPlugin_LayerLayout;

using LayerSharpenType = ::GlobalNamespace::OVRPlugin_LayerSharpenType;

using LayerSubmit = ::GlobalNamespace::OVRPlugin_LayerSubmit;

using LayerSuperSamplingType = ::GlobalNamespace::OVRPlugin_LayerSuperSamplingType;

using LogCallback2DelegateType = ::GlobalNamespace::OVRPlugin_LogCallback2DelegateType;

using LogLevel = ::GlobalNamespace::OVRPlugin_LogLevel;

using MarkerTrackerCreateCompletion = ::GlobalNamespace::OVRPlugin_MarkerTrackerCreateCompletion;

using MarkerTrackerCreateInfo = ::GlobalNamespace::OVRPlugin_MarkerTrackerCreateInfo;

using MarkerType = ::GlobalNamespace::OVRPlugin_MarkerType;

using Media = ::GlobalNamespace::OVRPlugin_Media;

using Mesh = ::GlobalNamespace::OVRPlugin_Mesh;

using MeshConstants = ::GlobalNamespace::OVRPlugin_MeshConstants;

using MeshType = ::GlobalNamespace::OVRPlugin_MeshType;

using MicrogestureType = ::GlobalNamespace::OVRPlugin_MicrogestureType;

using Node = ::GlobalNamespace::OVRPlugin_Node;

using OVRP_0_1_0 = ::GlobalNamespace::OVRPlugin_OVRP_0_1_0;

using OVRP_0_1_1 = ::GlobalNamespace::OVRPlugin_OVRP_0_1_1;

using OVRP_0_1_2 = ::GlobalNamespace::OVRPlugin_OVRP_0_1_2;

using OVRP_0_1_3 = ::GlobalNamespace::OVRPlugin_OVRP_0_1_3;

using OVRP_0_5_0 = ::GlobalNamespace::OVRPlugin_OVRP_0_5_0;

using OVRP_1_0_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_0_0;

using OVRP_1_100_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_100_0;

using OVRP_1_101_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_101_0;

using OVRP_1_102_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_102_0;

using OVRP_1_103_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_103_0;

using OVRP_1_104_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_104_0;

using OVRP_1_105_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_105_0;

using OVRP_1_106_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_106_0;

using OVRP_1_107_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_107_0;

using OVRP_1_108_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_108_0;

using OVRP_1_109_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_109_0;

using OVRP_1_10_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_10_0;

using OVRP_1_110_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_110_0;

using OVRP_1_111_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_111_0;

using OVRP_1_112_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_112_0;

using OVRP_1_113_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_113_0;

using OVRP_1_114_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_114_0;

using OVRP_1_115_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_115_0;

using OVRP_1_116_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_116_0;

using OVRP_1_117_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_117_0;

using OVRP_1_118_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_118_0;

using OVRP_1_119_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_119_0;

using OVRP_1_11_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_11_0;

using OVRP_1_120_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_120_0;

using OVRP_1_121_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_121_0;

using OVRP_1_122_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_122_0;

using OVRP_1_123_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_123_0;

using OVRP_1_124_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_124_0;

using OVRP_1_125_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_125_0;

using OVRP_1_126_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_126_0;

using OVRP_1_127_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_127_0;

using OVRP_1_128_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_128_0;

using OVRP_1_129_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_129_0;

using OVRP_1_12_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_12_0;

using OVRP_1_15_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_15_0;

using OVRP_1_16_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_16_0;

using OVRP_1_17_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_17_0;

using OVRP_1_18_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_18_0;

using OVRP_1_19_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_19_0;

using OVRP_1_1_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_1_0;

using OVRP_1_21_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_21_0;

using OVRP_1_28_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_28_0;

using OVRP_1_29_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_29_0;

using OVRP_1_2_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_2_0;

using OVRP_1_30_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_30_0;

using OVRP_1_31_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_31_0;

using OVRP_1_32_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_32_0;

using OVRP_1_34_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_34_0;

using OVRP_1_35_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_35_0;

using OVRP_1_36_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_36_0;

using OVRP_1_37_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_37_0;

using OVRP_1_38_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_38_0;

using OVRP_1_39_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_39_0;

using OVRP_1_3_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_3_0;

using OVRP_1_40_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_40_0;

using OVRP_1_41_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_41_0;

using OVRP_1_42_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_42_0;

using OVRP_1_43_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_43_0;

using OVRP_1_44_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_44_0;

using OVRP_1_45_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_45_0;

using OVRP_1_46_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_46_0;

using OVRP_1_47_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_47_0;

using OVRP_1_48_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_48_0;

using OVRP_1_49_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_49_0;

using OVRP_1_50_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_50_0;

using OVRP_1_51_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_51_0;

using OVRP_1_52_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_52_0;

using OVRP_1_53_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_53_0;

using OVRP_1_54_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_54_0;

using OVRP_1_55_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_55_0;

using OVRP_1_55_1 = ::GlobalNamespace::OVRPlugin_OVRP_1_55_1;

using OVRP_1_56_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_56_0;

using OVRP_1_57_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_57_0;

using OVRP_1_58_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_58_0;

using OVRP_1_59_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_59_0;

using OVRP_1_5_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_5_0;

using OVRP_1_60_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_60_0;

using OVRP_1_61_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_61_0;

using OVRP_1_62_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_62_0;

using OVRP_1_63_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_63_0;

using OVRP_1_64_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_64_0;

using OVRP_1_65_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_65_0;

using OVRP_1_66_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_66_0;

using OVRP_1_67_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_67_0;

using OVRP_1_68_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_68_0;

using OVRP_1_69_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_69_0;

using OVRP_1_6_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_6_0;

using OVRP_1_70_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_70_0;

using OVRP_1_71_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_71_0;

using OVRP_1_72_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_72_0;

using OVRP_1_73_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_73_0;

using OVRP_1_74_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_74_0;

using OVRP_1_75_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_75_0;

using OVRP_1_76_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_76_0;

using OVRP_1_78_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_78_0;

using OVRP_1_79_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_79_0;

using OVRP_1_7_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_7_0;

using OVRP_1_81_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_81_0;

using OVRP_1_82_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_82_0;

using OVRP_1_83_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_83_0;

using OVRP_1_84_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_84_0;

using OVRP_1_85_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_85_0;

using OVRP_1_86_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_86_0;

using OVRP_1_87_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_87_0;

using OVRP_1_88_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_88_0;

using OVRP_1_89_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_89_0;

using OVRP_1_8_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_8_0;

using OVRP_1_90_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_90_0;

using OVRP_1_91_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_91_0;

using OVRP_1_92_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_92_0;

using OVRP_1_93_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_93_0;

using OVRP_1_94_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_94_0;

using OVRP_1_95_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_95_0;

using OVRP_1_96_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_96_0;

using OVRP_1_97_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_97_0;

using OVRP_1_98_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_98_0;

using OVRP_1_99_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_99_0;

using OVRP_1_9_0 = ::GlobalNamespace::OVRPlugin_OVRP_1_9_0;

using OpenXREventDelegateType = ::GlobalNamespace::OVRPlugin_OpenXREventDelegateType;

using OptionalBool = ::GlobalNamespace::OVRPlugin_OptionalBool;

using OverlayFlag = ::GlobalNamespace::OVRPlugin_OverlayFlag;

using OverlayShape = ::GlobalNamespace::OVRPlugin_OverlayShape;

using PassthroughCapabilities = ::GlobalNamespace::OVRPlugin_PassthroughCapabilities;

using PassthroughCapabilityFields = ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFields;

using PassthroughCapabilityFlags = ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags;

using PassthroughColorLutChannels = ::GlobalNamespace::OVRPlugin_PassthroughColorLutChannels;

using PassthroughColorLutData = ::GlobalNamespace::OVRPlugin_PassthroughColorLutData;

using PassthroughPreferenceFields = ::GlobalNamespace::OVRPlugin_PassthroughPreferenceFields;

using PassthroughPreferenceFlags = ::GlobalNamespace::OVRPlugin_PassthroughPreferenceFlags;

using PassthroughPreferences = ::GlobalNamespace::OVRPlugin_PassthroughPreferences;

using PerfMetrics = ::GlobalNamespace::OVRPlugin_PerfMetrics;

template<typename T>
using PinnedArray_1 = ::GlobalNamespace::OVRPlugin_PinnedArray_1<T>;

using PlatformUI = ::GlobalNamespace::OVRPlugin_PlatformUI;

using PolygonalBoundary2DInternal = ::GlobalNamespace::OVRPlugin_PolygonalBoundary2DInternal;

using PoseStatef = ::GlobalNamespace::OVRPlugin_PoseStatef;

using Posef = ::GlobalNamespace::OVRPlugin_Posef;

using ProcessorPerformanceLevel = ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel;

using Qpl = ::GlobalNamespace::OVRPlugin_Qpl;

using Quatf = ::GlobalNamespace::OVRPlugin_Quatf;

using RecenterFlags = ::GlobalNamespace::OVRPlugin_RecenterFlags;

using Rectf = ::GlobalNamespace::OVRPlugin_Rectf;

using RectfPair = ::GlobalNamespace::OVRPlugin_RectfPair;

using Recti = ::GlobalNamespace::OVRPlugin_Recti;

using RectiPair = ::GlobalNamespace::OVRPlugin_RectiPair;

using RenderModelFlags = ::GlobalNamespace::OVRPlugin_RenderModelFlags;

using RenderModelProperties = ::GlobalNamespace::OVRPlugin_RenderModelProperties;

using RenderModelPropertiesInternal = ::GlobalNamespace::OVRPlugin_RenderModelPropertiesInternal;

using Result = ::GlobalNamespace::OVRPlugin_Result;

using RoomLayout = ::GlobalNamespace::OVRPlugin_RoomLayout;

using RoomLayoutInternal = ::GlobalNamespace::OVRPlugin_RoomLayoutInternal;

using SceneCaptureRequestInternal = ::GlobalNamespace::OVRPlugin_SceneCaptureRequestInternal;

using ShareSpacesGroupRecipientInfo = ::GlobalNamespace::OVRPlugin_ShareSpacesGroupRecipientInfo;

using ShareSpacesInfo = ::GlobalNamespace::OVRPlugin_ShareSpacesInfo;

using ShareSpacesRecipientInfoBase = ::GlobalNamespace::OVRPlugin_ShareSpacesRecipientInfoBase;

using ShareSpacesRecipientType = ::GlobalNamespace::OVRPlugin_ShareSpacesRecipientType;

using Size3f = ::GlobalNamespace::OVRPlugin_Size3f;

using Sizef = ::GlobalNamespace::OVRPlugin_Sizef;

using Sizei = ::GlobalNamespace::OVRPlugin_Sizei;

using Skeleton = ::GlobalNamespace::OVRPlugin_Skeleton;

using Skeleton2 = ::GlobalNamespace::OVRPlugin_Skeleton2;

using Skeleton2Internal = ::GlobalNamespace::OVRPlugin_Skeleton2Internal;

using Skeleton3Internal = ::GlobalNamespace::OVRPlugin_Skeleton3Internal;

using SkeletonConstants = ::GlobalNamespace::OVRPlugin_SkeletonConstants;

using SkeletonType = ::GlobalNamespace::OVRPlugin_SkeletonType;

using SpaceComponentType = ::GlobalNamespace::OVRPlugin_SpaceComponentType;

using SpaceContainerInternal = ::GlobalNamespace::OVRPlugin_SpaceContainerInternal;

using SpaceDiscoveryFilterInfoComponents = ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents;

using SpaceDiscoveryFilterInfoHeader = ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoHeader;

using SpaceDiscoveryFilterInfoIds = ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds;

using SpaceDiscoveryFilterType = ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType;

using SpaceDiscoveryInfo = ::GlobalNamespace::OVRPlugin_SpaceDiscoveryInfo;

using SpaceDiscoveryResult = ::GlobalNamespace::OVRPlugin_SpaceDiscoveryResult;

using SpaceDiscoveryResults = ::GlobalNamespace::OVRPlugin_SpaceDiscoveryResults;

using SpaceFilterInfoComponents = ::GlobalNamespace::OVRPlugin_SpaceFilterInfoComponents;

using SpaceFilterInfoIds = ::GlobalNamespace::OVRPlugin_SpaceFilterInfoIds;

using SpaceFlags = ::GlobalNamespace::OVRPlugin_SpaceFlags;

using SpaceLocationFlags = ::GlobalNamespace::OVRPlugin_SpaceLocationFlags;

using SpaceLocationf = ::GlobalNamespace::OVRPlugin_SpaceLocationf;

using SpaceMarkerPayload = ::GlobalNamespace::OVRPlugin_SpaceMarkerPayload;

using SpaceMarkerPayloadType = ::GlobalNamespace::OVRPlugin_SpaceMarkerPayloadType;

using SpaceQueryActionType = ::GlobalNamespace::OVRPlugin_SpaceQueryActionType;

using SpaceQueryFilterType = ::GlobalNamespace::OVRPlugin_SpaceQueryFilterType;

using SpaceQueryInfo = ::GlobalNamespace::OVRPlugin_SpaceQueryInfo;

using SpaceQueryInfo2 = ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2;

using SpaceQueryResult = ::GlobalNamespace::OVRPlugin_SpaceQueryResult;

using SpaceQueryType = ::GlobalNamespace::OVRPlugin_SpaceQueryType;

using SpaceSemanticLabelInternal = ::GlobalNamespace::OVRPlugin_SpaceSemanticLabelInternal;

using SpaceStorageLocation = ::GlobalNamespace::OVRPlugin_SpaceStorageLocation;

using SpaceStoragePersistenceMode = ::GlobalNamespace::OVRPlugin_SpaceStoragePersistenceMode;

using SpatialAnchorCreateInfo = ::GlobalNamespace::OVRPlugin_SpatialAnchorCreateInfo;

using Step = ::GlobalNamespace::OVRPlugin_Step;

using SystemHeadset = ::GlobalNamespace::OVRPlugin_SystemHeadset;

using SystemRegion = ::GlobalNamespace::OVRPlugin_SystemRegion;

using TextureRectMatrixf = ::GlobalNamespace::OVRPlugin_TextureRectMatrixf;

using TiledMultiResLevel = ::GlobalNamespace::OVRPlugin_TiledMultiResLevel;

using Tracker = ::GlobalNamespace::OVRPlugin_Tracker;

using TrackingConfidence = ::GlobalNamespace::OVRPlugin_TrackingConfidence;

using TrackingOrigin = ::GlobalNamespace::OVRPlugin_TrackingOrigin;

using TriangleMeshInternal = ::GlobalNamespace::OVRPlugin_TriangleMeshInternal;

using UnifiedConsent = ::GlobalNamespace::OVRPlugin_UnifiedConsent;

using UnityOpenXR = ::GlobalNamespace::OVRPlugin_UnityOpenXR;

using Vector2f = ::GlobalNamespace::OVRPlugin_Vector2f;

using Vector2i = ::GlobalNamespace::OVRPlugin_Vector2i;

using Vector3f = ::GlobalNamespace::OVRPlugin_Vector3f;

using Vector4f = ::GlobalNamespace::OVRPlugin_Vector4f;

using Vector4s = ::GlobalNamespace::OVRPlugin_Vector4s;

using VirtualKeyboardCreateInfo = ::GlobalNamespace::OVRPlugin_VirtualKeyboardCreateInfo;

using VirtualKeyboardInputInfo = ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputInfo;

using VirtualKeyboardInputSource = ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputSource;

using VirtualKeyboardInputStateFlags = ::GlobalNamespace::OVRPlugin_VirtualKeyboardInputStateFlags;

using VirtualKeyboardLocationInfo = ::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo;

using VirtualKeyboardLocationType = ::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationType;

using VirtualKeyboardModelAnimationState = ::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState;

using VirtualKeyboardModelAnimationStateBufferProvider = ::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider;

using VirtualKeyboardModelAnimationStateHandler = ::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStateHandler;

using VirtualKeyboardModelAnimationStates = ::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStates;

using VirtualKeyboardModelAnimationStatesInternal = ::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStatesInternal;

using VirtualKeyboardModelVisibility = ::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility;

using VirtualKeyboardSpaceCreateInfo = ::GlobalNamespace::OVRPlugin_VirtualKeyboardSpaceCreateInfo;

using VirtualKeyboardTextureData = ::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureData;

using VirtualKeyboardTextureIds = ::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIds;

using VirtualKeyboardTextureIdsInternal = ::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIdsInternal;

using XrApi = ::GlobalNamespace::OVRPlugin_XrApi;

using __c = ::GlobalNamespace::OVRPlugin___c;

using __c__DisplayClass531_0 = ::GlobalNamespace::OVRPlugin___c__DisplayClass531_0;

/// @brief Field LeftBoneRotator, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_LeftBoneRotator, put=setStaticF_LeftBoneRotator)) ::UnityEngine::Quaternion  LeftBoneRotator;

/// @brief Field MAX_CPU_CORES, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MAX_CPU_CORES, put=setStaticF_MAX_CPU_CORES)) int32_t  MAX_CPU_CORES;

/// @brief Field RightBoneRotator, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_RightBoneRotator, put=setStaticF_RightBoneRotator)) ::UnityEngine::Quaternion  RightBoneRotator;

/// @brief Field Skeleton2GetBone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Skeleton2GetBone, put=setStaticF_Skeleton2GetBone)) ::ArrayW<::GlobalNamespace::OVRPlugin_GetBoneSkeleton2Delegate*>  Skeleton2GetBone;

/// @brief Field Skeleton3GetBone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Skeleton3GetBone, put=setStaticF_Skeleton3GetBone)) ::ArrayW<::GlobalNamespace::OVRPlugin_GetBoneSkeleton3Delegate*>  Skeleton3GetBone;

/// @brief Field <HandSkeletonVersion>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HandSkeletonVersion_k__BackingField, put=setStaticF__HandSkeletonVersion_k__BackingField)) ::GlobalNamespace::OVRHandSkeletonVersion  _HandSkeletonVersion_k__BackingField;

/// @brief Field _cachedAudioInGuid, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__cachedAudioInGuid, put=setStaticF__cachedAudioInGuid)) ::System::Guid  _cachedAudioInGuid;

/// @brief Field _cachedAudioInString, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedAudioInString, put=setStaticF__cachedAudioInString)) ::StringW  _cachedAudioInString;

/// @brief Field _cachedAudioOutGuid, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__cachedAudioOutGuid, put=setStaticF__cachedAudioOutGuid)) ::System::Guid  _cachedAudioOutGuid;

/// @brief Field _cachedAudioOutString, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedAudioOutString, put=setStaticF__cachedAudioOutString)) ::StringW  _cachedAudioOutString;

/// @brief Field _cachedSystemDisplayFrequenciesAvailable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedSystemDisplayFrequenciesAvailable, put=setStaticF__cachedSystemDisplayFrequenciesAvailable)) ::ArrayW<float_t>  _cachedSystemDisplayFrequenciesAvailable;

/// @brief Field _currentJointSet, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__currentJointSet, put=setStaticF__currentJointSet)) ::GlobalNamespace::OVRPlugin_BodyJointSet  _currentJointSet;

/// @brief Field _nativeAudioInGuid, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__nativeAudioInGuid, put=setStaticF__nativeAudioInGuid)) ::GlobalNamespace::OVRPlugin_GUID*  _nativeAudioInGuid;

/// @brief Field _nativeAudioOutGuid, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__nativeAudioOutGuid, put=setStaticF__nativeAudioOutGuid)) ::GlobalNamespace::OVRPlugin_GUID*  _nativeAudioOutGuid;

/// @brief Field _nativeSDKVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__nativeSDKVersion, put=setStaticF__nativeSDKVersion)) ::System::Version*  _nativeSDKVersion;

/// @brief Field _nativeSystemDisplayFrequenciesAvailable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__nativeSystemDisplayFrequenciesAvailable, put=setStaticF__nativeSystemDisplayFrequenciesAvailable)) ::GlobalNamespace::OVRNativeBuffer*  _nativeSystemDisplayFrequenciesAvailable;

/// @brief Field _nativeXrApi, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__nativeXrApi, put=setStaticF__nativeXrApi)) ::System::Nullable_1<::GlobalNamespace::OVRPlugin_XrApi>  _nativeXrApi;

/// @brief Field _version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__version, put=setStaticF__version)) ::System::Version*  _version;

/// @brief Field _versionZero, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__versionZero, put=setStaticF__versionZero)) ::System::Version*  _versionZero;

/// @brief Field cachedEyeGazesState, offset 0xffffffff, size 0x50 
 __declspec(property(get=getStaticF_cachedEyeGazesState, put=setStaticF_cachedEyeGazesState)) ::GlobalNamespace::OVRPlugin_EyeGazesStateInternal  cachedEyeGazesState;

/// @brief Field cachedFaceState, offset 0xffffffff, size 0x118 
 __declspec(property(get=getStaticF_cachedFaceState, put=setStaticF_cachedFaceState)) ::GlobalNamespace::OVRPlugin_FaceStateInternal  cachedFaceState;

/// @brief Field cachedFaceState2, offset 0xffffffff, size 0x138 
 __declspec(property(get=getStaticF_cachedFaceState2, put=setStaticF_cachedFaceState2)) ::GlobalNamespace::OVRPlugin_FaceState2Internal  cachedFaceState2;

/// @brief Field cachedFaceVisemesState, offset 0xffffffff, size 0x48 
 __declspec(property(get=getStaticF_cachedFaceVisemesState, put=setStaticF_cachedFaceVisemesState)) ::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal  cachedFaceVisemesState;

/// @brief Field cachedHandState, offset 0xffffffff, size 0x200 
 __declspec(property(get=getStaticF_cachedHandState, put=setStaticF_cachedHandState)) ::GlobalNamespace::OVRPlugin_HandStateInternal  cachedHandState;

/// @brief Field cachedHandState3, offset 0xffffffff, size 0x358 
 __declspec(property(get=getStaticF_cachedHandState3, put=setStaticF_cachedHandState3)) ::GlobalNamespace::OVRPlugin_HandState3Internal  cachedHandState3;

/// @brief Field cachedHandTrackingState, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_cachedHandTrackingState, put=setStaticF_cachedHandTrackingState)) ::GlobalNamespace::OVRPlugin_HandTrackingStateInternal  cachedHandTrackingState;

/// @brief Field cachedSkeleton, offset 0xffffffff, size 0x20 
 __declspec(property(get=getStaticF_cachedSkeleton, put=setStaticF_cachedSkeleton)) ::GlobalNamespace::OVRPlugin_Skeleton  cachedSkeleton;

/// @brief Field cachedSkeleton2, offset 0xffffffff, size 0xc44 
 __declspec(property(get=getStaticF_cachedSkeleton2, put=setStaticF_cachedSkeleton2)) ::GlobalNamespace::OVRPlugin_Skeleton2Internal  cachedSkeleton2;

/// @brief Field cachedSkeleton3, offset 0xffffffff, size 0xe3c 
 __declspec(property(get=getStaticF_cachedSkeleton3, put=setStaticF_cachedSkeleton3)) ::GlobalNamespace::OVRPlugin_Skeleton3Internal  cachedSkeleton3;

/// @brief Field m_suggestedCpuPerfLevelOpenXR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_suggestedCpuPerfLevelOpenXR, put=setStaticF_m_suggestedCpuPerfLevelOpenXR)) ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  m_suggestedCpuPerfLevelOpenXR;

/// @brief Field m_suggestedGpuPerfLevelOpenXR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_m_suggestedGpuPerfLevelOpenXR, put=setStaticF_m_suggestedGpuPerfLevelOpenXR)) ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  m_suggestedGpuPerfLevelOpenXR;

/// @brief Field perfStatWarningPrinted, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_perfStatWarningPrinted, put=setStaticF_perfStatWarningPrinted)) bool  perfStatWarningPrinted;

/// @brief Field resetPerfStatWarningPrinted, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_resetPerfStatWarningPrinted, put=setStaticF_resetPerfStatWarningPrinted)) bool  resetPerfStatWarningPrinted;

/// @brief Field wrapperVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_wrapperVersion, put=setStaticF_wrapperVersion)) ::System::Version*  wrapperVersion;

/// @brief Method AddCustomMetadata, addr 0xa5ed018, size 0xd8, virtual false, abstract: false, final false
static inline bool AddCustomMetadata(::StringW  name, ::StringW  param) ;

/// @brief Method AddInsightPassthroughSurfaceGeometry, addr 0xa5e9a88, size 0x11c, virtual false, abstract: false, final false
static inline bool AddInsightPassthroughSurfaceGeometry(int32_t  layerId, uint64_t  meshHandle, ::UnityEngine::Matrix4x4  T_world_model, ::by_ref<uint64_t>  geometryInstanceHandle) ;

/// @brief Method AreControllerDrivenHandPosesNatural, addr 0xa5e79d4, size 0xd4, virtual false, abstract: false, final false
static inline bool AreControllerDrivenHandPosesNatural() ;

/// @brief Method AreHandPosesGeneratedByControllerData, addr 0xa5e55c4, size 0xec, virtual false, abstract: false, final false
static inline bool AreHandPosesGeneratedByControllerData(::GlobalNamespace::OVRPlugin_Step  stepId, ::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method BeginProfilingRegion, addr 0xa5fc278, size 0x64, virtual false, abstract: false, final false
static inline bool BeginProfilingRegion(::StringW  regionName) ;

/// @brief Method CalculateLayerDesc, addr 0xa5e3ec0, size 0x184, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_LayerDesc CalculateLayerDesc(::GlobalNamespace::OVRPlugin_OverlayShape  shape, ::GlobalNamespace::OVRPlugin_LayerLayout  layout, ::GlobalNamespace::OVRPlugin_Sizei  textureSize, int32_t  mipLevels, int32_t  sampleCount, ::GlobalNamespace::OVRPlugin_EyeTextureFormat  format, int32_t  layerFlags) ;

/// @brief Method CancelFuture, addr 0xa5fc02c, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result CancelFuture(uint64_t  future) ;

/// @brief Method ChangeVirtualKeyboardTextContext, addr 0xa5f2fc4, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ChangeVirtualKeyboardTextContext(::StringW  textContext) ;

/// @brief Method CreateDynamicObjectTracker, addr 0xa5fb1e8, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result CreateDynamicObjectTracker(::by_ref<uint64_t>  tracker) ;

/// @brief Method CreateDynamicObjectTrackerAsync, addr 0xa5fb2b0, size 0xb0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>> CreateDynamicObjectTrackerAsync() ;

/// @brief Method CreateInsightTriangleMesh, addr 0xa5e9810, size 0x1b0, virtual false, abstract: false, final false
static inline bool CreateInsightTriangleMesh(int32_t  layerId, ::ArrayW<::UnityEngine::Vector3>  vertices, ::ArrayW<int32_t>  triangles, ::by_ref<uint64_t>  meshHandle) ;

/// @brief Method CreateMarkerTrackerAsync, addr 0xa5fbad8, size 0x120, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result CreateMarkerTrackerAsync(::System::ReadOnlySpan_1<::GlobalNamespace::OVRPlugin_MarkerType>  markerTypes, ::by_ref<uint64_t>  future) ;

/// @brief Method CreateMarkerTrackerComplete, addr 0xa5fbbf8, size 0xdc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result CreateMarkerTrackerComplete(uint64_t  future, ::by_ref<::GlobalNamespace::OVRPlugin_MarkerTrackerCreateCompletion>  completion) ;

/// @brief Method CreatePassthroughColorLut, addr 0xa5ea098, size 0x120, virtual false, abstract: false, final false
static inline bool CreatePassthroughColorLut(::GlobalNamespace::OVRPlugin_PassthroughColorLutChannels  channels, uint32_t  resolution, ::GlobalNamespace::OVRPlugin_PassthroughColorLutData  data, ::by_ref<uint64_t>  colorLut) ;

/// @brief Method CreateSpaceUser, addr 0xa5f8354, size 0xdc, virtual false, abstract: false, final false
static inline bool CreateSpaceUser(uint64_t  spaceUserId, ::by_ref<uint64_t>  spaceUserHandle) ;

/// @brief Method CreateSpatialAnchor, addr 0xa5f6e04, size 0xdc, virtual false, abstract: false, final false
static inline bool CreateSpatialAnchor(::GlobalNamespace::OVRPlugin_SpatialAnchorCreateInfo  createInfo, ::by_ref<uint64_t>  requestId) ;

/// @brief Method CreateVirtualKeyboard, addr 0xa5f2d54, size 0xbc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result CreateVirtualKeyboard(::GlobalNamespace::OVRPlugin_VirtualKeyboardCreateInfo  createInfo) ;

/// @brief Method CreateVirtualKeyboardSpace, addr 0xa5f3088, size 0xfc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result CreateVirtualKeyboardSpace(::GlobalNamespace::OVRPlugin_VirtualKeyboardSpaceCreateInfo  createInfo, ::by_ref<uint64_t>  keyboardSpace) ;

/// @brief Method DestroyDynamicObjectTracker, addr 0xa5fb360, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result DestroyDynamicObjectTracker(uint64_t  tracker) ;

/// @brief Method DestroyInsightPassthroughGeometryInstance, addr 0xa5e9ba4, size 0xc8, virtual false, abstract: false, final false
static inline bool DestroyInsightPassthroughGeometryInstance(uint64_t  geometryInstanceHandle) ;

/// @brief Method DestroyInsightTriangleMesh, addr 0xa5e99c0, size 0xc8, virtual false, abstract: false, final false
static inline bool DestroyInsightTriangleMesh(uint64_t  meshHandle) ;

/// @brief Method DestroyMarkerTracker, addr 0xa5fbcd4, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result DestroyMarkerTracker(uint64_t  markerTracker) ;

/// @brief Method DestroyPassthroughColorLut, addr 0xa5ea1b8, size 0xe8, virtual false, abstract: false, final false
static inline bool DestroyPassthroughColorLut(uint64_t  colorLut) ;

/// @brief Method DestroySpace, addr 0xa5f8ac0, size 0xc8, virtual false, abstract: false, final false
static inline bool DestroySpace(uint64_t  space) ;

/// @brief Method DestroySpaceUser, addr 0xa5f8430, size 0xc8, virtual false, abstract: false, final false
static inline bool DestroySpaceUser(uint64_t  spaceUserHandle) ;

/// @brief Method DestroyVirtualKeyboard, addr 0xa5f2e10, size 0xbc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result DestroyVirtualKeyboard() ;

/// @brief Method DiscoverSpaces, addr 0xa5fac9c, size 0xdc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result DiscoverSpaces(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_SpaceDiscoveryInfo>  info, ::by_ref<uint64_t>  requestId) ;

/// @brief Method EndProfilingRegion, addr 0xa5fc2dc, size 0x5c, virtual false, abstract: false, final false
static inline bool EndProfilingRegion() ;

/// @brief Method EnqueueDestroyLayer, addr 0xa5e420c, size 0xe0, virtual false, abstract: false, final false
static inline bool EnqueueDestroyLayer(::System::IntPtr  layerID) ;

/// @brief Method EnqueueSetupLayer, addr 0xa5e4044, size 0x1c8, virtual false, abstract: false, final false
static inline bool EnqueueSetupLayer(::GlobalNamespace::OVRPlugin_LayerDesc  desc, int32_t  compositionDepth, ::System::IntPtr  layerID) ;

/// @brief Method EnqueueSubmitLayer, addr 0xa5e3964, size 0x55c, virtual false, abstract: false, final false
static inline bool EnqueueSubmitLayer(bool  onTop, bool  headLocked, bool  noDepthBufferTesting, ::System::IntPtr  leftTexture, ::System::IntPtr  rightTexture, int32_t  layerId, int32_t  frameIndex, ::GlobalNamespace::OVRPlugin_Posef  pose, ::GlobalNamespace::OVRPlugin_Vector3f  scale, int32_t  layerIndex, ::GlobalNamespace::OVRPlugin_OverlayShape  shape, bool  overrideTextureRectMatrix, ::GlobalNamespace::OVRPlugin_TextureRectMatrixf  textureRectMatrix, bool  overridePerLayerColorScaleAndOffset, ::UnityEngine::Vector4  colorScale, ::UnityEngine::Vector4  colorOffset, bool  expensiveSuperSample, bool  bicubic, bool  efficientSuperSample, bool  efficientSharpen, bool  expensiveSharpen, bool  hidden, bool  secureContent, bool  automaticFiltering, bool  premultipledAlpha) ;

/// @brief Method EnumerateSpaceSupportedComponents, addr 0xa5f7284, size 0xec, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result EnumerateSpaceSupportedComponents(uint64_t  space, uint32_t  capacityInput, ::by_ref<uint32_t>  countOutput, ::GlobalNamespace::OVRPlugin_SpaceComponentType*  buffer) ;

/// [Obsolete("Use the overload of EnumerateSpaceSupportedComponents that accepts a pointer rather than a managed array.")]
/// @brief Method EnumerateSpaceSupportedComponents, addr 0xa5f7194, size 0xf0, virtual false, abstract: false, final false
static inline bool EnumerateSpaceSupportedComponents(uint64_t  space, ::by_ref<uint32_t>  numSupportedComponents, ::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>  supportedComponents) ;

/// @brief Method EraseSpace, addr 0xa5f7464, size 0x78, virtual false, abstract: false, final false
static inline bool EraseSpace(uint64_t  space, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location, ::by_ref<uint64_t>  requestId) ;

/// @brief Method EraseSpaceWithResult, addr 0xa5f74dc, size 0xdc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result EraseSpaceWithResult(uint64_t  space, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location, ::by_ref<uint64_t>  requestId) ;

/// @brief Method EraseSpaces, addr 0xa5faf5c, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result EraseSpaces(uint32_t  spaceCount, uint64_t*  spaces, uint32_t  uuidCount, ::System::Guid*  uuids, ::by_ref<uint64_t>  requestId) ;

/// @brief Method GetActionStateBoolean, addr 0xa5e7c18, size 0x178, virtual false, abstract: false, final false
static inline bool GetActionStateBoolean(::StringW  actionName, ::by_ref<bool>  result) ;

/// @brief Method GetActionStateFloat, addr 0xa5e7d90, size 0x164, virtual false, abstract: false, final false
static inline bool GetActionStateFloat(::StringW  actionName, ::by_ref<float_t>  result) ;

/// @brief Method GetActionStatePose, addr 0xa5e8060, size 0x17c, virtual false, abstract: false, final false
static inline bool GetActionStatePose(::StringW  actionName, ::GlobalNamespace::OVRPlugin_Hand  hand, ::by_ref<::GlobalNamespace::OVRPlugin_Posef>  result) ;

/// @brief Method GetActionStatePose, addr 0xa5e7ef4, size 0x16c, virtual false, abstract: false, final false
static inline bool GetActionStatePose(::StringW  actionName, ::by_ref<::GlobalNamespace::OVRPlugin_Posef>  result) ;

/// @brief Method GetActiveController, addr 0xa5eaa20, size 0xbc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Controller GetActiveController() ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method GetAdaptiveGPUPerformanceScale, addr 0xa5ed1b8, size 0xd4, virtual false, abstract: false, final false
static inline float_t GetAdaptiveGPUPerformanceScale() ;

/// @brief Method GetAppCpuStartToGpuEndTime, addr 0xa5e6cec, size 0xbc, virtual false, abstract: false, final false
static inline float_t GetAppCpuStartToGpuEndTime() ;

/// @brief Method GetAppFramerate, addr 0xa5e7514, size 0xbc, virtual false, abstract: false, final false
static inline float_t GetAppFramerate() ;

/// @brief Method GetAppPerfStats, addr 0xa5e7230, size 0x17c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_AppPerfStats GetAppPerfStats() ;

/// @brief Method GetAppSpace, addr 0xa5f6c5c, size 0xd0, virtual false, abstract: false, final false
static inline uint64_t GetAppSpace() ;

/// @brief Method GetBodyState, addr 0xa5efad4, size 0x1654, virtual false, abstract: false, final false
static inline bool GetBodyState(::GlobalNamespace::OVRPlugin_Step  stepId, ::by_ref<::GlobalNamespace::OVRPlugin_BodyState>  bodyState) ;

/// @brief Method GetBodyState4, addr 0xa5f1128, size 0x1a58, virtual false, abstract: false, final false
static inline bool GetBodyState4(::GlobalNamespace::OVRPlugin_Step  stepId, ::GlobalNamespace::OVRPlugin_BodyJointSet  jointSet, ::by_ref<::GlobalNamespace::OVRPlugin_BodyState>  bodyState) ;

/// @brief Method GetBoundaryConfigured, addr 0xa5e6da8, size 0xc0, virtual false, abstract: false, final false
static inline bool GetBoundaryConfigured() ;

/// @brief Method GetBoundaryDimensions, addr 0xa5ea700, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector3f GetBoundaryDimensions(::GlobalNamespace::OVRPlugin_BoundaryType  boundaryType) ;

/// @brief Method GetBoundaryGeometry, addr 0xa5e7060, size 0xec, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_BoundaryGeometry GetBoundaryGeometry(::GlobalNamespace::OVRPlugin_BoundaryType  boundaryType) ;

/// @brief Method GetBoundaryGeometry2, addr 0xa5e714c, size 0xe4, virtual false, abstract: false, final false
static inline bool GetBoundaryGeometry2(::GlobalNamespace::OVRPlugin_BoundaryType  boundaryType, ::System::IntPtr  points, ::by_ref<int32_t>  pointsCount) ;

/// @brief Method GetBoundaryVisibility, addr 0xa5fb120, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetBoundaryVisibility(::by_ref<::GlobalNamespace::OVRPlugin_BoundaryVisibility>  boundaryVisibility) ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method GetBoundaryVisible, addr 0xa5ea7c4, size 0xc0, virtual false, abstract: false, final false
static inline bool GetBoundaryVisible() ;

/// @brief Method GetConnectedControllers, addr 0xa5eaadc, size 0xbc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Controller GetConnectedControllers() ;

/// @brief Method GetControllerHapticsDesc, addr 0xa5e69a0, size 0xec, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_HapticsDesc GetControllerHapticsDesc(uint32_t  controllerMask) ;

/// @brief Method GetControllerHapticsState, addr 0xa5e6a8c, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_HapticsState GetControllerHapticsState(uint32_t  controllerMask) ;

/// @brief Method GetControllerIsInHand, addr 0xa5e5778, size 0xf0, virtual false, abstract: false, final false
static inline bool GetControllerIsInHand(::GlobalNamespace::OVRPlugin_Step  stepId, ::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method GetControllerSampleRateHz, addr 0xa5e68c4, size 0xdc, virtual false, abstract: false, final false
static inline bool GetControllerSampleRateHz(::GlobalNamespace::OVRPlugin_Controller  controllerMask, ::by_ref<float_t>  sampleRateHz) ;

/// @brief Method GetControllerState, addr 0xa5e5c0c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_ControllerState GetControllerState(uint32_t  controllerMask) ;

/// @brief Method GetControllerState2, addr 0xa5e5c90, size 0x144, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_ControllerState2 GetControllerState2(uint32_t  controllerMask) ;

/// @brief Method GetControllerState4, addr 0xa5e5dd4, size 0x158, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_ControllerState4 GetControllerState4(uint32_t  controllerMask) ;

/// @brief Method GetControllerState5, addr 0xa5e5f2c, size 0x164, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_ControllerState5 GetControllerState5(uint32_t  controllerMask) ;

/// @brief Method GetControllerState6, addr 0xa5e6090, size 0x168, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_ControllerState6 GetControllerState6(uint32_t  controllerMask) ;

/// @brief Method GetCurrentDetachedInteractionProfile, addr 0xa5e62cc, size 0xd4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_InteractionProfile GetCurrentDetachedInteractionProfile(::GlobalNamespace::OVRPlugin_Hand  hand) ;

/// @brief Method GetCurrentInteractionProfile, addr 0xa5e61f8, size 0xd4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_InteractionProfile GetCurrentInteractionProfile(::GlobalNamespace::OVRPlugin_Hand  hand) ;

/// @brief Method GetCurrentInteractionProfileName, addr 0xa5e63a0, size 0x1e8, virtual false, abstract: false, final false
static inline ::StringW GetCurrentInteractionProfileName(::GlobalNamespace::OVRPlugin_Hand  hand) ;

/// @brief Method GetCurrentTrackingTransformPose, addr 0xa5e5868, size 0x120, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef GetCurrentTrackingTransformPose() ;

/// @brief Method GetDesiredEyeTextureFormat, addr 0xa5e84f0, size 0xc0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_EyeTextureFormat GetDesiredEyeTextureFormat() ;

/// @brief Method GetDominantHand, addr 0xa5ec4d4, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Handedness GetDominantHand() ;

/// @brief Method GetDynamicObjectKeyboardSupported, addr 0xa5fb7b0, size 0xe0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetDynamicObjectKeyboardSupported(::by_ref<bool>  value) ;

/// @brief Method GetDynamicObjectTrackerSupported, addr 0xa5fb6d0, size 0xe0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetDynamicObjectTrackerSupported(::by_ref<bool>  value) ;

/// @brief Method GetExternalCameraCount, addr 0xa5e88f4, size 0xe4, virtual false, abstract: false, final false
static inline int32_t GetExternalCameraCount() ;

/// @brief Method GetEyeFrustum, addr 0xa5e355c, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Frustumf GetEyeFrustum(::GlobalNamespace::OVRPlugin_Eye  eyeId) ;

/// @brief Method GetEyeGazesState, addr 0xa5f5270, size 0x240, virtual false, abstract: false, final false
static inline bool GetEyeGazesState(::GlobalNamespace::OVRPlugin_Step  stepId, int32_t  frameIndex, ::by_ref<::GlobalNamespace::OVRPlugin_EyeGazesState>  eyeGazesState) ;

/// @brief Method GetEyeLayerRecommendedResolution, addr 0xa5fa20c, size 0xcc, virtual false, abstract: false, final false
static inline bool GetEyeLayerRecommendedResolution(::by_ref<::GlobalNamespace::OVRPlugin_Sizei>  recommendedSize) ;

/// @brief Method GetEyeRecommendedResolutionScale, addr 0xa5e6c30, size 0xbc, virtual false, abstract: false, final false
static inline float_t GetEyeRecommendedResolutionScale() ;

/// @brief Method GetEyeTextureSize, addr 0xa5e35b4, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Sizei GetEyeTextureSize(::GlobalNamespace::OVRPlugin_Eye  eyeId) ;

/// @brief Method GetFaceState, addr 0xa5f4618, size 0x10c, virtual false, abstract: false, final false
static inline bool GetFaceState(::GlobalNamespace::OVRPlugin_Step  stepId, int32_t  frameIndex, ::by_ref<::GlobalNamespace::OVRPlugin_FaceState>  faceState) ;

/// @brief Method GetFaceState2, addr 0xa5f4724, size 0x66c, virtual false, abstract: false, final false
static inline bool GetFaceState2(::GlobalNamespace::OVRPlugin_Step  stepId, int32_t  frameIndex, ::by_ref<::GlobalNamespace::OVRPlugin_FaceState>  faceState) ;

/// @brief Method GetFaceStateInternal, addr 0xa5f4074, size 0x5a4, virtual false, abstract: false, final false
static inline bool GetFaceStateInternal(::GlobalNamespace::OVRPlugin_Step  stepId, int32_t  frameIndex, ::by_ref<::GlobalNamespace::OVRPlugin_FaceState>  faceState) ;

/// @brief Method GetFaceVisemesState, addr 0xa5f4d90, size 0x27c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetFaceVisemesState(::GlobalNamespace::OVRPlugin_Step  stepId, ::by_ref<::GlobalNamespace::OVRPlugin_FaceVisemesState>  faceVisemesState) ;

/// @brief Method GetHandNodePoseStateLatency, addr 0xa5e76a0, size 0xd0, virtual false, abstract: false, final false
static inline double_t GetHandNodePoseStateLatency() ;

/// @brief Method GetHandState, addr 0xa5ed414, size 0x12d0, virtual false, abstract: false, final false
static inline bool GetHandState(::GlobalNamespace::OVRPlugin_Step  stepId, ::GlobalNamespace::OVRPlugin_Hand  hand, ::by_ref<::GlobalNamespace::OVRPlugin_HandState>  handState) ;

/// @brief Method GetHandTrackingEnabled, addr 0xa5ed28c, size 0xd4, virtual false, abstract: false, final false
static inline bool GetHandTrackingEnabled() ;

/// @brief Method GetHandTrackingState, addr 0xa5ee6e4, size 0x1e8, virtual false, abstract: false, final false
static inline bool GetHandTrackingState(::GlobalNamespace::OVRPlugin_Step  stepId, ::GlobalNamespace::OVRPlugin_Hand  hand, ::by_ref<::GlobalNamespace::OVRPlugin_HandTrackingState>  handTrackingState) ;

/// @brief Method GetHeadPoseModifier, addr 0xa5ec9f0, size 0x14c, virtual false, abstract: false, final false
static inline bool GetHeadPoseModifier(::by_ref<::GlobalNamespace::OVRPlugin_Quatf>  relativeRotation, ::by_ref<::GlobalNamespace::OVRPlugin_Vector3f>  relativeTranslation) ;

/// @brief Method GetHmdColorDesc, addr 0xa5f644c, size 0x138, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_ColorSpace GetHmdColorDesc() ;

/// @brief Method GetInsightPassthroughInitializationState, addr 0xa5e9754, size 0xbc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetInsightPassthroughInitializationState() ;

/// @brief Method GetLayerAndroidSurfaceObject, addr 0xa5e44f4, size 0xf4, virtual false, abstract: false, final false
static inline ::System::IntPtr GetLayerAndroidSurfaceObject(int32_t  layerId) ;

/// @brief Method GetLayerRecommendedResolution, addr 0xa5fa130, size 0xdc, virtual false, abstract: false, final false
static inline bool GetLayerRecommendedResolution(int32_t  layerId, ::by_ref<::GlobalNamespace::OVRPlugin_Sizei>  recommendedSize) ;

/// @brief Method GetLayerTexture, addr 0xa5e42ec, size 0x10c, virtual false, abstract: false, final false
static inline ::System::IntPtr GetLayerTexture(int32_t  layerId, int32_t  stage, ::GlobalNamespace::OVRPlugin_Eye  eyeId) ;

/// @brief Method GetLayerTextureStageCount, addr 0xa5e43f8, size 0xfc, virtual false, abstract: false, final false
static inline int32_t GetLayerTextureStageCount(int32_t  layerId) ;

/// @brief Method GetLocalTrackingSpaceRecenterCount, addr 0xa5f6194, size 0xd0, virtual false, abstract: false, final false
static inline int32_t GetLocalTrackingSpaceRecenterCount() ;

/// @brief Method GetMarkerTrackingSupported, addr 0xa5fbe70, size 0xe0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetMarkerTrackingSupported(::by_ref<bool>  markerTrackingSupported) ;

/// @brief Method GetMesh, addr 0xa5f2b80, size 0x1d4, virtual false, abstract: false, final false
static inline bool GetMesh(::GlobalNamespace::OVRPlugin_MeshType  meshType, ::by_ref<::GlobalNamespace::OVRPlugin_Mesh*>  mesh) ;

/// @brief Method GetMixedRealityCameraInfo, addr 0xa5e8aac, size 0x134, virtual false, abstract: false, final false
static inline bool GetMixedRealityCameraInfo(int32_t  cameraId, ::by_ref<::GlobalNamespace::OVRPlugin_CameraExtrinsics>  cameraExtrinsics, ::by_ref<::GlobalNamespace::OVRPlugin_CameraIntrinsics>  cameraIntrinsics) ;

/// @brief Method GetNativeOpenXRInstance, addr 0xa5f6774, size 0xdc, virtual false, abstract: false, final false
static inline uint64_t GetNativeOpenXRInstance() ;

/// @brief Method GetNativeOpenXRSession, addr 0xa5f6850, size 0xdc, virtual false, abstract: false, final false
static inline uint64_t GetNativeOpenXRSession() ;

/// [Obsolete("Deprecated. Acceleration is not supported in OpenXR", false)]
/// @brief Method GetNodeAcceleration, addr 0xa5e4a24, size 0x210, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector3f GetNodeAcceleration(::GlobalNamespace::OVRPlugin_Node  nodeId, ::GlobalNamespace::OVRPlugin_Step  stepId) ;

/// [Obsolete("Deprecated. Acceleration is not supported in OpenXR", false)]
/// @brief Method GetNodeAngularAcceleration, addr 0xa5e4c34, size 0x150, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector3f GetNodeAngularAcceleration(::GlobalNamespace::OVRPlugin_Node  nodeId, ::GlobalNamespace::OVRPlugin_Step  stepId) ;

/// @brief Method GetNodeAngularVelocity, addr 0xa5e48d4, size 0x150, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector3f GetNodeAngularVelocity(::GlobalNamespace::OVRPlugin_Node  nodeId, ::GlobalNamespace::OVRPlugin_Step  stepId) ;

/// @brief Method GetNodeFrustum2, addr 0xa5ebfb4, size 0xe0, virtual false, abstract: false, final false
static inline bool GetNodeFrustum2(::GlobalNamespace::OVRPlugin_Node  nodeId, ::by_ref<::GlobalNamespace::OVRPlugin_Frustumf2>  frustum) ;

/// @brief Method GetNodeOrientationTracked, addr 0xa5e4de8, size 0x64, virtual false, abstract: false, final false
static inline bool GetNodeOrientationTracked(::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method GetNodeOrientationValid, addr 0xa5e4e4c, size 0x108, virtual false, abstract: false, final false
static inline bool GetNodeOrientationValid(::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method GetNodePose, addr 0xa5e3690, size 0x218, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef GetNodePose(::GlobalNamespace::OVRPlugin_Node  nodeId, ::GlobalNamespace::OVRPlugin_Step  stepId) ;

/// @brief Method GetNodePoseStateAtTime, addr 0xa5e5330, size 0x138, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_PoseStatef GetNodePoseStateAtTime(double_t  time, ::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method GetNodePoseStateImmediate, addr 0xa5e5468, size 0x15c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_PoseStatef GetNodePoseStateImmediate(::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method GetNodePoseStateRaw, addr 0xa5e50c0, size 0x270, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_PoseStatef GetNodePoseStateRaw(::GlobalNamespace::OVRPlugin_Node  nodeId, ::GlobalNamespace::OVRPlugin_Step  stepId) ;

/// @brief Method GetNodePositionTracked, addr 0xa5e4f54, size 0x64, virtual false, abstract: false, final false
static inline bool GetNodePositionTracked(::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method GetNodePositionValid, addr 0xa5e4fb8, size 0x108, virtual false, abstract: false, final false
static inline bool GetNodePositionValid(::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method GetNodePresent, addr 0xa5e4d84, size 0x64, virtual false, abstract: false, final false
static inline bool GetNodePresent(::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method GetNodeVelocity, addr 0xa5e46c4, size 0x210, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector3f GetNodeVelocity(::GlobalNamespace::OVRPlugin_Node  nodeId, ::GlobalNamespace::OVRPlugin_Step  stepId) ;

/// @brief Method GetOpenXRInstanceProcAddrFunc, addr 0xa5f6a00, size 0xd0, virtual false, abstract: false, final false
static inline ::System::IntPtr GetOpenXRInstanceProcAddrFunc() ;

/// @brief Method GetPassthroughCapabilities, addr 0xa5ea634, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetPassthroughCapabilities(::by_ref<::GlobalNamespace::OVRPlugin_PassthroughCapabilities>  outCapabilities) ;

/// @brief Method GetPassthroughCapabilityFlags, addr 0xa5ea480, size 0x1b4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags GetPassthroughCapabilityFlags() ;

/// @brief Method GetPassthroughPreferences, addr 0xa5fb948, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetPassthroughPreferences(::by_ref<::GlobalNamespace::OVRPlugin_PassthroughPreferences>  preferences) ;

/// @brief Method GetPerfMetricsFloat, addr 0xa5ecc1c, size 0x104, virtual false, abstract: false, final false
static inline ::System::Nullable_1<float_t> GetPerfMetricsFloat(::GlobalNamespace::OVRPlugin_PerfMetrics  perfMetrics) ;

/// @brief Method GetPerfMetricsInt, addr 0xa5ecd20, size 0x104, virtual false, abstract: false, final false
static inline ::System::Nullable_1<int32_t> GetPerfMetricsInt(::GlobalNamespace::OVRPlugin_PerfMetrics  perfMetrics) ;

/// @brief Method GetPredictedDisplayTime, addr 0xa5f692c, size 0xd4, virtual false, abstract: false, final false
static inline double_t GetPredictedDisplayTime() ;

/// @brief Method GetRenderModelPaths, addr 0xa5fa2d8, size 0x228, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetRenderModelPaths() ;

/// @brief Method GetRenderModelProperties, addr 0xa5fa500, size 0x1b8, virtual false, abstract: false, final false
static inline bool GetRenderModelProperties(::StringW  modelPath, ::by_ref<::GlobalNamespace::OVRPlugin_RenderModelProperties>  modelProperties) ;

/// @brief Method GetSkeleton, addr 0xa5ee920, size 0xe0, virtual false, abstract: false, final false
static inline bool GetSkeleton(::GlobalNamespace::OVRPlugin_SkeletonType  skeletonType, ::by_ref<::GlobalNamespace::OVRPlugin_Skeleton>  skeleton) ;

/// @brief Method GetSkeleton2, addr 0xa5eea00, size 0xf34, virtual false, abstract: false, final false
static inline bool GetSkeleton2(::GlobalNamespace::OVRPlugin_SkeletonType  skeletonType, ::by_ref<::GlobalNamespace::OVRPlugin_Skeleton2>  skeleton) ;

/// @brief Method GetSpaceBoundary2D, addr 0xa5f97cc, size 0x1a0, virtual false, abstract: false, final false
static inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> GetSpaceBoundary2D(uint64_t  space, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method GetSpaceBoundary2D, addr 0xa5f9620, size 0x84, virtual false, abstract: false, final false
static inline bool GetSpaceBoundary2D(uint64_t  space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  boundary) ;

/// @brief Method GetSpaceBoundary2D, addr 0xa5f96a4, size 0x128, virtual false, abstract: false, final false
static inline bool GetSpaceBoundary2D(uint64_t  space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>  boundary, ::by_ref<int32_t>  count) ;

/// [Obsolete("This method allocates managed arrays. Use GetSpaceBoundary2D(UInt64, Allocator) to avoid managed allocations.")]
/// @brief Method GetSpaceBoundary2D, addr 0xa5f996c, size 0x330, virtual false, abstract: false, final false
static inline bool GetSpaceBoundary2D(uint64_t  space, ::by_ref<::ArrayW<::UnityEngine::Vector2>>  boundary) ;

/// @brief Method GetSpaceBoundary2DCount, addr 0xa5f9534, size 0xec, virtual false, abstract: false, final false
static inline bool GetSpaceBoundary2DCount(uint64_t  space, ::by_ref<int32_t>  count) ;

/// @brief Method GetSpaceBoundingBox2D, addr 0xa5f8e20, size 0xdc, virtual false, abstract: false, final false
static inline bool GetSpaceBoundingBox2D(uint64_t  space, ::by_ref<::GlobalNamespace::OVRPlugin_Rectf>  rect) ;

/// @brief Method GetSpaceBoundingBox3D, addr 0xa5f8efc, size 0xe0, virtual false, abstract: false, final false
static inline bool GetSpaceBoundingBox3D(uint64_t  space, ::by_ref<::GlobalNamespace::OVRPlugin_Boundsf>  bounds) ;

/// @brief Method GetSpaceComponentStatus, addr 0xa5f6ffc, size 0x88, virtual false, abstract: false, final false
static inline bool GetSpaceComponentStatus(uint64_t  space, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType, ::by_ref<bool>  enabled, ::by_ref<bool>  changePending) ;

/// @brief Method GetSpaceComponentStatusInternal, addr 0xa5f7084, size 0x110, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetSpaceComponentStatusInternal(uint64_t  space, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType, ::by_ref<bool>  enabled, ::by_ref<bool>  changePending) ;

/// @brief Method GetSpaceContainer, addr 0xa5f8b88, size 0x298, virtual false, abstract: false, final false
static inline bool GetSpaceContainer(uint64_t  space, ::by_ref<::ArrayW<::System::Guid>>  containerUuids) ;

/// @brief Method GetSpaceDynamicObjectData, addr 0xa5fb5fc, size 0xd4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetSpaceDynamicObjectData(uint64_t  space, ::by_ref<::GlobalNamespace::OVRPlugin_DynamicObjectData>  data) ;

/// @brief Method GetSpaceMarkerPayload, addr 0xa5fbd98, size 0xd8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetSpaceMarkerPayload(uint64_t  space, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceMarkerPayload>  payload) ;

/// @brief Method GetSpaceRoomLayout, addr 0xa5f92e8, size 0x24c, virtual false, abstract: false, final false
static inline bool GetSpaceRoomLayout(uint64_t  space, ::by_ref<::GlobalNamespace::OVRPlugin_RoomLayout>  roomLayout) ;

/// @brief Method GetSpaceSemanticLabels, addr 0xa5f8fdc, size 0xb8, virtual false, abstract: false, final false
static inline bool GetSpaceSemanticLabels(uint64_t  space, ::by_ref<::StringW>  labels) ;

/// @brief Method GetSpaceSemanticLabelsNonAlloc, addr 0xa5f9094, size 0x254, virtual false, abstract: false, final false
static inline bool GetSpaceSemanticLabelsNonAlloc(uint64_t  space, ::by_ref<::ArrayW<char16_t>>  buffer, ::by_ref<int32_t>  length) ;

/// @brief Method GetSpaceTriangleMesh, addr 0xa5f9f38, size 0x1f8, virtual false, abstract: false, final false
static inline bool GetSpaceTriangleMesh(uint64_t  space, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  vertices, ::Unity::Collections::NativeArray_1<int32_t>  triangles) ;

/// @brief Method GetSpaceTriangleMeshCounts, addr 0xa5f9d80, size 0x1b8, virtual false, abstract: false, final false
static inline bool GetSpaceTriangleMeshCounts(uint64_t  space, ::by_ref<int32_t>  vertexCount, ::by_ref<int32_t>  triangleCount) ;

/// @brief Method GetSpaceUserId, addr 0xa5f8278, size 0xdc, virtual false, abstract: false, final false
static inline bool GetSpaceUserId(uint64_t  spaceUserHandle, ::by_ref<uint64_t>  spaceUserId) ;

/// @brief Method GetSpaceUuid, addr 0xa5f75b8, size 0xdc, virtual false, abstract: false, final false
static inline bool GetSpaceUuid(uint64_t  space, ::by_ref<::System::Guid>  uuid) ;

/// @brief Method GetStationaryReferenceSpaceId, addr 0xa5fc3f4, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetStationaryReferenceSpaceId(::by_ref<::System::Guid>  generationId) ;

/// @brief Method GetSystemHeadsetType, addr 0xa5ea964, size 0xbc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SystemHeadset GetSystemHeadsetType() ;

/// @brief Method GetSystemHmd3DofModeEnabled, addr 0xa5f6264, size 0xd4, virtual false, abstract: false, final false
static inline bool GetSystemHmd3DofModeEnabled() ;

/// @brief Method GetTimeInSeconds, addr 0xa5ece24, size 0xcc, virtual false, abstract: false, final false
static inline double_t GetTimeInSeconds() ;

/// @brief Method GetTrackerFrustum, addr 0xa5e38a8, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Frustumf GetTrackerFrustum(::GlobalNamespace::OVRPlugin_Tracker  trackerId) ;

/// @brief Method GetTrackerPose, addr 0xa5e360c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef GetTrackerPose(::GlobalNamespace::OVRPlugin_Tracker  trackerId) ;

/// @brief Method GetTrackingCalibratedOrigin, addr 0xa5eac4c, size 0x74, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef GetTrackingCalibratedOrigin() ;

/// @brief Method GetTrackingOriginType, addr 0xa5eab98, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_TrackingOrigin GetTrackingOriginType() ;

/// @brief Method GetTrackingTransformRawPose, addr 0xa5e5988, size 0x120, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef GetTrackingTransformRawPose() ;

/// @brief Method GetTrackingTransformRelativePose, addr 0xa5e5aa8, size 0x164, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef GetTrackingTransformRelativePose(::GlobalNamespace::OVRPlugin_TrackingOrigin  trackingOrigin) ;

/// @brief Method GetUseOverriddenExternalCameraFov, addr 0xa5e8ccc, size 0xe4, virtual false, abstract: false, final false
static inline bool GetUseOverriddenExternalCameraFov(int32_t  cameraId) ;

/// @brief Method GetUseOverriddenExternalCameraStaticPose, addr 0xa5e8e90, size 0xe4, virtual false, abstract: false, final false
static inline bool GetUseOverriddenExternalCameraStaticPose(int32_t  cameraId) ;

/// @brief Method GetVirtualKeyboardDirtyTextures, addr 0xa5f3a50, size 0x2e8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetVirtualKeyboardDirtyTextures(::by_ref<::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIds>  textureIds) ;

/// [Obsolete("Use GetVirtualKeyboardModelAnimationStates with delegates")]
/// @brief Method GetVirtualKeyboardModelAnimationStates, addr 0xa5f3700, size 0x350, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetVirtualKeyboardModelAnimationStates(::by_ref<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStates>  animationStates) ;

/// @brief Method GetVirtualKeyboardModelAnimationStates, addr 0xa5f3334, size 0x3cc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetVirtualKeyboardModelAnimationStates(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider*  bufferProvider, ::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStateHandler*  stateHandler) ;

/// @brief Method GetVirtualKeyboardScale, addr 0xa5f326c, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetVirtualKeyboardScale(::by_ref<float_t>  scale) ;

/// @brief Method GetVirtualKeyboardTextureData, addr 0xa5f3d38, size 0xd8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result GetVirtualKeyboardTextureData(uint64_t  textureId, ::by_ref<::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureData>  textureData) ;

/// @brief Method GuidToUuidString, addr 0xa5e13ac, size 0x138, virtual false, abstract: false, final false
static inline ::StringW GuidToUuidString(::System::Guid  guid) ;

/// @brief Method InitializeInsightPassthrough, addr 0xa5e9514, size 0xc0, virtual false, abstract: false, final false
static inline bool InitializeInsightPassthrough() ;

/// @brief Method InitializeMixedReality, addr 0xa5e8678, size 0xd4, virtual false, abstract: false, final false
static inline bool InitializeMixedReality() ;

/// @brief Method IsControllerDrivenHandPosesEnabled, addr 0xa5e7900, size 0xd4, virtual false, abstract: false, final false
static inline bool IsControllerDrivenHandPosesEnabled() ;

/// @brief Method IsInsightPassthroughInitialized, addr 0xa5e9694, size 0xc0, virtual false, abstract: false, final false
static inline bool IsInsightPassthroughInitialized() ;

/// @brief Method IsInsightPassthroughSupported, addr 0xa5e93a8, size 0x16c, virtual false, abstract: false, final false
static inline bool IsInsightPassthroughSupported() ;

/// @brief Method IsMixedRealityInitialized, addr 0xa5e8820, size 0xd4, virtual false, abstract: false, final false
static inline bool IsMixedRealityInitialized() ;

/// @brief Method IsMultimodalHandsControllersSupported, addr 0xa5e92d4, size 0xd4, virtual false, abstract: false, final false
static inline bool IsMultimodalHandsControllersSupported() ;

/// [Extension]
/// @brief Method IsOrientationTracked, addr 0xa5e13a4, size 0x8, virtual false, abstract: false, final false
static inline bool IsOrientationTracked(::GlobalNamespace::OVRPlugin_SpaceLocationFlags  value) ;

/// [Extension]
/// @brief Method IsOrientationValid, addr 0xa5e1394, size 0x8, virtual false, abstract: false, final false
static inline bool IsOrientationValid(::GlobalNamespace::OVRPlugin_SpaceLocationFlags  value) ;

/// @brief Method IsPassthroughShape, addr 0xa5e1374, size 0x18, virtual false, abstract: false, final false
static inline bool IsPassthroughShape(::GlobalNamespace::OVRPlugin_OverlayShape  shape) ;

/// @brief Method IsPerfMetricsSupported, addr 0xa5ecb3c, size 0xe0, virtual false, abstract: false, final false
static inline bool IsPerfMetricsSupported(::GlobalNamespace::OVRPlugin_PerfMetrics  perfMetrics) ;

/// [Extension]
/// @brief Method IsPositionTracked, addr 0xa5e139c, size 0x8, virtual false, abstract: false, final false
static inline bool IsPositionTracked(::GlobalNamespace::OVRPlugin_SpaceLocationFlags  value) ;

/// [Extension]
/// @brief Method IsPositionValid, addr 0xa5e138c, size 0x8, virtual false, abstract: false, final false
static inline bool IsPositionValid(::GlobalNamespace::OVRPlugin_SpaceLocationFlags  value) ;

/// [Extension]
/// @brief Method IsSuccess, addr 0xa5e1260, size 0xc, virtual false, abstract: false, final false
static inline bool IsSuccess(::GlobalNamespace::OVRPlugin_Result  result) ;

/// @brief Method IsValidBone, addr 0xa5ee8cc, size 0x54, virtual false, abstract: false, final false
static inline bool IsValidBone(::GlobalNamespace::OVRPlugin_BoneId  bone, ::GlobalNamespace::OVRPlugin_SkeletonType  skeletonType) ;

/// @brief Method IsWideMotionModeHandPosesEnabled, addr 0xa5e841c, size 0xd4, virtual false, abstract: false, final false
static inline bool IsWideMotionModeHandPosesEnabled() ;

/// @brief Method LoadRenderModel, addr 0xa5fa6b8, size 0x1dc, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t> LoadRenderModel(uint64_t  modelKey) ;

/// [Obsolete("LocateSpace unconditionally returns a pose, even if the underlying OpenXR function fails. Instead, use TryLocateSpace, which indicates failure.")]
/// @brief Method LocateSpace, addr 0xa5f8890, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef LocateSpace(uint64_t  space, ::GlobalNamespace::OVRPlugin_TrackingOrigin  baseOrigin) ;

/// @brief Method OnEditorShutdown, addr 0xa5fb890, size 0xb8, virtual false, abstract: false, final false
static inline void OnEditorShutdown() ;

/// @brief Method OverrideExternalCameraFov, addr 0xa5e8be0, size 0xec, virtual false, abstract: false, final false
static inline bool OverrideExternalCameraFov(int32_t  cameraId, bool  useOverriddenFov, ::GlobalNamespace::OVRPlugin_Fovf  fov) ;

/// @brief Method OverrideExternalCameraStaticPose, addr 0xa5e8db0, size 0xe0, virtual false, abstract: false, final false
static inline bool OverrideExternalCameraStaticPose(int32_t  cameraId, bool  useOverriddenPose, ::GlobalNamespace::OVRPlugin_Posef  poseInStageOrigin) ;

/// @brief Method PollEvent, addr 0xa5f6584, size 0x1f0, virtual false, abstract: false, final false
static inline bool PollEvent(::by_ref<::GlobalNamespace::OVRPlugin_EventDataBuffer>  eventDataBuffer) ;

/// @brief Method PollFuture, addr 0xa5fbf50, size 0xdc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result PollFuture(uint64_t  future, ::by_ref<::GlobalNamespace::OVRPlugin_FutureState>  state) ;

/// @brief Method ProcessorPerformanceLevelToPerformanceLevelHint, addr 0xa5e2e0c, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::OpenXR::Features::Extensions::PerformanceSettings::PerformanceLevelHint ProcessorPerformanceLevelToPerformanceLevelHint(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  level) ;

/// @brief Method QuerySpaces, addr 0xa5f7694, size 0x98, virtual false, abstract: false, final false
static inline bool QuerySpaces(::GlobalNamespace::OVRPlugin_SpaceQueryInfo  queryInfo, ::by_ref<uint64_t>  requestId) ;

/// @brief Method QuerySpaces2, addr 0xa5f7964, size 0x238, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result QuerySpaces2(::GlobalNamespace::OVRPlugin_SpaceQueryInfo2  queryInfo, ::by_ref<uint64_t>  requestId) ;

/// @brief Method QuerySpacesWithResult, addr 0xa5f772c, size 0x238, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result QuerySpacesWithResult(::GlobalNamespace::OVRPlugin_SpaceQueryInfo  queryInfo, ::by_ref<uint64_t>  requestId) ;

/// @brief Method RecenterTrackingOrigin, addr 0xa5ead1c, size 0x64, virtual false, abstract: false, final false
static inline bool RecenterTrackingOrigin(::GlobalNamespace::OVRPlugin_RecenterFlags  flags) ;

/// @brief Method RegisterOpenXREventHandler, addr 0xa5f6ad0, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result RegisterOpenXREventHandler(::GlobalNamespace::OVRPlugin_OpenXREventDelegateType*  eventHandler) ;

/// @brief Method RequestBodyTrackingFidelity, addr 0xa5f5e00, size 0xc8, virtual false, abstract: false, final false
static inline bool RequestBodyTrackingFidelity(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  fidelity) ;

/// @brief Method RequestBoundaryVisibility, addr 0xa5fb05c, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result RequestBoundaryVisibility(::GlobalNamespace::OVRPlugin_BoundaryVisibility  boundaryVisibility) ;

/// @brief Method RequestSceneCapture, addr 0xa5f9c9c, size 0xe4, virtual false, abstract: false, final false
static inline bool RequestSceneCapture(::by_ref<uint64_t>  requestId) ;

/// @brief Method ResetAppPerfStats, addr 0xa5e73ac, size 0x168, virtual false, abstract: false, final false
static inline bool ResetAppPerfStats() ;

/// @brief Method ResetBodyTrackingCalibration, addr 0xa5f5f98, size 0xc0, virtual false, abstract: false, final false
static inline bool ResetBodyTrackingCalibration() ;

/// @brief Method ResetDefaultExternalCamera, addr 0xa5e8f74, size 0xc0, virtual false, abstract: false, final false
static inline bool ResetDefaultExternalCamera() ;

/// @brief Method RetrieveSpaceDiscoveryResults, addr 0xa5fad78, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result RetrieveSpaceDiscoveryResults(uint64_t  requestId, ::GlobalNamespace::OVRPlugin_SpaceDiscoveryResult*  results, int32_t  capacityInput, ::by_ref<int32_t>  countOutput) ;

/// @brief Method RetrieveSpaceQueryResults, addr 0xa5f7d54, size 0x384, virtual false, abstract: false, final false
static inline bool RetrieveSpaceQueryResults(uint64_t  requestId, ::by_ref<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceQueryResult>>  results) ;

/// @brief Method RetrieveSpaceQueryResults, addr 0xa5f7b9c, size 0x1b8, virtual false, abstract: false, final false
static inline bool RetrieveSpaceQueryResults(uint64_t  requestId, ::by_ref<::Unity::Collections::NativeArray_1<::GlobalNamespace::OVRPlugin_SpaceQueryResult>>  results, ::Unity::Collections::Allocator  allocator) ;

/// @brief Method SaveSpace, addr 0xa5f7370, size 0xf4, virtual false, abstract: false, final false
static inline bool SaveSpace(uint64_t  space, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location, ::GlobalNamespace::OVRPlugin_SpaceStoragePersistenceMode  mode, ::by_ref<uint64_t>  requestId) ;

/// @brief Method SaveSpaceList, addr 0xa5f80d8, size 0xa8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SaveSpaceList(::Unity::Collections::NativeArray_1<uint64_t>  spaces, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location, ::by_ref<uint64_t>  requestId) ;

/// @brief Method SaveSpaceList, addr 0xa5f8180, size 0xf8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SaveSpaceList(uint64_t*  spaces, uint32_t  numSpaces, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location, ::by_ref<uint64_t>  requestId) ;

/// @brief Method SaveSpaces, addr 0xa5fae78, size 0xe4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SaveSpaces(uint64_t*  spaces, int32_t  count, ::by_ref<uint64_t>  requestId) ;

/// @brief Method SendEvent, addr 0xa5ec5a0, size 0x194, virtual false, abstract: false, final false
static inline bool SendEvent(::StringW  name, ::StringW  param, ::StringW  source) ;

/// @brief Method SendMicrogestureHint, addr 0xa5fc338, size 0xbc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SendMicrogestureHint() ;

/// @brief Method SendUnifiedEvent, addr 0xa5ec734, size 0x1e4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SendUnifiedEvent(::GlobalNamespace::OVRPlugin_Bool  isEssential, ::StringW  productType, ::StringW  eventName, ::StringW  event_metadata_json, ::StringW  project_name, ::StringW  event_entrypoint, ::StringW  project_guid, ::StringW  event_type, ::StringW  event_target, ::StringW  error_msg, ::StringW  is_internal_build, ::StringW  batch_mode) ;

/// @brief Method SendVirtualKeyboardInput, addr 0xa5f2ecc, size 0xf8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SendVirtualKeyboardInput(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputInfo  inputInfo, ::by_ref<::GlobalNamespace::OVRPlugin_Posef>  interactorRootPose) ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method SetBoundaryVisible, addr 0xa5ea884, size 0xe0, virtual false, abstract: false, final false
static inline bool SetBoundaryVisible(bool  value) ;

/// @brief Method SetClientColorDesc, addr 0xa5f6338, size 0x114, virtual false, abstract: false, final false
static inline bool SetClientColorDesc(::GlobalNamespace::OVRPlugin_ColorSpace  colorSpace) ;

/// @brief Method SetColorScaleAndOffset, addr 0xa5ecef0, size 0x128, virtual false, abstract: false, final false
static inline bool SetColorScaleAndOffset(::UnityEngine::Vector4  colorScale, ::UnityEngine::Vector4  colorOffset, bool  applyToAllLayers) ;

/// @brief Method SetControllerDrivenHandPoses, addr 0xa5e7770, size 0xc8, virtual false, abstract: false, final false
static inline bool SetControllerDrivenHandPoses(bool  controllerDrivenHandPoses) ;

/// @brief Method SetControllerDrivenHandPosesAreNatural, addr 0xa5e7838, size 0xc8, virtual false, abstract: false, final false
static inline bool SetControllerDrivenHandPosesAreNatural(bool  controllerDrivenHandPosesAreNatural) ;

/// @brief Method SetControllerHaptics, addr 0xa5e6b50, size 0xe0, virtual false, abstract: false, final false
static inline bool SetControllerHaptics(uint32_t  controllerMask, ::GlobalNamespace::OVRPlugin_HapticsBuffer  hapticsBuffer) ;

/// @brief Method SetControllerHapticsAmplitudeEnvelope, addr 0xa5e66f4, size 0xe0, virtual false, abstract: false, final false
static inline bool SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::OVRPlugin_Controller  controllerMask, ::GlobalNamespace::OVRPlugin_HapticsAmplitudeEnvelopeVibration  hapticsVibration) ;

/// @brief Method SetControllerHapticsPcm, addr 0xa5e67d4, size 0xf0, virtual false, abstract: false, final false
static inline bool SetControllerHapticsPcm(::GlobalNamespace::OVRPlugin_Controller  controllerMask, ::GlobalNamespace::OVRPlugin_HapticsPcmVibration  hapticsVibration) ;

/// @brief Method SetControllerLocalizedVibration, addr 0xa5e6604, size 0xf0, virtual false, abstract: false, final false
static inline bool SetControllerLocalizedVibration(::GlobalNamespace::OVRPlugin_Controller  controllerMask, ::GlobalNamespace::OVRPlugin_HapticsLocation  hapticsLocationMask, float_t  frequency, float_t  amplitude) ;

/// @brief Method SetControllerVibration, addr 0xa5e6588, size 0x7c, virtual false, abstract: false, final false
static inline bool SetControllerVibration(uint32_t  controllerMask, float_t  frequency, float_t  amplitude) ;

/// @brief Method SetDefaultExternalCamera, addr 0xa5e9034, size 0xe0, virtual false, abstract: false, final false
static inline bool SetDefaultExternalCamera(::StringW  cameraName, ::by_ref<::GlobalNamespace::OVRPlugin_CameraIntrinsics>  cameraIntrinsics, ::by_ref<::GlobalNamespace::OVRPlugin_CameraExtrinsics>  cameraExtrinsics) ;

/// @brief Method SetDesiredEyeTextureFormat, addr 0xa5e85b0, size 0xc8, virtual false, abstract: false, final false
static inline bool SetDesiredEyeTextureFormat(::GlobalNamespace::OVRPlugin_EyeTextureFormat  value) ;

/// @brief Method SetDeveloperMode, addr 0xa5ed0f0, size 0xc8, virtual false, abstract: false, final false
static inline bool SetDeveloperMode(::GlobalNamespace::OVRPlugin_Bool  active) ;

/// @brief Method SetDeveloperTelemetryConsent, addr 0xa5fc1b4, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SetDeveloperTelemetryConsent(::GlobalNamespace::OVRPlugin_Bool  consent) ;

/// @brief Method SetDynamicObjectTrackedClasses, addr 0xa5fb424, size 0x110, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SetDynamicObjectTrackedClasses(uint64_t  tracker, ::System::ReadOnlySpan_1<::GlobalNamespace::OVRPlugin_DynamicObjectClass>  classes) ;

/// @brief Method SetDynamicObjectTrackedClassesAsync, addr 0xa5fb534, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>> SetDynamicObjectTrackedClassesAsync(uint64_t  tracker, ::System::ReadOnlySpan_1<::GlobalNamespace::OVRPlugin_DynamicObjectClass>  classes) ;

/// @brief Method SetExternalCameraProperties, addr 0xa5e9114, size 0xe0, virtual false, abstract: false, final false
static inline bool SetExternalCameraProperties(::StringW  cameraName, ::by_ref<::GlobalNamespace::OVRPlugin_CameraIntrinsics>  cameraIntrinsics, ::by_ref<::GlobalNamespace::OVRPlugin_CameraExtrinsics>  cameraExtrinsics) ;

/// @brief Method SetExternalLayerDynresEnabled, addr 0xa5fc0f0, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SetExternalLayerDynresEnabled(::GlobalNamespace::OVRPlugin_Bool  enabled) ;

/// @brief Method SetEyeBufferSharpenType, addr 0xa5fba10, size 0xc8, virtual false, abstract: false, final false
static inline bool SetEyeBufferSharpenType(::GlobalNamespace::OVRPlugin_LayerSharpenType  sharpenType) ;

/// @brief Method SetFaceTrackingVisemesEnabled, addr 0xa5f500c, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SetFaceTrackingVisemesEnabled(bool  enabled) ;

/// @brief Method SetHandNodePoseStateLatency, addr 0xa5e75d0, size 0xd0, virtual false, abstract: false, final false
static inline bool SetHandNodePoseStateLatency(double_t  latencyInSeconds) ;

/// @brief Method SetHandSkeletonVersion, addr 0xa5e7aa8, size 0x170, virtual false, abstract: false, final false
static inline bool SetHandSkeletonVersion(::GlobalNamespace::OVRHandSkeletonVersion  skeletonVersion) ;

/// @brief Method SetHeadPoseModifier, addr 0xa5ec918, size 0xd8, virtual false, abstract: false, final false
static inline bool SetHeadPoseModifier(::by_ref<::GlobalNamespace::OVRPlugin_Quatf>  relativeRotation, ::by_ref<::GlobalNamespace::OVRPlugin_Vector3f>  relativeTranslation) ;

/// @brief Method SetInsightPassthroughKeyboardHandsIntensity, addr 0xa5ea3a0, size 0xe0, virtual false, abstract: false, final false
static inline bool SetInsightPassthroughKeyboardHandsIntensity(int32_t  layerId, ::GlobalNamespace::OVRPlugin_InsightPassthroughKeyboardHandsIntensity  intensity) ;

/// @brief Method SetInsightPassthroughStyle, addr 0xa5e9f80, size 0x118, virtual false, abstract: false, final false
static inline bool SetInsightPassthroughStyle(int32_t  layerId, ::GlobalNamespace::OVRPlugin_InsightPassthroughStyle  style) ;

/// @brief Method SetInsightPassthroughStyle, addr 0xa5e9d6c, size 0x214, virtual false, abstract: false, final false
static inline bool SetInsightPassthroughStyle(int32_t  layerId, ::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2  style) ;

/// @brief Method SetKeyboardOverlayUV, addr 0xa5f6d2c, size 0xd8, virtual false, abstract: false, final false
static inline bool SetKeyboardOverlayUV(::GlobalNamespace::OVRPlugin_Vector2f  uv) ;

/// @brief Method SetLogCallback2, addr 0xa5e126c, size 0x108, virtual false, abstract: false, final false
static inline void SetLogCallback2(::GlobalNamespace::OVRPlugin_LogCallback2DelegateType*  logCallback) ;

/// @brief Method SetMultimodalHandsControllersSupported, addr 0xa5e91f4, size 0xe0, virtual false, abstract: false, final false
static inline bool SetMultimodalHandsControllersSupported(bool  value) ;

/// @brief Method SetSimultaneousHandsAndControllersEnabled, addr 0xa5e56b0, size 0xc8, virtual false, abstract: false, final false
static inline bool SetSimultaneousHandsAndControllersEnabled(bool  enabled) ;

/// @brief Method SetSpaceComponentStatus, addr 0xa5f6ee0, size 0x11c, virtual false, abstract: false, final false
static inline bool SetSpaceComponentStatus(uint64_t  space, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType, bool  enable, double_t  timeout, ::by_ref<uint64_t>  requestId) ;

/// @brief Method SetTrackingCalibratedOrigin, addr 0xa5eacc0, size 0x5c, virtual false, abstract: false, final false
static inline bool SetTrackingCalibratedOrigin() ;

/// @brief Method SetTrackingOriginType, addr 0xa5eabe8, size 0x64, virtual false, abstract: false, final false
static inline bool SetTrackingOriginType(::GlobalNamespace::OVRPlugin_TrackingOrigin  originType) ;

/// @brief Method SetVirtualKeyboardModelVisibility, addr 0xa5f3e10, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SetVirtualKeyboardModelVisibility(::by_ref<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility>  visibility) ;

/// @brief Method SetWideMotionModeHandPoses, addr 0xa5e8354, size 0xc8, virtual false, abstract: false, final false
static inline bool SetWideMotionModeHandPoses(bool  wideMotionModeFusionHandPoses) ;

/// @brief Method ShareSpaces, addr 0xa5fabc0, size 0xdc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ShareSpaces(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_ShareSpacesInfo>  info, ::by_ref<uint64_t>  requestId) ;

/// @brief Method ShareSpaces, addr 0xa5f84f8, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ShareSpaces(::Unity::Collections::NativeArray_1<uint64_t>  spaces, ::Unity::Collections::NativeArray_1<uint64_t>  userHandles, ::by_ref<uint64_t>  requestId) ;

/// @brief Method ShareSpaces, addr 0xa5f85c4, size 0x100, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ShareSpaces(uint64_t*  spaces, uint32_t  numSpaces, uint64_t*  userHandles, uint32_t  numUsers, ::by_ref<uint64_t>  requestId) ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method ShowUI, addr 0xa5e3900, size 0x64, virtual false, abstract: false, final false
static inline bool ShowUI(::GlobalNamespace::OVRPlugin_PlatformUI  ui) ;

/// @brief Method ShutdownInsightPassthrough, addr 0xa5e95d4, size 0xc0, virtual false, abstract: false, final false
static inline bool ShutdownInsightPassthrough() ;

/// @brief Method ShutdownMixedReality, addr 0xa5e874c, size 0xd4, virtual false, abstract: false, final false
static inline bool ShutdownMixedReality() ;

/// @brief Method StartBodyTracking, addr 0xa5f5d40, size 0xc0, virtual false, abstract: false, final false
static inline bool StartBodyTracking() ;

/// @brief Method StartBodyTracking2, addr 0xa5f5bbc, size 0x184, virtual false, abstract: false, final false
static inline bool StartBodyTracking2(::GlobalNamespace::OVRPlugin_BodyJointSet  jointSet) ;

/// @brief Method StartColocationSessionAdvertisement, addr 0xa5fa894, size 0xd4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result StartColocationSessionAdvertisement(::GlobalNamespace::OVRPlugin_ColocationSessionStartAdvertisementInfo  info, ::by_ref<uint64_t>  requestId) ;

/// @brief Method StartColocationSessionDiscovery, addr 0xa5faa30, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result StartColocationSessionDiscovery(::by_ref<uint64_t>  requestId) ;

/// @brief Method StartEyeTracking, addr 0xa5f54b0, size 0xc0, virtual false, abstract: false, final false
static inline bool StartEyeTracking() ;

/// @brief Method StartFaceTracking, addr 0xa5f5630, size 0xc0, virtual false, abstract: false, final false
static inline bool StartFaceTracking() ;

/// @brief Method StartFaceTracking2, addr 0xa5f5a20, size 0xdc, virtual false, abstract: false, final false
static inline bool StartFaceTracking2(::ArrayW<::GlobalNamespace::OVRPlugin_FaceTrackingDataSource>  requestedFaceTrackingDataSources) ;

/// @brief Method StopBodyTracking, addr 0xa5f6058, size 0x13c, virtual false, abstract: false, final false
static inline bool StopBodyTracking() ;

/// @brief Method StopColocationSessionAdvertisement, addr 0xa5fa968, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result StopColocationSessionAdvertisement(::by_ref<uint64_t>  requestId) ;

/// @brief Method StopColocationSessionDiscovery, addr 0xa5faaf8, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result StopColocationSessionDiscovery(::by_ref<uint64_t>  requestId) ;

/// @brief Method StopEyeTracking, addr 0xa5f5570, size 0xc0, virtual false, abstract: false, final false
static inline bool StopEyeTracking() ;

/// @brief Method StopFaceTracking, addr 0xa5f56f0, size 0xc0, virtual false, abstract: false, final false
static inline bool StopFaceTracking() ;

/// @brief Method StopFaceTracking2, addr 0xa5f5afc, size 0xc0, virtual false, abstract: false, final false
static inline bool StopFaceTracking2() ;

/// @brief Method SuggestBodyTrackingCalibrationOverride, addr 0xa5f5ec8, size 0xd0, virtual false, abstract: false, final false
static inline bool SuggestBodyTrackingCalibrationOverride(::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationInfo  calibrationInfo) ;

/// @brief Method SuggestVirtualKeyboardLocation, addr 0xa5f3184, size 0xe8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SuggestVirtualKeyboardLocation(::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo  locationInfo) ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method TestBoundaryNode, addr 0xa5e6e68, size 0xec, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_BoundaryTestResult TestBoundaryNode(::GlobalNamespace::OVRPlugin_Node  nodeId, ::GlobalNamespace::OVRPlugin_BoundaryType  boundaryType) ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method TestBoundaryPoint, addr 0xa5e6f54, size 0x10c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_BoundaryTestResult TestBoundaryPoint(::GlobalNamespace::OVRPlugin_Vector3f  point, ::GlobalNamespace::OVRPlugin_BoundaryType  boundaryType) ;

/// @brief Method ToBool, addr 0xa5e18a8, size 0x8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ToBool(bool  b) ;

/// @brief Method TriggerVibrationAction, addr 0xa5e81dc, size 0x178, virtual false, abstract: false, final false
static inline bool TriggerVibrationAction(::StringW  actionName, ::GlobalNamespace::OVRPlugin_Hand  hand, float_t  duration, float_t  amplitude) ;

/// @brief Method TryLocateSpace, addr 0xa5f86c4, size 0x1cc, virtual false, abstract: false, final false
static inline bool TryLocateSpace(uint64_t  space, ::GlobalNamespace::OVRPlugin_TrackingOrigin  baseOrigin, ::by_ref<::GlobalNamespace::OVRPlugin_Posef>  pose) ;

/// @brief Method TryLocateSpace, addr 0xa5f8958, size 0x168, virtual false, abstract: false, final false
static inline bool TryLocateSpace(uint64_t  space, ::GlobalNamespace::OVRPlugin_TrackingOrigin  baseOrigin, ::by_ref<::GlobalNamespace::OVRPlugin_Posef>  pose, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceLocationFlags>  locationFlags) ;

/// @brief Method UnregisterOpenXREventHandler, addr 0xa5f6b98, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result UnregisterOpenXREventHandler(::GlobalNamespace::OVRPlugin_OpenXREventDelegateType*  eventHandler) ;

/// @brief Method UpdateExternalCamera, addr 0xa5e89d8, size 0xd4, virtual false, abstract: false, final false
static inline bool UpdateExternalCamera() ;

/// @brief Method UpdateInsightPassthroughGeometryTransform, addr 0xa5e9c6c, size 0x100, virtual false, abstract: false, final false
static inline bool UpdateInsightPassthroughGeometryTransform(uint64_t  geometryInstanceHandle, ::UnityEngine::Matrix4x4  transform) ;

/// @brief Method UpdateNodePhysicsPoses, addr 0xa5e45e8, size 0xdc, virtual false, abstract: false, final false
static inline bool UpdateNodePhysicsPoses(int32_t  frameIndex, double_t  predictionSeconds) ;

/// @brief Method UpdatePassthroughColorLut, addr 0xa5ea2a0, size 0x100, virtual false, abstract: false, final false
static inline bool UpdatePassthroughColorLut(uint64_t  colorLut, ::GlobalNamespace::OVRPlugin_PassthroughColorLutData  data) ;

static inline ::UnityEngine::Quaternion getStaticF_LeftBoneRotator() ;

static inline int32_t getStaticF_MAX_CPU_CORES() ;

static inline ::UnityEngine::Quaternion getStaticF_RightBoneRotator() ;

static inline ::ArrayW<::GlobalNamespace::OVRPlugin_GetBoneSkeleton2Delegate*> getStaticF_Skeleton2GetBone() ;

static inline ::ArrayW<::GlobalNamespace::OVRPlugin_GetBoneSkeleton3Delegate*> getStaticF_Skeleton3GetBone() ;

static inline ::GlobalNamespace::OVRHandSkeletonVersion getStaticF__HandSkeletonVersion_k__BackingField() ;

static inline ::System::Guid getStaticF__cachedAudioInGuid() ;

static inline ::StringW getStaticF__cachedAudioInString() ;

static inline ::System::Guid getStaticF__cachedAudioOutGuid() ;

static inline ::StringW getStaticF__cachedAudioOutString() ;

static inline ::ArrayW<float_t> getStaticF__cachedSystemDisplayFrequenciesAvailable() ;

static inline ::GlobalNamespace::OVRPlugin_BodyJointSet getStaticF__currentJointSet() ;

static inline ::GlobalNamespace::OVRPlugin_GUID* getStaticF__nativeAudioInGuid() ;

static inline ::GlobalNamespace::OVRPlugin_GUID* getStaticF__nativeAudioOutGuid() ;

static inline ::System::Version* getStaticF__nativeSDKVersion() ;

static inline ::GlobalNamespace::OVRNativeBuffer* getStaticF__nativeSystemDisplayFrequenciesAvailable() ;

static inline ::System::Nullable_1<::GlobalNamespace::OVRPlugin_XrApi> getStaticF__nativeXrApi() ;

static inline ::System::Version* getStaticF__version() ;

static inline ::System::Version* getStaticF__versionZero() ;

static inline ::GlobalNamespace::OVRPlugin_EyeGazesStateInternal getStaticF_cachedEyeGazesState() ;

static inline ::GlobalNamespace::OVRPlugin_FaceStateInternal getStaticF_cachedFaceState() ;

static inline ::GlobalNamespace::OVRPlugin_FaceState2Internal getStaticF_cachedFaceState2() ;

static inline ::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal getStaticF_cachedFaceVisemesState() ;

static inline ::GlobalNamespace::OVRPlugin_HandStateInternal getStaticF_cachedHandState() ;

static inline ::GlobalNamespace::OVRPlugin_HandState3Internal getStaticF_cachedHandState3() ;

static inline ::GlobalNamespace::OVRPlugin_HandTrackingStateInternal getStaticF_cachedHandTrackingState() ;

static inline ::GlobalNamespace::OVRPlugin_Skeleton getStaticF_cachedSkeleton() ;

static inline ::GlobalNamespace::OVRPlugin_Skeleton2Internal getStaticF_cachedSkeleton2() ;

static inline ::GlobalNamespace::OVRPlugin_Skeleton3Internal getStaticF_cachedSkeleton3() ;

static inline ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel getStaticF_m_suggestedCpuPerfLevelOpenXR() ;

static inline ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel getStaticF_m_suggestedGpuPerfLevelOpenXR() ;

static inline bool getStaticF_perfStatWarningPrinted() ;

static inline bool getStaticF_resetPerfStatWarningPrinted() ;

static inline ::System::Version* getStaticF_wrapperVersion() ;

/// @brief Method get_AsymmetricFovEnabled, addr 0xa5ec094, size 0xd4, virtual false, abstract: false, final false
static inline bool get_AsymmetricFovEnabled() ;

/// @brief Method get_EyeTextureArrayEnabled, addr 0xa5ec168, size 0xc0, virtual false, abstract: false, final false
static inline bool get_EyeTextureArrayEnabled() ;

/// [CompilerGenerated]
/// @brief Method get_HandSkeletonVersion, addr 0xa5ed360, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRHandSkeletonVersion get_HandSkeletonVersion() ;

/// @brief Method get_audioInId, addr 0xa5e25fc, size 0x2f8, virtual false, abstract: false, final false
static inline ::StringW get_audioInId() ;

/// @brief Method get_audioOutId, addr 0xa5e2304, size 0x2f8, virtual false, abstract: false, final false
static inline ::StringW get_audioOutId() ;

/// @brief Method get_batteryLevel, addr 0xa5e2d6c, size 0x50, virtual false, abstract: false, final false
static inline float_t get_batteryLevel() ;

/// @brief Method get_batteryStatus, addr 0xa5e350c, size 0x50, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_BatteryStatus get_batteryStatus() ;

/// @brief Method get_batteryTemperature, addr 0xa5e2dbc, size 0x50, virtual false, abstract: false, final false
static inline float_t get_batteryTemperature() ;

/// @brief Method get_bodyTrackingEnabled, addr 0xa5efa04, size 0xd0, virtual false, abstract: false, final false
static inline bool get_bodyTrackingEnabled() ;

/// @brief Method get_bodyTrackingSupported, addr 0xa5ef934, size 0xd0, virtual false, abstract: false, final false
static inline bool get_bodyTrackingSupported() ;

/// @brief Method get_chromatic, addr 0xa5e16dc, size 0xd8, virtual false, abstract: false, final false
static inline bool get_chromatic() ;

/// @brief Method get_cpuLevel, addr 0xa5e2fc4, size 0x50, virtual false, abstract: false, final false
static inline int32_t get_cpuLevel() ;

/// @brief Method get_eyeDepth, addr 0xa5e2bd0, size 0x8c, virtual false, abstract: false, final false
static inline float_t get_eyeDepth() ;

/// @brief Method get_eyeFovPremultipliedAlphaModeEnabled, addr 0xa5ebe08, size 0xd0, virtual false, abstract: false, final false
static inline bool get_eyeFovPremultipliedAlphaModeEnabled() ;

/// @brief Method get_eyeHeight, addr 0xa5e2cbc, size 0x50, virtual false, abstract: false, final false
static inline float_t get_eyeHeight() ;

/// @brief Method get_eyeTrackedFoveatedRenderingEnabled, addr 0xa5eaf90, size 0xec, virtual false, abstract: false, final false
static inline bool get_eyeTrackedFoveatedRenderingEnabled() ;

/// @brief Method get_eyeTrackedFoveatedRenderingSupported, addr 0xa5eaec4, size 0xcc, virtual false, abstract: false, final false
static inline bool get_eyeTrackedFoveatedRenderingSupported() ;

/// @brief Method get_eyeTrackingEnabled, addr 0xa5f50d0, size 0xd0, virtual false, abstract: false, final false
static inline bool get_eyeTrackingEnabled() ;

/// @brief Method get_eyeTrackingSupported, addr 0xa5f51a0, size 0xd0, virtual false, abstract: false, final false
static inline bool get_eyeTrackingSupported() ;

/// @brief Method get_faceTracking2Enabled, addr 0xa5f57b0, size 0xd0, virtual false, abstract: false, final false
static inline bool get_faceTracking2Enabled() ;

/// @brief Method get_faceTracking2Supported, addr 0xa5f5880, size 0xd0, virtual false, abstract: false, final false
static inline bool get_faceTracking2Supported() ;

/// @brief Method get_faceTrackingEnabled, addr 0xa5f3ed4, size 0xd0, virtual false, abstract: false, final false
static inline bool get_faceTrackingEnabled() ;

/// @brief Method get_faceTrackingSupported, addr 0xa5f3fa4, size 0xd0, virtual false, abstract: false, final false
static inline bool get_faceTrackingSupported() ;

/// @brief Method get_faceTrackingVisemesSupported, addr 0xa5f5950, size 0xd0, virtual false, abstract: false, final false
static inline bool get_faceTrackingVisemesSupported() ;

/// @brief Method get_fixedFoveatedRenderingLevel, addr 0xa5eb378, size 0x4c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_FixedFoveatedRenderingLevel get_fixedFoveatedRenderingLevel() ;

/// @brief Method get_fixedFoveatedRenderingSupported, addr 0xa5eadf4, size 0xd0, virtual false, abstract: false, final false
static inline bool get_fixedFoveatedRenderingSupported() ;

/// @brief Method get_foveatedRenderingLevel, addr 0xa5eb160, size 0xe4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel get_foveatedRenderingLevel() ;

/// @brief Method get_foveatedRenderingSupported, addr 0xa5ead80, size 0x74, virtual false, abstract: false, final false
static inline bool get_foveatedRenderingSupported() ;

/// @brief Method get_gpuLevel, addr 0xa5e306c, size 0x50, virtual false, abstract: false, final false
static inline int32_t get_gpuLevel() ;

/// @brief Method get_gpuUtilLevel, addr 0xa5eb848, size 0xf0, virtual false, abstract: false, final false
static inline float_t get_gpuUtilLevel() ;

/// @brief Method get_gpuUtilSupported, addr 0xa5eb778, size 0xd0, virtual false, abstract: false, final false
static inline bool get_gpuUtilSupported() ;

/// @brief Method get_hasInputFocus, addr 0xa5e2950, size 0xdc, virtual false, abstract: false, final false
static inline bool get_hasInputFocus() ;

/// @brief Method get_hasVrFocus, addr 0xa5e28f4, size 0x5c, virtual false, abstract: false, final false
static inline bool get_hasVrFocus() ;

/// @brief Method get_headphonesPresent, addr 0xa5e20e4, size 0x90, virtual false, abstract: false, final false
static inline bool get_headphonesPresent() ;

/// @brief Method get_hmdPresent, addr 0xa5e1fc0, size 0x94, virtual false, abstract: false, final false
static inline bool get_hmdPresent() ;

/// @brief Method get_initialized, addr 0xa5e14e4, size 0x5c, virtual false, abstract: false, final false
static inline bool get_initialized() ;

/// @brief Method get_ipd, addr 0xa5e320c, size 0x50, virtual false, abstract: false, final false
static inline float_t get_ipd() ;

/// @brief Method get_latency, addr 0xa5e2b34, size 0x9c, virtual false, abstract: false, final false
static inline ::StringW get_latency() ;

/// @brief Method get_localDimming, addr 0xa5ec2fc, size 0xf4, virtual false, abstract: false, final false
static inline bool get_localDimming() ;

/// @brief Method get_localDimmingSupported, addr 0xa5ec228, size 0xd4, virtual false, abstract: false, final false
static inline bool get_localDimmingSupported() ;

/// @brief Method get_monoscopic, addr 0xa5e18b0, size 0x90, virtual false, abstract: false, final false
static inline bool get_monoscopic() ;

/// @brief Method get_nativeSDKVersion, addr 0xa5e0fa4, size 0x2bc, virtual false, abstract: false, final false
static inline ::System::Version* get_nativeSDKVersion() ;

/// @brief Method get_nativeXrApi, addr 0xa5e1540, size 0x19c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_XrApi get_nativeXrApi() ;

/// @brief Method get_occlusionMesh, addr 0xa5e32bc, size 0x90, virtual false, abstract: false, final false
static inline bool get_occlusionMesh() ;

/// @brief Method get_position, addr 0xa5e1b10, size 0x90, virtual false, abstract: false, final false
static inline bool get_position() ;

/// @brief Method get_positionSupported, addr 0xa5e1e0c, size 0x90, virtual false, abstract: false, final false
static inline bool get_positionSupported() ;

/// @brief Method get_positionTracked, addr 0xa5e1e9c, size 0x94, virtual false, abstract: false, final false
static inline bool get_positionTracked() ;

/// @brief Method get_powerSaving, addr 0xa5e1f30, size 0x90, virtual false, abstract: false, final false
static inline bool get_powerSaving() ;

/// @brief Method get_premultipliedAlphaLayersSupported, addr 0xa5e33ec, size 0xd0, virtual false, abstract: false, final false
static inline bool get_premultipliedAlphaLayersSupported() ;

/// @brief Method get_productName, addr 0xa5e2ae4, size 0x50, virtual false, abstract: false, final false
static inline ::StringW get_productName() ;

/// @brief Method get_recommendedMSAALevel, addr 0xa5e2174, size 0xbc, virtual false, abstract: false, final false
static inline int32_t get_recommendedMSAALevel() ;

/// @brief Method get_rotation, addr 0xa5e19e0, size 0x90, virtual false, abstract: false, final false
static inline bool get_rotation() ;

/// @brief Method get_shouldQuit, addr 0xa5e2a2c, size 0x5c, virtual false, abstract: false, final false
static inline bool get_shouldQuit() ;

/// @brief Method get_shouldRecenter, addr 0xa5e2a88, size 0x5c, virtual false, abstract: false, final false
static inline bool get_shouldRecenter() ;

/// @brief Method get_suggestedCpuPerfLevel, addr 0xa5e2e24, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel get_suggestedCpuPerfLevel() ;

/// @brief Method get_suggestedGpuPerfLevel, addr 0xa5e2ef4, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel get_suggestedGpuPerfLevel() ;

/// @brief Method get_systemDisplayFrequenciesAvailable, addr 0xa5eb938, size 0x2ac, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> get_systemDisplayFrequenciesAvailable() ;

/// @brief Method get_systemDisplayFrequency, addr 0xa5ebbe4, size 0x158, virtual false, abstract: false, final false
static inline float_t get_systemDisplayFrequency() ;

/// @brief Method get_systemRegion, addr 0xa5e2230, size 0xd4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SystemRegion get_systemRegion() ;

/// @brief Method get_systemVolume, addr 0xa5e31bc, size 0x50, virtual false, abstract: false, final false
static inline float_t get_systemVolume() ;

/// @brief Method get_tiledMultiResLevel, addr 0xa5eb6d8, size 0x4c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_TiledMultiResLevel get_tiledMultiResLevel() ;

/// @brief Method get_tiledMultiResSupported, addr 0xa5eb68c, size 0x4c, virtual false, abstract: false, final false
static inline bool get_tiledMultiResSupported() ;

/// @brief Method get_unpremultipliedAlphaLayersSupported, addr 0xa5e34bc, size 0x50, virtual false, abstract: false, final false
static inline bool get_unpremultipliedAlphaLayersSupported() ;

/// @brief Method get_useDynamicFixedFoveatedRendering, addr 0xa5eb5ec, size 0x4c, virtual false, abstract: false, final false
static inline bool get_useDynamicFixedFoveatedRendering() ;

/// @brief Method get_useDynamicFoveatedRendering, addr 0xa5eb418, size 0xf0, virtual false, abstract: false, final false
static inline bool get_useDynamicFoveatedRendering() ;

/// @brief Method get_useIPDInPositionTracking, addr 0xa5e1c40, size 0xd8, virtual false, abstract: false, final false
static inline bool get_useIPDInPositionTracking() ;

/// @brief Method get_userPresent, addr 0xa5e2054, size 0x90, virtual false, abstract: false, final false
static inline bool get_userPresent() ;

/// @brief Method get_version, addr 0xa5e0ac8, size 0x4dc, virtual false, abstract: false, final false
static inline ::System::Version* get_version() ;

/// @brief Method get_vsyncCount, addr 0xa5e3114, size 0x50, virtual false, abstract: false, final false
static inline int32_t get_vsyncCount() ;

static inline void setStaticF_LeftBoneRotator(::UnityEngine::Quaternion  value) ;

static inline void setStaticF_MAX_CPU_CORES(int32_t  value) ;

static inline void setStaticF_RightBoneRotator(::UnityEngine::Quaternion  value) ;

static inline void setStaticF_Skeleton2GetBone(::ArrayW<::GlobalNamespace::OVRPlugin_GetBoneSkeleton2Delegate*>  value) ;

static inline void setStaticF_Skeleton3GetBone(::ArrayW<::GlobalNamespace::OVRPlugin_GetBoneSkeleton3Delegate*>  value) ;

static inline void setStaticF__HandSkeletonVersion_k__BackingField(::GlobalNamespace::OVRHandSkeletonVersion  value) ;

static inline void setStaticF__cachedAudioInGuid(::System::Guid  value) ;

static inline void setStaticF__cachedAudioInString(::StringW  value) ;

static inline void setStaticF__cachedAudioOutGuid(::System::Guid  value) ;

static inline void setStaticF__cachedAudioOutString(::StringW  value) ;

static inline void setStaticF__cachedSystemDisplayFrequenciesAvailable(::ArrayW<float_t>  value) ;

static inline void setStaticF__currentJointSet(::GlobalNamespace::OVRPlugin_BodyJointSet  value) ;

static inline void setStaticF__nativeAudioInGuid(::GlobalNamespace::OVRPlugin_GUID*  value) ;

static inline void setStaticF__nativeAudioOutGuid(::GlobalNamespace::OVRPlugin_GUID*  value) ;

static inline void setStaticF__nativeSDKVersion(::System::Version*  value) ;

static inline void setStaticF__nativeSystemDisplayFrequenciesAvailable(::GlobalNamespace::OVRNativeBuffer*  value) ;

static inline void setStaticF__nativeXrApi(::System::Nullable_1<::GlobalNamespace::OVRPlugin_XrApi>  value) ;

static inline void setStaticF__version(::System::Version*  value) ;

static inline void setStaticF__versionZero(::System::Version*  value) ;

static inline void setStaticF_cachedEyeGazesState(::GlobalNamespace::OVRPlugin_EyeGazesStateInternal  value) ;

static inline void setStaticF_cachedFaceState(::GlobalNamespace::OVRPlugin_FaceStateInternal  value) ;

static inline void setStaticF_cachedFaceState2(::GlobalNamespace::OVRPlugin_FaceState2Internal  value) ;

static inline void setStaticF_cachedFaceVisemesState(::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal  value) ;

static inline void setStaticF_cachedHandState(::GlobalNamespace::OVRPlugin_HandStateInternal  value) ;

static inline void setStaticF_cachedHandState3(::GlobalNamespace::OVRPlugin_HandState3Internal  value) ;

static inline void setStaticF_cachedHandTrackingState(::GlobalNamespace::OVRPlugin_HandTrackingStateInternal  value) ;

static inline void setStaticF_cachedSkeleton(::GlobalNamespace::OVRPlugin_Skeleton  value) ;

static inline void setStaticF_cachedSkeleton2(::GlobalNamespace::OVRPlugin_Skeleton2Internal  value) ;

static inline void setStaticF_cachedSkeleton3(::GlobalNamespace::OVRPlugin_Skeleton3Internal  value) ;

static inline void setStaticF_m_suggestedCpuPerfLevelOpenXR(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  value) ;

static inline void setStaticF_m_suggestedGpuPerfLevelOpenXR(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  value) ;

static inline void setStaticF_perfStatWarningPrinted(bool  value) ;

static inline void setStaticF_resetPerfStatWarningPrinted(bool  value) ;

static inline void setStaticF_wrapperVersion(::System::Version*  value) ;

/// [CompilerGenerated]
/// @brief Method set_HandSkeletonVersion, addr 0xa5ed3b8, size 0x5c, virtual false, abstract: false, final false
static inline void set_HandSkeletonVersion(::GlobalNamespace::OVRHandSkeletonVersion  value) ;

/// @brief Method set_chromatic, addr 0xa5e17b4, size 0xf4, virtual false, abstract: false, final false
static inline void set_chromatic(bool  value) ;

/// @brief Method set_cpuLevel, addr 0xa5e3014, size 0x58, virtual false, abstract: false, final false
static inline void set_cpuLevel(int32_t  value) ;

/// @brief Method set_eyeDepth, addr 0xa5e2c5c, size 0x60, virtual false, abstract: false, final false
static inline void set_eyeDepth(float_t  value) ;

/// @brief Method set_eyeFovPremultipliedAlphaModeEnabled, addr 0xa5ebed8, size 0xdc, virtual false, abstract: false, final false
static inline void set_eyeFovPremultipliedAlphaModeEnabled(bool  value) ;

/// @brief Method set_eyeHeight, addr 0xa5e2d0c, size 0x60, virtual false, abstract: false, final false
static inline void set_eyeHeight(float_t  value) ;

/// @brief Method set_eyeTrackedFoveatedRenderingEnabled, addr 0xa5eb07c, size 0xe4, virtual false, abstract: false, final false
static inline void set_eyeTrackedFoveatedRenderingEnabled(bool  value) ;

/// @brief Method set_fixedFoveatedRenderingLevel, addr 0xa5eb3c4, size 0x54, virtual false, abstract: false, final false
static inline void set_fixedFoveatedRenderingLevel(::GlobalNamespace::OVRPlugin_FixedFoveatedRenderingLevel  value) ;

/// @brief Method set_foveatedRenderingLevel, addr 0xa5eb244, size 0x134, virtual false, abstract: false, final false
static inline void set_foveatedRenderingLevel(::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel  value) ;

/// @brief Method set_gpuLevel, addr 0xa5e30bc, size 0x58, virtual false, abstract: false, final false
static inline void set_gpuLevel(int32_t  value) ;

/// @brief Method set_ipd, addr 0xa5e325c, size 0x60, virtual false, abstract: false, final false
static inline void set_ipd(float_t  value) ;

/// @brief Method set_localDimming, addr 0xa5ec3f0, size 0xe4, virtual false, abstract: false, final false
static inline void set_localDimming(bool  value) ;

/// @brief Method set_monoscopic, addr 0xa5e1940, size 0xa0, virtual false, abstract: false, final false
static inline void set_monoscopic(bool  value) ;

/// @brief Method set_occlusionMesh, addr 0xa5e334c, size 0xa0, virtual false, abstract: false, final false
static inline void set_occlusionMesh(bool  value) ;

/// @brief Method set_position, addr 0xa5e1ba0, size 0xa0, virtual false, abstract: false, final false
static inline void set_position(bool  value) ;

/// @brief Method set_rotation, addr 0xa5e1a70, size 0xa0, virtual false, abstract: false, final false
static inline void set_rotation(bool  value) ;

/// @brief Method set_suggestedCpuPerfLevel, addr 0xa5e2e7c, size 0x78, virtual false, abstract: false, final false
static inline void set_suggestedCpuPerfLevel(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  value) ;

/// @brief Method set_suggestedGpuPerfLevel, addr 0xa5e2f4c, size 0x78, virtual false, abstract: false, final false
static inline void set_suggestedGpuPerfLevel(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  value) ;

/// @brief Method set_systemDisplayFrequency, addr 0xa5ebd3c, size 0xcc, virtual false, abstract: false, final false
static inline void set_systemDisplayFrequency(float_t  value) ;

/// @brief Method set_tiledMultiResLevel, addr 0xa5eb724, size 0x54, virtual false, abstract: false, final false
static inline void set_tiledMultiResLevel(::GlobalNamespace::OVRPlugin_TiledMultiResLevel  value) ;

/// @brief Method set_useDynamicFixedFoveatedRendering, addr 0xa5eb638, size 0x54, virtual false, abstract: false, final false
static inline void set_useDynamicFixedFoveatedRendering(bool  value) ;

/// @brief Method set_useDynamicFoveatedRendering, addr 0xa5eb508, size 0xe4, virtual false, abstract: false, final false
static inline void set_useDynamicFoveatedRendering(bool  value) ;

/// @brief Method set_useIPDInPositionTracking, addr 0xa5e1d18, size 0xf4, virtual false, abstract: false, final false
static inline void set_useIPDInPositionTracking(bool  value) ;

/// @brief Method set_vsyncCount, addr 0xa5e3164, size 0x58, virtual false, abstract: false, final false
static inline void set_vsyncCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin(OVRPlugin && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin(OVRPlugin const& ) = delete;

/// @brief Field AppPerfFrameStatsMaxCount offset 0xffffffff size 0x4
static constexpr int32_t  AppPerfFrameStatsMaxCount{static_cast<int32_t>(0x5)};

/// @brief Field EventDataBufferSize offset 0xffffffff size 0x4
static constexpr int32_t  EventDataBufferSize{static_cast<int32_t>(0xfa0)};

/// @brief Field MaxQuerySpacesByGroup offset 0xffffffff size 0x4
static constexpr int32_t  MaxQuerySpacesByGroup{static_cast<int32_t>(0x400)};

/// @brief Field OverlayShapeFlagShift offset 0xffffffff size 0x4
static constexpr int32_t  OverlayShapeFlagShift{static_cast<int32_t>(0x4)};

/// @brief Field RENDER_MODEL_NULL_KEY offset 0xffffffff size 0x4
static constexpr int32_t  RENDER_MODEL_NULL_KEY{static_cast<int32_t>(0x0)};

/// @brief Field SpaceFilterInfoComponentsMaxSize offset 0xffffffff size 0x4
static constexpr int32_t  SpaceFilterInfoComponentsMaxSize{static_cast<int32_t>(0x10)};

/// @brief Field SpaceFilterInfoIdsMaxSize offset 0xffffffff size 0x4
static constexpr int32_t  SpaceFilterInfoIdsMaxSize{static_cast<int32_t>(0x400)};

/// @brief Field SpatialEntityMaxQueryResultsPerEvent offset 0xffffffff size 0x4
static constexpr int32_t  SpatialEntityMaxQueryResultsPerEvent{static_cast<int32_t>(0x80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12397};

/// @brief Field isSupportedPlatform offset 0xffffffff size 0x1
static constexpr bool  isSupportedPlatform{true};

/// @brief Field pluginName offset 0xffffffff size 0x8
static constexpr ::ConstString  pluginName{u"OVRPlugin"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies OVRPlugin::VirtualKeyboardModelAnimationState, System.IntPtr, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/<>c__DisplayClass531_0
class CORDL_TYPE OVRPlugin___c__DisplayClass531_0 : public ::System::Object {
public:
// Declarations
/// @brief Field buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::System::IntPtr  buffer;

/// @brief Field i, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_i, put=__cordl_internal_set_i)) int32_t  i;

/// @brief Field states, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_states, put=__cordl_internal_set_states)) ::ArrayW<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>  states;

static inline ::GlobalNamespace::OVRPlugin___c__DisplayClass531_0* New_ctor() ;

/// @brief Method <GetVirtualKeyboardModelAnimationStates>b__0, addr 0xa62b508, size 0xa8, virtual false, abstract: false, final false
inline ::System::IntPtr _GetVirtualKeyboardModelAnimationStates_b__0(int32_t  bufferSize, int32_t  stateCount) ;

/// @brief Method <GetVirtualKeyboardModelAnimationStates>b__1, addr 0xa62b5b0, size 0x40, virtual false, abstract: false, final false
inline void _GetVirtualKeyboardModelAnimationStates_b__1(::by_ref<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>  state) ;

constexpr ::System::IntPtr const& __cordl_internal_get_buffer() const;

constexpr ::System::IntPtr& __cordl_internal_get_buffer() ;

constexpr int32_t const& __cordl_internal_get_i() const;

constexpr int32_t& __cordl_internal_get_i() ;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState> const& __cordl_internal_get_states() const;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>& __cordl_internal_get_states() ;

constexpr void __cordl_internal_set_buffer(::System::IntPtr  value) ;

constexpr void __cordl_internal_set_i(int32_t  value) ;

constexpr void __cordl_internal_set_states(::ArrayW<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>  value) ;

/// @brief Method .ctor, addr 0xa62b500, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin___c__DisplayClass531_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin___c__DisplayClass531_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin___c__DisplayClass531_0(OVRPlugin___c__DisplayClass531_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin___c__DisplayClass531_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin___c__DisplayClass531_0(OVRPlugin___c__DisplayClass531_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12396};

/// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___buffer;

/// @brief Field states, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>  ___states;

/// @brief Field i, offset: 0x20, size: 0x4, def value: None
 int32_t  ___i;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin___c__DisplayClass531_0, ___buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin___c__DisplayClass531_0, ___states) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin___c__DisplayClass531_0, ___i) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin___c__DisplayClass531_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/<>c
class CORDL_TYPE OVRPlugin___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::OVRPlugin___c*  __9;

static inline ::GlobalNamespace::OVRPlugin___c* New_ctor() ;

/// @brief Method <.cctor>b__822_0, addr 0xa627288, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_0() ;

/// @brief Method <.cctor>b__822_1, addr 0xa6272f8, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_1() ;

/// @brief Method <.cctor>b__822_10, addr 0xa6276d0, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_10() ;

/// @brief Method <.cctor>b__822_100, addr 0xa629d64, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_100() ;

/// @brief Method <.cctor>b__822_101, addr 0xa629dd4, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_101() ;

/// @brief Method <.cctor>b__822_102, addr 0xa629e40, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_102() ;

/// @brief Method <.cctor>b__822_103, addr 0xa629eb0, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_103() ;

/// @brief Method <.cctor>b__822_104, addr 0xa629f24, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_104() ;

/// @brief Method <.cctor>b__822_105, addr 0xa629f94, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_105() ;

/// @brief Method <.cctor>b__822_106, addr 0xa62a000, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_106() ;

/// @brief Method <.cctor>b__822_107, addr 0xa62a070, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_107() ;

/// @brief Method <.cctor>b__822_108, addr 0xa62a0e4, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_108() ;

/// @brief Method <.cctor>b__822_109, addr 0xa62a154, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_109() ;

/// @brief Method <.cctor>b__822_11, addr 0xa62773c, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_11() ;

/// @brief Method <.cctor>b__822_110, addr 0xa62a1c0, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_110() ;

/// @brief Method <.cctor>b__822_111, addr 0xa62a230, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_111() ;

/// @brief Method <.cctor>b__822_112, addr 0xa62a2a4, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_112() ;

/// @brief Method <.cctor>b__822_113, addr 0xa62a314, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_113() ;

/// @brief Method <.cctor>b__822_114, addr 0xa62a380, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_114() ;

/// @brief Method <.cctor>b__822_115, addr 0xa62a3f0, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_115() ;

/// @brief Method <.cctor>b__822_116, addr 0xa62a464, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_116() ;

/// @brief Method <.cctor>b__822_117, addr 0xa62a4d4, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_117() ;

/// @brief Method <.cctor>b__822_118, addr 0xa62a540, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_118() ;

/// @brief Method <.cctor>b__822_119, addr 0xa62a5b0, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_119() ;

/// @brief Method <.cctor>b__822_12, addr 0xa6277a8, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_12() ;

/// @brief Method <.cctor>b__822_120, addr 0xa62a624, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_120() ;

/// @brief Method <.cctor>b__822_121, addr 0xa62a694, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_121() ;

/// @brief Method <.cctor>b__822_122, addr 0xa62a700, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_122() ;

/// @brief Method <.cctor>b__822_123, addr 0xa62a770, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_123() ;

/// @brief Method <.cctor>b__822_124, addr 0xa62a7e4, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_124() ;

/// @brief Method <.cctor>b__822_125, addr 0xa62a854, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_125() ;

/// @brief Method <.cctor>b__822_126, addr 0xa62a8c0, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_126() ;

/// @brief Method <.cctor>b__822_127, addr 0xa62a930, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_127() ;

/// @brief Method <.cctor>b__822_128, addr 0xa62a9a4, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_128() ;

/// @brief Method <.cctor>b__822_129, addr 0xa62aa14, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_129() ;

/// @brief Method <.cctor>b__822_13, addr 0xa627814, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_13() ;

/// @brief Method <.cctor>b__822_130, addr 0xa62aa80, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_130() ;

/// @brief Method <.cctor>b__822_131, addr 0xa62aaf0, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_131() ;

/// @brief Method <.cctor>b__822_132, addr 0xa62ab64, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_132() ;

/// @brief Method <.cctor>b__822_133, addr 0xa62abd4, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_133() ;

/// @brief Method <.cctor>b__822_134, addr 0xa62ac40, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_134() ;

/// @brief Method <.cctor>b__822_135, addr 0xa62acb0, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_135() ;

/// @brief Method <.cctor>b__822_136, addr 0xa62ad24, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_136() ;

/// @brief Method <.cctor>b__822_137, addr 0xa62ad94, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_137() ;

/// @brief Method <.cctor>b__822_138, addr 0xa62ae00, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_138() ;

/// @brief Method <.cctor>b__822_139, addr 0xa62ae70, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_139() ;

/// @brief Method <.cctor>b__822_14, addr 0xa627880, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_14() ;

/// @brief Method <.cctor>b__822_140, addr 0xa62aee4, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_140() ;

/// @brief Method <.cctor>b__822_141, addr 0xa62af54, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_141() ;

/// @brief Method <.cctor>b__822_142, addr 0xa62afc0, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_142() ;

/// @brief Method <.cctor>b__822_143, addr 0xa62b030, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_143() ;

/// @brief Method <.cctor>b__822_144, addr 0xa62b0a4, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_144() ;

/// @brief Method <.cctor>b__822_145, addr 0xa62b114, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_145() ;

/// @brief Method <.cctor>b__822_146, addr 0xa62b180, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_146() ;

/// @brief Method <.cctor>b__822_147, addr 0xa62b1f0, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_147() ;

/// @brief Method <.cctor>b__822_148, addr 0xa62b264, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_148() ;

/// @brief Method <.cctor>b__822_149, addr 0xa62b2d4, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_149() ;

/// @brief Method <.cctor>b__822_15, addr 0xa6278ec, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_15() ;

/// @brief Method <.cctor>b__822_150, addr 0xa62b340, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_150() ;

/// @brief Method <.cctor>b__822_151, addr 0xa62b3b0, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_151() ;

/// @brief Method <.cctor>b__822_152, addr 0xa62b424, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_152() ;

/// @brief Method <.cctor>b__822_153, addr 0xa62b494, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_153() ;

/// @brief Method <.cctor>b__822_16, addr 0xa627958, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_16() ;

/// @brief Method <.cctor>b__822_17, addr 0xa6279c4, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_17() ;

/// @brief Method <.cctor>b__822_18, addr 0xa627a30, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_18() ;

/// @brief Method <.cctor>b__822_19, addr 0xa627a9c, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_19() ;

/// @brief Method <.cctor>b__822_2, addr 0xa627364, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_2() ;

/// @brief Method <.cctor>b__822_20, addr 0xa627b08, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_20() ;

/// @brief Method <.cctor>b__822_21, addr 0xa627b74, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_21() ;

/// @brief Method <.cctor>b__822_22, addr 0xa627be0, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_22() ;

/// @brief Method <.cctor>b__822_23, addr 0xa627c4c, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_23() ;

/// @brief Method <.cctor>b__822_24, addr 0xa627cb8, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_24() ;

/// @brief Method <.cctor>b__822_25, addr 0xa627d24, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_25() ;

/// @brief Method <.cctor>b__822_26, addr 0xa627d90, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_26() ;

/// @brief Method <.cctor>b__822_27, addr 0xa627dfc, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_27() ;

/// @brief Method <.cctor>b__822_28, addr 0xa627e68, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_28() ;

/// @brief Method <.cctor>b__822_29, addr 0xa627ed4, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_29() ;

/// @brief Method <.cctor>b__822_3, addr 0xa6273d4, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_3() ;

/// @brief Method <.cctor>b__822_30, addr 0xa627f44, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_30() ;

/// @brief Method <.cctor>b__822_31, addr 0xa627fb0, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_31() ;

/// @brief Method <.cctor>b__822_32, addr 0xa62801c, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_32() ;

/// @brief Method <.cctor>b__822_33, addr 0xa628088, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_33() ;

/// @brief Method <.cctor>b__822_34, addr 0xa6280f8, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_34() ;

/// @brief Method <.cctor>b__822_35, addr 0xa628164, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_35() ;

/// @brief Method <.cctor>b__822_36, addr 0xa6281d0, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_36() ;

/// @brief Method <.cctor>b__822_37, addr 0xa62823c, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_37() ;

/// @brief Method <.cctor>b__822_38, addr 0xa6282ac, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_38() ;

/// @brief Method <.cctor>b__822_39, addr 0xa628318, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_39() ;

/// @brief Method <.cctor>b__822_4, addr 0xa627440, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_4() ;

/// @brief Method <.cctor>b__822_40, addr 0xa628384, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_40() ;

/// @brief Method <.cctor>b__822_41, addr 0xa6283f0, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_41() ;

/// @brief Method <.cctor>b__822_42, addr 0xa628460, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_42() ;

/// @brief Method <.cctor>b__822_43, addr 0xa6284cc, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_43() ;

/// @brief Method <.cctor>b__822_44, addr 0xa628538, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_44() ;

/// @brief Method <.cctor>b__822_45, addr 0xa6285a4, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_45() ;

/// @brief Method <.cctor>b__822_46, addr 0xa628614, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_46() ;

/// @brief Method <.cctor>b__822_47, addr 0xa628680, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_47() ;

/// @brief Method <.cctor>b__822_48, addr 0xa6286ec, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_48() ;

/// @brief Method <.cctor>b__822_49, addr 0xa628758, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_49() ;

/// @brief Method <.cctor>b__822_5, addr 0xa6274b0, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_5() ;

/// @brief Method <.cctor>b__822_50, addr 0xa6287c8, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_50() ;

/// @brief Method <.cctor>b__822_51, addr 0xa628834, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_51() ;

/// @brief Method <.cctor>b__822_52, addr 0xa6288a0, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_52() ;

/// @brief Method <.cctor>b__822_53, addr 0xa62890c, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_53() ;

/// @brief Method <.cctor>b__822_54, addr 0xa62897c, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_54() ;

/// @brief Method <.cctor>b__822_55, addr 0xa6289e8, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_55() ;

/// @brief Method <.cctor>b__822_56, addr 0xa628a54, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_56() ;

/// @brief Method <.cctor>b__822_57, addr 0xa628ac0, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_57() ;

/// @brief Method <.cctor>b__822_58, addr 0xa628b30, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_58() ;

/// @brief Method <.cctor>b__822_59, addr 0xa628b9c, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_59() ;

/// @brief Method <.cctor>b__822_6, addr 0xa62751c, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_6() ;

/// @brief Method <.cctor>b__822_60, addr 0xa628c08, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_60() ;

/// @brief Method <.cctor>b__822_61, addr 0xa628c74, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_61() ;

/// @brief Method <.cctor>b__822_62, addr 0xa628ce4, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_62() ;

/// @brief Method <.cctor>b__822_63, addr 0xa628d50, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_63() ;

/// @brief Method <.cctor>b__822_64, addr 0xa628dbc, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_64() ;

/// @brief Method <.cctor>b__822_65, addr 0xa628e28, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_65() ;

/// @brief Method <.cctor>b__822_66, addr 0xa628e98, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_66() ;

/// @brief Method <.cctor>b__822_67, addr 0xa628f04, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_67() ;

/// @brief Method <.cctor>b__822_68, addr 0xa628f70, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_68() ;

/// @brief Method <.cctor>b__822_69, addr 0xa628fdc, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_69() ;

/// @brief Method <.cctor>b__822_7, addr 0xa62758c, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_7() ;

/// @brief Method <.cctor>b__822_70, addr 0xa62904c, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_70() ;

/// @brief Method <.cctor>b__822_71, addr 0xa6290c0, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_71() ;

/// @brief Method <.cctor>b__822_72, addr 0xa629130, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_72() ;

/// @brief Method <.cctor>b__822_73, addr 0xa6291a4, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_73() ;

/// @brief Method <.cctor>b__822_74, addr 0xa629210, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_74() ;

/// @brief Method <.cctor>b__822_75, addr 0xa629284, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_75() ;

/// @brief Method <.cctor>b__822_76, addr 0xa6292f4, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_76() ;

/// @brief Method <.cctor>b__822_77, addr 0xa629368, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_77() ;

/// @brief Method <.cctor>b__822_78, addr 0xa6293d4, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_78() ;

/// @brief Method <.cctor>b__822_79, addr 0xa629444, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_79() ;

/// @brief Method <.cctor>b__822_8, addr 0xa6275f8, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_8() ;

/// @brief Method <.cctor>b__822_80, addr 0xa6294b4, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_80() ;

/// @brief Method <.cctor>b__822_81, addr 0xa629524, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_81() ;

/// @brief Method <.cctor>b__822_82, addr 0xa629590, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_82() ;

/// @brief Method <.cctor>b__822_83, addr 0xa629600, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_83() ;

/// @brief Method <.cctor>b__822_84, addr 0xa629670, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_84() ;

/// @brief Method <.cctor>b__822_85, addr 0xa6296e0, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_85() ;

/// @brief Method <.cctor>b__822_86, addr 0xa62974c, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_86() ;

/// @brief Method <.cctor>b__822_87, addr 0xa6297bc, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_87() ;

/// @brief Method <.cctor>b__822_88, addr 0xa62982c, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_88() ;

/// @brief Method <.cctor>b__822_89, addr 0xa62989c, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_89() ;

/// @brief Method <.cctor>b__822_9, addr 0xa627664, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_9() ;

/// @brief Method <.cctor>b__822_90, addr 0xa629908, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_90() ;

/// @brief Method <.cctor>b__822_91, addr 0xa629978, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_91() ;

/// @brief Method <.cctor>b__822_92, addr 0xa6299e8, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_92() ;

/// @brief Method <.cctor>b__822_93, addr 0xa629a58, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_93() ;

/// @brief Method <.cctor>b__822_94, addr 0xa629ac4, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_94() ;

/// @brief Method <.cctor>b__822_95, addr 0xa629b34, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_95() ;

/// @brief Method <.cctor>b__822_96, addr 0xa629ba4, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_96() ;

/// @brief Method <.cctor>b__822_97, addr 0xa629c14, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_97() ;

/// @brief Method <.cctor>b__822_98, addr 0xa629c80, size 0x70, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_98() ;

/// @brief Method <.cctor>b__822_99, addr 0xa629cf0, size 0x74, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone __cctor_b__822_99() ;

/// @brief Method .ctor, addr 0xa627280, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::OVRPlugin___c* getStaticF___9() ;

static inline void setStaticF___9(::GlobalNamespace::OVRPlugin___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin___c(OVRPlugin___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin___c(OVRPlugin___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12395};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_129_0
class CORDL_TYPE OVRPlugin_OVRP_1_129_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_129_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_129_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_129_0(OVRPlugin_OVRP_1_129_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_129_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_129_0(OVRPlugin_OVRP_1_129_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12394};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_129_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_128_0
class CORDL_TYPE OVRPlugin_OVRP_1_128_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_128_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_128_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_128_0(OVRPlugin_OVRP_1_128_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_128_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_128_0(OVRPlugin_OVRP_1_128_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12393};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_128_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_127_0
class CORDL_TYPE OVRPlugin_OVRP_1_127_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_127_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_127_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_127_0(OVRPlugin_OVRP_1_127_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_127_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_127_0(OVRPlugin_OVRP_1_127_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12392};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_127_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_126_0
class CORDL_TYPE OVRPlugin_OVRP_1_126_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_126_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_126_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_126_0(OVRPlugin_OVRP_1_126_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_126_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_126_0(OVRPlugin_OVRP_1_126_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12391};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_126_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_125_0
class CORDL_TYPE OVRPlugin_OVRP_1_125_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_125_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_125_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_125_0(OVRPlugin_OVRP_1_125_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_125_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_125_0(OVRPlugin_OVRP_1_125_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12390};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_125_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_124_0
class CORDL_TYPE OVRPlugin_OVRP_1_124_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_124_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_124_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_124_0(OVRPlugin_OVRP_1_124_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_124_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_124_0(OVRPlugin_OVRP_1_124_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12389};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_124_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_123_0
class CORDL_TYPE OVRPlugin_OVRP_1_123_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_123_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_123_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_123_0(OVRPlugin_OVRP_1_123_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_123_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_123_0(OVRPlugin_OVRP_1_123_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12388};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_123_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_122_0
class CORDL_TYPE OVRPlugin_OVRP_1_122_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_122_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_122_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_122_0(OVRPlugin_OVRP_1_122_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_122_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_122_0(OVRPlugin_OVRP_1_122_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12387};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_122_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_121_0
class CORDL_TYPE OVRPlugin_OVRP_1_121_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_121_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_121_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_121_0(OVRPlugin_OVRP_1_121_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_121_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_121_0(OVRPlugin_OVRP_1_121_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12386};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_121_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_120_0
class CORDL_TYPE OVRPlugin_OVRP_1_120_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_120_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_120_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_120_0(OVRPlugin_OVRP_1_120_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_120_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_120_0(OVRPlugin_OVRP_1_120_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12385};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_120_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_119_0
class CORDL_TYPE OVRPlugin_OVRP_1_119_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_119_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_119_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_119_0(OVRPlugin_OVRP_1_119_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_119_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_119_0(OVRPlugin_OVRP_1_119_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12384};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_119_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_118_0
class CORDL_TYPE OVRPlugin_OVRP_1_118_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_118_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_118_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_118_0(OVRPlugin_OVRP_1_118_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_118_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_118_0(OVRPlugin_OVRP_1_118_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12383};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_118_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_117_0
class CORDL_TYPE OVRPlugin_OVRP_1_117_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_117_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_117_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_117_0(OVRPlugin_OVRP_1_117_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_117_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_117_0(OVRPlugin_OVRP_1_117_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12382};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_117_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_116_0
class CORDL_TYPE OVRPlugin_OVRP_1_116_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_116_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_116_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_116_0(OVRPlugin_OVRP_1_116_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_116_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_116_0(OVRPlugin_OVRP_1_116_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12381};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_116_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_115_0
class CORDL_TYPE OVRPlugin_OVRP_1_115_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_115_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_115_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_115_0(OVRPlugin_OVRP_1_115_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_115_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_115_0(OVRPlugin_OVRP_1_115_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12380};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_115_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_114_0
class CORDL_TYPE OVRPlugin_OVRP_1_114_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_114_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_114_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_114_0(OVRPlugin_OVRP_1_114_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_114_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_114_0(OVRPlugin_OVRP_1_114_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12379};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_114_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_113_0
class CORDL_TYPE OVRPlugin_OVRP_1_113_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_113_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_113_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_113_0(OVRPlugin_OVRP_1_113_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_113_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_113_0(OVRPlugin_OVRP_1_113_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12378};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_113_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_112_0
class CORDL_TYPE OVRPlugin_OVRP_1_112_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_112_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_112_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_112_0(OVRPlugin_OVRP_1_112_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_112_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_112_0(OVRPlugin_OVRP_1_112_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12377};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_112_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_111_0
class CORDL_TYPE OVRPlugin_OVRP_1_111_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_111_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_111_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_111_0(OVRPlugin_OVRP_1_111_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_111_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_111_0(OVRPlugin_OVRP_1_111_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12376};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_111_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_110_0
class CORDL_TYPE OVRPlugin_OVRP_1_110_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_CreateMarkerTrackerAsync, addr 0xa6264f4, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_CreateMarkerTrackerAsync(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_MarkerTrackerCreateInfo>  createInfo, ::by_ref<uint64_t>  future) ;

/// @brief Method ovrp_CreateMarkerTrackerComplete, addr 0xa626578, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_CreateMarkerTrackerComplete(uint64_t  future, ::by_ref<::GlobalNamespace::OVRPlugin_MarkerTrackerCreateCompletion>  completion) ;

/// @brief Method ovrp_DestroyMarkerTracker, addr 0xa6265fc, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_DestroyMarkerTracker(uint64_t  tracker) ;

/// @brief Method ovrp_GetMarkerTrackingSupported, addr 0xa6266fc, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetMarkerTrackingSupported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  value) ;

/// @brief Method ovrp_GetSpaceMarkerPayload, addr 0xa626678, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSpaceMarkerPayload(uint64_t  space, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceMarkerPayload>  payload) ;

/// @brief Method ovrp_SendUnifiedEventV2, addr 0xa626324, size 0x1d0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SendUnifiedEventV2(::GlobalNamespace::OVRPlugin_Bool  isEssential, ::StringW  productType, ::StringW  eventName, ::StringW  event_metadata_json, ::StringW  project_name, ::StringW  event_entrypoint, ::StringW  project_guid, ::StringW  event_type, ::StringW  event_target, ::StringW  error_msg, ::StringW  is_internal_build, ::StringW  batch_mode) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_110_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_110_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_110_0(OVRPlugin_OVRP_1_110_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_110_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_110_0(OVRPlugin_OVRP_1_110_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12375};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_110_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_109_0
class CORDL_TYPE OVRPlugin_OVRP_1_109_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_AllowVisibilityMask, addr 0xa626220, size 0x7c, virtual false, abstract: false, final false
static inline void ovrp_AllowVisibilityMask(::GlobalNamespace::OVRPlugin_Bool  enabled) ;

/// @brief Method ovrp_GetStationaryReferenceSpaceId, addr 0xa625fe8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetStationaryReferenceSpaceId(::by_ref<::System::Guid>  generationId) ;

/// @brief Method ovrp_SendUnifiedEvent, addr 0xa626064, size 0x1bc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SendUnifiedEvent(::GlobalNamespace::OVRPlugin_Bool  isEssential, ::StringW  productType, ::StringW  eventName, ::StringW  event_metadata_json, ::StringW  project_name, ::StringW  event_entrypoint, ::StringW  project_guid, ::StringW  event_type, ::StringW  event_target, ::StringW  error_msg, ::StringW  is_internal) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_109_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_109_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_109_0(OVRPlugin_OVRP_1_109_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_109_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_109_0(OVRPlugin_OVRP_1_109_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12374};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_109_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_108_0
class CORDL_TYPE OVRPlugin_OVRP_1_108_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_UnityOpenXR_OnAppSpaceChange2, addr 0xa625edc, size 0x84, virtual false, abstract: false, final false
static inline void ovrp_UnityOpenXR_OnAppSpaceChange2(uint64_t  xrSpace, int32_t  spaceFlags) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_108_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_108_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_108_0(OVRPlugin_OVRP_1_108_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_108_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_108_0(OVRPlugin_OVRP_1_108_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12373};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_108_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_107_0
class CORDL_TYPE OVRPlugin_OVRP_1_107_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetAppSpace, addr 0xa625dd8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetAppSpace(::by_ref<uint64_t>  appSpace) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_107_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_107_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_107_0(OVRPlugin_OVRP_1_107_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_107_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_107_0(OVRPlugin_OVRP_1_107_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12372};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_107_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_106_0
class CORDL_TYPE OVRPlugin_OVRP_1_106_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetConsentMarkdownText, addr 0xa625980, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetConsentMarkdownText(::System::IntPtr  markdownText) ;

/// @brief Method ovrp_GetConsentNotificationMarkdownText, addr 0xa6259fc, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetConsentNotificationMarkdownText(::System::IntPtr  consentChangeLocationMarkdown, ::System::IntPtr  markDownText) ;

/// @brief Method ovrp_GetConsentSettingsChangeText, addr 0xa625cd4, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetConsentSettingsChangeText(::System::IntPtr  consentSettingsChangeText) ;

/// @brief Method ovrp_GetConsentTitle, addr 0xa625904, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetConsentTitle(::System::IntPtr  title) ;

/// @brief Method ovrp_GetHandTrackingState, addr 0xa6256d4, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetHandTrackingState(::GlobalNamespace::OVRPlugin_Step  stepId, int32_t  frameIndex, ::GlobalNamespace::OVRPlugin_Hand  hand, ::by_ref<::GlobalNamespace::OVRPlugin_HandTrackingStateInternal>  handState) ;

/// @brief Method ovrp_GetUnifiedConsent, addr 0xa625888, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_OptionalBool ovrp_GetUnifiedConsent(int32_t  toolId) ;

/// @brief Method ovrp_IsConsentSettingsChangeEnabled, addr 0xa625afc, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_IsConsentSettingsChangeEnabled(int32_t  toolId) ;

/// @brief Method ovrp_SaveUnifiedConsent, addr 0xa625770, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SaveUnifiedConsent(int32_t  toolId, ::GlobalNamespace::OVRPlugin_Bool  consentValue) ;

/// @brief Method ovrp_SaveUnifiedConsentWithOlderVersion, addr 0xa6257f4, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SaveUnifiedConsentWithOlderVersion(int32_t  toolId, ::GlobalNamespace::OVRPlugin_Bool  consentValue, int32_t  consentVersion) ;

/// @brief Method ovrp_SendMicrogestureHint, addr 0xa625bf4, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SendMicrogestureHint() ;

/// @brief Method ovrp_SetNotificationShown, addr 0xa625c58, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetNotificationShown(int32_t  tool) ;

/// @brief Method ovrp_ShouldShowTelemetryConsentWindow, addr 0xa625a80, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_ShouldShowTelemetryConsentWindow(int32_t  toolId) ;

/// @brief Method ovrp_ShouldShowTelemetryNotification, addr 0xa625b78, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_ShouldShowTelemetryNotification(int32_t  toolId) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_106_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_106_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_106_0(OVRPlugin_OVRP_1_106_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_106_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_106_0(OVRPlugin_OVRP_1_106_0 const& ) = delete;

/// @brief Field OVRP_CONSENT_NOTIFICATION_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  OVRP_CONSENT_NOTIFICATION_MAX_LENGTH{static_cast<int32_t>(0x400)};

/// @brief Field OVRP_CONSENT_SETTINGS_CHANGE_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  OVRP_CONSENT_SETTINGS_CHANGE_MAX_LENGTH{static_cast<int32_t>(0x400)};

/// @brief Field OVRP_CONSENT_TEXT_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  OVRP_CONSENT_TEXT_MAX_LENGTH{static_cast<int32_t>(0x800)};

/// @brief Field OVRP_CONSENT_TITLE_MAX_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  OVRP_CONSENT_TITLE_MAX_LENGTH{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12371};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_106_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_105_0
class CORDL_TYPE OVRPlugin_OVRP_1_105_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_QplMarkerStartForJoin, addr 0xa625584, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_QplMarkerStartForJoin(int32_t  markerId, ::StringW  joinId, ::GlobalNamespace::OVRPlugin_Bool  cancelMarkerIfAppBackgrounded, int32_t  instanceKey, int64_t  timestampMs) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_105_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_105_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_105_0(OVRPlugin_OVRP_1_105_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_105_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_105_0(OVRPlugin_OVRP_1_105_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12370};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_105_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_104_0
class CORDL_TYPE OVRPlugin_OVRP_1_104_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_BeginProfilingRegion, addr 0xa625388, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_BeginProfilingRegion(::StringW  regionName) ;

/// @brief Method ovrp_CreateDynamicObjectTracker, addr 0xa625090, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_CreateDynamicObjectTracker(::by_ref<uint64_t>  tracker) ;

/// @brief Method ovrp_DestroyDynamicObjectTracker, addr 0xa62510c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_DestroyDynamicObjectTracker(uint64_t  tracker) ;

/// @brief Method ovrp_EndProfilingRegion, addr 0xa62541c, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_EndProfilingRegion() ;

/// @brief Method ovrp_GetDynamicObjectKeyboardSupported, addr 0xa62530c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetDynamicObjectKeyboardSupported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  value) ;

/// @brief Method ovrp_GetDynamicObjectTrackerSupported, addr 0xa625290, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetDynamicObjectTrackerSupported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  value) ;

/// @brief Method ovrp_GetFaceTrackingVisemesSupported, addr 0xa624f98, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetFaceTrackingVisemesSupported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  faceTrackingVisemesSupported) ;

/// @brief Method ovrp_GetFaceVisemesState, addr 0xa624f04, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetFaceVisemesState(::GlobalNamespace::OVRPlugin_Step  stepId, int32_t  frameIndex, ::by_ref<::GlobalNamespace::OVRPlugin_FaceVisemesStateInternal>  faceVisemesState) ;

/// @brief Method ovrp_GetOpenXRInstanceProcAddrFunc, addr 0xa624d80, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetOpenXRInstanceProcAddrFunc(::by_ref<::System::IntPtr>  func) ;

/// @brief Method ovrp_GetSpaceDynamicObjectData, addr 0xa62520c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSpaceDynamicObjectData(::by_ref<uint64_t>  space, ::by_ref<::GlobalNamespace::OVRPlugin_DynamicObjectData>  data) ;

/// @brief Method ovrp_RegisterOpenXREventHandler, addr 0xa624dfc, size 0x88, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_RegisterOpenXREventHandler(::GlobalNamespace::OVRPlugin_OpenXREventDelegateType*  eventHandler, ::System::IntPtr  context) ;

/// @brief Method ovrp_SetDynamicObjectTrackedClasses, addr 0xa625188, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetDynamicObjectTrackedClasses(uint64_t  tracker, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_DynamicObjectTrackedClassesSetInfo>  setInfo) ;

/// @brief Method ovrp_SetExternalLayerDynresEnabled, addr 0xa625480, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetExternalLayerDynresEnabled(::GlobalNamespace::OVRPlugin_Bool  enabled) ;

/// @brief Method ovrp_SetFaceTrackingVisemesEnabled, addr 0xa625014, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetFaceTrackingVisemesEnabled(::GlobalNamespace::OVRPlugin_Bool  enabled) ;

/// @brief Method ovrp_UnregisterOpenXREventHandler, addr 0xa624e84, size 0x80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_UnregisterOpenXREventHandler(::GlobalNamespace::OVRPlugin_OpenXREventDelegateType*  eventHandler) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_104_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_104_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_104_0(OVRPlugin_OVRP_1_104_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_104_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_104_0(OVRPlugin_OVRP_1_104_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12369};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_104_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_103_0
class CORDL_TYPE OVRPlugin_OVRP_1_103_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_CancelFuture, addr 0xa624908, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_CancelFuture(uint64_t  future) ;

/// @brief Method ovrp_GetHandState3, addr 0xa6247e8, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetHandState3(::GlobalNamespace::OVRPlugin_Step  stepId, int32_t  frameIndex, ::GlobalNamespace::OVRPlugin_Hand  hand, ::by_ref<::GlobalNamespace::OVRPlugin_HandState3Internal>  handState) ;

/// @brief Method ovrp_PollFuture, addr 0xa624884, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_PollFuture(uint64_t  future, ::by_ref<::GlobalNamespace::OVRPlugin_FutureState>  state) ;

/// @brief Method ovrp_QuerySpaces2, addr 0xa624c00, size 0xf8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_QuerySpaces2(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>  queryInfo, ::by_ref<uint64_t>  requestId) ;

/// @brief Method ovrp_SetHandSkeletonVersion, addr 0xa62476c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetHandSkeletonVersion(::GlobalNamespace::OVRHandSkeletonVersion  handSkeletonVersion) ;

/// @brief Method ovrp_ShareSpaces2, addr 0xa624b7c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_ShareSpaces2(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_ShareSpacesInfo>  info, ::by_ref<uint64_t>  requestId) ;

/// @brief Method ovrp_StartColocationAdvertisement, addr 0xa624984, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_StartColocationAdvertisement(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_ColocationSessionStartAdvertisementInfo>  info, ::by_ref<uint64_t>  requestId) ;

/// @brief Method ovrp_StartColocationDiscovery, addr 0xa624a84, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_StartColocationDiscovery(::by_ref<uint64_t>  requestId) ;

/// @brief Method ovrp_StopColocationAdvertisement, addr 0xa624a08, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_StopColocationAdvertisement(::by_ref<uint64_t>  requestId) ;

/// @brief Method ovrp_StopColocationDiscovery, addr 0xa624b00, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_StopColocationDiscovery(::by_ref<uint64_t>  requestId) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_103_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_103_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_103_0(OVRPlugin_OVRP_1_103_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_103_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_103_0(OVRPlugin_OVRP_1_103_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12368};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_103_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_102_0
class CORDL_TYPE OVRPlugin_OVRP_1_102_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_102_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_102_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_102_0(OVRPlugin_OVRP_1_102_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_102_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_102_0(OVRPlugin_OVRP_1_102_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12367};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_102_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_101_0
class CORDL_TYPE OVRPlugin_OVRP_1_101_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_101_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_101_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_101_0(OVRPlugin_OVRP_1_101_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_101_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_101_0(OVRPlugin_OVRP_1_101_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12366};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_101_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_100_0
class CORDL_TYPE OVRPlugin_OVRP_1_100_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetActionStatePose2, addr 0xa624474, size 0xac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetActionStatePose2(::StringW  path, ::GlobalNamespace::OVRPlugin_Hand  hand, ::by_ref<::GlobalNamespace::OVRPlugin_Posef>  value) ;

/// @brief Method ovrp_GetCurrentInteractionProfileName, addr 0xa6243f0, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetCurrentInteractionProfileName(::GlobalNamespace::OVRPlugin_Hand  hand, ::System::IntPtr  interactionProfile) ;

/// @brief Method ovrp_TriggerVibrationAction, addr 0xa624520, size 0xb4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_TriggerVibrationAction(::StringW  actionName, ::GlobalNamespace::OVRPlugin_Hand  hand, float_t  duration, float_t  amplitude) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_100_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_100_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_100_0(OVRPlugin_OVRP_1_100_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_100_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_100_0(OVRPlugin_OVRP_1_100_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12365};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_100_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_99_0
class CORDL_TYPE OVRPlugin_OVRP_1_99_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetTrackingPoseEnabledForInvisibleSession, addr 0xa624270, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetTrackingPoseEnabledForInvisibleSession(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  trackingPoseEnabled) ;

/// @brief Method ovrp_SetTrackingPoseEnabledForInvisibleSession, addr 0xa6242ec, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetTrackingPoseEnabledForInvisibleSession(::GlobalNamespace::OVRPlugin_Bool  trackingPoseEnabled) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_99_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_99_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_99_0(OVRPlugin_OVRP_1_99_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_99_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_99_0(OVRPlugin_OVRP_1_99_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12364};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_99_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_98_0
class CORDL_TYPE OVRPlugin_OVRP_1_98_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetBoundaryVisibility, addr 0xa62416c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetBoundaryVisibility(::by_ref<::GlobalNamespace::OVRPlugin_BoundaryVisibility>  boundaryVisibility) ;

/// @brief Method ovrp_RequestBoundaryVisibility, addr 0xa6240f0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_RequestBoundaryVisibility(::GlobalNamespace::OVRPlugin_BoundaryVisibility  boundaryVisibility) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_98_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_98_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_98_0(OVRPlugin_OVRP_1_98_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_98_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_98_0(OVRPlugin_OVRP_1_98_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12363};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_98_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_97_0
class CORDL_TYPE OVRPlugin_OVRP_1_97_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_DiscoverSpaces, addr 0xa623e20, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_DiscoverSpaces(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_SpaceDiscoveryInfo>  info, ::by_ref<uint64_t>  requestId) ;

/// @brief Method ovrp_EraseSpaces, addr 0xa623fbc, size 0xac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_EraseSpaces(uint32_t  spaceCount, uint64_t*  spaces, uint32_t  uuidCount, ::System::Guid*  uuids, ::by_ref<uint64_t>  requestId) ;

/// @brief Method ovrp_RetrieveSpaceDiscoveryResults, addr 0xa623ea4, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_RetrieveSpaceDiscoveryResults(uint64_t  requestId, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceDiscoveryResults>  results) ;

/// @brief Method ovrp_SaveSpaces, addr 0xa623f28, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SaveSpaces(uint32_t  spaceCount, uint64_t*  spaces, ::by_ref<uint64_t>  requestId) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_97_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_97_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_97_0(OVRPlugin_OVRP_1_97_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_97_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_97_0(OVRPlugin_OVRP_1_97_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12362};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_97_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_96_0
class CORDL_TYPE OVRPlugin_OVRP_1_96_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_QplMarkerAnnotationVariant, addr 0xa623c10, size 0xb8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_QplMarkerAnnotationVariant(int32_t  markerId, ::StringW  annotationKey, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::Qpl_OVRPlugin_Variant>  annotationValue, int32_t  instanceKey) ;

/// @brief Method ovrp_QplMarkerPointData, addr 0xa623cc8, size 0xd0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_QplMarkerPointData(int32_t  markerId, ::StringW  name, ::GlobalNamespace::Qpl_OVRPlugin_Annotation*  annotations, int32_t  annotationCount, int32_t  instanceKey, int64_t  timestampMs) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_96_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_96_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_96_0(OVRPlugin_OVRP_1_96_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_96_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_96_0(OVRPlugin_OVRP_1_96_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12361};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_96_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_95_0
class CORDL_TYPE OVRPlugin_OVRP_1_95_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetActionStateBoolean, addr 0xa623938, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetActionStateBoolean(::StringW  path, ::by_ref<::GlobalNamespace::OVRPlugin_Bool>  value) ;

/// @brief Method ovrp_GetActionStateFloat, addr 0xa6239d4, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetActionStateFloat(::StringW  path, ::by_ref<float_t>  value) ;

/// @brief Method ovrp_GetActionStatePose, addr 0xa623a70, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetActionStatePose(::StringW  path, ::by_ref<::GlobalNamespace::OVRPlugin_Posef>  value) ;

/// @brief Method ovrp_SetDeveloperTelemetryConsent, addr 0xa623b0c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetDeveloperTelemetryConsent(::GlobalNamespace::OVRPlugin_Bool  consent) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_95_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_95_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_95_0(OVRPlugin_OVRP_1_95_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_95_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_95_0(OVRPlugin_OVRP_1_95_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12360};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_95_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_94_0
class CORDL_TYPE OVRPlugin_OVRP_1_94_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_94_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_94_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_94_0(OVRPlugin_OVRP_1_94_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_94_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_94_0(OVRPlugin_OVRP_1_94_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12359};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_94_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_93_0
class CORDL_TYPE OVRPlugin_OVRP_1_93_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_IsWideMotionModeHandPosesEnabled, addr 0xa6237ac, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_IsWideMotionModeHandPosesEnabled(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  enabled) ;

/// @brief Method ovrp_SetWideMotionModeHandPoses, addr 0xa623730, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetWideMotionModeHandPoses(::GlobalNamespace::OVRPlugin_Bool  wideMotionModeHandPoses) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_93_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_93_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_93_0(OVRPlugin_OVRP_1_93_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_93_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_93_0(OVRPlugin_OVRP_1_93_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12358};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_93_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_92_0
class CORDL_TYPE OVRPlugin_OVRP_1_92_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetBodyState4, addr 0xa623498, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetBodyState4(::GlobalNamespace::OVRPlugin_Step  stepId, int32_t  frameIndex, ::by_ref<::GlobalNamespace::OVRPlugin_BodyState4Internal>  bodyState) ;

/// @brief Method ovrp_GetFaceState2, addr 0xa6230c4, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetFaceState2(::GlobalNamespace::OVRPlugin_Step  stepId, int32_t  frameIndex, ::by_ref<::GlobalNamespace::OVRPlugin_FaceState2Internal>  faceState) ;

/// @brief Method ovrp_GetFaceTracking2Enabled, addr 0xa623248, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetFaceTracking2Enabled(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  faceTracking2Enabled) ;

/// @brief Method ovrp_GetFaceTracking2Supported, addr 0xa6232c4, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetFaceTracking2Supported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  faceTracking2Enabled) ;

/// @brief Method ovrp_GetSkeleton3, addr 0xa62352c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSkeleton3(::GlobalNamespace::OVRPlugin_SkeletonType  skeletonType, ::by_ref<::GlobalNamespace::OVRPlugin_Skeleton3Internal>  skeleton) ;

/// @brief Method ovrp_QplSetConsent, addr 0xa62362c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_QplSetConsent(::GlobalNamespace::OVRPlugin_Bool  consent) ;

/// @brief Method ovrp_RequestBodyTrackingFidelity, addr 0xa623340, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_RequestBodyTrackingFidelity(::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  fidelity) ;

/// @brief Method ovrp_ResetBodyTrackingCalibration, addr 0xa623434, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_ResetBodyTrackingCalibration() ;

/// @brief Method ovrp_StartBodyTracking2, addr 0xa6235b0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_StartBodyTracking2(::GlobalNamespace::OVRPlugin_BodyJointSet  jointSet) ;

/// @brief Method ovrp_StartFaceTracking2, addr 0xa623158, size 0x8c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_StartFaceTracking2(::ArrayW<::GlobalNamespace::OVRPlugin_FaceTrackingDataSource>  requestedDataSources, uint32_t  requestedDataSourcesCount) ;

/// @brief Method ovrp_StopFaceTracking2, addr 0xa6231e4, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_StopFaceTracking2() ;

/// @brief Method ovrp_SuggestBodyTrackingCalibrationOverride, addr 0xa6233bc, size 0x78, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SuggestBodyTrackingCalibrationOverride(::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationInfo  calibrationInfo) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_92_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_92_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_92_0(OVRPlugin_OVRP_1_92_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_92_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_92_0(OVRPlugin_OVRP_1_92_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12357};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_92_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_91_0
class CORDL_TYPE OVRPlugin_OVRP_1_91_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_91_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_91_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_91_0(OVRPlugin_OVRP_1_91_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_91_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_91_0(OVRPlugin_OVRP_1_91_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12356};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_91_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_90_0
class CORDL_TYPE OVRPlugin_OVRP_1_90_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_90_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_90_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_90_0(OVRPlugin_OVRP_1_90_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_90_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_90_0(OVRPlugin_OVRP_1_90_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12355};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_90_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_89_0
class CORDL_TYPE OVRPlugin_OVRP_1_89_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_89_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_89_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_89_0(OVRPlugin_OVRP_1_89_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_89_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_89_0(OVRPlugin_OVRP_1_89_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12354};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_89_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_88_0
class CORDL_TYPE OVRPlugin_OVRP_1_88_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_SetSimultaneousHandsAndControllersEnabled, addr 0xa622e28, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetSimultaneousHandsAndControllersEnabled(::GlobalNamespace::OVRPlugin_Bool  enabled) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_88_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_88_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_88_0(OVRPlugin_OVRP_1_88_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_88_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_88_0(OVRPlugin_OVRP_1_88_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12353};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_88_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_87_0
class CORDL_TYPE OVRPlugin_OVRP_1_87_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_AreControllerDrivenHandPosesNatural, addr 0xa622d24, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_AreControllerDrivenHandPosesNatural(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  natural) ;

/// @brief Method ovrp_GetPassthroughPreferences, addr 0xa622bb0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetPassthroughPreferences(::by_ref<::GlobalNamespace::OVRPlugin_PassthroughPreferences>  preferences) ;

/// @brief Method ovrp_SetControllerDrivenHandPosesAreNatural, addr 0xa622ca8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetControllerDrivenHandPosesAreNatural(::GlobalNamespace::OVRPlugin_Bool  controllerDrivenHandPosesAreNatural) ;

/// @brief Method ovrp_SetEyeBufferSharpenType, addr 0xa622c2c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetEyeBufferSharpenType(::GlobalNamespace::OVRPlugin_LayerSharpenType  sharpenType) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_87_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_87_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_87_0(OVRPlugin_OVRP_1_87_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_87_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_87_0(OVRPlugin_OVRP_1_87_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12352};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_87_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_86_0
class CORDL_TYPE OVRPlugin_OVRP_1_86_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_AreHandPosesGeneratedByControllerData, addr 0xa622884, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_AreHandPosesGeneratedByControllerData(::GlobalNamespace::OVRPlugin_Step  stepId, ::GlobalNamespace::OVRPlugin_Node  nodeId, ::by_ref<::GlobalNamespace::OVRPlugin_Bool>  isGeneratedByControllerData) ;

/// @brief Method ovrp_GetControllerIsInHand, addr 0xa622a94, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetControllerIsInHand(::GlobalNamespace::OVRPlugin_Step  stepId, ::GlobalNamespace::OVRPlugin_Node  nodeId, ::by_ref<::GlobalNamespace::OVRPlugin_Bool>  isInHand) ;

/// @brief Method ovrp_GetCurrentDetachedInteractionProfile, addr 0xa622a10, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetCurrentDetachedInteractionProfile(::GlobalNamespace::OVRPlugin_Hand  hand, ::by_ref<::GlobalNamespace::OVRPlugin_InteractionProfile>  interactionProfile) ;

/// @brief Method ovrp_IsControllerDrivenHandPosesEnabled, addr 0xa622808, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_IsControllerDrivenHandPosesEnabled(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  enabled) ;

/// @brief Method ovrp_IsMultimodalHandsControllersSupported, addr 0xa622994, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_IsMultimodalHandsControllersSupported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  supported) ;

/// @brief Method ovrp_SetControllerDrivenHandPoses, addr 0xa62278c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetControllerDrivenHandPoses(::GlobalNamespace::OVRPlugin_Bool  controllerDrivenHandPoses) ;

/// @brief Method ovrp_SetMultimodalHandsControllersSupported, addr 0xa622918, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetMultimodalHandsControllersSupported(::GlobalNamespace::OVRPlugin_Bool  supported) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_86_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_86_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_86_0(OVRPlugin_OVRP_1_86_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_86_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_86_0(OVRPlugin_OVRP_1_86_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12351};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_86_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_85_0
class CORDL_TYPE OVRPlugin_OVRP_1_85_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetPassthroughCapabilities, addr 0xa622688, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetPassthroughCapabilities(::by_ref<::GlobalNamespace::OVRPlugin_PassthroughCapabilities>  capabilityFlags) ;

/// @brief Method ovrp_OnEditorShutdown, addr 0xa622624, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_OnEditorShutdown() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_85_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_85_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_85_0(OVRPlugin_OVRP_1_85_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_85_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_85_0(OVRPlugin_OVRP_1_85_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12350};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_85_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_84_0
class CORDL_TYPE OVRPlugin_OVRP_1_84_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_CreatePassthroughColorLut, addr 0xa621df8, size 0xac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_CreatePassthroughColorLut(::GlobalNamespace::OVRPlugin_PassthroughColorLutChannels  channels, uint32_t  resolution, ::GlobalNamespace::OVRPlugin_PassthroughColorLutData  data, ::by_ref<uint64_t>  colorLut) ;

/// @brief Method ovrp_DestroyPassthroughColorLut, addr 0xa621ea4, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_DestroyPassthroughColorLut(uint64_t  colorLut) ;

/// @brief Method ovrp_GetEyeLayerRecommendedResolution, addr 0xa6220bc, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetEyeLayerRecommendedResolution(::by_ref<::GlobalNamespace::OVRPlugin_Sizei>  recommendedDimensions) ;

/// @brief Method ovrp_GetLayerRecommendedResolution, addr 0xa622038, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetLayerRecommendedResolution(int32_t  layerId, ::by_ref<::GlobalNamespace::OVRPlugin_Sizei>  recommendedDimensions) ;

/// @brief Method ovrp_QplCreateMarkerHandle, addr 0xa622484, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_QplCreateMarkerHandle(::StringW  name, ::by_ref<int32_t>  nameHandle) ;

/// @brief Method ovrp_QplDestroyMarkerHandle, addr 0xa622520, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_QplDestroyMarkerHandle(int32_t  nameHandle) ;

/// @brief Method ovrp_QplMarkerAnnotation, addr 0xa6223bc, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_QplMarkerAnnotation(int32_t  markerId, ::StringW  annotationKey, ::StringW  annotationValue, int32_t  instanceKey) ;

/// @brief Method ovrp_QplMarkerEnd, addr 0xa6221cc, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_QplMarkerEnd(int32_t  markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType  resultTypeId, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method ovrp_QplMarkerPoint, addr 0xa622268, size 0xb8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_QplMarkerPoint(int32_t  markerId, ::StringW  name, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method ovrp_QplMarkerPointCached, addr 0xa622320, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_QplMarkerPointCached(int32_t  markerId, int32_t  nameHandle, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method ovrp_QplMarkerStart, addr 0xa622138, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_QplMarkerStart(int32_t  markerId, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method ovrp_SetInsightPassthroughStyle2, addr 0xa621fb4, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetInsightPassthroughStyle2(int32_t  layerId, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::OVRPlugin_InsightPassthroughStyle2>  style) ;

/// @brief Method ovrp_UpdatePassthroughColorLut, addr 0xa621f20, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_UpdatePassthroughColorLut(uint64_t  colorLut, ::GlobalNamespace::OVRPlugin_PassthroughColorLutData  data) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_84_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_84_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_84_0(OVRPlugin_OVRP_1_84_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_84_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_84_0(OVRPlugin_OVRP_1_84_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12349};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_84_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_83_0
class CORDL_TYPE OVRPlugin_OVRP_1_83_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetControllerState6, addr 0xa621af4, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetControllerState6(uint32_t  controllerMask, ::by_ref<::GlobalNamespace::OVRPlugin_ControllerState6>  controllerState) ;

/// @brief Method ovrp_GetVirtualKeyboardDirtyTextures, addr 0xa621bf4, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetVirtualKeyboardDirtyTextures(::by_ref<::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureIdsInternal>  textureIds) ;

/// @brief Method ovrp_GetVirtualKeyboardModelAnimationStates, addr 0xa621b78, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetVirtualKeyboardModelAnimationStates(::by_ref<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStatesInternal>  animationStates) ;

/// @brief Method ovrp_GetVirtualKeyboardTextureData, addr 0xa621c70, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetVirtualKeyboardTextureData(uint64_t  textureId, ::by_ref<::GlobalNamespace::OVRPlugin_VirtualKeyboardTextureData>  textureData) ;

/// @brief Method ovrp_SetVirtualKeyboardModelVisibility, addr 0xa621cf4, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetVirtualKeyboardModelVisibility(::by_ref<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility>  visibility) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_83_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_83_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_83_0(OVRPlugin_OVRP_1_83_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_83_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_83_0(OVRPlugin_OVRP_1_83_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12348};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_83_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_82_0
class CORDL_TYPE OVRPlugin_OVRP_1_82_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetSpaceTriangleMesh, addr 0xa6219e8, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSpaceTriangleMesh(::by_ref<uint64_t>  space, ::by_ref<::GlobalNamespace::OVRPlugin_TriangleMeshInternal>  triangleMeshInternal) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_82_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_82_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_82_0(OVRPlugin_OVRP_1_82_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_82_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_82_0(OVRPlugin_OVRP_1_82_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12347};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_82_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_81_0
class CORDL_TYPE OVRPlugin_OVRP_1_81_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_81_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_81_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_81_0(OVRPlugin_OVRP_1_81_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_81_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_81_0(OVRPlugin_OVRP_1_81_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12346};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_81_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_79_0
class CORDL_TYPE OVRPlugin_OVRP_1_79_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_CreateSpaceUser, addr 0xa6216c4, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_CreateSpaceUser(/* [IsReadOnly] */ ::by_ref<uint64_t>  spaceUserId, ::by_ref<uint64_t>  spaceUserHandle) ;

/// @brief Method ovrp_DeclareUser, addr 0xa621858, size 0x80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_DeclareUser(/* [IsReadOnly] */ ::by_ref<uint64_t>  userId, ::by_ref<uint64_t>  userHandle) ;

/// @brief Method ovrp_DestroySpaceUser, addr 0xa621748, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_DestroySpaceUser(/* [IsReadOnly] */ ::by_ref<uint64_t>  userHandle) ;

/// @brief Method ovrp_GetSpaceUserId, addr 0xa621640, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSpaceUserId(/* [IsReadOnly] */ ::by_ref<uint64_t>  spaceUserHandle, ::by_ref<uint64_t>  spaceUserId) ;

/// @brief Method ovrp_LocateSpace2, addr 0xa6217c4, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_LocateSpace2(::by_ref<::GlobalNamespace::OVRPlugin_SpaceLocationf>  location, /* [IsReadOnly] */ ::by_ref<uint64_t>  space, ::GlobalNamespace::OVRPlugin_TrackingOrigin  trackingOrigin) ;

/// @brief Method ovrp_SaveSpaceList, addr 0xa6215a4, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SaveSpaceList(uint64_t*  spaces, uint32_t  numSpaces, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location, ::by_ref<uint64_t>  requestId) ;

/// @brief Method ovrp_ShareSpaces, addr 0xa6214f8, size 0xac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_ShareSpaces(uint64_t*  spaces, uint32_t  numSpaces, uint64_t*  userHandles, uint32_t  numUsers, ::by_ref<uint64_t>  requestId) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_79_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_79_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_79_0(OVRPlugin_OVRP_1_79_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_79_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_79_0(OVRPlugin_OVRP_1_79_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12345};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_79_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_78_0
class CORDL_TYPE OVRPlugin_OVRP_1_78_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetBodyState, addr 0xa620d00, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetBodyState(::GlobalNamespace::OVRPlugin_Step  stepId, int32_t  frameIndex, ::by_ref<::GlobalNamespace::OVRPlugin_BodyStateInternal>  bodyState) ;

/// @brief Method ovrp_GetBodyTrackingEnabled, addr 0xa620c08, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetBodyTrackingEnabled(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  value) ;

/// @brief Method ovrp_GetBodyTrackingSupported, addr 0xa620c84, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetBodyTrackingSupported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  value) ;

/// @brief Method ovrp_GetControllerSampleRateHz, addr 0xa6213ec, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetControllerSampleRateHz(::GlobalNamespace::OVRPlugin_Controller  controller, ::by_ref<float_t>  sampleRateHz) ;

/// @brief Method ovrp_GetControllerState5, addr 0xa620fb4, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetControllerState5(uint32_t  controllerMask, ::by_ref<::GlobalNamespace::OVRPlugin_ControllerState5>  controllerState) ;

/// @brief Method ovrp_GetCurrentInteractionProfile, addr 0xa621248, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetCurrentInteractionProfile(::GlobalNamespace::OVRPlugin_Hand  hand, ::by_ref<::GlobalNamespace::OVRPlugin_InteractionProfile>  interactionProfile) ;

/// @brief Method ovrp_GetEyeGazesState, addr 0xa620f20, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetEyeGazesState(::GlobalNamespace::OVRPlugin_Step  stepId, int32_t  frameIndex, ::by_ref<::GlobalNamespace::OVRPlugin_EyeGazesStateInternal>  eyeGazesState) ;

/// @brief Method ovrp_GetEyeTrackingEnabled, addr 0xa620ea4, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetEyeTrackingEnabled(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  eyeTrackingEnabled) ;

/// @brief Method ovrp_GetEyeTrackingSupported, addr 0xa620b10, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetEyeTrackingSupported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  eyeTrackingSupported) ;

/// @brief Method ovrp_GetFaceState, addr 0xa620e10, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetFaceState(::GlobalNamespace::OVRPlugin_Step  stepId, int32_t  frameIndex, ::by_ref<::GlobalNamespace::OVRPlugin_FaceStateInternal>  faceState) ;

/// @brief Method ovrp_GetFaceTrackingEnabled, addr 0xa620d94, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetFaceTrackingEnabled(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  faceTrackingEnabled) ;

/// @brief Method ovrp_GetFaceTrackingSupported, addr 0xa620b8c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetFaceTrackingSupported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  faceTrackingSupported) ;

/// @brief Method ovrp_GetFoveationEyeTracked, addr 0xa6207c0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetFoveationEyeTracked(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  isEyeTrackedFoveation) ;

/// @brief Method ovrp_GetFoveationEyeTrackedSupported, addr 0xa620744, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetFoveationEyeTrackedSupported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  foveationSupported) ;

/// @brief Method ovrp_GetLocalDimming, addr 0xa6211cc, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetLocalDimming(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  localDimmingMode) ;

/// @brief Method ovrp_GetLocalDimmingSupported, addr 0xa6210d4, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetLocalDimmingSupported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  localDimmingSupported) ;

/// @brief Method ovrp_GetPassthroughCapabilityFlags, addr 0xa6206c8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetPassthroughCapabilityFlags(::by_ref<::GlobalNamespace::OVRPlugin_PassthroughCapabilityFlags>  capabilityFlags) ;

/// @brief Method ovrp_SetControllerHapticsAmplitudeEnvelope, addr 0xa6212cc, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::OVRPlugin_Controller  controllerMask, ::GlobalNamespace::OVRPlugin_HapticsAmplitudeEnvelopeVibration  hapticsVibration) ;

/// @brief Method ovrp_SetControllerHapticsPcm, addr 0xa621360, size 0x8c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetControllerHapticsPcm(::GlobalNamespace::OVRPlugin_Controller  controllerMask, ::GlobalNamespace::OVRPlugin_HapticsPcmVibration  hapticsVibration) ;

/// @brief Method ovrp_SetControllerLocalizedVibration, addr 0xa621038, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetControllerLocalizedVibration(::GlobalNamespace::OVRPlugin_Controller  controllerMask, ::GlobalNamespace::OVRPlugin_HapticsLocation  hapticsLocationMask, float_t  frequency, float_t  amplitude) ;

/// @brief Method ovrp_SetFoveationEyeTracked, addr 0xa62083c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetFoveationEyeTracked(::GlobalNamespace::OVRPlugin_Bool  isEyeTrackedFoveation) ;

/// @brief Method ovrp_SetLocalDimming, addr 0xa621150, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetLocalDimming(::GlobalNamespace::OVRPlugin_Bool  localDimmingMode) ;

/// @brief Method ovrp_StartBodyTracking, addr 0xa620980, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_StartBodyTracking() ;

/// @brief Method ovrp_StartEyeTracking, addr 0xa620a48, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_StartEyeTracking() ;

/// @brief Method ovrp_StartFaceTracking, addr 0xa6208b8, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_StartFaceTracking() ;

/// @brief Method ovrp_StopBodyTracking, addr 0xa6209e4, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_StopBodyTracking() ;

/// @brief Method ovrp_StopEyeTracking, addr 0xa620aac, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_StopEyeTracking() ;

/// @brief Method ovrp_StopFaceTracking, addr 0xa62091c, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_StopFaceTracking() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_78_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_78_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_78_0(OVRPlugin_OVRP_1_78_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_78_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_78_0(OVRPlugin_OVRP_1_78_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12344};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_78_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_76_0
class CORDL_TYPE OVRPlugin_OVRP_1_76_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetNodePoseStateAtTime, addr 0xa6205ac, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetNodePoseStateAtTime(double_t  time, ::GlobalNamespace::OVRPlugin_Node  nodeId, ::by_ref<::GlobalNamespace::OVRPlugin_PoseStatef>  nodePoseState) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_76_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_76_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_76_0(OVRPlugin_OVRP_1_76_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_76_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_76_0(OVRPlugin_OVRP_1_76_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12343};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_76_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_75_0
class CORDL_TYPE OVRPlugin_OVRP_1_75_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_75_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_75_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_75_0(OVRPlugin_OVRP_1_75_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_75_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_75_0(OVRPlugin_OVRP_1_75_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12342};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_75_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_74_0
class CORDL_TYPE OVRPlugin_OVRP_1_74_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_ChangeVirtualKeyboardTextContext, addr 0xa620158, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_ChangeVirtualKeyboardTextContext(::StringW  textContext) ;

/// @brief Method ovrp_CreateVirtualKeyboard, addr 0xa61fff8, size 0x68, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_CreateVirtualKeyboard(::GlobalNamespace::OVRPlugin_VirtualKeyboardCreateInfo  createInfo) ;

/// @brief Method ovrp_CreateVirtualKeyboardSpace, addr 0xa6201ec, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_CreateVirtualKeyboardSpace(::GlobalNamespace::OVRPlugin_VirtualKeyboardSpaceCreateInfo  createInfo, ::by_ref<uint64_t>  keyboardSpace) ;

/// @brief Method ovrp_DestroyVirtualKeyboard, addr 0xa620060, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_DestroyVirtualKeyboard() ;

/// @brief Method ovrp_GetRenderModelProperties2, addr 0xa620388, size 0x114, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetRenderModelProperties2(::StringW  path, ::GlobalNamespace::OVRPlugin_RenderModelFlags  flags, ::by_ref<::GlobalNamespace::OVRPlugin_RenderModelPropertiesInternal>  properties) ;

/// @brief Method ovrp_GetSpaceUuid, addr 0xa61ff74, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSpaceUuid(/* [IsReadOnly] */ ::by_ref<uint64_t>  space, ::by_ref<::System::Guid>  uuid) ;

/// @brief Method ovrp_GetVirtualKeyboardScale, addr 0xa62030c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetVirtualKeyboardScale(::by_ref<float_t>  location) ;

/// @brief Method ovrp_SendVirtualKeyboardInput, addr 0xa6200c4, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SendVirtualKeyboardInput(::GlobalNamespace::OVRPlugin_VirtualKeyboardInputInfo  inputInfo, ::by_ref<::GlobalNamespace::OVRPlugin_Posef>  interactorRootPose) ;

/// @brief Method ovrp_SuggestVirtualKeyboardLocation, addr 0xa620280, size 0x8c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SuggestVirtualKeyboardLocation(::GlobalNamespace::OVRPlugin_VirtualKeyboardLocationInfo  locationInfo) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_74_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_74_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_74_0(OVRPlugin_OVRP_1_74_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_74_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_74_0(OVRPlugin_OVRP_1_74_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12341};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_74_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_73_0
class CORDL_TYPE OVRPlugin_OVRP_1_73_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_73_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_73_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_73_0(OVRPlugin_OVRP_1_73_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_73_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_73_0(OVRPlugin_OVRP_1_73_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12340};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_73_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_72_0
class CORDL_TYPE OVRPlugin_OVRP_1_72_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_CreateSpatialAnchor, addr 0xa61f4c0, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_CreateSpatialAnchor(::by_ref<::GlobalNamespace::OVRPlugin_SpatialAnchorCreateInfo>  createInfo, ::by_ref<uint64_t>  requestId) ;

/// @brief Method ovrp_EnumerateSpaceSupportedComponents, addr 0xa61f72c, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_EnumerateSpaceSupportedComponents(::by_ref<uint64_t>  space, uint32_t  componentTypesCapacityInput, ::by_ref<uint32_t>  componentTypesCountOutput, ::GlobalNamespace::OVRPlugin_SpaceComponentType*  componentTypes) ;

/// @brief Method ovrp_EnumerateSpaceSupportedComponents, addr 0xa61f688, size 0xa4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_EnumerateSpaceSupportedComponents(::by_ref<uint64_t>  space, uint32_t  componentTypesCapacityInput, ::by_ref<uint32_t>  componentTypesCountOutput, ::by_ref<::ArrayW<::GlobalNamespace::OVRPlugin_SpaceComponentType>>  componentTypes) ;

/// @brief Method ovrp_EraseSpace, addr 0xa61f9f0, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_EraseSpace(::by_ref<uint64_t>  space, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location, ::by_ref<uint64_t>  requestId) ;

/// @brief Method ovrp_GetSpaceBoundary2D, addr 0xa61fd18, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSpaceBoundary2D(::by_ref<uint64_t>  space, ::by_ref<::GlobalNamespace::OVRPlugin_PolygonalBoundary2DInternal>  boundaryInternal) ;

/// @brief Method ovrp_GetSpaceBoundingBox2D, addr 0xa61fb08, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSpaceBoundingBox2D(::by_ref<uint64_t>  space, ::by_ref<::GlobalNamespace::OVRPlugin_Rectf>  rect) ;

/// @brief Method ovrp_GetSpaceBoundingBox3D, addr 0xa61fb8c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSpaceBoundingBox3D(::by_ref<uint64_t>  space, ::by_ref<::GlobalNamespace::OVRPlugin_Boundsf>  bounds) ;

/// @brief Method ovrp_GetSpaceComponentStatus, addr 0xa61f5f0, size 0x98, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSpaceComponentStatus(::by_ref<uint64_t>  space, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType, ::by_ref<::GlobalNamespace::OVRPlugin_Bool>  enabled, ::by_ref<::GlobalNamespace::OVRPlugin_Bool>  changePending) ;

/// @brief Method ovrp_GetSpaceContainer, addr 0xa61fa84, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSpaceContainer(::by_ref<uint64_t>  space, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceContainerInternal>  containerInternal) ;

/// @brief Method ovrp_GetSpaceRoomLayout, addr 0xa61fc94, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSpaceRoomLayout(::by_ref<uint64_t>  space, ::by_ref<::GlobalNamespace::OVRPlugin_RoomLayoutInternal>  roomLayoutInternal) ;

/// @brief Method ovrp_GetSpaceSemanticLabels, addr 0xa61fc10, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSpaceSemanticLabels(::by_ref<uint64_t>  space, ::by_ref<::GlobalNamespace::OVRPlugin_SpaceSemanticLabelInternal>  labelsInternal) ;

/// @brief Method ovrp_QuerySpaces, addr 0xa61f864, size 0xf0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_QuerySpaces(::by_ref<::GlobalNamespace::OVRPlugin_SpaceQueryInfo>  queryInfo, ::by_ref<uint64_t>  requestId) ;

/// @brief Method ovrp_RequestSceneCapture, addr 0xa61fd9c, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_RequestSceneCapture(::by_ref<::GlobalNamespace::OVRPlugin_SceneCaptureRequestInternal>  request, ::by_ref<uint64_t>  requestId) ;

/// @brief Method ovrp_RetrieveSpaceQueryResults, addr 0xa61f954, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_RetrieveSpaceQueryResults(::by_ref<uint64_t>  requestId, uint32_t  resultCapacityInput, ::by_ref<uint32_t>  resultCountOutput, ::System::IntPtr  results) ;

/// @brief Method ovrp_SaveSpace, addr 0xa61f7c8, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SaveSpace(::by_ref<uint64_t>  space, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation  location, ::GlobalNamespace::OVRPlugin_SpaceStoragePersistenceMode  mode, ::by_ref<uint64_t>  requestId) ;

/// @brief Method ovrp_SetSpaceComponentStatus, addr 0xa61f544, size 0xac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetSpaceComponentStatus(::by_ref<uint64_t>  space, ::GlobalNamespace::OVRPlugin_SpaceComponentType  componentType, ::GlobalNamespace::OVRPlugin_Bool  enable, double_t  timeout, ::by_ref<uint64_t>  requestId) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_72_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_72_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_72_0(OVRPlugin_OVRP_1_72_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_72_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_72_0(OVRPlugin_OVRP_1_72_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12339};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_72_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_71_0
class CORDL_TYPE OVRPlugin_OVRP_1_71_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetSuggestedCpuPerformanceLevel, addr 0xa61f2c4, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSuggestedCpuPerformanceLevel(::by_ref<::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel>  perfLevel) ;

/// @brief Method ovrp_GetSuggestedGpuPerformanceLevel, addr 0xa61f3bc, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSuggestedGpuPerformanceLevel(::by_ref<::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel>  perfLevel) ;

/// @brief Method ovrp_IsInsightPassthroughSupported, addr 0xa61ec58, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_IsInsightPassthroughSupported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  supported) ;

/// @brief Method ovrp_SetSuggestedCpuPerformanceLevel, addr 0xa61f248, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetSuggestedCpuPerformanceLevel(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  perfLevel) ;

/// @brief Method ovrp_SetSuggestedGpuPerformanceLevel, addr 0xa61f340, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetSuggestedGpuPerformanceLevel(::GlobalNamespace::OVRPlugin_ProcessorPerformanceLevel  perfLevel) ;

/// @brief Method ovrp_UnityOpenXR_HookGetInstanceProcAddr, addr 0xa61ed68, size 0x7c, virtual false, abstract: false, final false
static inline ::System::IntPtr ovrp_UnityOpenXR_HookGetInstanceProcAddr(::System::IntPtr  func) ;

/// @brief Method ovrp_UnityOpenXR_OnAppSpaceChange, addr 0xa61ef58, size 0x7c, virtual false, abstract: false, final false
static inline void ovrp_UnityOpenXR_OnAppSpaceChange(uint64_t  xrSpace) ;

/// @brief Method ovrp_UnityOpenXR_OnInstanceCreate, addr 0xa61ede4, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_UnityOpenXR_OnInstanceCreate(uint64_t  xrInstance) ;

/// @brief Method ovrp_UnityOpenXR_OnInstanceDestroy, addr 0xa61ee60, size 0x7c, virtual false, abstract: false, final false
static inline void ovrp_UnityOpenXR_OnInstanceDestroy(uint64_t  xrInstance) ;

/// @brief Method ovrp_UnityOpenXR_OnSessionBegin, addr 0xa61f058, size 0x7c, virtual false, abstract: false, final false
static inline void ovrp_UnityOpenXR_OnSessionBegin(uint64_t  xrSession) ;

/// @brief Method ovrp_UnityOpenXR_OnSessionCreate, addr 0xa61eedc, size 0x7c, virtual false, abstract: false, final false
static inline void ovrp_UnityOpenXR_OnSessionCreate(uint64_t  xrSession) ;

/// @brief Method ovrp_UnityOpenXR_OnSessionDestroy, addr 0xa61f1cc, size 0x7c, virtual false, abstract: false, final false
static inline void ovrp_UnityOpenXR_OnSessionDestroy(uint64_t  xrSession) ;

/// @brief Method ovrp_UnityOpenXR_OnSessionEnd, addr 0xa61f0d4, size 0x7c, virtual false, abstract: false, final false
static inline void ovrp_UnityOpenXR_OnSessionEnd(uint64_t  xrSession) ;

/// @brief Method ovrp_UnityOpenXR_OnSessionExiting, addr 0xa61f150, size 0x7c, virtual false, abstract: false, final false
static inline void ovrp_UnityOpenXR_OnSessionExiting(uint64_t  xrSession) ;

/// @brief Method ovrp_UnityOpenXR_OnSessionStateChange, addr 0xa61efd4, size 0x84, virtual false, abstract: false, final false
static inline void ovrp_UnityOpenXR_OnSessionStateChange(int32_t  oldState, int32_t  newState) ;

/// @brief Method ovrp_UnityOpenXR_SetClientVersion, addr 0xa61ecd4, size 0x94, virtual false, abstract: false, final false
static inline void ovrp_UnityOpenXR_SetClientVersion(int32_t  majorVersion, int32_t  minorVersion, int32_t  patchVersion) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_71_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_71_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_71_0(OVRPlugin_OVRP_1_71_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_71_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_71_0(OVRPlugin_OVRP_1_71_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12338};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_71_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_70_0
class CORDL_TYPE OVRPlugin_OVRP_1_70_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_SetLogCallback2, addr 0xa61eb50, size 0x80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetLogCallback2(::GlobalNamespace::OVRPlugin_LogCallback2DelegateType*  logCallback) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_70_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_70_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_70_0(OVRPlugin_OVRP_1_70_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_70_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_70_0(OVRPlugin_OVRP_1_70_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12337};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_70_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_69_0
class CORDL_TYPE OVRPlugin_OVRP_1_69_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetNodePoseStateImmediate, addr 0xa61ea44, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetNodePoseStateImmediate(::GlobalNamespace::OVRPlugin_Node  nodeId, ::by_ref<::GlobalNamespace::OVRPlugin_PoseStatef>  nodePoseState) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_69_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_69_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_69_0(OVRPlugin_OVRP_1_69_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_69_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_69_0(OVRPlugin_OVRP_1_69_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12336};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_69_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_68_0
class CORDL_TYPE OVRPlugin_OVRP_1_68_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetRenderModelPaths, addr 0xa61e798, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetRenderModelPaths(uint32_t  index, ::System::IntPtr  path) ;

/// @brief Method ovrp_GetRenderModelProperties, addr 0xa61e81c, size 0x10c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetRenderModelProperties(::StringW  path, ::by_ref<::GlobalNamespace::OVRPlugin_RenderModelPropertiesInternal>  properties) ;

/// @brief Method ovrp_LoadRenderModel, addr 0xa61e6fc, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_LoadRenderModel(uint64_t  modelKey, uint32_t  bufferInputCapacity, ::by_ref<uint32_t>  bufferCountOutput, ::System::IntPtr  buffer) ;

/// @brief Method ovrp_SetInsightPassthroughKeyboardHandsIntensity, addr 0xa61e928, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetInsightPassthroughKeyboardHandsIntensity(int32_t  layerId, ::GlobalNamespace::OVRPlugin_InsightPassthroughKeyboardHandsIntensity  intensity) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_68_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_68_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_68_0(OVRPlugin_OVRP_1_68_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_68_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_68_0(OVRPlugin_OVRP_1_68_0 const& ) = delete;

/// @brief Field OVRP_RENDER_MODEL_MAX_NAME_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  OVRP_RENDER_MODEL_MAX_NAME_LENGTH{static_cast<int32_t>(0x40)};

/// @brief Field OVRP_RENDER_MODEL_MAX_PATH_LENGTH offset 0xffffffff size 0x4
static constexpr int32_t  OVRP_RENDER_MODEL_MAX_PATH_LENGTH{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12335};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_68_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_67_0
class CORDL_TYPE OVRPlugin_OVRP_1_67_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_67_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_67_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_67_0(OVRPlugin_OVRP_1_67_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_67_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_67_0(OVRPlugin_OVRP_1_67_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12334};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_67_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_66_0
class CORDL_TYPE OVRPlugin_OVRP_1_66_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetInsightPassthroughInitializationState, addr 0xa61e50c, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetInsightPassthroughInitializationState() ;

/// @brief Method ovrp_Media_IsCastingToRemoteClient, addr 0xa61e570, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_IsCastingToRemoteClient(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  isCasting) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_66_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_66_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_66_0(OVRPlugin_OVRP_1_66_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_66_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_66_0(OVRPlugin_OVRP_1_66_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12333};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_66_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_65_0
class CORDL_TYPE OVRPlugin_OVRP_1_65_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_DestroySpace, addr 0xa61e408, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_DestroySpace(::by_ref<uint64_t>  space) ;

/// @brief Method ovrp_KtxDestroy, addr 0xa61e38c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_KtxDestroy(::System::IntPtr  texture) ;

/// @brief Method ovrp_KtxGetTextureData, addr 0xa61e274, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_KtxGetTextureData(::System::IntPtr  texture, ::System::IntPtr  data, uint32_t  bufferSize) ;

/// @brief Method ovrp_KtxLoadFromMemory, addr 0xa61e054, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_KtxLoadFromMemory(::by_ref<::System::IntPtr>  data, uint32_t  length, ::by_ref<::System::IntPtr>  texture) ;

/// @brief Method ovrp_KtxTextureHeight, addr 0xa61e16c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_KtxTextureHeight(::System::IntPtr  texture, ::by_ref<uint32_t>  height) ;

/// @brief Method ovrp_KtxTextureSize, addr 0xa61e308, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_KtxTextureSize(::System::IntPtr  texture, ::by_ref<uint32_t>  size) ;

/// @brief Method ovrp_KtxTextureWidth, addr 0xa61e0e8, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_KtxTextureWidth(::System::IntPtr  texture, ::by_ref<uint32_t>  width) ;

/// @brief Method ovrp_KtxTranscode, addr 0xa61e1f0, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_KtxTranscode(::System::IntPtr  texture, uint32_t  format) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_65_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_65_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_65_0(OVRPlugin_OVRP_1_65_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_65_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_65_0(OVRPlugin_OVRP_1_65_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12332};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_65_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_64_0
class CORDL_TYPE OVRPlugin_OVRP_1_64_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_LocateSpace, addr 0xa61df38, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_LocateSpace(::by_ref<::GlobalNamespace::OVRPlugin_Posef>  location, ::by_ref<uint64_t>  space, ::GlobalNamespace::OVRPlugin_TrackingOrigin  trackingOrigin) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_64_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_64_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_64_0(OVRPlugin_OVRP_1_64_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_64_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_64_0(OVRPlugin_OVRP_1_64_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12331};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_64_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_63_0
class CORDL_TYPE OVRPlugin_OVRP_1_63_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_AddInsightPassthroughSurfaceGeometry, addr 0xa61dcf4, size 0xac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_AddInsightPassthroughSurfaceGeometry(int32_t  layerId, uint64_t  meshHandle, ::UnityEngine::Matrix4x4  T_world_model, ::by_ref<uint64_t>  geometryInstanceHandle) ;

/// @brief Method ovrp_CreateInsightTriangleMesh, addr 0xa61dbc4, size 0xb4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_CreateInsightTriangleMesh(int32_t  layerId, ::System::IntPtr  vertices, int32_t  vertexCount, ::System::IntPtr  triangles, int32_t  triangleCount, ::by_ref<uint64_t>  meshHandle) ;

/// @brief Method ovrp_DestroyInsightPassthroughGeometryInstance, addr 0xa61dda0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_DestroyInsightPassthroughGeometryInstance(uint64_t  geometryInstanceHandle) ;

/// @brief Method ovrp_DestroyInsightTriangleMesh, addr 0xa61dc78, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_DestroyInsightTriangleMesh(uint64_t  meshHandle) ;

/// @brief Method ovrp_GetInsightPassthroughInitialized, addr 0xa61dacc, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetInsightPassthroughInitialized() ;

/// @brief Method ovrp_InitializeInsightPassthrough, addr 0xa61da04, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_InitializeInsightPassthrough() ;

/// @brief Method ovrp_SetInsightPassthroughStyle, addr 0xa61db30, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetInsightPassthroughStyle(int32_t  layerId, ::GlobalNamespace::OVRPlugin_InsightPassthroughStyle  style) ;

/// @brief Method ovrp_ShutdownInsightPassthrough, addr 0xa61da68, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_ShutdownInsightPassthrough() ;

/// @brief Method ovrp_UpdateInsightPassthroughGeometryTransform, addr 0xa61de1c, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_UpdateInsightPassthroughGeometryTransform(uint64_t  geometryInstanceHandle, ::UnityEngine::Matrix4x4  T_world_model) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_63_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_63_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_63_0(OVRPlugin_OVRP_1_63_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_63_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_63_0(OVRPlugin_OVRP_1_63_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12330};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_63_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_62_0
class CORDL_TYPE OVRPlugin_OVRP_1_62_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_62_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_62_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_62_0(OVRPlugin_OVRP_1_62_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_62_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_62_0(OVRPlugin_OVRP_1_62_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12329};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_62_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_61_0
class CORDL_TYPE OVRPlugin_OVRP_1_61_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_61_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_61_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_61_0(OVRPlugin_OVRP_1_61_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_61_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_61_0(OVRPlugin_OVRP_1_61_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12328};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_61_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_60_0
class CORDL_TYPE OVRPlugin_OVRP_1_60_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_60_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_60_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_60_0(OVRPlugin_OVRP_1_60_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_60_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_60_0(OVRPlugin_OVRP_1_60_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12327};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_60_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_59_0
class CORDL_TYPE OVRPlugin_OVRP_1_59_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_59_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_59_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_59_0(OVRPlugin_OVRP_1_59_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_59_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_59_0(OVRPlugin_OVRP_1_59_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12326};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_59_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_58_0
class CORDL_TYPE OVRPlugin_OVRP_1_58_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_58_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_58_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_58_0(OVRPlugin_OVRP_1_58_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_58_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_58_0(OVRPlugin_OVRP_1_58_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12325};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_58_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_57_0
class CORDL_TYPE OVRPlugin_OVRP_1_57_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetEyeFovPremultipliedAlphaMode, addr 0xa61d5d8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetEyeFovPremultipliedAlphaMode(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  enabled) ;

/// @brief Method ovrp_Media_GetPlatformCameraMode, addr 0xa61d464, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_GetPlatformCameraMode(::by_ref<::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode>  platformCameraMode) ;

/// @brief Method ovrp_Media_SetPlatformCameraMode, addr 0xa61d4e0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_SetPlatformCameraMode(::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode  platformCameraMode) ;

/// @brief Method ovrp_SetEyeFovPremultipliedAlphaMode, addr 0xa61d55c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetEyeFovPremultipliedAlphaMode(::GlobalNamespace::OVRPlugin_Bool  enabled) ;

/// @brief Method ovrp_SetKeyboardOverlayUV, addr 0xa61d654, size 0x80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetKeyboardOverlayUV(::GlobalNamespace::OVRPlugin_Vector2f  uv) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_57_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_57_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_57_0(OVRPlugin_OVRP_1_57_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_57_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_57_0(OVRPlugin_OVRP_1_57_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12324};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_57_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_56_0
class CORDL_TYPE OVRPlugin_OVRP_1_56_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_56_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_56_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_56_0(OVRPlugin_OVRP_1_56_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_56_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_56_0(OVRPlugin_OVRP_1_56_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12323};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_56_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_55_1
class CORDL_TYPE OVRPlugin_OVRP_1_55_1 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_PollEvent2, addr 0xa61d2d0, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_PollEvent2(::by_ref<::GlobalNamespace::OVRPlugin_EventType>  eventType, ::by_ref<::System::IntPtr>  eventData) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_55_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_55_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_55_1(OVRPlugin_OVRP_1_55_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_55_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_55_1(OVRPlugin_OVRP_1_55_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12322};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_55_1) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_55_0
class CORDL_TYPE OVRPlugin_OVRP_1_55_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetNativeOpenXRHandles, addr 0xa61d1c4, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetNativeOpenXRHandles(::by_ref<uint64_t>  xrInstance, ::by_ref<uint64_t>  xrSession) ;

/// @brief Method ovrp_GetNativeXrApiType, addr 0xa61d148, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetNativeXrApiType(::by_ref<::GlobalNamespace::OVRPlugin_XrApi>  xrApi) ;

/// @brief Method ovrp_GetSkeleton2, addr 0xa61cfd0, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSkeleton2(::GlobalNamespace::OVRPlugin_SkeletonType  skeletonType, ::by_ref<::GlobalNamespace::OVRPlugin_Skeleton2Internal>  skeleton) ;

/// @brief Method ovrp_PollEvent, addr 0xa61d054, size 0xf4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_PollEvent(::by_ref<::GlobalNamespace::OVRPlugin_EventDataBuffer>  eventDataBuffer) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_55_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_55_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_55_0(OVRPlugin_OVRP_1_55_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_55_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_55_0(OVRPlugin_OVRP_1_55_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12321};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_55_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_54_0
class CORDL_TYPE OVRPlugin_OVRP_1_54_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_Media_SetPlatformInitialized, addr 0xa61cee4, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_SetPlatformInitialized() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_54_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_54_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_54_0(OVRPlugin_OVRP_1_54_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_54_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_54_0(OVRPlugin_OVRP_1_54_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12320};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_54_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_53_0
class CORDL_TYPE OVRPlugin_OVRP_1_53_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_53_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_53_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_53_0(OVRPlugin_OVRP_1_53_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_53_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_53_0(OVRPlugin_OVRP_1_53_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12319};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_53_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_52_0
class CORDL_TYPE OVRPlugin_OVRP_1_52_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_52_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_52_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_52_0(OVRPlugin_OVRP_1_52_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_52_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_52_0(OVRPlugin_OVRP_1_52_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12318};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_52_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_51_0
class CORDL_TYPE OVRPlugin_OVRP_1_51_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_51_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_51_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_51_0(OVRPlugin_OVRP_1_51_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_51_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_51_0(OVRPlugin_OVRP_1_51_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12317};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_51_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_50_0
class CORDL_TYPE OVRPlugin_OVRP_1_50_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_50_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_50_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_50_0(OVRPlugin_OVRP_1_50_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_50_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_50_0(OVRPlugin_OVRP_1_50_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12316};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_50_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_49_0
class CORDL_TYPE OVRPlugin_OVRP_1_49_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetHmdColorDesc, addr 0xa61c318, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetHmdColorDesc(::by_ref<::GlobalNamespace::OVRPlugin_ColorSpace>  colorSpace) ;

/// @brief Method ovrp_Media_CreateCustomCameraAnchor, addr 0xa61c900, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_CreateCustomCameraAnchor(::System::IntPtr  anchorName, ::by_ref<::System::IntPtr>  anchorHandle) ;

/// @brief Method ovrp_Media_DestroyCustomCameraAnchor, addr 0xa61c984, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_DestroyCustomCameraAnchor(::System::IntPtr  anchorHandle) ;

/// @brief Method ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime, addr 0xa61c458, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime(::System::IntPtr  backgroundTextureHandle, ::System::IntPtr  foregroundTextureHandle, ::System::IntPtr  audioData, int32_t  audioDataLen, int32_t  audioChannels, double_t  timestamp, double_t  poseTime, ::by_ref<int32_t>  outSyncId) ;

/// @brief Method ovrp_Media_EncodeMrcFrameWithPoseTime, addr 0xa61c394, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_EncodeMrcFrameWithPoseTime(::System::IntPtr  rawBuffer, ::System::IntPtr  audioDataPtr, int32_t  audioDataLen, int32_t  audioChannels, double_t  timestamp, double_t  poseTime, ::by_ref<int32_t>  outSyncId) ;

/// @brief Method ovrp_Media_EnumerateCameraAnchorHandles, addr 0xa61c5e8, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_EnumerateCameraAnchorHandles(::by_ref<int32_t>  anchorCount, ::by_ref<::System::IntPtr>  CameraAnchorHandle) ;

/// @brief Method ovrp_Media_GetCameraAnchorHandle, addr 0xa61c7f8, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_GetCameraAnchorHandle(::System::IntPtr  anchorName, ::by_ref<::System::IntPtr>  anchorHandle) ;

/// @brief Method ovrp_Media_GetCameraAnchorName, addr 0xa61c6e8, size 0x110, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_GetCameraAnchorName(::System::IntPtr  anchorHandle, ::ArrayW<char16_t>  cameraName) ;

/// @brief Method ovrp_Media_GetCameraAnchorType, addr 0xa61c87c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_GetCameraAnchorType(::System::IntPtr  anchorHandle, ::by_ref<::GlobalNamespace::OVRPlugin_CameraAnchorType>  anchorType) ;

/// @brief Method ovrp_Media_GetCameraMinMaxDistance, addr 0xa61cb14, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_GetCameraMinMaxDistance(::System::IntPtr  anchorHandle, ::by_ref<double_t>  minDistance, ::by_ref<double_t>  maxDistance) ;

/// @brief Method ovrp_Media_GetCurrentCameraAnchorHandle, addr 0xa61c66c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_GetCurrentCameraAnchorHandle(::by_ref<::System::IntPtr>  anchorHandle) ;

/// @brief Method ovrp_Media_GetCustomCameraAnchorPose, addr 0xa61ca00, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_GetCustomCameraAnchorPose(::System::IntPtr  anchorHandle, ::by_ref<::GlobalNamespace::OVRPlugin_Posef>  pose) ;

/// @brief Method ovrp_Media_SetCameraMinMaxDistance, addr 0xa61cba8, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_SetCameraMinMaxDistance(::System::IntPtr  anchorHandle, double_t  minDistance, double_t  maxDistance) ;

/// @brief Method ovrp_Media_SetCustomCameraAnchorPose, addr 0xa61ca84, size 0x90, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_SetCustomCameraAnchorPose(::System::IntPtr  anchorHandle, ::GlobalNamespace::OVRPlugin_Posef  pose) ;

/// @brief Method ovrp_Media_SetHeadsetControllerPose, addr 0xa61c524, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_SetHeadsetControllerPose(::GlobalNamespace::OVRPlugin_Posef  headsetPose, ::GlobalNamespace::OVRPlugin_Posef  leftControllerPose, ::GlobalNamespace::OVRPlugin_Posef  rightControllerPose) ;

/// @brief Method ovrp_SetClientColorDesc, addr 0xa61c29c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetClientColorDesc(::GlobalNamespace::OVRPlugin_ColorSpace  colorSpace) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_49_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_49_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_49_0(OVRPlugin_OVRP_1_49_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_49_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_49_0(OVRPlugin_OVRP_1_49_0 const& ) = delete;

/// @brief Field OVRP_ANCHOR_NAME_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  OVRP_ANCHOR_NAME_SIZE{static_cast<int32_t>(0x20)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12315};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_49_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_48_0
class CORDL_TYPE OVRPlugin_OVRP_1_48_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_SetExternalCameraProperties, addr 0xa61c168, size 0xac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetExternalCameraProperties(::StringW  cameraName, ::by_ref<::GlobalNamespace::OVRPlugin_CameraIntrinsics>  cameraIntrinsics, ::by_ref<::GlobalNamespace::OVRPlugin_CameraExtrinsics>  cameraExtrinsics) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_48_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_48_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_48_0(OVRPlugin_OVRP_1_48_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_48_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_48_0(OVRPlugin_OVRP_1_48_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12314};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_48_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_47_0
class CORDL_TYPE OVRPlugin_OVRP_1_47_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_47_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_47_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_47_0(OVRPlugin_OVRP_1_47_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_47_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_47_0(OVRPlugin_OVRP_1_47_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12313};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_47_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_46_0
class CORDL_TYPE OVRPlugin_OVRP_1_46_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetTiledMultiResDynamic, addr 0xa61bf60, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetTiledMultiResDynamic(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  isDynamic) ;

/// @brief Method ovrp_SetTiledMultiResDynamic, addr 0xa61bfdc, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetTiledMultiResDynamic(::GlobalNamespace::OVRPlugin_Bool  isDynamic) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_46_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_46_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_46_0(OVRPlugin_OVRP_1_46_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_46_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_46_0(OVRPlugin_OVRP_1_46_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12312};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_46_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_45_0
class CORDL_TYPE OVRPlugin_OVRP_1_45_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetSystemHmd3DofModeEnabled, addr 0xa61bde0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSystemHmd3DofModeEnabled(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  enabled) ;

/// @brief Method ovrp_Media_SetAvailableQueueIndexVulkan, addr 0xa61be5c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_SetAvailableQueueIndexVulkan(uint32_t  queueIndexVk) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_45_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_45_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_45_0(OVRPlugin_OVRP_1_45_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_45_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_45_0(OVRPlugin_OVRP_1_45_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12311};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_45_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_44_0
class CORDL_TYPE OVRPlugin_OVRP_1_44_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetHandState, addr 0xa61b668, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetHandState(::GlobalNamespace::OVRPlugin_Step  stepId, ::GlobalNamespace::OVRPlugin_Hand  hand, ::by_ref<::GlobalNamespace::OVRPlugin_HandStateInternal>  handState) ;

/// @brief Method ovrp_GetHandTrackingEnabled, addr 0xa61b5ec, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetHandTrackingEnabled(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  handTrackingEnabled) ;

/// @brief Method ovrp_GetLocalTrackingSpaceRecenterCount, addr 0xa61bb88, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetLocalTrackingSpaceRecenterCount(::by_ref<int32_t>  recenterCount) ;

/// @brief Method ovrp_GetMesh, addr 0xa61b7c8, size 0x80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetMesh(::GlobalNamespace::OVRPlugin_MeshType  meshType, ::System::IntPtr  meshPtr) ;

/// @brief Method ovrp_GetPredictedDisplayTime, addr 0xa61bc04, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetPredictedDisplayTime(int32_t  frameIndex, ::by_ref<double_t>  predictedDisplayTime) ;

/// @brief Method ovrp_GetSkeleton, addr 0xa61b6fc, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSkeleton(::GlobalNamespace::OVRPlugin_SkeletonType  skeletonType, ::by_ref<::GlobalNamespace::OVRPlugin_Skeleton>  skeleton) ;

/// @brief Method ovrp_GetUseOverriddenExternalCameraFov, addr 0xa61b8dc, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetUseOverriddenExternalCameraFov(int32_t  cameraId, ::by_ref<::GlobalNamespace::OVRPlugin_Bool>  useOverriddenFov) ;

/// @brief Method ovrp_GetUseOverriddenExternalCameraStaticPose, addr 0xa61b9f4, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetUseOverriddenExternalCameraStaticPose(int32_t  cameraId, ::by_ref<::GlobalNamespace::OVRPlugin_Bool>  useOverriddenStaticPose) ;

/// @brief Method ovrp_OverrideExternalCameraFov, addr 0xa61b848, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_OverrideExternalCameraFov(int32_t  cameraId, ::GlobalNamespace::OVRPlugin_Bool  useOverriddenFov, ::by_ref<::GlobalNamespace::OVRPlugin_Fovf>  fov) ;

/// @brief Method ovrp_OverrideExternalCameraStaticPose, addr 0xa61b960, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_OverrideExternalCameraStaticPose(int32_t  cameraId, ::GlobalNamespace::OVRPlugin_Bool  useOverriddenPose, ::by_ref<::GlobalNamespace::OVRPlugin_Posef>  poseInStageOrigin) ;

/// @brief Method ovrp_ResetDefaultExternalCamera, addr 0xa61ba78, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_ResetDefaultExternalCamera() ;

/// @brief Method ovrp_SetDefaultExternalCamera, addr 0xa61badc, size 0xac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetDefaultExternalCamera(::StringW  cameraName, ::by_ref<::GlobalNamespace::OVRPlugin_CameraIntrinsics>  cameraIntrinsics, ::by_ref<::GlobalNamespace::OVRPlugin_CameraExtrinsics>  cameraExtrinsics) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_44_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_44_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_44_0(OVRPlugin_OVRP_1_44_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_44_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_44_0(OVRPlugin_OVRP_1_44_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12310};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_44_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_43_0
class CORDL_TYPE OVRPlugin_OVRP_1_43_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_43_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_43_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_43_0(OVRPlugin_OVRP_1_43_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_43_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_43_0(OVRPlugin_OVRP_1_43_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12309};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_43_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_42_0
class CORDL_TYPE OVRPlugin_OVRP_1_42_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetAdaptiveGpuPerformanceScale2, addr 0xa61b460, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetAdaptiveGpuPerformanceScale2(::by_ref<float_t>  adaptiveGpuPerformanceScale) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_42_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_42_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_42_0(OVRPlugin_OVRP_1_42_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_42_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_42_0(OVRPlugin_OVRP_1_42_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12308};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_42_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_41_0
class CORDL_TYPE OVRPlugin_OVRP_1_41_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_41_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_41_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_41_0(OVRPlugin_OVRP_1_41_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_41_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_41_0(OVRPlugin_OVRP_1_41_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12307};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_41_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_40_0
class CORDL_TYPE OVRPlugin_OVRP_1_40_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_40_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_40_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_40_0(OVRPlugin_OVRP_1_40_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_40_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_40_0(OVRPlugin_OVRP_1_40_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12306};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_40_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_39_0
class CORDL_TYPE OVRPlugin_OVRP_1_39_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_39_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_39_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_39_0(OVRPlugin_OVRP_1_39_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_39_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_39_0(OVRPlugin_OVRP_1_39_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12305};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_39_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_38_0
class CORDL_TYPE OVRPlugin_OVRP_1_38_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetNodeOrientationValid, addr 0xa61b138, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetNodeOrientationValid(::GlobalNamespace::OVRPlugin_Node  nodeId, ::by_ref<::GlobalNamespace::OVRPlugin_Bool>  nodeOrientationValid) ;

/// @brief Method ovrp_GetNodePositionValid, addr 0xa61b1bc, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetNodePositionValid(::GlobalNamespace::OVRPlugin_Node  nodeId, ::by_ref<::GlobalNamespace::OVRPlugin_Bool>  nodePositionValid) ;

/// @brief Method ovrp_GetTrackingTransformRelativePose, addr 0xa61b038, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetTrackingTransformRelativePose(::by_ref<::GlobalNamespace::OVRPlugin_Posef>  trackingTransformRelativePose, ::GlobalNamespace::OVRPlugin_TrackingOrigin  trackingOrigin) ;

/// @brief Method ovrp_Media_EncodeMrcFrame, addr 0xa611274, size 0xbc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_EncodeMrcFrame(::System::IntPtr  rawBuffer, ::System::IntPtr  audioDataPtr, int32_t  audioDataLen, int32_t  audioChannels, double_t  timestamp, ::by_ref<int32_t>  outSyncId) ;

/// @brief Method ovrp_Media_EncodeMrcFrameWithDualTextures, addr 0xa611330, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_EncodeMrcFrameWithDualTextures(::System::IntPtr  backgroundTextureHandle, ::System::IntPtr  foregroundTextureHandle, ::System::IntPtr  audioData, int32_t  audioDataLen, int32_t  audioChannels, double_t  timestamp, ::by_ref<int32_t>  outSyncId) ;

/// @brief Method ovrp_Media_GetInitialized, addr 0xa60fa5c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_GetInitialized(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  initialized) ;

/// @brief Method ovrp_Media_GetMrcActivationMode, addr 0xa60fcc8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_GetMrcActivationMode(::by_ref<::GlobalNamespace::Media_OVRPlugin_MrcActivationMode>  activationMode) ;

/// @brief Method ovrp_Media_GetMrcAudioSampleRate, addr 0xa610c1c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_GetMrcAudioSampleRate(::by_ref<int32_t>  sampleRate) ;

/// @brief Method ovrp_Media_GetMrcFrameImageFlipped, addr 0xa610ea8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_GetMrcFrameImageFlipped(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  flipped) ;

/// @brief Method ovrp_Media_GetMrcFrameSize, addr 0xa610990, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_GetMrcFrameSize(::by_ref<int32_t>  frameWidth, ::by_ref<int32_t>  frameHeight) ;

/// @brief Method ovrp_Media_GetMrcInputVideoBufferType, addr 0xa6106d8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_GetMrcInputVideoBufferType(::by_ref<::GlobalNamespace::Media_OVRPlugin_InputVideoBufferType>  inputVideoBufferType) ;

/// @brief Method ovrp_Media_Initialize, addr 0xa60f800, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_Initialize() ;

/// @brief Method ovrp_Media_IsMrcActivated, addr 0xa610304, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_IsMrcActivated(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  mrcActivated) ;

/// @brief Method ovrp_Media_IsMrcEnabled, addr 0xa6101b8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_IsMrcEnabled(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  mrcEnabled) ;

/// @brief Method ovrp_Media_SetMrcActivationMode, addr 0xa60fe0c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_SetMrcActivationMode(::GlobalNamespace::Media_OVRPlugin_MrcActivationMode  activationMode) ;

/// @brief Method ovrp_Media_SetMrcAudioSampleRate, addr 0xa610adc, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_SetMrcAudioSampleRate(int32_t  sampleRate) ;

/// @brief Method ovrp_Media_SetMrcFrameImageFlipped, addr 0xa610d60, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_SetMrcFrameImageFlipped(::GlobalNamespace::OVRPlugin_Bool  flipped) ;

/// @brief Method ovrp_Media_SetMrcFrameSize, addr 0xa61082c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_SetMrcFrameSize(int32_t  frameWidth, int32_t  frameHeight) ;

/// @brief Method ovrp_Media_SetMrcInputVideoBufferType, addr 0xa610594, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_SetMrcInputVideoBufferType(::GlobalNamespace::Media_OVRPlugin_InputVideoBufferType  inputVideoBufferType) ;

/// @brief Method ovrp_Media_Shutdown, addr 0xa60f924, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_Shutdown() ;

/// @brief Method ovrp_Media_SyncMrcFrame, addr 0xa61198c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_SyncMrcFrame(int32_t  syncId) ;

/// @brief Method ovrp_Media_Update, addr 0xa60fb98, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_Update() ;

/// @brief Method ovrp_Media_UseMrcDebugCamera, addr 0xa610450, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_Media_UseMrcDebugCamera(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  useMrcDebugCamera) ;

/// @brief Method ovrp_SetDeveloperMode, addr 0xa61b0bc, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetDeveloperMode(::GlobalNamespace::OVRPlugin_Bool  active) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_38_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_38_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_38_0(OVRPlugin_OVRP_1_38_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_38_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_38_0(OVRPlugin_OVRP_1_38_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12304};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_38_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_37_0
class CORDL_TYPE OVRPlugin_OVRP_1_37_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_37_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_37_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_37_0(OVRPlugin_OVRP_1_37_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_37_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_37_0(OVRPlugin_OVRP_1_37_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12303};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_37_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_36_0
class CORDL_TYPE OVRPlugin_OVRP_1_36_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_36_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_36_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_36_0(OVRPlugin_OVRP_1_36_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_36_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_36_0(OVRPlugin_OVRP_1_36_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12302};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_36_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_35_0
class CORDL_TYPE OVRPlugin_OVRP_1_35_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_35_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_35_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_35_0(OVRPlugin_OVRP_1_35_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_35_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_35_0(OVRPlugin_OVRP_1_35_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12301};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_35_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_34_0
class CORDL_TYPE OVRPlugin_OVRP_1_34_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_EnqueueSubmitLayer2, addr 0xa61ad10, size 0x108, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_EnqueueSubmitLayer2(uint32_t  flags, ::System::IntPtr  textureLeft, ::System::IntPtr  textureRight, int32_t  layerId, int32_t  frameIndex, ::by_ref<::GlobalNamespace::OVRPlugin_Posef>  pose, ::by_ref<::GlobalNamespace::OVRPlugin_Vector3f>  scale, int32_t  layerIndex, ::GlobalNamespace::OVRPlugin_Bool  overrideTextureRectMatrix, ::by_ref<::GlobalNamespace::OVRPlugin_TextureRectMatrixf>  textureRectMatrix, ::GlobalNamespace::OVRPlugin_Bool  overridePerLayerColorScaleAndOffset, ::by_ref<::UnityEngine::Vector4>  colorScale, ::by_ref<::UnityEngine::Vector4>  colorOffset) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_34_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_34_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_34_0(OVRPlugin_OVRP_1_34_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_34_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_34_0(OVRPlugin_OVRP_1_34_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12300};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_34_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_32_0
class CORDL_TYPE OVRPlugin_OVRP_1_32_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_AddCustomMetadata, addr 0xa61abd4, size 0xb4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_AddCustomMetadata(::StringW  name, ::StringW  param) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_32_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_32_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_32_0(OVRPlugin_OVRP_1_32_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_32_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_32_0(OVRPlugin_OVRP_1_32_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12299};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_32_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_31_0
class CORDL_TYPE OVRPlugin_OVRP_1_31_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetTimeInSeconds, addr 0xa61a9f4, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetTimeInSeconds(::by_ref<double_t>  value) ;

/// @brief Method ovrp_SetColorScaleAndOffset, addr 0xa61aa70, size 0xdc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetColorScaleAndOffset(::UnityEngine::Vector4  colorScale, ::UnityEngine::Vector4  colorOffset, ::GlobalNamespace::OVRPlugin_Bool  applyToAllLayers) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_31_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_31_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_31_0(OVRPlugin_OVRP_1_31_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_31_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_31_0(OVRPlugin_OVRP_1_31_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12298};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_31_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_30_0
class CORDL_TYPE OVRPlugin_OVRP_1_30_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetCurrentTrackingTransformPose, addr 0xa61a610, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetCurrentTrackingTransformPose(::by_ref<::GlobalNamespace::OVRPlugin_Posef>  trackingTransformPose) ;

/// @brief Method ovrp_GetPerfMetricsFloat, addr 0xa61a864, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetPerfMetricsFloat(::GlobalNamespace::OVRPlugin_PerfMetrics  perfMetrics, ::by_ref<float_t>  value) ;

/// @brief Method ovrp_GetPerfMetricsInt, addr 0xa61a8e8, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetPerfMetricsInt(::GlobalNamespace::OVRPlugin_PerfMetrics  perfMetrics, ::by_ref<int32_t>  value) ;

/// @brief Method ovrp_GetTrackingTransformRawPose, addr 0xa61a68c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetTrackingTransformRawPose(::by_ref<::GlobalNamespace::OVRPlugin_Posef>  trackingTransformRawPose) ;

/// @brief Method ovrp_IsPerfMetricsSupported, addr 0xa61a7e0, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_IsPerfMetricsSupported(::GlobalNamespace::OVRPlugin_PerfMetrics  perfMetrics, ::by_ref<::GlobalNamespace::OVRPlugin_Bool>  isSupported) ;

/// @brief Method ovrp_SendEvent2, addr 0xa61a708, size 0xd8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SendEvent2(::StringW  name, ::StringW  param, ::StringW  source) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_30_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_30_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_30_0(OVRPlugin_OVRP_1_30_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_30_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_30_0(OVRPlugin_OVRP_1_30_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12297};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_30_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_29_0
class CORDL_TYPE OVRPlugin_OVRP_1_29_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetHeadPoseModifier, addr 0xa61a468, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetHeadPoseModifier(::by_ref<::GlobalNamespace::OVRPlugin_Quatf>  relativeRotation, ::by_ref<::GlobalNamespace::OVRPlugin_Vector3f>  relativeTranslation) ;

/// @brief Method ovrp_GetLayerAndroidSurfaceObject, addr 0xa61a360, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetLayerAndroidSurfaceObject(int32_t  layerId, ::by_ref<::System::IntPtr>  surfaceObject) ;

/// @brief Method ovrp_GetNodePoseStateRaw, addr 0xa61a4ec, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetNodePoseStateRaw(::GlobalNamespace::OVRPlugin_Step  stepId, int32_t  frameIndex, ::GlobalNamespace::OVRPlugin_Node  nodeId, ::by_ref<::GlobalNamespace::OVRPlugin_PoseStatef>  nodePoseState) ;

/// @brief Method ovrp_SetHeadPoseModifier, addr 0xa61a3e4, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetHeadPoseModifier(::by_ref<::GlobalNamespace::OVRPlugin_Quatf>  relativeRotation, ::by_ref<::GlobalNamespace::OVRPlugin_Vector3f>  relativeTranslation) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_29_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_29_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_29_0(OVRPlugin_OVRP_1_29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_29_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_29_0(OVRPlugin_OVRP_1_29_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12296};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_29_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_28_0
class CORDL_TYPE OVRPlugin_OVRP_1_28_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_EnqueueSetupLayer2, addr 0xa61a244, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_EnqueueSetupLayer2(::by_ref<::GlobalNamespace::OVRPlugin_LayerDesc>  desc, int32_t  compositionDepth, ::System::IntPtr  layerId) ;

/// @brief Method ovrp_GetDominantHand, addr 0xa61a114, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetDominantHand(::by_ref<::GlobalNamespace::OVRPlugin_Handedness>  dominantHand) ;

/// @brief Method ovrp_SendEvent, addr 0xa61a190, size 0xb4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SendEvent(::StringW  name, ::StringW  param) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_28_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_28_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_28_0(OVRPlugin_OVRP_1_28_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_28_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_28_0(OVRPlugin_OVRP_1_28_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12295};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_28_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_21_0
class CORDL_TYPE OVRPlugin_OVRP_1_21_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetAppAsymmetricFov, addr 0xa61a010, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetAppAsymmetricFov(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  useAsymmetricFov) ;

/// @brief Method ovrp_GetGPUUtilLevel, addr 0xa619e1c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetGPUUtilLevel(::by_ref<float_t>  gpuUtil) ;

/// @brief Method ovrp_GetGPUUtilSupported, addr 0xa619da0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetGPUUtilSupported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  gpuUtilSupported) ;

/// @brief Method ovrp_GetSystemDisplayAvailableFrequencies, addr 0xa619f14, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSystemDisplayAvailableFrequencies(::System::IntPtr  systemDisplayAvailableFrequencies, ::by_ref<int32_t>  numFrequencies) ;

/// @brief Method ovrp_GetSystemDisplayFrequency2, addr 0xa619e98, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetSystemDisplayFrequency2(::by_ref<float_t>  systemDisplayFrequency) ;

/// @brief Method ovrp_GetTiledMultiResLevel, addr 0xa619ca8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetTiledMultiResLevel(::by_ref<::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel>  level) ;

/// @brief Method ovrp_GetTiledMultiResSupported, addr 0xa619c2c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetTiledMultiResSupported(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  foveationSupported) ;

/// @brief Method ovrp_SetSystemDisplayFrequency, addr 0xa619f98, size 0x78, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetSystemDisplayFrequency(float_t  requestedFrequency) ;

/// @brief Method ovrp_SetTiledMultiResLevel, addr 0xa619d24, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetTiledMultiResLevel(::GlobalNamespace::OVRPlugin_FoveatedRenderingLevel  level) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_21_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_21_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_21_0(OVRPlugin_OVRP_1_21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_21_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_21_0(OVRPlugin_OVRP_1_21_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12294};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_21_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_19_0
class CORDL_TYPE OVRPlugin_OVRP_1_19_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_19_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_19_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_19_0(OVRPlugin_OVRP_1_19_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_19_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_19_0(OVRPlugin_OVRP_1_19_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12293};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_19_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_18_0
class CORDL_TYPE OVRPlugin_OVRP_1_18_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetAppHasInputFocus, addr 0xa619aa0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetAppHasInputFocus(::by_ref<::GlobalNamespace::OVRPlugin_Bool>  appHasInputFocus) ;

/// @brief Method ovrp_GetHandNodePoseStateLatency, addr 0xa619a24, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetHandNodePoseStateLatency(::by_ref<double_t>  latencyInSeconds) ;

/// @brief Method ovrp_SetHandNodePoseStateLatency, addr 0xa6199ac, size 0x78, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetHandNodePoseStateLatency(double_t  latencyInSeconds) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_18_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_18_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_18_0(OVRPlugin_OVRP_1_18_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_18_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_18_0(OVRPlugin_OVRP_1_18_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12292};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_18_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_17_0
class CORDL_TYPE OVRPlugin_OVRP_1_17_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_17_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_17_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_17_0(OVRPlugin_OVRP_1_17_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_17_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_17_0(OVRPlugin_OVRP_1_17_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12291};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_17_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_16_0
class CORDL_TYPE OVRPlugin_OVRP_1_16_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_CloseCameraDevice, addr 0xa61958c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_CloseCameraDevice(::GlobalNamespace::OVRPlugin_CameraDevice  cameraDevice) ;

/// @brief Method ovrp_GetCameraDeviceColorFrameBgraPixels, addr 0xa619784, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetCameraDeviceColorFrameBgraPixels(::GlobalNamespace::OVRPlugin_CameraDevice  cameraDevice, ::by_ref<::System::IntPtr>  colorFrameBgraPixels, ::by_ref<int32_t>  colorFrameRowPitch) ;

/// @brief Method ovrp_GetCameraDeviceColorFrameSize, addr 0xa619700, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetCameraDeviceColorFrameSize(::GlobalNamespace::OVRPlugin_CameraDevice  cameraDevice, ::by_ref<::GlobalNamespace::OVRPlugin_Sizei>  colorFrameSize) ;

/// @brief Method ovrp_GetControllerState4, addr 0xa619818, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetControllerState4(uint32_t  controllerMask, ::by_ref<::GlobalNamespace::OVRPlugin_ControllerState4>  controllerState) ;

/// @brief Method ovrp_HasCameraDeviceOpened, addr 0xa619608, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_HasCameraDeviceOpened(::GlobalNamespace::OVRPlugin_CameraDevice  cameraDevice) ;

/// @brief Method ovrp_IsCameraDeviceAvailable, addr 0xa619410, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_IsCameraDeviceAvailable(::GlobalNamespace::OVRPlugin_CameraDevice  cameraDevice) ;

/// @brief Method ovrp_IsCameraDeviceColorFrameAvailable, addr 0xa619684, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_IsCameraDeviceColorFrameAvailable(::GlobalNamespace::OVRPlugin_CameraDevice  cameraDevice) ;

/// @brief Method ovrp_OpenCameraDevice, addr 0xa619510, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_OpenCameraDevice(::GlobalNamespace::OVRPlugin_CameraDevice  cameraDevice) ;

/// @brief Method ovrp_SetCameraDevicePreferredColorFrameSize, addr 0xa61948c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_SetCameraDevicePreferredColorFrameSize(::GlobalNamespace::OVRPlugin_CameraDevice  cameraDevice, ::GlobalNamespace::OVRPlugin_Sizei  preferredColorFrameSize) ;

/// @brief Method ovrp_UpdateCameraDevices, addr 0xa6193ac, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_UpdateCameraDevices() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_16_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_16_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_16_0(OVRPlugin_OVRP_1_16_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_16_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_16_0(OVRPlugin_OVRP_1_16_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12290};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_16_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_15_0
class CORDL_TYPE OVRPlugin_OVRP_1_15_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_CalculateLayerDesc, addr 0xa618e84, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_CalculateLayerDesc(::GlobalNamespace::OVRPlugin_OverlayShape  shape, ::GlobalNamespace::OVRPlugin_LayerLayout  layout, ::by_ref<::GlobalNamespace::OVRPlugin_Sizei>  textureSize, int32_t  mipLevels, int32_t  sampleCount, ::GlobalNamespace::OVRPlugin_EyeTextureFormat  format, int32_t  layerFlags, ::by_ref<::GlobalNamespace::OVRPlugin_LayerDesc>  layerDesc) ;

/// @brief Method ovrp_EnqueueDestroyLayer, addr 0xa618fd4, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_EnqueueDestroyLayer(::System::IntPtr  layerId) ;

/// @brief Method ovrp_EnqueueSetupLayer, addr 0xa618f50, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_EnqueueSetupLayer(::by_ref<::GlobalNamespace::OVRPlugin_LayerDesc>  desc, ::System::IntPtr  layerId) ;

/// @brief Method ovrp_EnqueueSubmitLayer, addr 0xa619170, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_EnqueueSubmitLayer(uint32_t  flags, ::System::IntPtr  textureLeft, ::System::IntPtr  textureRight, int32_t  layerId, int32_t  frameIndex, ::by_ref<::GlobalNamespace::OVRPlugin_Posef>  pose, ::by_ref<::GlobalNamespace::OVRPlugin_Vector3f>  scale, int32_t  layerIndex) ;

/// @brief Method ovrp_GetExternalCameraCount, addr 0xa618bf0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetExternalCameraCount(::by_ref<int32_t>  cameraCount) ;

/// @brief Method ovrp_GetExternalCameraExtrinsics, addr 0xa618e00, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetExternalCameraExtrinsics(int32_t  cameraId, ::by_ref<::GlobalNamespace::OVRPlugin_CameraExtrinsics>  cameraExtrinsics) ;

/// @brief Method ovrp_GetExternalCameraIntrinsics, addr 0xa618d7c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetExternalCameraIntrinsics(int32_t  cameraId, ::by_ref<::GlobalNamespace::OVRPlugin_CameraIntrinsics>  cameraIntrinsics) ;

/// @brief Method ovrp_GetExternalCameraName, addr 0xa618c6c, size 0x110, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetExternalCameraName(int32_t  cameraId, ::ArrayW<char16_t>  cameraName) ;

/// @brief Method ovrp_GetEyeTextureArrayEnabled, addr 0xa6192c0, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetEyeTextureArrayEnabled() ;

/// @brief Method ovrp_GetLayerTexturePtr, addr 0xa6190d4, size 0x9c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetLayerTexturePtr(int32_t  layerId, int32_t  stage, ::GlobalNamespace::OVRPlugin_Eye  eyeId, ::by_ref<::System::IntPtr>  textureHandle) ;

/// @brief Method ovrp_GetLayerTextureStageCount, addr 0xa619050, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetLayerTextureStageCount(int32_t  layerId, ::by_ref<int32_t>  layerTextureStageCount) ;

/// @brief Method ovrp_GetMixedRealityInitialized, addr 0xa618b28, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetMixedRealityInitialized() ;

/// @brief Method ovrp_GetNodeFrustum2, addr 0xa61923c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_GetNodeFrustum2(::GlobalNamespace::OVRPlugin_Node  nodeId, ::by_ref<::GlobalNamespace::OVRPlugin_Frustumf2>  nodeFrustum) ;

/// @brief Method ovrp_InitializeMixedReality, addr 0xa618a60, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_InitializeMixedReality() ;

/// @brief Method ovrp_ShutdownMixedReality, addr 0xa618ac4, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_ShutdownMixedReality() ;

/// @brief Method ovrp_UpdateExternalCamera, addr 0xa618b8c, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result ovrp_UpdateExternalCamera() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_15_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_15_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_15_0(OVRPlugin_OVRP_1_15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_15_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_15_0(OVRPlugin_OVRP_1_15_0 const& ) = delete;

/// @brief Field OVRP_EXTERNAL_CAMERA_NAME_SIZE offset 0xffffffff size 0x4
static constexpr int32_t  OVRP_EXTERNAL_CAMERA_NAME_SIZE{static_cast<int32_t>(0x20)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12289};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_15_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_12_0
class CORDL_TYPE OVRPlugin_OVRP_1_12_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetAppFramerate, addr 0xa61885c, size 0x64, virtual false, abstract: false, final false
static inline float_t ovrp_GetAppFramerate() ;

/// @brief Method ovrp_GetControllerState2, addr 0xa618954, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_ControllerState2 ovrp_GetControllerState2(uint32_t  controllerMask) ;

/// @brief Method ovrp_GetNodePoseState, addr 0xa6188c0, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_PoseStatef ovrp_GetNodePoseState(::GlobalNamespace::OVRPlugin_Step  stepId, ::GlobalNamespace::OVRPlugin_Node  nodeId) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_12_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_12_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_12_0(OVRPlugin_OVRP_1_12_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_12_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_12_0(OVRPlugin_OVRP_1_12_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12288};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_12_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_11_0
class CORDL_TYPE OVRPlugin_OVRP_1_11_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetDesiredEyeTextureFormat, addr 0xa618770, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_EyeTextureFormat ovrp_GetDesiredEyeTextureFormat() ;

/// @brief Method ovrp_SetDesiredEyeTextureFormat, addr 0xa6186f4, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetDesiredEyeTextureFormat(::GlobalNamespace::OVRPlugin_EyeTextureFormat  value) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_11_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_11_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_11_0(OVRPlugin_OVRP_1_11_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_11_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_11_0(OVRPlugin_OVRP_1_11_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12287};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_11_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_10_0
class CORDL_TYPE OVRPlugin_OVRP_1_10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_10_0(OVRPlugin_OVRP_1_10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_10_0(OVRPlugin_OVRP_1_10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12286};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_10_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_9_0
class CORDL_TYPE OVRPlugin_OVRP_1_9_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetActiveController, addr 0xa61839c, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Controller ovrp_GetActiveController() ;

/// @brief Method ovrp_GetAppPerfStats, addr 0xa6184f8, size 0x88, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_AppPerfStats ovrp_GetAppPerfStats() ;

/// @brief Method ovrp_GetBoundaryGeometry2, addr 0xa618464, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetBoundaryGeometry2(::GlobalNamespace::OVRPlugin_BoundaryType  boundaryType, ::System::IntPtr  points, ::by_ref<int32_t>  pointsCount) ;

/// @brief Method ovrp_GetConnectedControllers, addr 0xa618400, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Controller ovrp_GetConnectedControllers() ;

/// @brief Method ovrp_GetSystemHeadsetType, addr 0xa618338, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SystemHeadset ovrp_GetSystemHeadsetType() ;

/// @brief Method ovrp_ResetAppPerfStats, addr 0xa618580, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_ResetAppPerfStats() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_9_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_9_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_9_0(OVRPlugin_OVRP_1_9_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_9_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_9_0(OVRPlugin_OVRP_1_9_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12285};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_9_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_8_0
class CORDL_TYPE OVRPlugin_OVRP_1_8_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetBoundaryConfigured, addr 0xa617cc0, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetBoundaryConfigured() ;

/// @brief Method ovrp_GetBoundaryDimensions, addr 0xa617f04, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Vector3f ovrp_GetBoundaryDimensions(::GlobalNamespace::OVRPlugin_BoundaryType  boundaryType) ;

/// @brief Method ovrp_GetBoundaryGeometry, addr 0xa617e64, size 0xa0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_BoundaryGeometry ovrp_GetBoundaryGeometry(::GlobalNamespace::OVRPlugin_BoundaryType  boundaryType) ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method ovrp_GetBoundaryVisible, addr 0xa617f80, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetBoundaryVisible() ;

/// [Obsolete("Deprecated. Acceleration is not supported in OpenXR", false)]
/// @brief Method ovrp_GetNodeAcceleration2, addr 0xa61821c, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef ovrp_GetNodeAcceleration2(int32_t  stateId, ::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method ovrp_GetNodePose2, addr 0xa6180f4, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef ovrp_GetNodePose2(int32_t  stateId, ::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method ovrp_GetNodeVelocity2, addr 0xa618188, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef ovrp_GetNodeVelocity2(int32_t  stateId, ::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method ovrp_SetBoundaryVisible, addr 0xa617fe4, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetBoundaryVisible(::GlobalNamespace::OVRPlugin_Bool  value) ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method ovrp_TestBoundaryNode, addr 0xa617d24, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_BoundaryTestResult ovrp_TestBoundaryNode(::GlobalNamespace::OVRPlugin_Node  nodeId, ::GlobalNamespace::OVRPlugin_BoundaryType  boundaryType) ;

/// [Obsolete("Deprecated. This function will not be supported in OpenXR", false)]
/// @brief Method ovrp_TestBoundaryPoint, addr 0xa617db8, size 0xac, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_BoundaryTestResult ovrp_TestBoundaryPoint(::GlobalNamespace::OVRPlugin_Vector3f  point, ::GlobalNamespace::OVRPlugin_BoundaryType  boundaryType) ;

/// @brief Method ovrp_Update2, addr 0xa618060, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_Update2(int32_t  stateId, int32_t  frameIndex, double_t  predictionSeconds) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_8_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_8_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_8_0(OVRPlugin_OVRP_1_8_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_8_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_8_0(OVRPlugin_OVRP_1_8_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12284};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_8_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_7_0
class CORDL_TYPE OVRPlugin_OVRP_1_7_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetAppChromaticCorrection, addr 0xa617b58, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetAppChromaticCorrection() ;

/// @brief Method ovrp_SetAppChromaticCorrection, addr 0xa617bbc, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetAppChromaticCorrection(::GlobalNamespace::OVRPlugin_Bool  value) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_7_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_7_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_7_0(OVRPlugin_OVRP_1_7_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_7_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_7_0(OVRPlugin_OVRP_1_7_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12283};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_7_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_6_0
class CORDL_TYPE OVRPlugin_OVRP_1_6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetAppCpuStartToGpuEndTime, addr 0xa617a08, size 0x64, virtual false, abstract: false, final false
static inline float_t ovrp_GetAppCpuStartToGpuEndTime() ;

/// @brief Method ovrp_GetControllerHapticsDesc, addr 0xa617724, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_HapticsDesc ovrp_GetControllerHapticsDesc(uint32_t  controllerMask) ;

/// @brief Method ovrp_GetControllerHapticsState, addr 0xa6177a8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_HapticsState ovrp_GetControllerHapticsState(uint32_t  controllerMask) ;

/// @brief Method ovrp_GetEyeRecommendedResolutionScale, addr 0xa6179a4, size 0x64, virtual false, abstract: false, final false
static inline float_t ovrp_GetEyeRecommendedResolutionScale() ;

/// @brief Method ovrp_GetSystemRecommendedMSAALevel, addr 0xa617a6c, size 0x64, virtual false, abstract: false, final false
static inline int32_t ovrp_GetSystemRecommendedMSAALevel() ;

/// @brief Method ovrp_GetTrackingIPDEnabled, addr 0xa617644, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetTrackingIPDEnabled() ;

/// @brief Method ovrp_SetControllerHaptics, addr 0xa617824, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetControllerHaptics(uint32_t  controllerMask, ::GlobalNamespace::OVRPlugin_HapticsBuffer  hapticsBuffer) ;

/// @brief Method ovrp_SetOverlayQuad3, addr 0xa6178b8, size 0xec, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetOverlayQuad3(uint32_t  flags, ::System::IntPtr  textureLeft, ::System::IntPtr  textureRight, ::System::IntPtr  device, ::GlobalNamespace::OVRPlugin_Posef  pose, ::GlobalNamespace::OVRPlugin_Vector3f  scale, int32_t  layerIndex) ;

/// @brief Method ovrp_SetTrackingIPDEnabled, addr 0xa6176a8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetTrackingIPDEnabled(::GlobalNamespace::OVRPlugin_Bool  value) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_6_0(OVRPlugin_OVRP_1_6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_6_0(OVRPlugin_OVRP_1_6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12282};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_6_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_5_0
class CORDL_TYPE OVRPlugin_OVRP_1_5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetSystemRegion, addr 0xa617558, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_SystemRegion ovrp_GetSystemRegion() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_5_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_5_0(OVRPlugin_OVRP_1_5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_5_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_5_0(OVRPlugin_OVRP_1_5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12281};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_5_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_3_0
class CORDL_TYPE OVRPlugin_OVRP_1_3_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetEyeOcclusionMeshEnabled, addr 0xa61738c, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetEyeOcclusionMeshEnabled() ;

/// @brief Method ovrp_GetSystemHeadphonesPresent, addr 0xa61746c, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetSystemHeadphonesPresent() ;

/// @brief Method ovrp_SetEyeOcclusionMeshEnabled, addr 0xa6173f0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetEyeOcclusionMeshEnabled(::GlobalNamespace::OVRPlugin_Bool  value) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_3_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_3_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_3_0(OVRPlugin_OVRP_1_3_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_3_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_3_0(OVRPlugin_OVRP_1_3_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12280};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_3_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_2_0
class CORDL_TYPE OVRPlugin_OVRP_1_2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_SetSystemVSyncCount, addr 0xa617224, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetSystemVSyncCount(int32_t  vsyncCount) ;

/// @brief Method ovrpi_SetTrackingCalibratedOrigin, addr 0xa6172a0, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrpi_SetTrackingCalibratedOrigin() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_2_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_2_0(OVRPlugin_OVRP_1_2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_2_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_2_0(OVRPlugin_OVRP_1_2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12279};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_2_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_1_0
class CORDL_TYPE OVRPlugin_OVRP_1_1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

/// @brief Method _ovrp_GetAppLatencyTimings, addr 0xa616dbc, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr _ovrp_GetAppLatencyTimings() ;

/// @brief Method _ovrp_GetNativeSDKVersion, addr 0xa615e48, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr _ovrp_GetNativeSDKVersion() ;

/// @brief Method _ovrp_GetSystemProductName, addr 0xa616a4c, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr _ovrp_GetSystemProductName() ;

/// @brief Method _ovrp_GetVersion, addr 0xa615d60, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr _ovrp_GetVersion() ;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetAppHasVrFocus, addr 0xa616c90, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetAppHasVrFocus() ;

/// @brief Method ovrp_GetAppLatencyTimings, addr 0xa616e20, size 0x84, virtual false, abstract: false, final false
static inline ::StringW ovrp_GetAppLatencyTimings() ;

/// @brief Method ovrp_GetAppMonoscopic, addr 0xa616bb0, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetAppMonoscopic() ;

/// @brief Method ovrp_GetAppShouldQuit, addr 0xa616cf4, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetAppShouldQuit() ;

/// @brief Method ovrp_GetAppShouldRecenter, addr 0xa616d58, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetAppShouldRecenter() ;

/// @brief Method ovrp_GetAudioInId, addr 0xa615f94, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovrp_GetAudioInId() ;

/// @brief Method ovrp_GetAudioOutId, addr 0xa615f30, size 0x64, virtual false, abstract: false, final false
static inline ::System::IntPtr ovrp_GetAudioOutId() ;

/// @brief Method ovrp_GetControllerState, addr 0xa61654c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_ControllerState ovrp_GetControllerState(uint32_t  controllerMask) ;

/// @brief Method ovrp_GetEyeTextureScale, addr 0xa615ff8, size 0x64, virtual false, abstract: false, final false
static inline float_t ovrp_GetEyeTextureScale() ;

/// @brief Method ovrp_GetInitialized, addr 0xa615cfc, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetInitialized() ;

/// @brief Method ovrp_GetNativeSDKVersion, addr 0xa615eac, size 0x84, virtual false, abstract: false, final false
static inline ::StringW ovrp_GetNativeSDKVersion() ;

/// @brief Method ovrp_GetNodeFrustum, addr 0xa6164d0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Frustumf ovrp_GetNodeFrustum(::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method ovrp_GetNodeOrientationTracked, addr 0xa6163d8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetNodeOrientationTracked(::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method ovrp_GetNodePositionTracked, addr 0xa616454, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetNodePositionTracked(::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method ovrp_GetNodePresent, addr 0xa61635c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetNodePresent(::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method ovrp_GetSystemBatteryLevel, addr 0xa616984, size 0x64, virtual false, abstract: false, final false
static inline float_t ovrp_GetSystemBatteryLevel() ;

/// @brief Method ovrp_GetSystemBatteryStatus, addr 0xa616920, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_BatteryStatus ovrp_GetSystemBatteryStatus() ;

/// @brief Method ovrp_GetSystemBatteryTemperature, addr 0xa6169e8, size 0x64, virtual false, abstract: false, final false
static inline float_t ovrp_GetSystemBatteryTemperature() ;

/// [Obsolete("Deprecated. Replaced by ovrp_GetSuggestedCpuPerformanceLevel", false)]
/// @brief Method ovrp_GetSystemCpuLevel, addr 0xa6165d0, size 0x64, virtual false, abstract: false, final false
static inline int32_t ovrp_GetSystemCpuLevel() ;

/// @brief Method ovrp_GetSystemDisplayFrequency, addr 0xa6167f4, size 0x64, virtual false, abstract: false, final false
static inline float_t ovrp_GetSystemDisplayFrequency() ;

/// [Obsolete("Deprecated. Replaced by ovrp_GetSuggestedGpuPerformanceLevel", false)]
/// @brief Method ovrp_GetSystemGpuLevel, addr 0xa6166b0, size 0x64, virtual false, abstract: false, final false
static inline int32_t ovrp_GetSystemGpuLevel() ;

/// @brief Method ovrp_GetSystemPowerSavingMode, addr 0xa616790, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetSystemPowerSavingMode() ;

/// @brief Method ovrp_GetSystemProductName, addr 0xa616ab0, size 0x84, virtual false, abstract: false, final false
static inline ::StringW ovrp_GetSystemProductName() ;

/// @brief Method ovrp_GetSystemVSyncCount, addr 0xa616858, size 0x64, virtual false, abstract: false, final false
static inline int32_t ovrp_GetSystemVSyncCount() ;

/// @brief Method ovrp_GetSystemVolume, addr 0xa6168bc, size 0x64, virtual false, abstract: false, final false
static inline float_t ovrp_GetSystemVolume() ;

/// @brief Method ovrp_GetTrackingOrientationEnabled, addr 0xa616138, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetTrackingOrientationEnabled() ;

/// @brief Method ovrp_GetTrackingOrientationSupported, addr 0xa6160d4, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetTrackingOrientationSupported() ;

/// @brief Method ovrp_GetTrackingPositionEnabled, addr 0xa61627c, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetTrackingPositionEnabled() ;

/// @brief Method ovrp_GetTrackingPositionSupported, addr 0xa616218, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetTrackingPositionSupported() ;

/// @brief Method ovrp_GetUserEyeDepth, addr 0xa616fe4, size 0x64, virtual false, abstract: false, final false
static inline float_t ovrp_GetUserEyeDepth() ;

/// @brief Method ovrp_GetUserEyeHeight, addr 0xa6170c0, size 0x64, virtual false, abstract: false, final false
static inline float_t ovrp_GetUserEyeHeight() ;

/// @brief Method ovrp_GetUserIPD, addr 0xa616f08, size 0x64, virtual false, abstract: false, final false
static inline float_t ovrp_GetUserIPD() ;

/// @brief Method ovrp_GetUserPresent, addr 0xa616ea4, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_GetUserPresent() ;

/// @brief Method ovrp_GetVersion, addr 0xa615dc4, size 0x84, virtual false, abstract: false, final false
static inline ::StringW ovrp_GetVersion() ;

/// @brief Method ovrp_SetAppMonoscopic, addr 0xa616c14, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetAppMonoscopic(::GlobalNamespace::OVRPlugin_Bool  value) ;

/// @brief Method ovrp_SetEyeTextureScale, addr 0xa61605c, size 0x78, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetEyeTextureScale(float_t  value) ;

/// [Obsolete("Deprecated. Replaced by ovrp_SetSuggestedCpuPerformanceLevel", false)]
/// @brief Method ovrp_SetSystemCpuLevel, addr 0xa616634, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetSystemCpuLevel(int32_t  value) ;

/// [Obsolete("Deprecated. Replaced by ovrp_SetSuggestedGpuPerformanceLevel", false)]
/// @brief Method ovrp_SetSystemGpuLevel, addr 0xa616714, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetSystemGpuLevel(int32_t  value) ;

/// @brief Method ovrp_SetTrackingOrientationEnabled, addr 0xa61619c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetTrackingOrientationEnabled(::GlobalNamespace::OVRPlugin_Bool  value) ;

/// @brief Method ovrp_SetTrackingPositionEnabled, addr 0xa6162e0, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetTrackingPositionEnabled(::GlobalNamespace::OVRPlugin_Bool  value) ;

/// @brief Method ovrp_SetUserEyeDepth, addr 0xa617048, size 0x78, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetUserEyeDepth(float_t  value) ;

/// @brief Method ovrp_SetUserEyeHeight, addr 0xa617124, size 0x78, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetUserEyeHeight(float_t  value) ;

/// @brief Method ovrp_SetUserIPD, addr 0xa616f6c, size 0x78, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetUserIPD(float_t  value) ;

/// @brief Method ovrp_ShowSystemUI, addr 0xa616b34, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_ShowSystemUI(::GlobalNamespace::OVRPlugin_PlatformUI  ui) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_1_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_1_0(OVRPlugin_OVRP_1_1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_1_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_1_0(OVRPlugin_OVRP_1_1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12278};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_1_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_1_0_0
class CORDL_TYPE OVRPlugin_OVRP_1_0_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetTrackingCalibratedOrigin, addr 0xa615b84, size 0x74, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef ovrp_GetTrackingCalibratedOrigin() ;

/// @brief Method ovrp_GetTrackingOriginType, addr 0xa615aa4, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_TrackingOrigin ovrp_GetTrackingOriginType() ;

/// @brief Method ovrp_RecenterTrackingOrigin, addr 0xa615bf8, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_RecenterTrackingOrigin(uint32_t  flags) ;

/// @brief Method ovrp_SetTrackingOriginType, addr 0xa615b08, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetTrackingOriginType(::GlobalNamespace::OVRPlugin_TrackingOrigin  originType) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_1_0_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_0_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_1_0_0(OVRPlugin_OVRP_1_0_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_1_0_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_1_0_0(OVRPlugin_OVRP_1_0_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12277};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_1_0_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_0_5_0
class CORDL_TYPE OVRPlugin_OVRP_0_5_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_0_5_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_0_5_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_0_5_0(OVRPlugin_OVRP_0_5_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_0_5_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_0_5_0(OVRPlugin_OVRP_0_5_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12276};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_0_5_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_0_1_3
class CORDL_TYPE OVRPlugin_OVRP_0_1_3 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// [Obsolete("Deprecated. Acceleration is not supported in OpenXR", false)]
/// @brief Method ovrp_GetNodeAcceleration, addr 0xa615910, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef ovrp_GetNodeAcceleration(::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method ovrp_GetNodeVelocity, addr 0xa61588c, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef ovrp_GetNodeVelocity(::GlobalNamespace::OVRPlugin_Node  nodeId) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_0_1_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_0_1_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_0_1_3(OVRPlugin_OVRP_0_1_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_0_1_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_0_1_3(OVRPlugin_OVRP_0_1_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12275};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_0_1_3) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_0_1_2
class CORDL_TYPE OVRPlugin_OVRP_0_1_2 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetNodePose, addr 0xa6156ec, size 0x84, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Posef ovrp_GetNodePose(::GlobalNamespace::OVRPlugin_Node  nodeId) ;

/// @brief Method ovrp_SetControllerVibration, addr 0xa615770, size 0x94, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetControllerVibration(uint32_t  controllerMask, float_t  frequency, float_t  amplitude) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_0_1_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_0_1_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_0_1_2(OVRPlugin_OVRP_0_1_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_0_1_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_0_1_2(OVRPlugin_OVRP_0_1_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12274};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_0_1_2) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_0_1_1
class CORDL_TYPE OVRPlugin_OVRP_0_1_1 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_SetOverlayQuad2, addr 0xa615580, size 0xe4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Bool ovrp_SetOverlayQuad2(::GlobalNamespace::OVRPlugin_Bool  onTop, ::GlobalNamespace::OVRPlugin_Bool  headLocked, ::System::IntPtr  texture, ::System::IntPtr  device, ::GlobalNamespace::OVRPlugin_Posef  pose, ::GlobalNamespace::OVRPlugin_Vector3f  scale) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_0_1_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_0_1_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_0_1_1(OVRPlugin_OVRP_0_1_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_0_1_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_0_1_1(OVRPlugin_OVRP_0_1_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12273};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_0_1_1) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OVRP_0_1_0
class CORDL_TYPE OVRPlugin_OVRP_0_1_0 : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::System::Version*  version;

static inline ::System::Version* getStaticF_version() ;

/// @brief Method ovrp_GetEyeTextureSize, addr 0xa61547c, size 0x7c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Sizei ovrp_GetEyeTextureSize(::GlobalNamespace::OVRPlugin_Eye  eyeId) ;

static inline void setStaticF_version(::System::Version*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OVRP_0_1_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_0_1_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OVRP_0_1_0(OVRPlugin_OVRP_0_1_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OVRP_0_1_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OVRP_0_1_0(OVRPlugin_OVRP_0_1_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12272};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OVRP_0_1_0) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/UnifiedConsent
class CORDL_TYPE OVRPlugin_UnifiedConsent : public ::System::Object {
public:
// Declarations
/// @brief Method GetConsentMarkdownText, addr 0xa614d08, size 0x160, virtual false, abstract: false, final false
static inline ::StringW GetConsentMarkdownText() ;

/// @brief Method GetConsentNotificationMarkdownText, addr 0xa614e68, size 0x198, virtual false, abstract: false, final false
static inline ::StringW GetConsentNotificationMarkdownText() ;

/// @brief Method GetConsentSettingsChangeText, addr 0xa615000, size 0x160, virtual false, abstract: false, final false
static inline ::StringW GetConsentSettingsChangeText() ;

/// @brief Method GetConsentTitle, addr 0xa614ba8, size 0x160, virtual false, abstract: false, final false
static inline ::StringW GetConsentTitle() ;

/// @brief Method GetUnifiedConsent, addr 0xa614a6c, size 0x13c, virtual false, abstract: false, final false
static inline ::System::Nullable_1<bool> GetUnifiedConsent() ;

/// @brief Method IsConsentSettingsChangeEnabled, addr 0xa615228, size 0xc8, virtual false, abstract: false, final false
static inline bool IsConsentSettingsChangeEnabled() ;

/// @brief Method SaveUnifiedConsent, addr 0xa6148c0, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SaveUnifiedConsent(bool  consentValue) ;

/// @brief Method SaveUnifiedConsentWithOlderVersion, addr 0xa61498c, size 0xe0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SaveUnifiedConsentWithOlderVersion(bool  consentValue, int32_t  consentVersion) ;

/// @brief Method SetNotificationShown, addr 0xa6153b8, size 0xc4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result SetNotificationShown() ;

/// @brief Method ShouldShowTelemetryConsentWindow, addr 0xa615160, size 0xc8, virtual false, abstract: false, final false
static inline bool ShouldShowTelemetryConsentWindow() ;

/// @brief Method ShouldShowTelemetryNotification, addr 0xa6152f0, size 0xc8, virtual false, abstract: false, final false
static inline bool ShouldShowTelemetryNotification() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_UnifiedConsent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_UnifiedConsent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_UnifiedConsent(OVRPlugin_UnifiedConsent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_UnifiedConsent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_UnifiedConsent(OVRPlugin_UnifiedConsent const& ) = delete;

/// @brief Field ToolId offset 0xffffffff size 0x4
static constexpr int32_t  ToolId{static_cast<int32_t>(0x1)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12271};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_UnifiedConsent) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/Qpl
class CORDL_TYPE OVRPlugin_Qpl : public ::System::Object {
public:
// Declarations
using Annotation = ::GlobalNamespace::Qpl_OVRPlugin_Annotation;

using ResultType = ::GlobalNamespace::Qpl_OVRPlugin_ResultType;

using Variant = ::GlobalNamespace::Qpl_OVRPlugin_Variant;

using VariantType = ::GlobalNamespace::Qpl_OVRPlugin_VariantType;

/// @brief Method CreateMarkerHandle, addr 0xa613ed4, size 0xe0, virtual false, abstract: false, final false
static inline bool CreateMarkerHandle(::StringW  name, ::by_ref<int32_t>  nameHandle) ;

/// @brief Method DestroyMarkerHandle, addr 0xa613fb4, size 0xcc, virtual false, abstract: false, final false
static inline bool DestroyMarkerHandle(int32_t  nameHandle) ;

/// @brief Method MarkerAnnotation, addr 0xa613dc0, size 0x114, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result MarkerAnnotation(int32_t  markerId, ::StringW  annotationKey, ::GlobalNamespace::Qpl_OVRPlugin_Variant  annotationValue, int32_t  instanceKey) ;

/// @brief Method MarkerAnnotation, addr 0xa613ccc, size 0xf4, virtual false, abstract: false, final false
static inline void MarkerAnnotation(int32_t  markerId, ::StringW  annotationKey, ::StringW  annotationValue, int32_t  instanceKey) ;

/// @brief Method MarkerEnd, addr 0xa6138d8, size 0xf4, virtual false, abstract: false, final false
static inline void MarkerEnd(int32_t  markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType  resultTypeId, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method MarkerPoint, addr 0xa613ac4, size 0x114, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result MarkerPoint(int32_t  markerId, ::StringW  name, ::GlobalNamespace::Qpl_OVRPlugin_Annotation*  annotations, int32_t  annotationCount, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method MarkerPoint, addr 0xa6139cc, size 0xf8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRPlugin_Result MarkerPoint(int32_t  markerId, ::StringW  name, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method MarkerPointCached, addr 0xa613bd8, size 0xf4, virtual false, abstract: false, final false
static inline void MarkerPointCached(int32_t  markerId, int32_t  nameHandle, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method MarkerStart, addr 0xa6136fc, size 0xe0, virtual false, abstract: false, final false
static inline void MarkerStart(int32_t  markerId, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method MarkerStartForJoin, addr 0xa6137dc, size 0xfc, virtual false, abstract: false, final false
static inline void MarkerStartForJoin(int32_t  markerId, ::StringW  joinId, ::GlobalNamespace::OVRPlugin_Bool  cancelMarkerIfAppBackgrounded, int32_t  instanceKey, int64_t  timestampMs) ;

/// @brief Method SetConsent, addr 0xa613638, size 0xc4, virtual false, abstract: false, final false
static inline void SetConsent(::GlobalNamespace::OVRPlugin_Bool  consent) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Qpl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_Qpl", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_Qpl(OVRPlugin_Qpl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_Qpl", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_Qpl(OVRPlugin_Qpl const& ) = delete;

/// @brief Field AutoSetTimeoutMs offset 0xffffffff size 0x4
static constexpr int32_t  AutoSetTimeoutMs{static_cast<int32_t>(0x0)};

/// @brief Field AutoSetTimestampMs offset 0xffffffff size 0x8
static constexpr int64_t  AutoSetTimestampMs{static_cast<int64_t>(0xffffffffffffffff)};

/// @brief Field DefaultInstanceKey offset 0xffffffff size 0x4
static constexpr int32_t  DefaultInstanceKey{static_cast<int32_t>(0x0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12270};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_Qpl) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/UnityOpenXR
class CORDL_TYPE OVRPlugin_UnityOpenXR : public ::System::Object {
public:
// Declarations
/// @brief Field Enabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_Enabled, put=setStaticF_Enabled)) bool  Enabled;

/// @brief Method AllowVisibilityMesh, addr 0xa613184, size 0xc4, virtual false, abstract: false, final false
static inline void AllowVisibilityMesh(bool  enabled) ;

/// @brief Method HookGetInstanceProcAddr, addr 0xa612ccc, size 0xc8, virtual false, abstract: false, final false
static inline ::System::IntPtr HookGetInstanceProcAddr(::System::IntPtr  func) ;

static inline ::GlobalNamespace::OVRPlugin_UnityOpenXR* New_ctor() ;

/// @brief Method OnAppSpaceChange, addr 0xa612fe8, size 0xc4, virtual false, abstract: false, final false
static inline void OnAppSpaceChange(uint64_t  xrSpace) ;

/// @brief Method OnAppSpaceChange2, addr 0xa6130ac, size 0xd8, virtual false, abstract: false, final false
static inline void OnAppSpaceChange2(uint64_t  xrSpace, int32_t  spaceFlags) ;

/// @brief Method OnInstanceCreate, addr 0xa612d94, size 0xcc, virtual false, abstract: false, final false
static inline bool OnInstanceCreate(uint64_t  xrInstance) ;

/// @brief Method OnInstanceDestroy, addr 0xa612e60, size 0xc4, virtual false, abstract: false, final false
static inline void OnInstanceDestroy(uint64_t  xrInstance) ;

/// @brief Method OnSessionBegin, addr 0xa613320, size 0xc4, virtual false, abstract: false, final false
static inline void OnSessionBegin(uint64_t  xrSession) ;

/// @brief Method OnSessionCreate, addr 0xa612f24, size 0xc4, virtual false, abstract: false, final false
static inline void OnSessionCreate(uint64_t  xrSession) ;

/// @brief Method OnSessionDestroy, addr 0xa61356c, size 0xc4, virtual false, abstract: false, final false
static inline void OnSessionDestroy(uint64_t  xrSession) ;

/// @brief Method OnSessionEnd, addr 0xa6133e4, size 0xc4, virtual false, abstract: false, final false
static inline void OnSessionEnd(uint64_t  xrSession) ;

/// @brief Method OnSessionExiting, addr 0xa6134a8, size 0xc4, virtual false, abstract: false, final false
static inline void OnSessionExiting(uint64_t  xrSession) ;

/// @brief Method OnSessionStateChange, addr 0xa613248, size 0xd8, virtual false, abstract: false, final false
static inline void OnSessionStateChange(int32_t  oldState, int32_t  newState) ;

/// @brief Method SetClientVersion, addr 0xa612bd8, size 0xf4, virtual false, abstract: false, final false
static inline void SetClientVersion() ;

/// @brief Method .ctor, addr 0xa613630, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_Enabled() ;

static inline void setStaticF_Enabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_UnityOpenXR() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_UnityOpenXR", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_UnityOpenXR(OVRPlugin_UnityOpenXR && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_UnityOpenXR", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_UnityOpenXR(OVRPlugin_UnityOpenXR const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12257};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_UnityOpenXR) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/Ktx
class CORDL_TYPE OVRPlugin_Ktx : public ::System::Object {
public:
// Declarations
/// @brief Method DestroyKtxTexture, addr 0xa612aa0, size 0x130, virtual false, abstract: false, final false
static inline bool DestroyKtxTexture(::System::IntPtr  texture) ;

/// @brief Method GetKtxTextureData, addr 0xa612958, size 0x148, virtual false, abstract: false, final false
static inline bool GetKtxTextureData(::System::IntPtr  texture, ::System::IntPtr  textureData, uint32_t  bufferSize) ;

/// @brief Method GetKtxTextureHeight, addr 0xa612598, size 0x140, virtual false, abstract: false, final false
static inline uint32_t GetKtxTextureHeight(::System::IntPtr  texture) ;

/// @brief Method GetKtxTextureSize, addr 0xa612818, size 0x140, virtual false, abstract: false, final false
static inline uint32_t GetKtxTextureSize(::System::IntPtr  texture) ;

/// @brief Method GetKtxTextureWidth, addr 0xa612458, size 0x140, virtual false, abstract: false, final false
static inline uint32_t GetKtxTextureWidth(::System::IntPtr  texture) ;

/// @brief Method LoadKtxFromMemory, addr 0xa612308, size 0x150, virtual false, abstract: false, final false
static inline ::System::IntPtr LoadKtxFromMemory(::System::IntPtr  dataPtr, uint32_t  length) ;

static inline ::GlobalNamespace::OVRPlugin_Ktx* New_ctor() ;

/// @brief Method TranscodeKtxTexture, addr 0xa6126d8, size 0x140, virtual false, abstract: false, final false
static inline bool TranscodeKtxTexture(::System::IntPtr  texture, uint32_t  format) ;

/// @brief Method .ctor, addr 0xa612bd0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Ktx() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_Ktx", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_Ktx(OVRPlugin_Ktx && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_Ktx", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_Ktx(OVRPlugin_Ktx const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12252};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_Ktx) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/OpenXREventDelegateType
class CORDL_TYPE OVRPlugin_OpenXREventDelegateType : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa612280, size 0x7c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr  data, ::System::IntPtr  context, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa6122fc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa61226c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::System::IntPtr  data, ::System::IntPtr  context) ;

static inline ::GlobalNamespace::OVRPlugin_OpenXREventDelegateType* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa6121cc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OpenXREventDelegateType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OpenXREventDelegateType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_OpenXREventDelegateType(OVRPlugin_OpenXREventDelegateType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_OpenXREventDelegateType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_OpenXREventDelegateType(OVRPlugin_OpenXREventDelegateType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12234};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_OpenXREventDelegateType) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/VirtualKeyboardModelAnimationStateHandler
class CORDL_TYPE OVRPlugin_VirtualKeyboardModelAnimationStateHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa612128, size 0x8c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::by_ref<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>  state, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa6121b4, size 0x18, virtual true, abstract: false, final false
inline void EndInvoke(::by_ref<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>  state, ::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa612114, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::by_ref<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationState>  state) ;

static inline ::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStateHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa612064, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_VirtualKeyboardModelAnimationStateHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_VirtualKeyboardModelAnimationStateHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_VirtualKeyboardModelAnimationStateHandler(OVRPlugin_VirtualKeyboardModelAnimationStateHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_VirtualKeyboardModelAnimationStateHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_VirtualKeyboardModelAnimationStateHandler(OVRPlugin_VirtualKeyboardModelAnimationStateHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12233};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStateHandler) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/VirtualKeyboardModelAnimationStateBufferProvider
class CORDL_TYPE OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa611fc0, size 0x7c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(int32_t  minimumBufferLength, int32_t  stateCount, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa61203c, size 0x28, virtual true, abstract: false, final false
inline ::System::IntPtr EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa611fac, size 0x14, virtual true, abstract: false, final false
inline ::System::IntPtr Invoke(int32_t  minimumBufferLength, int32_t  stateCount) ;

static inline ::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa611f0c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider(OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider(OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12232};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_VirtualKeyboardModelAnimationStateBufferProvider) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/GetBoneSkeleton3Delegate
class CORDL_TYPE OVRPlugin_GetBoneSkeleton3Delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa611eb8, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa611ed4, size 0x38, virtual true, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa611ea4, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone Invoke() ;

static inline ::GlobalNamespace::OVRPlugin_GetBoneSkeleton3Delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa611e08, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_GetBoneSkeleton3Delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_GetBoneSkeleton3Delegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_GetBoneSkeleton3Delegate(OVRPlugin_GetBoneSkeleton3Delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_GetBoneSkeleton3Delegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_GetBoneSkeleton3Delegate(OVRPlugin_GetBoneSkeleton3Delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12231};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_GetBoneSkeleton3Delegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/GetBoneSkeleton2Delegate
class CORDL_TYPE OVRPlugin_GetBoneSkeleton2Delegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa611db4, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa611dd0, size 0x38, virtual true, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa611da0, size 0x14, virtual true, abstract: false, final false
inline ::GlobalNamespace::OVRPlugin_Bone Invoke() ;

static inline ::GlobalNamespace::OVRPlugin_GetBoneSkeleton2Delegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa611d04, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_GetBoneSkeleton2Delegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_GetBoneSkeleton2Delegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_GetBoneSkeleton2Delegate(OVRPlugin_GetBoneSkeleton2Delegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_GetBoneSkeleton2Delegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_GetBoneSkeleton2Delegate(OVRPlugin_GetBoneSkeleton2Delegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12230};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_GetBoneSkeleton2Delegate) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/Media
class CORDL_TYPE OVRPlugin_Media : public ::System::Object {
public:
// Declarations
using InputVideoBufferType = ::GlobalNamespace::Media_OVRPlugin_InputVideoBufferType;

using MrcActivationMode = ::GlobalNamespace::Media_OVRPlugin_MrcActivationMode;

using PlatformCameraMode = ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode;

/// @brief Field cachedTexture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cachedTexture, put=setStaticF_cachedTexture)) ::UnityW<::UnityEngine::Texture2D>  cachedTexture;

/// @brief Method EncodeMrcFrame, addr 0xa6113f4, size 0x4d0, virtual false, abstract: false, final false
static inline bool EncodeMrcFrame(::UnityEngine::RenderTexture*  frame, ::ArrayW<float_t>  audioData, int32_t  audioFrames, int32_t  audioChannels, double_t  timestamp, double_t  poseTime, ::by_ref<int32_t>  outSyncId) ;

/// @brief Method EncodeMrcFrame, addr 0xa610f24, size 0x350, virtual false, abstract: false, final false
static inline bool EncodeMrcFrame(::System::IntPtr  textureHandle, ::System::IntPtr  fgTextureHandle, ::ArrayW<float_t>  audioData, int32_t  audioFrames, int32_t  audioChannels, double_t  timestamp, double_t  poseTime, ::by_ref<int32_t>  outSyncId) ;

/// @brief Method GetInitialized, addr 0xa60f988, size 0xd4, virtual false, abstract: false, final false
static inline bool GetInitialized() ;

/// @brief Method GetMrcActivationMode, addr 0xa60fbfc, size 0xcc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Media_OVRPlugin_MrcActivationMode GetMrcActivationMode() ;

/// @brief Method GetMrcAudioSampleRate, addr 0xa610b58, size 0xc4, virtual false, abstract: false, final false
static inline int32_t GetMrcAudioSampleRate() ;

/// @brief Method GetMrcFrameImageFlipped, addr 0xa610ddc, size 0xcc, virtual false, abstract: false, final false
static inline bool GetMrcFrameImageFlipped() ;

/// @brief Method GetMrcFrameSize, addr 0xa6108b0, size 0xe0, virtual false, abstract: false, final false
static inline void GetMrcFrameSize(::by_ref<int32_t>  frameWidth, ::by_ref<int32_t>  frameHeight) ;

/// @brief Method GetMrcInputVideoBufferType, addr 0xa610610, size 0xc8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Media_OVRPlugin_InputVideoBufferType GetMrcInputVideoBufferType() ;

/// @brief Method GetPlatformCameraMode, addr 0xa60ff4c, size 0xd0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode GetPlatformCameraMode() ;

/// @brief Method Initialize, addr 0xa60f740, size 0xc0, virtual false, abstract: false, final false
static inline bool Initialize() ;

/// @brief Method IsCastingToRemoteClient, addr 0xa611c24, size 0xd8, virtual false, abstract: false, final false
static inline bool IsCastingToRemoteClient() ;

/// @brief Method IsMrcActivated, addr 0xa610234, size 0xd0, virtual false, abstract: false, final false
static inline bool IsMrcActivated() ;

/// @brief Method IsMrcEnabled, addr 0xa6100e8, size 0xd0, virtual false, abstract: false, final false
static inline bool IsMrcEnabled() ;

static inline ::GlobalNamespace::OVRPlugin_Media* New_ctor() ;

/// @brief Method SetAvailableQueueIndexVulkan, addr 0xa611a08, size 0xcc, virtual false, abstract: false, final false
static inline bool SetAvailableQueueIndexVulkan(uint32_t  queueIndexVk) ;

/// @brief Method SetMrcActivationMode, addr 0xa60fd44, size 0xc8, virtual false, abstract: false, final false
static inline bool SetMrcActivationMode(::GlobalNamespace::Media_OVRPlugin_MrcActivationMode  mode) ;

/// @brief Method SetMrcAudioSampleRate, addr 0xa610a14, size 0xc8, virtual false, abstract: false, final false
static inline bool SetMrcAudioSampleRate(int32_t  sampleRate) ;

/// @brief Method SetMrcFrameImageFlipped, addr 0xa610c98, size 0xc8, virtual false, abstract: false, final false
static inline bool SetMrcFrameImageFlipped(bool  imageFlipped) ;

/// @brief Method SetMrcFrameSize, addr 0xa610754, size 0xd8, virtual false, abstract: false, final false
static inline bool SetMrcFrameSize(int32_t  frameWidth, int32_t  frameHeight) ;

/// @brief Method SetMrcHeadsetControllerPose, addr 0xa611ad4, size 0x150, virtual false, abstract: false, final false
static inline bool SetMrcHeadsetControllerPose(::GlobalNamespace::OVRPlugin_Posef  headsetPose, ::GlobalNamespace::OVRPlugin_Posef  leftControllerPose, ::GlobalNamespace::OVRPlugin_Posef  rightControllerPose) ;

/// @brief Method SetMrcInputVideoBufferType, addr 0xa6104cc, size 0xc8, virtual false, abstract: false, final false
static inline bool SetMrcInputVideoBufferType(::GlobalNamespace::Media_OVRPlugin_InputVideoBufferType  videoBufferType) ;

/// @brief Method SetPlatformCameraMode, addr 0xa61001c, size 0xcc, virtual false, abstract: false, final false
static inline bool SetPlatformCameraMode(::GlobalNamespace::Media_OVRPlugin_PlatformCameraMode  mode) ;

/// @brief Method SetPlatformInitialized, addr 0xa60fe88, size 0xc4, virtual false, abstract: false, final false
static inline bool SetPlatformInitialized() ;

/// @brief Method Shutdown, addr 0xa60f864, size 0xc0, virtual false, abstract: false, final false
static inline bool Shutdown() ;

/// @brief Method SyncMrcFrame, addr 0xa6118c4, size 0xc8, virtual false, abstract: false, final false
static inline bool SyncMrcFrame(int32_t  syncId) ;

/// @brief Method Update, addr 0xa60fad8, size 0xc0, virtual false, abstract: false, final false
static inline bool Update() ;

/// @brief Method UseMrcDebugCamera, addr 0xa610380, size 0xd0, virtual false, abstract: false, final false
static inline bool UseMrcDebugCamera() ;

/// @brief Method .ctor, addr 0xa611cfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_cachedTexture() ;

static inline void setStaticF_cachedTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Media() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_Media", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_Media(OVRPlugin_Media && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_Media", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_Media(OVRPlugin_Media const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12229};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_Media) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies OVRPlugin::MeshType, OVRPlugin::Vector2f, OVRPlugin::Vector3f, OVRPlugin::Vector4f, OVRPlugin::Vector4s, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/Mesh
class CORDL_TYPE OVRPlugin_Mesh : public ::System::Object {
public:
// Declarations
/// @brief Field BlendIndices, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_BlendIndices, put=__cordl_internal_set_BlendIndices)) ::ArrayW<::GlobalNamespace::OVRPlugin_Vector4s>  BlendIndices;

/// @brief Field BlendWeights, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_BlendWeights, put=__cordl_internal_set_BlendWeights)) ::ArrayW<::GlobalNamespace::OVRPlugin_Vector4f>  BlendWeights;

/// @brief Field Indices, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Indices, put=__cordl_internal_set_Indices)) ::ArrayW<int16_t>  Indices;

/// @brief Field NumIndices, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumIndices, put=__cordl_internal_set_NumIndices)) uint32_t  NumIndices;

/// @brief Field NumVertices, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_NumVertices, put=__cordl_internal_set_NumVertices)) uint32_t  NumVertices;

/// @brief Field Type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::GlobalNamespace::OVRPlugin_MeshType  Type;

/// @brief Field VertexNormals, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_VertexNormals, put=__cordl_internal_set_VertexNormals)) ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  VertexNormals;

/// @brief Field VertexPositions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_VertexPositions, put=__cordl_internal_set_VertexPositions)) ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  VertexPositions;

/// @brief Field VertexUV0, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_VertexUV0, put=__cordl_internal_set_VertexUV0)) ::ArrayW<::GlobalNamespace::OVRPlugin_Vector2f>  VertexUV0;

static inline ::GlobalNamespace::OVRPlugin_Mesh* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector4s> const& __cordl_internal_get_BlendIndices() const;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector4s>& __cordl_internal_get_BlendIndices() ;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector4f> const& __cordl_internal_get_BlendWeights() const;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector4f>& __cordl_internal_get_BlendWeights() ;

constexpr ::ArrayW<int16_t> const& __cordl_internal_get_Indices() const;

constexpr ::ArrayW<int16_t>& __cordl_internal_get_Indices() ;

constexpr uint32_t const& __cordl_internal_get_NumIndices() const;

constexpr uint32_t& __cordl_internal_get_NumIndices() ;

constexpr uint32_t const& __cordl_internal_get_NumVertices() const;

constexpr uint32_t& __cordl_internal_get_NumVertices() ;

constexpr ::GlobalNamespace::OVRPlugin_MeshType const& __cordl_internal_get_Type() const;

constexpr ::GlobalNamespace::OVRPlugin_MeshType& __cordl_internal_get_Type() ;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f> const& __cordl_internal_get_VertexNormals() const;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>& __cordl_internal_get_VertexNormals() ;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f> const& __cordl_internal_get_VertexPositions() const;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>& __cordl_internal_get_VertexPositions() ;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector2f> const& __cordl_internal_get_VertexUV0() const;

constexpr ::ArrayW<::GlobalNamespace::OVRPlugin_Vector2f>& __cordl_internal_get_VertexUV0() ;

constexpr void __cordl_internal_set_BlendIndices(::ArrayW<::GlobalNamespace::OVRPlugin_Vector4s>  value) ;

constexpr void __cordl_internal_set_BlendWeights(::ArrayW<::GlobalNamespace::OVRPlugin_Vector4f>  value) ;

constexpr void __cordl_internal_set_Indices(::ArrayW<int16_t>  value) ;

constexpr void __cordl_internal_set_NumIndices(uint32_t  value) ;

constexpr void __cordl_internal_set_NumVertices(uint32_t  value) ;

constexpr void __cordl_internal_set_Type(::GlobalNamespace::OVRPlugin_MeshType  value) ;

constexpr void __cordl_internal_set_VertexNormals(::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  value) ;

constexpr void __cordl_internal_set_VertexPositions(::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  value) ;

constexpr void __cordl_internal_set_VertexUV0(::ArrayW<::GlobalNamespace::OVRPlugin_Vector2f>  value) ;

/// @brief Method .ctor, addr 0xa60f5f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_Mesh() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_Mesh", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_Mesh(OVRPlugin_Mesh && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_Mesh", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_Mesh(OVRPlugin_Mesh const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12151};

/// @brief Field Type, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_MeshType  ___Type;

/// @brief Field NumVertices, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___NumVertices;

/// @brief Field NumIndices, offset: 0x18, size: 0x4, def value: None
 uint32_t  ___NumIndices;

/// @brief Field VertexPositions, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  ___VertexPositions;

/// @brief Field Indices, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int16_t>  ___Indices;

/// @brief Field VertexNormals, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  ___VertexNormals;

/// @brief Field VertexUV0, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Vector2f>  ___VertexUV0;

/// @brief Field BlendIndices, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Vector4s>  ___BlendIndices;

/// @brief Field BlendWeights, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Vector4f>  ___BlendWeights;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_Mesh, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Mesh, ___NumVertices) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Mesh, ___NumIndices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Mesh, ___VertexPositions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Mesh, ___Indices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Mesh, ___VertexNormals) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Mesh, ___VertexUV0) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Mesh, ___BlendIndices) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_Mesh, ___BlendWeights) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_Mesh) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/LogCallback2DelegateType
class CORDL_TYPE OVRPlugin_LogCallback2DelegateType : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa60da68, size 0xc0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::OVRPlugin_LogLevel  logLevel, ::System::IntPtr  message, int32_t  size, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa60db28, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa60da54, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::GlobalNamespace::OVRPlugin_LogLevel  logLevel, ::System::IntPtr  message, int32_t  size) ;

static inline ::GlobalNamespace::OVRPlugin_LogCallback2DelegateType* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa60d9b4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_LogCallback2DelegateType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_LogCallback2DelegateType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_LogCallback2DelegateType(OVRPlugin_LogCallback2DelegateType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_LogCallback2DelegateType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_LogCallback2DelegateType(OVRPlugin_LogCallback2DelegateType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12049};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRPlugin_LogCallback2DelegateType) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRPlugin/GUID
class CORDL_TYPE OVRPlugin_GUID : public ::System::Object {
public:
// Declarations
/// @brief Field a, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_a, put=__cordl_internal_set_a)) int32_t  a;

/// @brief Field b, offset 0x14, size 0x2 
 __declspec(property(get=__cordl_internal_get_b, put=__cordl_internal_set_b)) int16_t  b;

/// @brief Field c, offset 0x16, size 0x2 
 __declspec(property(get=__cordl_internal_get_c, put=__cordl_internal_set_c)) int16_t  c;

/// @brief Field d0, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_d0, put=__cordl_internal_set_d0)) uint8_t  d0;

/// @brief Field d1, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_d1, put=__cordl_internal_set_d1)) uint8_t  d1;

/// @brief Field d2, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get_d2, put=__cordl_internal_set_d2)) uint8_t  d2;

/// @brief Field d3, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get_d3, put=__cordl_internal_set_d3)) uint8_t  d3;

/// @brief Field d4, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_d4, put=__cordl_internal_set_d4)) uint8_t  d4;

/// @brief Field d5, offset 0x1d, size 0x1 
 __declspec(property(get=__cordl_internal_get_d5, put=__cordl_internal_set_d5)) uint8_t  d5;

/// @brief Field d6, offset 0x1e, size 0x1 
 __declspec(property(get=__cordl_internal_get_d6, put=__cordl_internal_set_d6)) uint8_t  d6;

/// @brief Field d7, offset 0x1f, size 0x1 
 __declspec(property(get=__cordl_internal_get_d7, put=__cordl_internal_set_d7)) uint8_t  d7;

static inline ::GlobalNamespace::OVRPlugin_GUID* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_a() const;

constexpr int32_t& __cordl_internal_get_a() ;

constexpr int16_t const& __cordl_internal_get_b() const;

constexpr int16_t& __cordl_internal_get_b() ;

constexpr int16_t const& __cordl_internal_get_c() const;

constexpr int16_t& __cordl_internal_get_c() ;

constexpr uint8_t const& __cordl_internal_get_d0() const;

constexpr uint8_t& __cordl_internal_get_d0() ;

constexpr uint8_t const& __cordl_internal_get_d1() const;

constexpr uint8_t& __cordl_internal_get_d1() ;

constexpr uint8_t const& __cordl_internal_get_d2() const;

constexpr uint8_t& __cordl_internal_get_d2() ;

constexpr uint8_t const& __cordl_internal_get_d3() const;

constexpr uint8_t& __cordl_internal_get_d3() ;

constexpr uint8_t const& __cordl_internal_get_d4() const;

constexpr uint8_t& __cordl_internal_get_d4() ;

constexpr uint8_t const& __cordl_internal_get_d5() const;

constexpr uint8_t& __cordl_internal_get_d5() ;

constexpr uint8_t const& __cordl_internal_get_d6() const;

constexpr uint8_t& __cordl_internal_get_d6() ;

constexpr uint8_t const& __cordl_internal_get_d7() const;

constexpr uint8_t& __cordl_internal_get_d7() ;

constexpr void __cordl_internal_set_a(int32_t  value) ;

constexpr void __cordl_internal_set_b(int16_t  value) ;

constexpr void __cordl_internal_set_c(int16_t  value) ;

constexpr void __cordl_internal_set_d0(uint8_t  value) ;

constexpr void __cordl_internal_set_d1(uint8_t  value) ;

constexpr void __cordl_internal_set_d2(uint8_t  value) ;

constexpr void __cordl_internal_set_d3(uint8_t  value) ;

constexpr void __cordl_internal_set_d4(uint8_t  value) ;

constexpr void __cordl_internal_set_d5(uint8_t  value) ;

constexpr void __cordl_internal_set_d6(uint8_t  value) ;

constexpr void __cordl_internal_set_d7(uint8_t  value) ;

/// @brief Method .ctor, addr 0xa60d9ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_GUID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_GUID", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRPlugin_GUID(OVRPlugin_GUID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRPlugin_GUID", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRPlugin_GUID(OVRPlugin_GUID const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12044};

/// @brief Field a, offset: 0x10, size: 0x4, def value: None
 int32_t  ___a;

/// @brief Field b, offset: 0x14, size: 0x2, def value: None
 int16_t  ___b;

/// @brief Field c, offset: 0x16, size: 0x2, def value: None
 int16_t  ___c;

/// @brief Field d0, offset: 0x18, size: 0x1, def value: None
 uint8_t  ___d0;

/// @brief Field d1, offset: 0x19, size: 0x1, def value: None
 uint8_t  ___d1;

/// @brief Field d2, offset: 0x1a, size: 0x1, def value: None
 uint8_t  ___d2;

/// @brief Field d3, offset: 0x1b, size: 0x1, def value: None
 uint8_t  ___d3;

/// @brief Field d4, offset: 0x1c, size: 0x1, def value: None
 uint8_t  ___d4;

/// @brief Field d5, offset: 0x1d, size: 0x1, def value: None
 uint8_t  ___d5;

/// @brief Field d6, offset: 0x1e, size: 0x1, def value: None
 uint8_t  ___d6;

/// @brief Field d7, offset: 0x1f, size: 0x1, def value: None
 uint8_t  ___d7;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_GUID, ___a) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_GUID, ___b) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_GUID, ___c) == 0x16, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_GUID, ___d0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_GUID, ___d1) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_GUID, ___d2) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_GUID, ___d3) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_GUID, ___d4) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_GUID, ___d5) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_GUID, ___d6) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_GUID, ___d7) == 0x1f, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_GUID) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
