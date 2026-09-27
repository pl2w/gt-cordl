#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/FromOVRHandDataSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__DataSource_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FromOVRHandDataSource)
namespace GlobalNamespace {
template<typename TData>
struct DataSource_1_UpdateModeFlags;
}
namespace GlobalNamespace {
class OVRHand;
}
namespace GlobalNamespace {
struct OVRSkeleton_SkeletonPoseData;
}
namespace Oculus::Interaction::Input {
class HandDataAsset;
}
namespace Oculus::Interaction::Input {
class HandDataSourceConfig;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IDataSource;
}
namespace Oculus::Interaction::Input {
class IHandSkeletonProvider;
}
namespace Oculus::Interaction::Input {
class IOVRCameraRigRef;
}
namespace Oculus::Interaction::Input {
class ITrackingToWorldTransformer;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class FromOVRHandDataSource;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::FromOVRHandDataSource*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::FromOVRHandDataSource*, "Oculus.Interaction.Input", "FromOVRHandDataSource");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies Oculus.Interaction.Input.DataSource`1<TData>, Oculus.Interaction.Input.Handedness, UnityEngine.Quaternion
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.FromOVRHandDataSource
class CORDL_TYPE FromOVRHandDataSource : public ::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::HandDataAsset*> {
public:
// Declarations
/// @brief Field CameraRigRef, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_CameraRigRef, put=__cordl_internal_set_CameraRigRef)) ::Oculus::Interaction::Input::IOVRCameraRigRef*  CameraRigRef;

 __declspec(property(get=get_Config)) ::Oculus::Interaction::Input::HandDataSourceConfig*  Config;

 __declspec(property(get=get_DataAsset)) ::Oculus::Interaction::Input::HandDataAsset*  DataAsset;

/// @brief Field HandSkeletonProvider, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandSkeletonProvider, put=__cordl_internal_set_HandSkeletonProvider)) ::Oculus::Interaction::Input::IHandSkeletonProvider*  HandSkeletonProvider;

 __declspec(property(get=get_ProcessLateUpdates, put=set_ProcessLateUpdates)) bool  ProcessLateUpdates;

/// @brief Field TrackingToWorldTransformer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrackingToWorldTransformer, put=__cordl_internal_set_TrackingToWorldTransformer)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  TrackingToWorldTransformer;

/// @brief Field <WristFixupRotation>k__BackingField, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF__WristFixupRotation_k__BackingField, put=setStaticF__WristFixupRotation_k__BackingField)) ::UnityEngine::Quaternion  _WristFixupRotation_k__BackingField;

/// @brief Field _cameraRigRef, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRigRef, put=__cordl_internal_set__cameraRigRef)) ::UnityW<::UnityEngine::Object>  _cameraRigRef;

/// @brief Field _config, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::Oculus::Interaction::Input::HandDataSourceConfig*  _config;

/// @brief Field _handDataAsset, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__handDataAsset, put=__cordl_internal_set__handDataAsset)) ::Oculus::Interaction::Input::HandDataAsset*  _handDataAsset;

/// @brief Field _handSkeletonProvider, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__handSkeletonProvider, put=__cordl_internal_set__handSkeletonProvider)) ::UnityW<::UnityEngine::Object>  _handSkeletonProvider;

/// @brief Field _handedness, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__handedness, put=__cordl_internal_set__handedness)) ::Oculus::Interaction::Input::Handedness  _handedness;

/// @brief Field _lastHandScale, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastHandScale, put=__cordl_internal_set__lastHandScale)) float_t  _lastHandScale;

/// @brief Field _ovrHand, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__ovrHand, put=__cordl_internal_set__ovrHand)) ::UnityW<::GlobalNamespace::OVRHand>  _ovrHand;

/// @brief Field _processLateUpdates, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__processLateUpdates, put=__cordl_internal_set__processLateUpdates)) bool  _processLateUpdates;

/// @brief Field _trackingToWorldTransformer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackingToWorldTransformer, put=__cordl_internal_set__trackingToWorldTransformer)) ::UnityW<::UnityEngine::Object>  _trackingToWorldTransformer;

/// @brief Method Awake, addr 0xa41d520, size 0x10c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleInputDataDirtied, addr 0xa41db7c, size 0x20, virtual false, abstract: false, final false
inline void HandleInputDataDirtied(bool  isLateUpdate) ;

/// @brief Method InjectAllFromOVRHandDataSource, addr 0xa41e4cc, size 0x98, virtual false, abstract: false, final false
inline void InjectAllFromOVRHandDataSource(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HandDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  trackingToWorldTransformer, ::Oculus::Interaction::Input::IHandSkeletonProvider*  handSkeletonProvider) ;

/// @brief Method InjectHandSkeletonProvider, addr 0xa41e634, size 0xd0, virtual false, abstract: false, final false
inline void InjectHandSkeletonProvider(::Oculus::Interaction::Input::IHandSkeletonProvider*  handSkeletonProvider) ;

/// @brief Method InjectHandedness, addr 0xa41e704, size 0x8, virtual false, abstract: false, final false
inline void InjectHandedness(::Oculus::Interaction::Input::Handedness  handedness) ;

/// @brief Method InjectOptionalOVRHand, addr 0xa41e70c, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalOVRHand(::GlobalNamespace::OVRHand*  ovrHand) ;

/// @brief Method InjectTrackingToWorldTransformer, addr 0xa41e564, size 0xd0, virtual false, abstract: false, final false
inline void InjectTrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  trackingToWorldTransformer) ;

static inline ::Oculus::Interaction::Input::FromOVRHandDataSource* New_ctor() ;

/// @brief Method OnDisable, addr 0xa41da54, size 0x128, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa41d934, size 0x120, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa41d720, size 0x214, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateConfig, addr 0xa41d62c, size 0xf4, virtual false, abstract: false, final false
inline void UpdateConfig() ;

/// @brief Method UpdateData, addr 0xa41dc20, size 0x290, virtual true, abstract: false, final false
inline void UpdateData() ;

/// @brief Method UpdateDataPoses, addr 0xa41deb0, size 0x4cc, virtual false, abstract: false, final false
inline void UpdateDataPoses(::GlobalNamespace::OVRSkeleton_SkeletonPoseData  poseData) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__21_0, addr 0xa41e7ec, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__21_0() ;

constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef* const& __cordl_internal_get_CameraRigRef() const;

constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef*& __cordl_internal_get_CameraRigRef() ;

constexpr ::Oculus::Interaction::Input::IHandSkeletonProvider* const& __cordl_internal_get_HandSkeletonProvider() const;

constexpr ::Oculus::Interaction::Input::IHandSkeletonProvider*& __cordl_internal_get_HandSkeletonProvider() ;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& __cordl_internal_get_TrackingToWorldTransformer() const;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& __cordl_internal_get_TrackingToWorldTransformer() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__cameraRigRef() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__cameraRigRef() ;

constexpr ::Oculus::Interaction::Input::HandDataSourceConfig* const& __cordl_internal_get__config() const;

constexpr ::Oculus::Interaction::Input::HandDataSourceConfig*& __cordl_internal_get__config() ;

constexpr ::Oculus::Interaction::Input::HandDataAsset* const& __cordl_internal_get__handDataAsset() const;

constexpr ::Oculus::Interaction::Input::HandDataAsset*& __cordl_internal_get__handDataAsset() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handSkeletonProvider() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handSkeletonProvider() ;

constexpr ::Oculus::Interaction::Input::Handedness const& __cordl_internal_get__handedness() const;

constexpr ::Oculus::Interaction::Input::Handedness& __cordl_internal_get__handedness() ;

constexpr float_t const& __cordl_internal_get__lastHandScale() const;

constexpr float_t& __cordl_internal_get__lastHandScale() ;

constexpr ::UnityW<::GlobalNamespace::OVRHand> const& __cordl_internal_get__ovrHand() const;

constexpr ::UnityW<::GlobalNamespace::OVRHand>& __cordl_internal_get__ovrHand() ;

constexpr bool const& __cordl_internal_get__processLateUpdates() const;

constexpr bool& __cordl_internal_get__processLateUpdates() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__trackingToWorldTransformer() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__trackingToWorldTransformer() ;

constexpr void __cordl_internal_set_CameraRigRef(::Oculus::Interaction::Input::IOVRCameraRigRef*  value) ;

constexpr void __cordl_internal_set_HandSkeletonProvider(::Oculus::Interaction::Input::IHandSkeletonProvider*  value) ;

constexpr void __cordl_internal_set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

constexpr void __cordl_internal_set__cameraRigRef(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__config(::Oculus::Interaction::Input::HandDataSourceConfig*  value) ;

constexpr void __cordl_internal_set__handDataAsset(::Oculus::Interaction::Input::HandDataAsset*  value) ;

constexpr void __cordl_internal_set__handSkeletonProvider(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handedness(::Oculus::Interaction::Input::Handedness  value) ;

constexpr void __cordl_internal_set__lastHandScale(float_t  value) ;

constexpr void __cordl_internal_set__ovrHand(::UnityW<::GlobalNamespace::OVRHand>  value) ;

constexpr void __cordl_internal_set__processLateUpdates(bool  value) ;

constexpr void __cordl_internal_set__trackingToWorldTransformer(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa41e714, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Quaternion getStaticF__WristFixupRotation_k__BackingField() ;

/// @brief Method get_Config, addr 0xa41db9c, size 0x84, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandDataSourceConfig* get_Config() ;

/// @brief Method get_DataAsset, addr 0xa41d4bc, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Interaction::Input::HandDataAsset* get_DataAsset() ;

/// @brief Method get_ProcessLateUpdates, addr 0xa41d4ac, size 0x8, virtual false, abstract: false, final false
inline bool get_ProcessLateUpdates() ;

/// [CompilerGenerated]
/// @brief Method get_WristFixupRotation, addr 0xa41d4c4, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion get_WristFixupRotation() ;

static inline void setStaticF__WristFixupRotation_k__BackingField(::UnityEngine::Quaternion  value) ;

/// @brief Method set_ProcessLateUpdates, addr 0xa41d4b4, size 0x8, virtual false, abstract: false, final false
inline void set_ProcessLateUpdates(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FromOVRHandDataSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FromOVRHandDataSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FromOVRHandDataSource(FromOVRHandDataSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FromOVRHandDataSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FromOVRHandDataSource(FromOVRHandDataSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31143};

/// [Header("OVR Data Source")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IOVRCameraRigRef), new[] {  })]
/// @brief Field _cameraRigRef, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____cameraRigRef;

/// [SerializeField]
/// @brief Field _processLateUpdates, offset: 0x50, size: 0x1, def value: None
 bool  ____processLateUpdates;

/// [Header("Shared Configuration")]
/// [SerializeField]
/// @brief Field _handedness, offset: 0x54, size: 0x4, def value: None
 ::Oculus::Interaction::Input::Handedness  ____handedness;

/// [SerializeField]
/// [Optional((Oculus.Interaction.OptionalAttribute::Flag)1)]
/// @brief Field _ovrHand, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::OVRHand>  ____ovrHand;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.ITrackingToWorldTransformer), new[] {  })]
/// @brief Field _trackingToWorldTransformer, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____trackingToWorldTransformer;

/// @brief Field TrackingToWorldTransformer, offset: 0x68, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  ___TrackingToWorldTransformer;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHandSkeletonProvider), new[] {  })]
/// @brief Field _handSkeletonProvider, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handSkeletonProvider;

/// @brief Field HandSkeletonProvider, offset: 0x78, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHandSkeletonProvider*  ___HandSkeletonProvider;

/// @brief Field _handDataAsset, offset: 0x80, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HandDataAsset*  ____handDataAsset;

/// @brief Field _lastHandScale, offset: 0x88, size: 0x4, def value: None
 float_t  ____lastHandScale;

/// @brief Field _config, offset: 0x90, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HandDataSourceConfig*  ____config;

/// @brief Field CameraRigRef, offset: 0x98, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IOVRCameraRigRef*  ___CameraRigRef;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHandDataSource, ____cameraRigRef) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHandDataSource, ____processLateUpdates) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHandDataSource, ____handedness) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHandDataSource, ____ovrHand) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHandDataSource, ____trackingToWorldTransformer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHandDataSource, ___TrackingToWorldTransformer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHandDataSource, ____handSkeletonProvider) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHandDataSource, ___HandSkeletonProvider) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHandDataSource, ____handDataAsset) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHandDataSource, ____lastHandScale) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHandDataSource, ____config) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHandDataSource, ___CameraRigRef) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::FromOVRHandDataSource) == 0xa0, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
