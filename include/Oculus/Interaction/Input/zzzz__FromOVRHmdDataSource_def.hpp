#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/FromOVRHmdDataSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__DataSource_1_def.hpp"
CORDL_MODULE_EXPORT(FromOVRHmdDataSource)
namespace GlobalNamespace {
template<typename TData>
struct DataSource_1_UpdateModeFlags;
}
namespace Oculus::Interaction::Input {
class HmdDataAsset;
}
namespace Oculus::Interaction::Input {
class HmdDataSourceConfig;
}
namespace Oculus::Interaction::Input {
class IDataSource;
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
// Forward declare root types
namespace Oculus::Interaction::Input {
class FromOVRHmdDataSource;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::FromOVRHmdDataSource*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::FromOVRHmdDataSource*, "Oculus.Interaction.Input", "FromOVRHmdDataSource");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies Oculus.Interaction.Input.DataSource`1<TData>
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.FromOVRHmdDataSource
class CORDL_TYPE FromOVRHmdDataSource : public ::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::HmdDataAsset*> {
public:
// Declarations
 __declspec(property(get=get_CameraRigRef, put=set_CameraRigRef)) ::Oculus::Interaction::Input::IOVRCameraRigRef*  CameraRigRef;

 __declspec(property(get=get_Config)) ::Oculus::Interaction::Input::HmdDataSourceConfig*  Config;

 __declspec(property(get=get_DataAsset)) ::Oculus::Interaction::Input::HmdDataAsset*  DataAsset;

 __declspec(property(get=get_ProcessLateUpdates, put=set_ProcessLateUpdates)) bool  ProcessLateUpdates;

/// @brief Field TrackingToWorldTransformer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrackingToWorldTransformer, put=__cordl_internal_set_TrackingToWorldTransformer)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  TrackingToWorldTransformer;

/// @brief Field <CameraRigRef>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraRigRef_k__BackingField, put=__cordl_internal_set__CameraRigRef_k__BackingField)) ::Oculus::Interaction::Input::IOVRCameraRigRef*  _CameraRigRef_k__BackingField;

/// @brief Field _cameraRigRef, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRigRef, put=__cordl_internal_set__cameraRigRef)) ::UnityW<::UnityEngine::Object>  _cameraRigRef;

/// @brief Field _config, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::Oculus::Interaction::Input::HmdDataSourceConfig*  _config;

/// @brief Field _hmdDataAsset, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmdDataAsset, put=__cordl_internal_set__hmdDataAsset)) ::Oculus::Interaction::Input::HmdDataAsset*  _hmdDataAsset;

/// @brief Field _processLateUpdates, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__processLateUpdates, put=__cordl_internal_set__processLateUpdates)) bool  _processLateUpdates;

/// @brief Field _trackingToWorldTransformer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackingToWorldTransformer, put=__cordl_internal_set__trackingToWorldTransformer)) ::UnityW<::UnityEngine::Object>  _trackingToWorldTransformer;

/// @brief Field _useOvrManagerEmulatedPose, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__useOvrManagerEmulatedPose, put=__cordl_internal_set__useOvrManagerEmulatedPose)) bool  _useOvrManagerEmulatedPose;

/// @brief Method Awake, addr 0xa41e854, size 0xa0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleInputDataDirtied, addr 0xa41ebd4, size 0x20, virtual false, abstract: false, final false
inline void HandleInputDataDirtied(bool  isLateUpdate) ;

/// @brief Method InjectAllFromOVRHmdDataSource, addr 0xa41efd0, size 0x84, virtual false, abstract: false, final false
inline void InjectAllFromOVRHmdDataSource(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::HmdDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, bool  useOvrManagerEmulatedPose, ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  trackingToWorldTransformer) ;

/// @brief Method InjectTrackingToWorldTransformer, addr 0xa41f054, size 0xd0, virtual false, abstract: false, final false
inline void InjectTrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  trackingToWorldTransformer) ;

/// @brief Method InjectUseOvrManagerEmulatedPose, addr 0xa41f124, size 0x8, virtual false, abstract: false, final false
inline void InjectUseOvrManagerEmulatedPose(bool  useOvrManagerEmulatedPose) ;

static inline ::Oculus::Interaction::Input::FromOVRHmdDataSource* New_ctor() ;

/// @brief Method OnDisable, addr 0xa41eaac, size 0x128, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa41e98c, size 0x120, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa41e8f4, size 0x98, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateData, addr 0xa41ec80, size 0x348, virtual true, abstract: false, final false
inline void UpdateData() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__15_0, addr 0xa41f1b4, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__15_0() ;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& __cordl_internal_get_TrackingToWorldTransformer() const;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& __cordl_internal_get_TrackingToWorldTransformer() ;

constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef* const& __cordl_internal_get__CameraRigRef_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef*& __cordl_internal_get__CameraRigRef_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__cameraRigRef() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__cameraRigRef() ;

constexpr ::Oculus::Interaction::Input::HmdDataSourceConfig* const& __cordl_internal_get__config() const;

constexpr ::Oculus::Interaction::Input::HmdDataSourceConfig*& __cordl_internal_get__config() ;

constexpr ::Oculus::Interaction::Input::HmdDataAsset* const& __cordl_internal_get__hmdDataAsset() const;

constexpr ::Oculus::Interaction::Input::HmdDataAsset*& __cordl_internal_get__hmdDataAsset() ;

constexpr bool const& __cordl_internal_get__processLateUpdates() const;

constexpr bool& __cordl_internal_get__processLateUpdates() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__trackingToWorldTransformer() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__trackingToWorldTransformer() ;

constexpr bool const& __cordl_internal_get__useOvrManagerEmulatedPose() const;

constexpr bool& __cordl_internal_get__useOvrManagerEmulatedPose() ;

constexpr void __cordl_internal_set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

constexpr void __cordl_internal_set__CameraRigRef_k__BackingField(::Oculus::Interaction::Input::IOVRCameraRigRef*  value) ;

constexpr void __cordl_internal_set__cameraRigRef(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__config(::Oculus::Interaction::Input::HmdDataSourceConfig*  value) ;

constexpr void __cordl_internal_set__hmdDataAsset(::Oculus::Interaction::Input::HmdDataAsset*  value) ;

constexpr void __cordl_internal_set__processLateUpdates(bool  value) ;

constexpr void __cordl_internal_set__trackingToWorldTransformer(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__useOvrManagerEmulatedPose(bool  value) ;

/// @brief Method .ctor, addr 0xa41f12c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CameraRigRef, addr 0xa41e834, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IOVRCameraRigRef* get_CameraRigRef() ;

/// @brief Method get_Config, addr 0xa41ebf4, size 0x8c, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HmdDataSourceConfig* get_Config() ;

/// @brief Method get_DataAsset, addr 0xa41efc8, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Interaction::Input::HmdDataAsset* get_DataAsset() ;

/// @brief Method get_ProcessLateUpdates, addr 0xa41e844, size 0x8, virtual false, abstract: false, final false
inline bool get_ProcessLateUpdates() ;

/// [CompilerGenerated]
/// @brief Method set_CameraRigRef, addr 0xa41e83c, size 0x8, virtual false, abstract: false, final false
inline void set_CameraRigRef(::Oculus::Interaction::Input::IOVRCameraRigRef*  value) ;

/// @brief Method set_ProcessLateUpdates, addr 0xa41e84c, size 0x8, virtual false, abstract: false, final false
inline void set_ProcessLateUpdates(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FromOVRHmdDataSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FromOVRHmdDataSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FromOVRHmdDataSource(FromOVRHmdDataSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FromOVRHmdDataSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FromOVRHmdDataSource(FromOVRHmdDataSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31144};

/// [Header("OVR Data Source")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IOVRCameraRigRef), new[] {  })]
/// @brief Field _cameraRigRef, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____cameraRigRef;

/// [CompilerGenerated]
/// @brief Field <CameraRigRef>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IOVRCameraRigRef*  ____CameraRigRef_k__BackingField;

/// [SerializeField]
/// @brief Field _processLateUpdates, offset: 0x58, size: 0x1, def value: None
 bool  ____processLateUpdates;

/// [SerializeField]
/// [Tooltip("If true, uses OVRManager.headPoseRelativeOffset rather than sensor data for HMD pose.")]
/// @brief Field _useOvrManagerEmulatedPose, offset: 0x59, size: 0x1, def value: None
 bool  ____useOvrManagerEmulatedPose;

/// [Header("Shared Configuration")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.ITrackingToWorldTransformer), new[] {  })]
/// @brief Field _trackingToWorldTransformer, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____trackingToWorldTransformer;

/// @brief Field TrackingToWorldTransformer, offset: 0x68, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  ___TrackingToWorldTransformer;

/// @brief Field _hmdDataAsset, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HmdDataAsset*  ____hmdDataAsset;

/// @brief Field _config, offset: 0x78, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HmdDataSourceConfig*  ____config;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHmdDataSource, ____cameraRigRef) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHmdDataSource, ____CameraRigRef_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHmdDataSource, ____processLateUpdates) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHmdDataSource, ____useOvrManagerEmulatedPose) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHmdDataSource, ____trackingToWorldTransformer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHmdDataSource, ___TrackingToWorldTransformer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHmdDataSource, ____hmdDataAsset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRHmdDataSource, ____config) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::FromOVRHmdDataSource) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
