#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_BackendFovationApi_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_ColorSubmissionModeGroup_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_DepthSubmissionMode_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_LatencyOptimization_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_MultiviewRenderRegionsOptimizationMode_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_RenderMode_def.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRSettings_SpaceWarpMotionVectorTextureFormat_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OpenXRSettings)
namespace GlobalNamespace {
struct OpenXRSettings_BackendFovationApi;
}
namespace GlobalNamespace {
struct OpenXRSettings_ColorSubmissionModeGroup;
}
namespace GlobalNamespace {
struct OpenXRSettings_DepthSubmissionMode;
}
namespace GlobalNamespace {
struct OpenXRSettings_LatencyOptimization;
}
namespace GlobalNamespace {
struct OpenXRSettings_MultiviewRenderRegionsOptimizationMode;
}
namespace GlobalNamespace {
struct OpenXRSettings_RenderMode;
}
namespace GlobalNamespace {
struct OpenXRSettings_SpaceWarpMotionVectorTextureFormat;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings_ColorSubmissionModeList;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings___c;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings_ColorSubmissionModeList;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRSettings___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::OpenXR::OpenXRSettings*);
MARK_REF_T(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*);
MARK_REF_T(::UnityEngine::XR::OpenXR::OpenXRSettings___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRSettings*, "UnityEngine.XR.OpenXR", "OpenXRSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*, "UnityEngine.XR.OpenXR", "OpenXRSettings/ColorSubmissionModeList");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRSettings___c*, "UnityEngine.XR.OpenXR", "OpenXRSettings/<>c");
// Dependencies UnityEngine.ScriptableObject, UnityEngine.XR.OpenXR.Features.OpenXRFeature, UnityEngine.XR.OpenXR.OpenXRSettings::BackendFovationApi, UnityEngine.XR.OpenXR.OpenXRSettings::ColorSubmissionModeGroup, UnityEngine.XR.OpenXR.OpenXRSettings::DepthSubmissionMode, UnityEngine.XR.OpenXR.OpenXRSettings::LatencyOptimization, UnityEngine.XR.OpenXR.OpenXRSettings::MultiviewRenderRegionsOptimizationMode, UnityEngine.XR.OpenXR.OpenXRSettings::RenderMode, UnityEngine.XR.OpenXR.OpenXRSettings::SpaceWarpMotionVectorTextureFormat
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings
class CORDL_TYPE OpenXRSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using BackendFovationApi = ::GlobalNamespace::OpenXRSettings_BackendFovationApi;

using ColorSubmissionModeGroup = ::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup;

using DepthSubmissionMode = ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode;

using LatencyOptimization = ::GlobalNamespace::OpenXRSettings_LatencyOptimization;

using MultiviewRenderRegionsOptimizationMode = ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode;

using RenderMode = ::GlobalNamespace::OpenXRSettings_RenderMode;

using SpaceWarpMotionVectorTextureFormat = ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat;

using ColorSubmissionModeList = ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList;

using __c = ::UnityEngine::XR::OpenXR::OpenXRSettings___c;

 __declspec(property(get=get_autoColorSubmissionMode, put=set_autoColorSubmissionMode)) bool  autoColorSubmissionMode;

 __declspec(property(get=get_colorSubmissionModes, put=set_colorSubmissionModes)) ::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>  colorSubmissionModes;

 __declspec(property(get=get_depthSubmissionMode, put=set_depthSubmissionMode)) ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode  depthSubmissionMode;

 __declspec(property(get=get_featureCount)) int32_t  featureCount;

/// @brief Field features, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_features, put=__cordl_internal_set_features)) ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>  features;

 __declspec(property(get=get_foveatedRenderingApi, put=set_foveatedRenderingApi)) ::GlobalNamespace::OpenXRSettings_BackendFovationApi  foveatedRenderingApi;

/// @brief Field kDefaultColorMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kDefaultColorMode, put=setStaticF_kDefaultColorMode)) ::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup  kDefaultColorMode;

 __declspec(property(get=get_latencyOptimization, put=set_latencyOptimization)) ::GlobalNamespace::OpenXRSettings_LatencyOptimization  latencyOptimization;

/// @brief Field m_autoColorSubmissionMode, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_autoColorSubmissionMode, put=__cordl_internal_set_m_autoColorSubmissionMode)) bool  m_autoColorSubmissionMode;

/// @brief Field m_colorSubmissionModes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_colorSubmissionModes, put=__cordl_internal_set_m_colorSubmissionModes)) ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*  m_colorSubmissionModes;

/// @brief Field m_depthSubmissionMode, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_depthSubmissionMode, put=__cordl_internal_set_m_depthSubmissionMode)) ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode  m_depthSubmissionMode;

/// @brief Field m_eyeTrackingAndroidXRPermissionsToRequest, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_eyeTrackingAndroidXRPermissionsToRequest, put=__cordl_internal_set_m_eyeTrackingAndroidXRPermissionsToRequest)) ::StringW  m_eyeTrackingAndroidXRPermissionsToRequest;

/// @brief Field m_eyeTrackingQuestPermissionsToRequest, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_eyeTrackingQuestPermissionsToRequest, put=__cordl_internal_set_m_eyeTrackingQuestPermissionsToRequest)) ::StringW  m_eyeTrackingQuestPermissionsToRequest;

/// @brief Field m_foveatedRenderingApi, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_foveatedRenderingApi, put=__cordl_internal_set_m_foveatedRenderingApi)) ::GlobalNamespace::OpenXRSettings_BackendFovationApi  m_foveatedRenderingApi;

/// @brief Field m_hasMigratedMultiviewRenderRegionSetting, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_hasMigratedMultiviewRenderRegionSetting, put=__cordl_internal_set_m_hasMigratedMultiviewRenderRegionSetting)) bool  m_hasMigratedMultiviewRenderRegionSetting;

/// @brief Field m_latencyOptimization, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_latencyOptimization, put=__cordl_internal_set_m_latencyOptimization)) ::GlobalNamespace::OpenXRSettings_LatencyOptimization  m_latencyOptimization;

/// @brief Field m_multiviewRenderRegionsOptimizationMode, offset 0x53, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_multiviewRenderRegionsOptimizationMode, put=__cordl_internal_set_m_multiviewRenderRegionsOptimizationMode)) ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode  m_multiviewRenderRegionsOptimizationMode;

/// @brief Field m_optimizeBufferDiscards, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_optimizeBufferDiscards, put=__cordl_internal_set_m_optimizeBufferDiscards)) bool  m_optimizeBufferDiscards;

/// @brief Field m_optimizeMultiviewRenderRegions, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_optimizeMultiviewRenderRegions, put=__cordl_internal_set_m_optimizeMultiviewRenderRegions)) bool  m_optimizeMultiviewRenderRegions;

/// @brief Field m_renderMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_renderMode, put=__cordl_internal_set_m_renderMode)) ::GlobalNamespace::OpenXRSettings_RenderMode  m_renderMode;

/// @brief Field m_spacewarpMotionVectorTextureFormat, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_spacewarpMotionVectorTextureFormat, put=__cordl_internal_set_m_spacewarpMotionVectorTextureFormat)) ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat  m_spacewarpMotionVectorTextureFormat;

/// @brief Field m_symmetricProjection, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_symmetricProjection, put=__cordl_internal_set_m_symmetricProjection)) bool  m_symmetricProjection;

/// @brief Field m_useOpenXRPredictedTime, offset 0x56, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_useOpenXRPredictedTime, put=__cordl_internal_set_m_useOpenXRPredictedTime)) bool  m_useOpenXRPredictedTime;

 __declspec(property(get=get_multiviewRenderRegionsOptimizationMode, put=set_multiviewRenderRegionsOptimizationMode)) ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode  multiviewRenderRegionsOptimizationMode;

 __declspec(property(get=get_optimizeBufferDiscards, put=set_optimizeBufferDiscards)) bool  optimizeBufferDiscards;

/// @brief [Obsolete("optimizeMultiviewRenderRegions is deprecated. Use multiviewRenderRegionsMode instead.", false)]
 __declspec(property(get=get_optimizeMultiviewRenderRegions, put=set_optimizeMultiviewRenderRegions)) bool  optimizeMultiviewRenderRegions;

 __declspec(property(get=get_renderMode, put=set_renderMode)) ::GlobalNamespace::OpenXRSettings_RenderMode  renderMode;

/// @brief Field s_RuntimeInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RuntimeInstance, put=setStaticF_s_RuntimeInstance)) ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>  s_RuntimeInstance;

 __declspec(property(get=get_spacewarpMotionVectorTextureFormat, put=set_spacewarpMotionVectorTextureFormat)) ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat  spacewarpMotionVectorTextureFormat;

 __declspec(property(get=get_symmetricProjection, put=set_symmetricProjection)) bool  symmetricProjection;

 __declspec(property(get=get_useOpenXRPredictedTime, put=set_useOpenXRPredictedTime)) bool  useOpenXRPredictedTime;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method ApplyPermissionSettings, addr 0xb4e0990, size 0x310, virtual false, abstract: false, final false
inline void ApplyPermissionSettings() ;

/// @brief Method ApplyRenderSettings, addr 0xb4e1e48, size 0x18c, virtual false, abstract: false, final false
inline void ApplyRenderSettings() ;

/// @brief Method ApplySettings, addr 0xb4e2b04, size 0x18, virtual false, abstract: false, final false
inline void ApplySettings() ;

/// @brief Method Awake, addr 0xb4e2ab4, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetFeature, addr 0xb4e0380, size 0x8c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature> GetFeature(::System::Type*  featureType) ;

/// @brief Method GetFeature, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TFeature>
requires(::cordl_internals::type_constraint<TFeature, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>)
inline TFeature GetFeature() ;

/// @brief Method GetFeatures, addr 0xb4e06dc, size 0x8c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> GetFeatures() ;

/// @brief Method GetFeatures, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TFeature>
inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> GetFeatures() ;

/// @brief Method GetFeatures, addr 0xb4e040c, size 0x174, virtual false, abstract: false, final false
inline ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> GetFeatures(::System::Type*  featureType) ;

/// @brief Method GetFeatures, addr 0xb4e0580, size 0x15c, virtual false, abstract: false, final false
inline int32_t GetFeatures(::System::Type*  featureType, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*  featuresOut) ;

/// @brief Method GetFeatures, addr 0xb4e0768, size 0x9c, virtual false, abstract: false, final false
inline int32_t GetFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>*  featuresOut) ;

/// @brief Method GetFeatures, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TFeature>
requires(::cordl_internals::type_constraint<TFeature, ::UnityEngine::XR::OpenXR::Features::OpenXRFeature*>)
inline int32_t GetFeatures(::System::Collections::Generic::List_1<TFeature>*  featuresOut) ;

/// @brief Method GetInstance, addr 0xb4e0864, size 0xa8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> GetInstance(bool  useActiveBuildTarget) ;

/// @brief Method Internal_GetAllowRecentering, addr 0xb4e2c20, size 0x6c, virtual false, abstract: false, final false
static inline bool Internal_GetAllowRecentering() ;

/// @brief Method Internal_GetColorSubmissionModes, addr 0xb4e13fc, size 0x114, virtual false, abstract: false, final false
static inline int32_t Internal_GetColorSubmissionModes(::by_ref<::ArrayW<int32_t>>  colorSubmissionMode, int32_t  arraySize) ;

/// @brief Method Internal_GetDepthSubmissionMode, addr 0xb4e1864, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode Internal_GetDepthSubmissionMode() ;

/// @brief Method Internal_GetFloorOffset, addr 0xb4e2c90, size 0x64, virtual false, abstract: false, final false
static inline float_t Internal_GetFloorOffset() ;

/// @brief Method Internal_GetIsUsingLegacyXRDisplay, addr 0xb4e2a48, size 0x6c, virtual false, abstract: false, final false
static inline bool Internal_GetIsUsingLegacyXRDisplay() ;

/// @brief Method Internal_GetLatencyOptimization, addr 0xb4e1110, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OpenXRSettings_LatencyOptimization Internal_GetLatencyOptimization() ;

/// @brief Method Internal_GetRenderMode, addr 0xb4e0e6c, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OpenXRSettings_RenderMode Internal_GetRenderMode() ;

/// @brief Method Internal_GetSpaceWarpMotionVectorTextureFormat, addr 0xb4e1b08, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat Internal_GetSpaceWarpMotionVectorTextureFormat() ;

/// @brief Method Internal_GetUseOpenXRPredictedTime, addr 0xb4e2868, size 0x6c, virtual false, abstract: false, final false
static inline bool Internal_GetUseOpenXRPredictedTime() ;

/// @brief Method Internal_GetUsedFoveatedRenderingApi, addr 0xb4e2640, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OpenXRSettings_BackendFovationApi Internal_GetUsedFoveatedRenderingApi() ;

/// @brief Method Internal_RegenerateTrackingOrigin, addr 0xb4e2bb8, size 0x64, virtual false, abstract: false, final false
static inline void Internal_RegenerateTrackingOrigin() ;

/// @brief Method Internal_SetAllowRecentering, addr 0xb4e2b28, size 0x8c, virtual false, abstract: false, final false
static inline void Internal_SetAllowRecentering(bool  active, float_t  height) ;

/// @brief Method Internal_SetColorSubmissionMode, addr 0xb4e29c4, size 0x84, virtual false, abstract: false, final false
static inline void Internal_SetColorSubmissionMode(::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>  colorSubmissionMode) ;

/// @brief Method Internal_SetColorSubmissionModes, addr 0xb4e1700, size 0x8c, virtual false, abstract: false, final false
static inline void Internal_SetColorSubmissionModes(::ArrayW<int32_t>  colorSubmissionMode, int32_t  arraySize) ;

/// @brief Method Internal_SetDepthSubmissionMode, addr 0xb4e19b4, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetDepthSubmissionMode(::GlobalNamespace::OpenXRSettings_DepthSubmissionMode  depthSubmissionMode) ;

/// @brief Method Internal_SetHasEyeTrackingPermissions, addr 0xb4e090c, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetHasEyeTrackingPermissions(bool  value) ;

/// @brief Method Internal_SetLatencyOptimization, addr 0xb4e21c4, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetLatencyOptimization(::GlobalNamespace::OpenXRSettings_LatencyOptimization  latencyOptimzation) ;

/// @brief Method Internal_SetMultiviewRenderRegionsOptimizationMode, addr 0xb4e2050, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetMultiviewRenderRegionsOptimizationMode(::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode  mode) ;

/// @brief Method Internal_SetOptimizeBufferDiscards, addr 0xb4e1dcc, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetOptimizeBufferDiscards(bool  enabled) ;

/// @brief Method Internal_SetRenderMode, addr 0xb4e0fbc, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetRenderMode(::GlobalNamespace::OpenXRSettings_RenderMode  renderMode) ;

/// @brief Method Internal_SetSpaceWarpMotionVectorTextureFormat, addr 0xb4e1c58, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetSpaceWarpMotionVectorTextureFormat(::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat  spaceWarpMotionVectorTextureFormat) ;

/// @brief Method Internal_SetSymmetricProjection, addr 0xb4e1fd4, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetSymmetricProjection(bool  enabled) ;

/// @brief Method Internal_SetUseOpenXRPredictedTime, addr 0xb4e20cc, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetUseOpenXRPredictedTime(bool  enabled) ;

/// @brief Method Internal_SetUsedFoveatedRenderingApi, addr 0xb4e2148, size 0x7c, virtual false, abstract: false, final false
static inline void Internal_SetUsedFoveatedRenderingApi(::GlobalNamespace::OpenXRSettings_BackendFovationApi  api) ;

/// @brief Method IsPermissionGranted, addr 0xb4e0988, size 0x8, virtual false, abstract: false, final false
static inline bool IsPermissionGranted(::StringW  permissionName) ;

static inline ::UnityEngine::XR::OpenXR::OpenXRSettings* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb4e2254, size 0x20, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb4e2240, size 0x14, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method PermissionGrantedCallback, addr 0xb4e0804, size 0x60, virtual false, abstract: false, final false
static inline void PermissionGrantedCallback(::StringW  permissionName) ;

/// @brief Method RefreshRecenterSpace, addr 0xb4e2bb4, size 0x4, virtual false, abstract: false, final false
static inline void RefreshRecenterSpace() ;

/// @brief Method SetAllowRecentering, addr 0xb4e2b24, size 0x4, virtual false, abstract: false, final false
static inline void SetAllowRecentering(bool  allowRecentering, float_t  floorOffset) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>> const& __cordl_internal_get_features() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>& __cordl_internal_get_features() ;

constexpr bool const& __cordl_internal_get_m_autoColorSubmissionMode() const;

constexpr bool& __cordl_internal_get_m_autoColorSubmissionMode() ;

constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* const& __cordl_internal_get_m_colorSubmissionModes() const;

constexpr ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*& __cordl_internal_get_m_colorSubmissionModes() ;

constexpr ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode const& __cordl_internal_get_m_depthSubmissionMode() const;

constexpr ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode& __cordl_internal_get_m_depthSubmissionMode() ;

constexpr ::StringW const& __cordl_internal_get_m_eyeTrackingAndroidXRPermissionsToRequest() const;

constexpr ::StringW& __cordl_internal_get_m_eyeTrackingAndroidXRPermissionsToRequest() ;

constexpr ::StringW const& __cordl_internal_get_m_eyeTrackingQuestPermissionsToRequest() const;

constexpr ::StringW& __cordl_internal_get_m_eyeTrackingQuestPermissionsToRequest() ;

constexpr ::GlobalNamespace::OpenXRSettings_BackendFovationApi const& __cordl_internal_get_m_foveatedRenderingApi() const;

constexpr ::GlobalNamespace::OpenXRSettings_BackendFovationApi& __cordl_internal_get_m_foveatedRenderingApi() ;

constexpr bool const& __cordl_internal_get_m_hasMigratedMultiviewRenderRegionSetting() const;

constexpr bool& __cordl_internal_get_m_hasMigratedMultiviewRenderRegionSetting() ;

constexpr ::GlobalNamespace::OpenXRSettings_LatencyOptimization const& __cordl_internal_get_m_latencyOptimization() const;

constexpr ::GlobalNamespace::OpenXRSettings_LatencyOptimization& __cordl_internal_get_m_latencyOptimization() ;

constexpr ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode const& __cordl_internal_get_m_multiviewRenderRegionsOptimizationMode() const;

constexpr ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode& __cordl_internal_get_m_multiviewRenderRegionsOptimizationMode() ;

constexpr bool const& __cordl_internal_get_m_optimizeBufferDiscards() const;

constexpr bool& __cordl_internal_get_m_optimizeBufferDiscards() ;

constexpr bool const& __cordl_internal_get_m_optimizeMultiviewRenderRegions() const;

constexpr bool& __cordl_internal_get_m_optimizeMultiviewRenderRegions() ;

constexpr ::GlobalNamespace::OpenXRSettings_RenderMode const& __cordl_internal_get_m_renderMode() const;

constexpr ::GlobalNamespace::OpenXRSettings_RenderMode& __cordl_internal_get_m_renderMode() ;

constexpr ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat const& __cordl_internal_get_m_spacewarpMotionVectorTextureFormat() const;

constexpr ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat& __cordl_internal_get_m_spacewarpMotionVectorTextureFormat() ;

constexpr bool const& __cordl_internal_get_m_symmetricProjection() const;

constexpr bool& __cordl_internal_get_m_symmetricProjection() ;

constexpr bool const& __cordl_internal_get_m_useOpenXRPredictedTime() const;

constexpr bool& __cordl_internal_get_m_useOpenXRPredictedTime() ;

constexpr void __cordl_internal_set_features(::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>  value) ;

constexpr void __cordl_internal_set_m_autoColorSubmissionMode(bool  value) ;

constexpr void __cordl_internal_set_m_colorSubmissionModes(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*  value) ;

constexpr void __cordl_internal_set_m_depthSubmissionMode(::GlobalNamespace::OpenXRSettings_DepthSubmissionMode  value) ;

constexpr void __cordl_internal_set_m_eyeTrackingAndroidXRPermissionsToRequest(::StringW  value) ;

constexpr void __cordl_internal_set_m_eyeTrackingQuestPermissionsToRequest(::StringW  value) ;

constexpr void __cordl_internal_set_m_foveatedRenderingApi(::GlobalNamespace::OpenXRSettings_BackendFovationApi  value) ;

constexpr void __cordl_internal_set_m_hasMigratedMultiviewRenderRegionSetting(bool  value) ;

constexpr void __cordl_internal_set_m_latencyOptimization(::GlobalNamespace::OpenXRSettings_LatencyOptimization  value) ;

constexpr void __cordl_internal_set_m_multiviewRenderRegionsOptimizationMode(::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode  value) ;

constexpr void __cordl_internal_set_m_optimizeBufferDiscards(bool  value) ;

constexpr void __cordl_internal_set_m_optimizeMultiviewRenderRegions(bool  value) ;

constexpr void __cordl_internal_set_m_renderMode(::GlobalNamespace::OpenXRSettings_RenderMode  value) ;

constexpr void __cordl_internal_set_m_spacewarpMotionVectorTextureFormat(::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat  value) ;

constexpr void __cordl_internal_set_m_symmetricProjection(bool  value) ;

constexpr void __cordl_internal_set_m_useOpenXRPredictedTime(bool  value) ;

/// @brief Method .ctor, addr 0xb4e2cf4, size 0xfc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup getStaticF_kDefaultColorMode() ;

static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> getStaticF_s_RuntimeInstance() ;

/// @brief Method get_ActiveBuildTargetInstance, addr 0xb4e0d8c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> get_ActiveBuildTargetInstance() ;

/// @brief Method get_AllowRecentering, addr 0xb4e2c1c, size 0x4, virtual false, abstract: false, final false
static inline bool get_AllowRecentering() ;

/// @brief Method get_FloorOffset, addr 0xb4e2c8c, size 0x4, virtual false, abstract: false, final false
static inline float_t get_FloorOffset() ;

/// @brief Method get_Instance, addr 0xb4e2b1c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings> get_Instance() ;

/// @brief Method get_autoColorSubmissionMode, addr 0xb4e117c, size 0x8, virtual false, abstract: false, final false
inline bool get_autoColorSubmissionMode() ;

/// @brief Method get_colorSubmissionModes, addr 0xb4e118c, size 0x270, virtual false, abstract: false, final false
inline ::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup> get_colorSubmissionModes() ;

/// @brief Method get_depthSubmissionMode, addr 0xb4e178c, size 0xd8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode get_depthSubmissionMode() ;

/// @brief Method get_featureCount, addr 0xb4e0368, size 0x18, virtual false, abstract: false, final false
inline int32_t get_featureCount() ;

/// @brief Method get_foveatedRenderingApi, addr 0xb4e2568, size 0xd8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OpenXRSettings_BackendFovationApi get_foveatedRenderingApi() ;

/// @brief Method get_latencyOptimization, addr 0xb4e1038, size 0xd8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OpenXRSettings_LatencyOptimization get_latencyOptimization() ;

/// @brief Method get_multiviewRenderRegionsOptimizationMode, addr 0xb4e2474, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode get_multiviewRenderRegionsOptimizationMode() ;

/// @brief Method get_optimizeBufferDiscards, addr 0xb4e1cd4, size 0x8, virtual false, abstract: false, final false
inline bool get_optimizeBufferDiscards() ;

/// @brief Method get_optimizeMultiviewRenderRegions, addr 0xb4e236c, size 0x14, virtual false, abstract: false, final false
inline bool get_optimizeMultiviewRenderRegions() ;

/// @brief Method get_renderMode, addr 0xb4e0d94, size 0xd8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OpenXRSettings_RenderMode get_renderMode() ;

/// @brief Method get_spacewarpMotionVectorTextureFormat, addr 0xb4e1a30, size 0xd8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat get_spacewarpMotionVectorTextureFormat() ;

/// @brief Method get_symmetricProjection, addr 0xb4e2274, size 0x8, virtual false, abstract: false, final false
inline bool get_symmetricProjection() ;

/// @brief Method get_useOpenXRPredictedTime, addr 0xb4e2790, size 0xd8, virtual false, abstract: false, final false
inline bool get_useOpenXRPredictedTime() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

static inline void setStaticF_kDefaultColorMode(::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup  value) ;

static inline void setStaticF_s_RuntimeInstance(::UnityW<::UnityEngine::XR::OpenXR::OpenXRSettings>  value) ;

/// @brief Method set_autoColorSubmissionMode, addr 0xb4e1184, size 0x8, virtual false, abstract: false, final false
inline void set_autoColorSubmissionMode(bool  value) ;

/// @brief Method set_colorSubmissionModes, addr 0xb4e1510, size 0x1f0, virtual false, abstract: false, final false
inline void set_colorSubmissionModes(::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>  value) ;

/// @brief Method set_depthSubmissionMode, addr 0xb4e18c8, size 0xec, virtual false, abstract: false, final false
inline void set_depthSubmissionMode(::GlobalNamespace::OpenXRSettings_DepthSubmissionMode  value) ;

/// @brief Method set_foveatedRenderingApi, addr 0xb4e26a4, size 0xec, virtual false, abstract: false, final false
inline void set_foveatedRenderingApi(::GlobalNamespace::OpenXRSettings_BackendFovationApi  value) ;

/// @brief Method set_latencyOptimization, addr 0xb4e1174, size 0x8, virtual false, abstract: false, final false
inline void set_latencyOptimization(::GlobalNamespace::OpenXRSettings_LatencyOptimization  value) ;

/// @brief Method set_multiviewRenderRegionsOptimizationMode, addr 0xb4e247c, size 0xec, virtual false, abstract: false, final false
inline void set_multiviewRenderRegionsOptimizationMode(::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode  value) ;

/// @brief Method set_optimizeBufferDiscards, addr 0xb4e1cdc, size 0xf0, virtual false, abstract: false, final false
inline void set_optimizeBufferDiscards(bool  value) ;

/// @brief Method set_optimizeMultiviewRenderRegions, addr 0xb4e2380, size 0xf4, virtual false, abstract: false, final false
inline void set_optimizeMultiviewRenderRegions(bool  value) ;

/// @brief Method set_renderMode, addr 0xb4e0ed0, size 0xec, virtual false, abstract: false, final false
inline void set_renderMode(::GlobalNamespace::OpenXRSettings_RenderMode  value) ;

/// @brief Method set_spacewarpMotionVectorTextureFormat, addr 0xb4e1b6c, size 0xec, virtual false, abstract: false, final false
inline void set_spacewarpMotionVectorTextureFormat(::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat  value) ;

/// @brief Method set_symmetricProjection, addr 0xb4e227c, size 0xf0, virtual false, abstract: false, final false
inline void set_symmetricProjection(bool  value) ;

/// @brief Method set_useOpenXRPredictedTime, addr 0xb4e28d4, size 0xf0, virtual false, abstract: false, final false
inline void set_useOpenXRPredictedTime(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRSettings(OpenXRSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRSettings(OpenXRSettings const& ) = delete;

/// @brief Field LibraryName offset 0xffffffff size 0x8
static constexpr ::ConstString  LibraryName{u"UnityOpenXR"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27269};

/// [FormerlySerializedAs("extensions")]
/// [HideInInspector]
/// [SerializeField]
/// @brief Field features, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::XR::OpenXR::Features::OpenXRFeature>>  ___features;

/// @brief Field m_eyeTrackingQuestPermissionsToRequest, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___m_eyeTrackingQuestPermissionsToRequest;

/// @brief Field m_eyeTrackingAndroidXRPermissionsToRequest, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___m_eyeTrackingAndroidXRPermissionsToRequest;

/// [SerializeField]
/// @brief Field m_renderMode, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::OpenXRSettings_RenderMode  ___m_renderMode;

/// [SerializeField]
/// @brief Field m_latencyOptimization, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::OpenXRSettings_LatencyOptimization  ___m_latencyOptimization;

/// [SerializeField]
/// @brief Field m_autoColorSubmissionMode, offset: 0x38, size: 0x1, def value: None
 bool  ___m_autoColorSubmissionMode;

/// [SerializeField]
/// @brief Field m_colorSubmissionModes, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList*  ___m_colorSubmissionModes;

/// [SerializeField]
/// @brief Field m_depthSubmissionMode, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::OpenXRSettings_DepthSubmissionMode  ___m_depthSubmissionMode;

/// [SerializeField]
/// @brief Field m_spacewarpMotionVectorTextureFormat, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::OpenXRSettings_SpaceWarpMotionVectorTextureFormat  ___m_spacewarpMotionVectorTextureFormat;

/// [SerializeField]
/// @brief Field m_optimizeBufferDiscards, offset: 0x50, size: 0x1, def value: None
 bool  ___m_optimizeBufferDiscards;

/// [SerializeField]
/// @brief Field m_symmetricProjection, offset: 0x51, size: 0x1, def value: None
 bool  ___m_symmetricProjection;

/// [SerializeField]
/// [HideInInspector]
/// [Obsolete("m_optimizeMultiviewRenderRegions is deprecated. Use m_multiviewRenderRegionsOptimizationMode instead.", false)]
/// @brief Field m_optimizeMultiviewRenderRegions, offset: 0x52, size: 0x1, def value: None
 bool  ___m_optimizeMultiviewRenderRegions;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_multiviewRenderRegionsOptimizationMode, offset: 0x53, size: 0x1, def value: None
 ::GlobalNamespace::OpenXRSettings_MultiviewRenderRegionsOptimizationMode  ___m_multiviewRenderRegionsOptimizationMode;

/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_hasMigratedMultiviewRenderRegionSetting, offset: 0x54, size: 0x1, def value: None
 bool  ___m_hasMigratedMultiviewRenderRegionSetting;

/// [SerializeField]
/// @brief Field m_foveatedRenderingApi, offset: 0x55, size: 0x1, def value: None
 ::GlobalNamespace::OpenXRSettings_BackendFovationApi  ___m_foveatedRenderingApi;

/// [SerializeField]
/// @brief Field m_useOpenXRPredictedTime, offset: 0x56, size: 0x1, def value: None
 bool  ___m_useOpenXRPredictedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___features) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_eyeTrackingQuestPermissionsToRequest) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_eyeTrackingAndroidXRPermissionsToRequest) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_renderMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_latencyOptimization) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_autoColorSubmissionMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_colorSubmissionModes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_depthSubmissionMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_spacewarpMotionVectorTextureFormat) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_optimizeBufferDiscards) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_symmetricProjection) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_optimizeMultiviewRenderRegions) == 0x52, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_multiviewRenderRegionsOptimizationMode) == 0x53, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_hasMigratedMultiviewRenderRegionSetting) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_foveatedRenderingApi) == 0x55, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings, ___m_useOpenXRPredictedTime) == 0x56, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRSettings) == 0x58, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/<>c
class CORDL_TYPE OpenXRSettings___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::XR::OpenXR::OpenXRSettings___c*  __9;

/// @brief Field <>9__36_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__36_0, put=setStaticF___9__36_0)) ::System::Func_2<int32_t,::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>*  __9__36_0;

/// @brief Field <>9__37_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__37_0, put=setStaticF___9__37_0)) ::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>*  __9__37_0;

/// @brief Field <>9__53_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__53_0, put=setStaticF___9__53_0)) ::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>*  __9__53_0;

static inline ::UnityEngine::XR::OpenXR::OpenXRSettings___c* New_ctor() ;

/// @brief Method <ApplyRenderSettings>b__53_0, addr 0xb4e2ed4, size 0x8, virtual false, abstract: false, final false
inline int32_t _ApplyRenderSettings_b__53_0(::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup  e) ;

/// @brief Method .ctor, addr 0xb4e2ebc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_colorSubmissionModes>b__36_0, addr 0xb4e2ec4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup _get_colorSubmissionModes_b__36_0(int32_t  i) ;

/// @brief Method <set_colorSubmissionModes>b__37_0, addr 0xb4e2ecc, size 0x8, virtual false, abstract: false, final false
inline int32_t _set_colorSubmissionModes_b__37_0(::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup  e) ;

static inline ::UnityEngine::XR::OpenXR::OpenXRSettings___c* getStaticF___9() ;

static inline ::System::Func_2<int32_t,::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>* getStaticF___9__36_0() ;

static inline ::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>* getStaticF___9__37_0() ;

static inline ::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>* getStaticF___9__53_0() ;

static inline void setStaticF___9(::UnityEngine::XR::OpenXR::OpenXRSettings___c*  value) ;

static inline void setStaticF___9__36_0(::System::Func_2<int32_t,::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>*  value) ;

static inline void setStaticF___9__37_0(::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>*  value) ;

static inline void setStaticF___9__53_0(::System::Func_2<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup,int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRSettings___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRSettings___c(OpenXRSettings___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRSettings___c(OpenXRSettings___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27268};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRSettings___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR
// Dependencies System.Object, UnityEngine.XR.OpenXR.OpenXRSettings::ColorSubmissionModeGroup
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRSettings/ColorSubmissionModeList
class CORDL_TYPE OpenXRSettings_ColorSubmissionModeList : public ::System::Object {
public:
// Declarations
/// @brief Field m_List, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_List, put=__cordl_internal_set_m_List)) ::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>  m_List;

static inline ::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup> const& __cordl_internal_get_m_List() const;

constexpr ::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>& __cordl_internal_get_m_List() ;

constexpr void __cordl_internal_set_m_List(::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>  value) ;

/// @brief Method .ctor, addr 0xb4e2df0, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OpenXRSettings_ColorSubmissionModeList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings_ColorSubmissionModeList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OpenXRSettings_ColorSubmissionModeList(OpenXRSettings_ColorSubmissionModeList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRSettings_ColorSubmissionModeList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OpenXRSettings_ColorSubmissionModeList(OpenXRSettings_ColorSubmissionModeList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27261};

/// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OpenXRSettings_ColorSubmissionModeGroup>  ___m_List;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList, ___m_List) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRSettings_ColorSubmissionModeList) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::OpenXR
