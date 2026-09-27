#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineVolumeSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineExtension_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVolumeSettings_FocusTrackingMode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CinemachineVolumeSettings)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineVolumeSettings_FocusTrackingMode;
}
namespace GlobalNamespace {
struct ICinemachineCamera_ActivationEventParams;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineBrain;
}
namespace Unity::Cinemachine {
class CinemachineVirtualCameraBase;
}
namespace Unity::Cinemachine {
class CinemachineVolumeSettings_VcamExtraState;
}
namespace UnityEngine::Rendering {
class VolumeProfile;
}
namespace UnityEngine::Rendering {
class Volume;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineVolumeSettings;
}
namespace Unity::Cinemachine {
class CinemachineVolumeSettings_VcamExtraState;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineVolumeSettings*);
MARK_REF_T(::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineVolumeSettings*, "Unity.Cinemachine", "CinemachineVolumeSettings");
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*, "Unity.Cinemachine", "CinemachineVolumeSettings/VcamExtraState");
// [ExecuteAlways]
// [AddComponentMenu("Cinemachine/Procedural/Extensions/Cinemachine Volume Settings")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineVolumeSettings.html")]
// Dependencies Unity.Cinemachine.CinemachineExtension, Unity.Cinemachine.CinemachineVolumeSettings::FocusTrackingMode
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineVolumeSettings
class CORDL_TYPE CinemachineVolumeSettings : public ::Unity::Cinemachine::CinemachineExtension {
public:
// Declarations
using FocusTrackingMode = ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode;

using VcamExtraState = ::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState;

 __declspec(property(get=get_CalculatedFocusDistance, put=set_CalculatedFocusDistance)) float_t  CalculatedFocusDistance;

/// @brief Field FocusOffset, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_FocusOffset, put=__cordl_internal_set_FocusOffset)) float_t  FocusOffset;

/// @brief Field FocusTarget, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_FocusTarget, put=__cordl_internal_set_FocusTarget)) ::UnityW<::UnityEngine::Transform>  FocusTarget;

/// @brief Field FocusTracking, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_FocusTracking, put=__cordl_internal_set_FocusTracking)) ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode  FocusTracking;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field Profile, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Profile, put=__cordl_internal_set_Profile)) ::UnityW<::UnityEngine::Rendering::VolumeProfile>  Profile;

/// @brief Field Weight, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_Weight, put=__cordl_internal_set_Weight)) float_t  Weight;

/// @brief Field <CalculatedFocusDistance>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__CalculatedFocusDistance_k__BackingField, put=__cordl_internal_set__CalculatedFocusDistance_k__BackingField)) float_t  _CalculatedFocusDistance_k__BackingField;

/// @brief Field m_extraStateCache, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_extraStateCache, put=__cordl_internal_set_m_extraStateCache)) ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>*  m_extraStateCache;

/// @brief Field sVolumes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sVolumes, put=setStaticF_sVolumes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*  sVolumes;

/// @brief Field s_VolumePriority, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_VolumePriority, put=setStaticF_s_VolumePriority)) float_t  s_VolumePriority;

/// @brief Method ApplyPostFX, addr 0xaee699c, size 0x2dc, virtual false, abstract: false, final false
static inline void ApplyPostFX(::Unity::Cinemachine::CinemachineBrain*  brain) ;

/// @brief Method GetDynamicBrainVolumes, addr 0xaee6c78, size 0x414, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* GetDynamicBrainVolumes(::Unity::Cinemachine::CinemachineBrain*  brain, int32_t  minVolumes) ;

/// [RuntimeInitializeOnLoadMethod]
/// @brief Method InitializeModule, addr 0xaee708c, size 0x1e4, virtual false, abstract: false, final false
static inline void InitializeModule() ;

/// @brief Method InvalidateCachedProfile, addr 0xaee60f4, size 0x10c, virtual false, abstract: false, final false
inline void InvalidateCachedProfile() ;

static inline ::Unity::Cinemachine::CinemachineVolumeSettings* New_ctor() ;

/// @brief Method OnCameraCut, addr 0xaee6854, size 0x148, virtual false, abstract: false, final false
static inline void OnCameraCut(::GlobalNamespace::ICinemachineCamera_ActivationEventParams  evt) ;

/// @brief Method OnDestroy, addr 0xaee62f8, size 0x1c, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0xaee62f4, size 0x4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xaee62a8, size 0x18, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PostPipelineStageCallback, addr 0xaee6314, size 0x378, virtual true, abstract: false, final false
inline void PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xaee62c0, size 0x34, virtual false, abstract: false, final false
inline void Reset() ;

constexpr float_t const& __cordl_internal_get_FocusOffset() const;

constexpr float_t& __cordl_internal_get_FocusOffset() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_FocusTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_FocusTarget() ;

constexpr ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode const& __cordl_internal_get_FocusTracking() const;

constexpr ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode& __cordl_internal_get_FocusTracking() ;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get_Profile() const;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get_Profile() ;

constexpr float_t const& __cordl_internal_get_Weight() const;

constexpr float_t& __cordl_internal_get_Weight() ;

constexpr float_t const& __cordl_internal_get__CalculatedFocusDistance_k__BackingField() const;

constexpr float_t& __cordl_internal_get__CalculatedFocusDistance_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>* const& __cordl_internal_get_m_extraStateCache() const;

constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>*& __cordl_internal_get_m_extraStateCache() ;

constexpr void __cordl_internal_set_FocusOffset(float_t  value) ;

constexpr void __cordl_internal_set_FocusTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_FocusTracking(::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode  value) ;

constexpr void __cordl_internal_set_Profile(::UnityW<::UnityEngine::Rendering::VolumeProfile>  value) ;

constexpr void __cordl_internal_set_Weight(float_t  value) ;

constexpr void __cordl_internal_set__CalculatedFocusDistance_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_m_extraStateCache(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>*  value) ;

/// @brief Method .ctor, addr 0xaee7270, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>* getStaticF_sVolumes() ;

static inline float_t getStaticF_s_VolumePriority() ;

/// [CompilerGenerated]
/// @brief Method get_CalculatedFocusDistance, addr 0xaee6048, size 0x8, virtual false, abstract: false, final false
inline float_t get_CalculatedFocusDistance() ;

/// @brief Method get_IsValid, addr 0xaee6058, size 0x9c, virtual false, abstract: false, final false
inline bool get_IsValid() ;

static inline void setStaticF_sVolumes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Volume>>*  value) ;

static inline void setStaticF_s_VolumePriority(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_CalculatedFocusDistance, addr 0xaee6050, size 0x8, virtual false, abstract: false, final false
inline void set_CalculatedFocusDistance(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineVolumeSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVolumeSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineVolumeSettings(CinemachineVolumeSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVolumeSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineVolumeSettings(CinemachineVolumeSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22491};

/// @brief Field sVolumeOwnerName offset 0xffffffff size 0x8
static constexpr ::ConstString  sVolumeOwnerName{u"__CMVolumes"};

/// @brief Field Weight, offset: 0x30, size: 0x4, def value: None
 float_t  ___Weight;

/// [Tooltip("If the profile has the appropriate overrides, will set the base focus distance to be the distance from the selected target to the camera.The Focus Offset field will then modify that distance.")]
/// [FormerlySerializedAs("m_FocusTracking")]
/// @brief Field FocusTracking, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineVolumeSettings_FocusTrackingMode  ___FocusTracking;

/// [Tooltip("The target to use if Focus Tracks Target is set to Custom Target")]
/// [FormerlySerializedAs("m_FocusTarget")]
/// @brief Field FocusTarget, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___FocusTarget;

/// [Tooltip("Offset from target distance, to be used with Focus Tracks Target.  Offsets the sharpest point away from the focus target.")]
/// [FormerlySerializedAs("m_FocusOffset")]
/// @brief Field FocusOffset, offset: 0x40, size: 0x4, def value: None
 float_t  ___FocusOffset;

/// [CompilerGenerated]
/// @brief Field <CalculatedFocusDistance>k__BackingField, offset: 0x44, size: 0x4, def value: None
 float_t  ____CalculatedFocusDistance_k__BackingField;

/// [Tooltip("This profile will be applied whenever this virtual camera is live")]
/// [FormerlySerializedAs("m_Profile")]
/// @brief Field Profile, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::VolumeProfile>  ___Profile;

/// @brief Field m_extraStateCache, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState*>*  ___m_extraStateCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineVolumeSettings, ___Weight) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVolumeSettings, ___FocusTracking) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVolumeSettings, ___FocusTarget) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVolumeSettings, ___FocusOffset) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVolumeSettings, ____CalculatedFocusDistance_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVolumeSettings, ___Profile) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineVolumeSettings, ___m_extraStateCache) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineVolumeSettings) == 0x58, "Size mismatch!");

} // namespace end def Unity::Cinemachine
// Dependencies Unity.Cinemachine.CinemachineExtension::VcamExtraStateBase
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineVolumeSettings/VcamExtraState
class CORDL_TYPE CinemachineVolumeSettings_VcamExtraState : public ::Unity::Cinemachine::CinemachineExtension_VcamExtraStateBase {
public:
// Declarations
/// @brief Field ProfileCopy, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProfileCopy, put=__cordl_internal_set_ProfileCopy)) ::UnityW<::UnityEngine::Rendering::VolumeProfile>  ProfileCopy;

/// @brief Method CreateProfileCopy, addr 0xaee668c, size 0x1c8, virtual false, abstract: false, final false
inline void CreateProfileCopy(::UnityEngine::Rendering::VolumeProfile*  source) ;

/// @brief Method DestroyProfileCopy, addr 0xaee6200, size 0xa8, virtual false, abstract: false, final false
inline void DestroyProfileCopy() ;

static inline ::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile> const& __cordl_internal_get_ProfileCopy() const;

constexpr ::UnityW<::UnityEngine::Rendering::VolumeProfile>& __cordl_internal_get_ProfileCopy() ;

constexpr void __cordl_internal_set_ProfileCopy(::UnityW<::UnityEngine::Rendering::VolumeProfile>  value) ;

/// @brief Method .ctor, addr 0xaee7320, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineVolumeSettings_VcamExtraState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVolumeSettings_VcamExtraState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineVolumeSettings_VcamExtraState(CinemachineVolumeSettings_VcamExtraState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineVolumeSettings_VcamExtraState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineVolumeSettings_VcamExtraState(CinemachineVolumeSettings_VcamExtraState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22490};

/// @brief Field ProfileCopy, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rendering::VolumeProfile>  ___ProfileCopy;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState, ___ProfileCopy) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineVolumeSettings_VcamExtraState) == 0x20, "Size mismatch!");

} // namespace end def Unity::Cinemachine
