#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SupportedRenderingFeatures.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedRenderingFeatures_LightmapMixedBakeModes_def.hpp"
#include "UnityEngine/Rendering/zzzz__SupportedRenderingFeatures_ReflectionProbeModes_def.hpp"
#include "UnityEngine/zzzz__LightmapBakeType_def.hpp"
#include "UnityEngine/zzzz__LightmapsMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SupportedRenderingFeatures)
namespace GlobalNamespace {
struct SupportedRenderingFeatures_LightmapMixedBakeModes;
}
namespace GlobalNamespace {
struct SupportedRenderingFeatures_ReflectionProbeModes;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct LightmapBakeType;
}
namespace UnityEngine {
struct LightmapsMode;
}
namespace UnityEngine {
struct MixedLightingMode;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class SupportedRenderingFeatures;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::SupportedRenderingFeatures*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::SupportedRenderingFeatures*, "UnityEngine.Rendering", "SupportedRenderingFeatures");
// Dependencies System.Object, UnityEngine.LightmapBakeType, UnityEngine.LightmapsMode, UnityEngine.Rendering.SupportedRenderingFeatures::LightmapMixedBakeModes, UnityEngine.Rendering.SupportedRenderingFeatures::ReflectionProbeModes
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.SupportedRenderingFeatures
class CORDL_TYPE SupportedRenderingFeatures : public ::System::Object {
public:
// Declarations
using LightmapMixedBakeModes = ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes;

using ReflectionProbeModes = ::GlobalNamespace::SupportedRenderingFeatures_ReflectionProbeModes;

/// @brief Field <ambientProbeBaking>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__ambientProbeBaking_k__BackingField, put=__cordl_internal_set__ambientProbeBaking_k__BackingField)) bool  _ambientProbeBaking_k__BackingField;

/// @brief Field <defaultMixedLightingModes>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultMixedLightingModes_k__BackingField, put=__cordl_internal_set__defaultMixedLightingModes_k__BackingField)) ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes  _defaultMixedLightingModes_k__BackingField;

/// @brief Field <defaultReflectionProbeBaking>k__BackingField, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__defaultReflectionProbeBaking_k__BackingField, put=__cordl_internal_set__defaultReflectionProbeBaking_k__BackingField)) bool  _defaultReflectionProbeBaking_k__BackingField;

/// @brief Field <editableMaterialRenderQueue>k__BackingField, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get__editableMaterialRenderQueue_k__BackingField, put=__cordl_internal_set__editableMaterialRenderQueue_k__BackingField)) bool  _editableMaterialRenderQueue_k__BackingField;

/// @brief Field <enlightenLightmapper>k__BackingField, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__enlightenLightmapper_k__BackingField, put=__cordl_internal_set__enlightenLightmapper_k__BackingField)) bool  _enlightenLightmapper_k__BackingField;

/// @brief Field <enlighten>k__BackingField, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get__enlighten_k__BackingField, put=__cordl_internal_set__enlighten_k__BackingField)) bool  _enlighten_k__BackingField;

/// @brief Field <lightProbeProxyVolumes>k__BackingField, offset 0x27, size 0x1 
 __declspec(property(get=__cordl_internal_get__lightProbeProxyVolumes_k__BackingField, put=__cordl_internal_set__lightProbeProxyVolumes_k__BackingField)) bool  _lightProbeProxyVolumes_k__BackingField;

/// @brief Field <lightmapBakeTypes>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__lightmapBakeTypes_k__BackingField, put=__cordl_internal_set__lightmapBakeTypes_k__BackingField)) ::UnityEngine::LightmapBakeType  _lightmapBakeTypes_k__BackingField;

/// @brief Field <lightmapsModes>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__lightmapsModes_k__BackingField, put=__cordl_internal_set__lightmapsModes_k__BackingField)) ::UnityEngine::LightmapsMode  _lightmapsModes_k__BackingField;

/// @brief Field <mixedLightingModes>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__mixedLightingModes_k__BackingField, put=__cordl_internal_set__mixedLightingModes_k__BackingField)) ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes  _mixedLightingModes_k__BackingField;

/// @brief Field <motionVectors>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__motionVectors_k__BackingField, put=__cordl_internal_set__motionVectors_k__BackingField)) bool  _motionVectors_k__BackingField;

/// @brief Field <overridesEnableLODCrossFade>k__BackingField, offset 0x35, size 0x1 
 __declspec(property(get=__cordl_internal_get__overridesEnableLODCrossFade_k__BackingField, put=__cordl_internal_set__overridesEnableLODCrossFade_k__BackingField)) bool  _overridesEnableLODCrossFade_k__BackingField;

/// @brief Field <overridesEnvironmentLighting>k__BackingField, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get__overridesEnvironmentLighting_k__BackingField, put=__cordl_internal_set__overridesEnvironmentLighting_k__BackingField)) bool  _overridesEnvironmentLighting_k__BackingField;

/// @brief Field <overridesFog>k__BackingField, offset 0x2f, size 0x1 
 __declspec(property(get=__cordl_internal_get__overridesFog_k__BackingField, put=__cordl_internal_set__overridesFog_k__BackingField)) bool  _overridesFog_k__BackingField;

/// @brief Field <overridesLODBias>k__BackingField, offset 0x33, size 0x1 
 __declspec(property(get=__cordl_internal_get__overridesLODBias_k__BackingField, put=__cordl_internal_set__overridesLODBias_k__BackingField)) bool  _overridesLODBias_k__BackingField;

/// @brief Field <overridesLightProbeSystemWarningMessage>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__overridesLightProbeSystemWarningMessage_k__BackingField, put=__cordl_internal_set__overridesLightProbeSystemWarningMessage_k__BackingField)) ::StringW  _overridesLightProbeSystemWarningMessage_k__BackingField;

/// @brief Field <overridesLightProbeSystem>k__BackingField, offset 0x3b, size 0x1 
 __declspec(property(get=__cordl_internal_get__overridesLightProbeSystem_k__BackingField, put=__cordl_internal_set__overridesLightProbeSystem_k__BackingField)) bool  _overridesLightProbeSystem_k__BackingField;

/// @brief Field <overridesMaximumLODLevel>k__BackingField, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__overridesMaximumLODLevel_k__BackingField, put=__cordl_internal_set__overridesMaximumLODLevel_k__BackingField)) bool  _overridesMaximumLODLevel_k__BackingField;

/// @brief Field <overridesOtherLightingSettings>k__BackingField, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__overridesOtherLightingSettings_k__BackingField, put=__cordl_internal_set__overridesOtherLightingSettings_k__BackingField)) bool  _overridesOtherLightingSettings_k__BackingField;

/// @brief Field <overridesRealtimeReflectionProbes>k__BackingField, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__overridesRealtimeReflectionProbes_k__BackingField, put=__cordl_internal_set__overridesRealtimeReflectionProbes_k__BackingField)) bool  _overridesRealtimeReflectionProbes_k__BackingField;

/// @brief Field <overridesShadowmask>k__BackingField, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get__overridesShadowmask_k__BackingField, put=__cordl_internal_set__overridesShadowmask_k__BackingField)) bool  _overridesShadowmask_k__BackingField;

/// @brief Field <particleSystemInstancing>k__BackingField, offset 0x37, size 0x1 
 __declspec(property(get=__cordl_internal_get__particleSystemInstancing_k__BackingField, put=__cordl_internal_set__particleSystemInstancing_k__BackingField)) bool  _particleSystemInstancing_k__BackingField;

/// @brief Field <receiveShadows>k__BackingField, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__receiveShadows_k__BackingField, put=__cordl_internal_set__receiveShadows_k__BackingField)) bool  _receiveShadows_k__BackingField;

/// @brief Field <reflectionProbeModes>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__reflectionProbeModes_k__BackingField, put=__cordl_internal_set__reflectionProbeModes_k__BackingField)) ::GlobalNamespace::SupportedRenderingFeatures_ReflectionProbeModes  _reflectionProbeModes_k__BackingField;

/// @brief Field <reflectionProbesBlendDistance>k__BackingField, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get__reflectionProbesBlendDistance_k__BackingField, put=__cordl_internal_set__reflectionProbesBlendDistance_k__BackingField)) bool  _reflectionProbesBlendDistance_k__BackingField;

/// @brief Field <reflectionProbes>k__BackingField, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get__reflectionProbes_k__BackingField, put=__cordl_internal_set__reflectionProbes_k__BackingField)) bool  _reflectionProbes_k__BackingField;

/// @brief Field <rendererPriority>k__BackingField, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__rendererPriority_k__BackingField, put=__cordl_internal_set__rendererPriority_k__BackingField)) bool  _rendererPriority_k__BackingField;

/// @brief Field <rendererProbes>k__BackingField, offset 0x36, size 0x1 
 __declspec(property(get=__cordl_internal_get__rendererProbes_k__BackingField, put=__cordl_internal_set__rendererProbes_k__BackingField)) bool  _rendererProbes_k__BackingField;

/// @brief Field <rendersUIOverlay>k__BackingField, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get__rendersUIOverlay_k__BackingField, put=__cordl_internal_set__rendersUIOverlay_k__BackingField)) bool  _rendersUIOverlay_k__BackingField;

/// @brief Field <skyOcclusion>k__BackingField, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get__skyOcclusion_k__BackingField, put=__cordl_internal_set__skyOcclusion_k__BackingField)) bool  _skyOcclusion_k__BackingField;

/// @brief Field <supportsClouds>k__BackingField, offset 0x3d, size 0x1 
 __declspec(property(get=__cordl_internal_get__supportsClouds_k__BackingField, put=__cordl_internal_set__supportsClouds_k__BackingField)) bool  _supportsClouds_k__BackingField;

/// @brief Field <supportsHDR>k__BackingField, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get__supportsHDR_k__BackingField, put=__cordl_internal_set__supportsHDR_k__BackingField)) bool  _supportsHDR_k__BackingField;

 __declspec(property(get=get_ambientProbeBaking)) bool  ambientProbeBaking;

 __declspec(property(get=get_defaultMixedLightingModes)) ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes  defaultMixedLightingModes;

 __declspec(property(get=get_defaultReflectionProbeBaking)) bool  defaultReflectionProbeBaking;

 __declspec(property(get=get_enlighten)) bool  enlighten;

 __declspec(property(get=get_lightmapBakeTypes)) ::UnityEngine::LightmapBakeType  lightmapBakeTypes;

 __declspec(property(get=get_lightmapsModes)) ::UnityEngine::LightmapsMode  lightmapsModes;

 __declspec(property(get=get_mixedLightingModes)) ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes  mixedLightingModes;

 __declspec(property(get=get_overridesLightProbeSystem, put=set_overridesLightProbeSystem)) bool  overridesLightProbeSystem;

 __declspec(property(get=get_rendersUIOverlay, put=set_rendersUIOverlay)) bool  rendersUIOverlay;

/// @brief Field s_Active, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Active, put=setStaticF_s_Active)) ::UnityEngine::Rendering::SupportedRenderingFeatures*  s_Active;

 __declspec(property(put=set_skyOcclusion)) bool  skyOcclusion;

 __declspec(property(put=set_supportsHDR)) bool  supportsHDR;

/// [RequiredByNativeCode]
/// @brief Method FallbackLightmapperByRef, addr 0xb6266c4, size 0x1c, virtual false, abstract: false, final false
static inline void FallbackLightmapperByRef(::System::IntPtr  lightmapperPtr) ;

/// [RequiredByNativeCode]
/// @brief Method FallbackMixedLightingModeByRef, addr 0xb62602c, size 0x134, virtual false, abstract: false, final false
static inline void FallbackMixedLightingModeByRef(::System::IntPtr  fallbackModePtr) ;

/// [RequiredByNativeCode]
/// @brief Method IsAmbientProbeBakingSupported, addr 0xb62655c, size 0x78, virtual false, abstract: false, final false
static inline void IsAmbientProbeBakingSupported(::System::IntPtr  isSupportedPtr) ;

/// [RequiredByNativeCode]
/// @brief Method IsDefaultReflectionProbeBakingSupported, addr 0xb6265d4, size 0x78, virtual false, abstract: false, final false
static inline void IsDefaultReflectionProbeBakingSupported(::System::IntPtr  isSupportedPtr) ;

/// @brief Method IsLightmapBakeTypeSupported, addr 0xb6262d4, size 0x6c, virtual false, abstract: false, final false
static inline bool IsLightmapBakeTypeSupported(::UnityEngine::LightmapBakeType  bakeType) ;

/// [RequiredByNativeCode]
/// @brief Method IsLightmapBakeTypeSupportedByRef, addr 0xb626340, size 0xf0, virtual false, abstract: false, final false
static inline void IsLightmapBakeTypeSupportedByRef(::UnityEngine::LightmapBakeType  bakeType, ::System::IntPtr  isSupportedPtr) ;

/// [RequiredByNativeCode]
/// @brief Method IsLightmapperSupportedByRef, addr 0xb6264bc, size 0x28, virtual false, abstract: false, final false
static inline void IsLightmapperSupportedByRef(int32_t  lightmapper, ::System::IntPtr  isSupportedPtr) ;

/// [RequiredByNativeCode]
/// @brief Method IsLightmapsModeSupportedByRef, addr 0xb626430, size 0x8c, virtual false, abstract: false, final false
static inline void IsLightmapsModeSupportedByRef(::UnityEngine::LightmapsMode  mode, ::System::IntPtr  isSupportedPtr) ;

/// @brief Method IsMixedLightingModeSupported, addr 0xb626160, size 0x6c, virtual false, abstract: false, final false
static inline bool IsMixedLightingModeSupported(::UnityEngine::MixedLightingMode  mixedMode) ;

/// [RequiredByNativeCode]
/// @brief Method IsMixedLightingModeSupportedByRef, addr 0xb6261cc, size 0x108, virtual false, abstract: false, final false
static inline void IsMixedLightingModeSupportedByRef(::UnityEngine::MixedLightingMode  mixedMode, ::System::IntPtr  isSupportedPtr) ;

/// [RequiredByNativeCode]
/// @brief Method IsUIOverlayRenderedBySRP, addr 0xb6264e4, size 0x78, virtual false, abstract: false, final false
static inline void IsUIOverlayRenderedBySRP(::System::IntPtr  isSupportedPtr) ;

static inline ::UnityEngine::Rendering::SupportedRenderingFeatures* New_ctor() ;

/// [RequiredByNativeCode]
/// @brief Method OverridesLightProbeSystem, addr 0xb62664c, size 0x78, virtual false, abstract: false, final false
static inline void OverridesLightProbeSystem(::System::IntPtr  overridesPtr) ;

constexpr bool const& __cordl_internal_get__ambientProbeBaking_k__BackingField() const;

constexpr bool& __cordl_internal_get__ambientProbeBaking_k__BackingField() ;

constexpr ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes const& __cordl_internal_get__defaultMixedLightingModes_k__BackingField() const;

constexpr ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes& __cordl_internal_get__defaultMixedLightingModes_k__BackingField() ;

constexpr bool const& __cordl_internal_get__defaultReflectionProbeBaking_k__BackingField() const;

constexpr bool& __cordl_internal_get__defaultReflectionProbeBaking_k__BackingField() ;

constexpr bool const& __cordl_internal_get__editableMaterialRenderQueue_k__BackingField() const;

constexpr bool& __cordl_internal_get__editableMaterialRenderQueue_k__BackingField() ;

constexpr bool const& __cordl_internal_get__enlightenLightmapper_k__BackingField() const;

constexpr bool& __cordl_internal_get__enlightenLightmapper_k__BackingField() ;

constexpr bool const& __cordl_internal_get__enlighten_k__BackingField() const;

constexpr bool& __cordl_internal_get__enlighten_k__BackingField() ;

constexpr bool const& __cordl_internal_get__lightProbeProxyVolumes_k__BackingField() const;

constexpr bool& __cordl_internal_get__lightProbeProxyVolumes_k__BackingField() ;

constexpr ::UnityEngine::LightmapBakeType const& __cordl_internal_get__lightmapBakeTypes_k__BackingField() const;

constexpr ::UnityEngine::LightmapBakeType& __cordl_internal_get__lightmapBakeTypes_k__BackingField() ;

constexpr ::UnityEngine::LightmapsMode const& __cordl_internal_get__lightmapsModes_k__BackingField() const;

constexpr ::UnityEngine::LightmapsMode& __cordl_internal_get__lightmapsModes_k__BackingField() ;

constexpr ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes const& __cordl_internal_get__mixedLightingModes_k__BackingField() const;

constexpr ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes& __cordl_internal_get__mixedLightingModes_k__BackingField() ;

constexpr bool const& __cordl_internal_get__motionVectors_k__BackingField() const;

constexpr bool& __cordl_internal_get__motionVectors_k__BackingField() ;

constexpr bool const& __cordl_internal_get__overridesEnableLODCrossFade_k__BackingField() const;

constexpr bool& __cordl_internal_get__overridesEnableLODCrossFade_k__BackingField() ;

constexpr bool const& __cordl_internal_get__overridesEnvironmentLighting_k__BackingField() const;

constexpr bool& __cordl_internal_get__overridesEnvironmentLighting_k__BackingField() ;

constexpr bool const& __cordl_internal_get__overridesFog_k__BackingField() const;

constexpr bool& __cordl_internal_get__overridesFog_k__BackingField() ;

constexpr bool const& __cordl_internal_get__overridesLODBias_k__BackingField() const;

constexpr bool& __cordl_internal_get__overridesLODBias_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__overridesLightProbeSystemWarningMessage_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__overridesLightProbeSystemWarningMessage_k__BackingField() ;

constexpr bool const& __cordl_internal_get__overridesLightProbeSystem_k__BackingField() const;

constexpr bool& __cordl_internal_get__overridesLightProbeSystem_k__BackingField() ;

constexpr bool const& __cordl_internal_get__overridesMaximumLODLevel_k__BackingField() const;

constexpr bool& __cordl_internal_get__overridesMaximumLODLevel_k__BackingField() ;

constexpr bool const& __cordl_internal_get__overridesOtherLightingSettings_k__BackingField() const;

constexpr bool& __cordl_internal_get__overridesOtherLightingSettings_k__BackingField() ;

constexpr bool const& __cordl_internal_get__overridesRealtimeReflectionProbes_k__BackingField() const;

constexpr bool& __cordl_internal_get__overridesRealtimeReflectionProbes_k__BackingField() ;

constexpr bool const& __cordl_internal_get__overridesShadowmask_k__BackingField() const;

constexpr bool& __cordl_internal_get__overridesShadowmask_k__BackingField() ;

constexpr bool const& __cordl_internal_get__particleSystemInstancing_k__BackingField() const;

constexpr bool& __cordl_internal_get__particleSystemInstancing_k__BackingField() ;

constexpr bool const& __cordl_internal_get__receiveShadows_k__BackingField() const;

constexpr bool& __cordl_internal_get__receiveShadows_k__BackingField() ;

constexpr ::GlobalNamespace::SupportedRenderingFeatures_ReflectionProbeModes const& __cordl_internal_get__reflectionProbeModes_k__BackingField() const;

constexpr ::GlobalNamespace::SupportedRenderingFeatures_ReflectionProbeModes& __cordl_internal_get__reflectionProbeModes_k__BackingField() ;

constexpr bool const& __cordl_internal_get__reflectionProbesBlendDistance_k__BackingField() const;

constexpr bool& __cordl_internal_get__reflectionProbesBlendDistance_k__BackingField() ;

constexpr bool const& __cordl_internal_get__reflectionProbes_k__BackingField() const;

constexpr bool& __cordl_internal_get__reflectionProbes_k__BackingField() ;

constexpr bool const& __cordl_internal_get__rendererPriority_k__BackingField() const;

constexpr bool& __cordl_internal_get__rendererPriority_k__BackingField() ;

constexpr bool const& __cordl_internal_get__rendererProbes_k__BackingField() const;

constexpr bool& __cordl_internal_get__rendererProbes_k__BackingField() ;

constexpr bool const& __cordl_internal_get__rendersUIOverlay_k__BackingField() const;

constexpr bool& __cordl_internal_get__rendersUIOverlay_k__BackingField() ;

constexpr bool const& __cordl_internal_get__skyOcclusion_k__BackingField() const;

constexpr bool& __cordl_internal_get__skyOcclusion_k__BackingField() ;

constexpr bool const& __cordl_internal_get__supportsClouds_k__BackingField() const;

constexpr bool& __cordl_internal_get__supportsClouds_k__BackingField() ;

constexpr bool const& __cordl_internal_get__supportsHDR_k__BackingField() const;

constexpr bool& __cordl_internal_get__supportsHDR_k__BackingField() ;

constexpr void __cordl_internal_set__ambientProbeBaking_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__defaultMixedLightingModes_k__BackingField(::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes  value) ;

constexpr void __cordl_internal_set__defaultReflectionProbeBaking_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__editableMaterialRenderQueue_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__enlightenLightmapper_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__enlighten_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__lightProbeProxyVolumes_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__lightmapBakeTypes_k__BackingField(::UnityEngine::LightmapBakeType  value) ;

constexpr void __cordl_internal_set__lightmapsModes_k__BackingField(::UnityEngine::LightmapsMode  value) ;

constexpr void __cordl_internal_set__mixedLightingModes_k__BackingField(::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes  value) ;

constexpr void __cordl_internal_set__motionVectors_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__overridesEnableLODCrossFade_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__overridesEnvironmentLighting_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__overridesFog_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__overridesLODBias_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__overridesLightProbeSystemWarningMessage_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__overridesLightProbeSystem_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__overridesMaximumLODLevel_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__overridesOtherLightingSettings_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__overridesRealtimeReflectionProbes_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__overridesShadowmask_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__particleSystemInstancing_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__receiveShadows_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__reflectionProbeModes_k__BackingField(::GlobalNamespace::SupportedRenderingFeatures_ReflectionProbeModes  value) ;

constexpr void __cordl_internal_set__reflectionProbesBlendDistance_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__reflectionProbes_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__rendererPriority_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__rendererProbes_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__rendersUIOverlay_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__skyOcclusion_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__supportsClouds_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__supportsHDR_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xb625f24, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::SupportedRenderingFeatures* getStaticF_s_Active() ;

/// @brief Method get_active, addr 0xb625e74, size 0xb0, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::SupportedRenderingFeatures* get_active() ;

/// [CompilerGenerated]
/// @brief Method get_ambientProbeBaking, addr 0xb626004, size 0x8, virtual false, abstract: false, final false
inline bool get_ambientProbeBaking() ;

/// [CompilerGenerated]
/// @brief Method get_defaultMixedLightingModes, addr 0xb625fc4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes get_defaultMixedLightingModes() ;

/// [CompilerGenerated]
/// @brief Method get_defaultReflectionProbeBaking, addr 0xb62600c, size 0x8, virtual false, abstract: false, final false
inline bool get_defaultReflectionProbeBaking() ;

/// [CompilerGenerated]
/// @brief Method get_enlighten, addr 0xb625fe4, size 0x8, virtual false, abstract: false, final false
inline bool get_enlighten() ;

/// [CompilerGenerated]
/// @brief Method get_lightmapBakeTypes, addr 0xb625fd4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LightmapBakeType get_lightmapBakeTypes() ;

/// [CompilerGenerated]
/// @brief Method get_lightmapsModes, addr 0xb625fdc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LightmapsMode get_lightmapsModes() ;

/// [CompilerGenerated]
/// @brief Method get_mixedLightingModes, addr 0xb625fcc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes get_mixedLightingModes() ;

/// [CompilerGenerated]
/// @brief Method get_overridesLightProbeSystem, addr 0xb626014, size 0x8, virtual false, abstract: false, final false
inline bool get_overridesLightProbeSystem() ;

/// [CompilerGenerated]
/// @brief Method get_rendersUIOverlay, addr 0xb625ff4, size 0x8, virtual false, abstract: false, final false
inline bool get_rendersUIOverlay() ;

static inline void setStaticF_s_Active(::UnityEngine::Rendering::SupportedRenderingFeatures*  value) ;

/// @brief Method set_active, addr 0xb620d68, size 0x68, virtual false, abstract: false, final false
static inline void set_active(::UnityEngine::Rendering::SupportedRenderingFeatures*  value) ;

/// [CompilerGenerated]
/// @brief Method set_overridesLightProbeSystem, addr 0xb62601c, size 0x8, virtual false, abstract: false, final false
inline void set_overridesLightProbeSystem(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_rendersUIOverlay, addr 0xb625ffc, size 0x8, virtual false, abstract: false, final false
inline void set_rendersUIOverlay(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_skyOcclusion, addr 0xb625fec, size 0x8, virtual false, abstract: false, final false
inline void set_skyOcclusion(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_supportsHDR, addr 0xb626024, size 0x8, virtual false, abstract: false, final false
inline void set_supportsHDR(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SupportedRenderingFeatures() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SupportedRenderingFeatures", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SupportedRenderingFeatures(SupportedRenderingFeatures && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SupportedRenderingFeatures", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SupportedRenderingFeatures(SupportedRenderingFeatures const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15577};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <reflectionProbeModes>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::SupportedRenderingFeatures_ReflectionProbeModes  ____reflectionProbeModes_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <defaultMixedLightingModes>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes  ____defaultMixedLightingModes_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <mixedLightingModes>k__BackingField, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::SupportedRenderingFeatures_LightmapMixedBakeModes  ____mixedLightingModes_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <lightmapBakeTypes>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 ::UnityEngine::LightmapBakeType  ____lightmapBakeTypes_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <lightmapsModes>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::LightmapsMode  ____lightmapsModes_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <enlightenLightmapper>k__BackingField, offset: 0x24, size: 0x1, def value: None
 bool  ____enlightenLightmapper_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <enlighten>k__BackingField, offset: 0x25, size: 0x1, def value: None
 bool  ____enlighten_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <skyOcclusion>k__BackingField, offset: 0x26, size: 0x1, def value: None
 bool  ____skyOcclusion_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <lightProbeProxyVolumes>k__BackingField, offset: 0x27, size: 0x1, def value: None
 bool  ____lightProbeProxyVolumes_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <motionVectors>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____motionVectors_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <receiveShadows>k__BackingField, offset: 0x29, size: 0x1, def value: None
 bool  ____receiveShadows_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <reflectionProbes>k__BackingField, offset: 0x2a, size: 0x1, def value: None
 bool  ____reflectionProbes_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <reflectionProbesBlendDistance>k__BackingField, offset: 0x2b, size: 0x1, def value: None
 bool  ____reflectionProbesBlendDistance_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <rendererPriority>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  ____rendererPriority_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <rendersUIOverlay>k__BackingField, offset: 0x2d, size: 0x1, def value: None
 bool  ____rendersUIOverlay_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <overridesEnvironmentLighting>k__BackingField, offset: 0x2e, size: 0x1, def value: None
 bool  ____overridesEnvironmentLighting_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <overridesFog>k__BackingField, offset: 0x2f, size: 0x1, def value: None
 bool  ____overridesFog_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <overridesRealtimeReflectionProbes>k__BackingField, offset: 0x30, size: 0x1, def value: None
 bool  ____overridesRealtimeReflectionProbes_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <overridesOtherLightingSettings>k__BackingField, offset: 0x31, size: 0x1, def value: None
 bool  ____overridesOtherLightingSettings_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <editableMaterialRenderQueue>k__BackingField, offset: 0x32, size: 0x1, def value: None
 bool  ____editableMaterialRenderQueue_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <overridesLODBias>k__BackingField, offset: 0x33, size: 0x1, def value: None
 bool  ____overridesLODBias_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <overridesMaximumLODLevel>k__BackingField, offset: 0x34, size: 0x1, def value: None
 bool  ____overridesMaximumLODLevel_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <overridesEnableLODCrossFade>k__BackingField, offset: 0x35, size: 0x1, def value: None
 bool  ____overridesEnableLODCrossFade_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <rendererProbes>k__BackingField, offset: 0x36, size: 0x1, def value: None
 bool  ____rendererProbes_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <particleSystemInstancing>k__BackingField, offset: 0x37, size: 0x1, def value: None
 bool  ____particleSystemInstancing_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <ambientProbeBaking>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____ambientProbeBaking_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <defaultReflectionProbeBaking>k__BackingField, offset: 0x39, size: 0x1, def value: None
 bool  ____defaultReflectionProbeBaking_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <overridesShadowmask>k__BackingField, offset: 0x3a, size: 0x1, def value: None
 bool  ____overridesShadowmask_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <overridesLightProbeSystem>k__BackingField, offset: 0x3b, size: 0x1, def value: None
 bool  ____overridesLightProbeSystem_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <supportsHDR>k__BackingField, offset: 0x3c, size: 0x1, def value: None
 bool  ____supportsHDR_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <supportsClouds>k__BackingField, offset: 0x3d, size: 0x1, def value: None
 bool  ____supportsClouds_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <overridesLightProbeSystemWarningMessage>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____overridesLightProbeSystemWarningMessage_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____reflectionProbeModes_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____defaultMixedLightingModes_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____mixedLightingModes_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____lightmapBakeTypes_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____lightmapsModes_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____enlightenLightmapper_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____enlighten_k__BackingField) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____skyOcclusion_k__BackingField) == 0x26, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____lightProbeProxyVolumes_k__BackingField) == 0x27, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____motionVectors_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____receiveShadows_k__BackingField) == 0x29, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____reflectionProbes_k__BackingField) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____reflectionProbesBlendDistance_k__BackingField) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____rendererPriority_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____rendersUIOverlay_k__BackingField) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesEnvironmentLighting_k__BackingField) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesFog_k__BackingField) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesRealtimeReflectionProbes_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesOtherLightingSettings_k__BackingField) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____editableMaterialRenderQueue_k__BackingField) == 0x32, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesLODBias_k__BackingField) == 0x33, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesMaximumLODLevel_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesEnableLODCrossFade_k__BackingField) == 0x35, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____rendererProbes_k__BackingField) == 0x36, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____particleSystemInstancing_k__BackingField) == 0x37, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____ambientProbeBaking_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____defaultReflectionProbeBaking_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesShadowmask_k__BackingField) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesLightProbeSystem_k__BackingField) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____supportsHDR_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____supportsClouds_k__BackingField) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::SupportedRenderingFeatures, ____overridesLightProbeSystemWarningMessage_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::SupportedRenderingFeatures) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
