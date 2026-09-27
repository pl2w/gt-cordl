#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/FromOVRControllerDataSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "Oculus/Interaction/Input/zzzz__DataSource_1_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IUsage_def.hpp"
#include "Oculus/Interaction/Input/zzzz__OVRPointerPoseSelector_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(FromOVRControllerDataSource)
namespace GlobalNamespace {
template<typename TData>
struct DataSource_1_UpdateModeFlags;
}
namespace Oculus::Interaction::Input {
class ControllerDataAsset;
}
namespace Oculus::Interaction::Input {
class ControllerDataSourceConfig;
}
namespace Oculus::Interaction::Input {
struct Handedness;
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
class FromOVRControllerDataSource;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::FromOVRControllerDataSource*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::FromOVRControllerDataSource*, "Oculus.Interaction.Input", "FromOVRControllerDataSource");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRInput::Controller, Oculus.Interaction.Input.DataSource`1<TData>, Oculus.Interaction.Input.Handedness, Oculus.Interaction.Input.IUsage, Oculus.Interaction.Input.OVRPointerPoseSelector
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.FromOVRControllerDataSource
class CORDL_TYPE FromOVRControllerDataSource : public ::Oculus::Interaction::Input::DataSource_1<::Oculus::Interaction::Input::ControllerDataAsset*> {
public:
// Declarations
 __declspec(property(get=get_CameraRigRef, put=set_CameraRigRef)) ::Oculus::Interaction::Input::IOVRCameraRigRef*  CameraRigRef;

 __declspec(property(get=get_Config)) ::Oculus::Interaction::Input::ControllerDataSourceConfig*  Config;

/// @brief Field ControllerUsageMappings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ControllerUsageMappings, put=setStaticF_ControllerUsageMappings)) ::ArrayW<::Oculus::Interaction::Input::IUsage*>  ControllerUsageMappings;

 __declspec(property(get=get_DataAsset)) ::Oculus::Interaction::Input::ControllerDataAsset*  DataAsset;

 __declspec(property(get=get_ProcessLateUpdates, put=set_ProcessLateUpdates)) bool  ProcessLateUpdates;

/// @brief Field TrackingToWorldTransformer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_TrackingToWorldTransformer, put=__cordl_internal_set_TrackingToWorldTransformer)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  TrackingToWorldTransformer;

/// @brief Field <CameraRigRef>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__CameraRigRef_k__BackingField, put=__cordl_internal_set__CameraRigRef_k__BackingField)) ::Oculus::Interaction::Input::IOVRCameraRigRef*  _CameraRigRef_k__BackingField;

/// @brief Field _cameraRigRef, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRigRef, put=__cordl_internal_set__cameraRigRef)) ::UnityW<::UnityEngine::Object>  _cameraRigRef;

/// @brief Field _config, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::Oculus::Interaction::Input::ControllerDataSourceConfig*  _config;

/// @brief Field _controllerDataAsset, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__controllerDataAsset, put=__cordl_internal_set__controllerDataAsset)) ::Oculus::Interaction::Input::ControllerDataAsset*  _controllerDataAsset;

/// @brief Field _handedness, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__handedness, put=__cordl_internal_set__handedness)) ::Oculus::Interaction::Input::Handedness  _handedness;

/// @brief Field _ovrController, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__ovrController, put=__cordl_internal_set__ovrController)) ::GlobalNamespace::OVRInput_Controller  _ovrController;

/// @brief Field _pointerPoseSelector, offset 0x88, size 0x1c 
 __declspec(property(get=__cordl_internal_get__pointerPoseSelector, put=__cordl_internal_set__pointerPoseSelector)) ::Oculus::Interaction::Input::OVRPointerPoseSelector  _pointerPoseSelector;

/// @brief Field _processLateUpdates, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__processLateUpdates, put=__cordl_internal_set__processLateUpdates)) bool  _processLateUpdates;

/// @brief Field _trackingToWorldTransformer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__trackingToWorldTransformer, put=__cordl_internal_set__trackingToWorldTransformer)) ::UnityW<::UnityEngine::Object>  _trackingToWorldTransformer;

/// @brief Method Awake, addr 0xa41c3ec, size 0xac, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleInputDataDirtied, addr 0xa41c7f8, size 0x20, virtual false, abstract: false, final false
inline void HandleInputDataDirtied(bool  isLateUpdate) ;

/// @brief Method InjectAllFromOVRControllerDataSource, addr 0xa41cd98, size 0x80, virtual false, abstract: false, final false
inline void InjectAllFromOVRControllerDataSource(::GlobalNamespace::DataSource_1_UpdateModeFlags<::Oculus::Interaction::Input::ControllerDataAsset*>  updateMode, ::Oculus::Interaction::Input::IDataSource*  updateAfter, ::Oculus::Interaction::Input::Handedness  handedness, ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  trackingToWorldTransformer) ;

/// @brief Method InjectHandedness, addr 0xa41cee8, size 0x8, virtual false, abstract: false, final false
inline void InjectHandedness(::Oculus::Interaction::Input::Handedness  handedness) ;

/// @brief Method InjectTrackingToWorldTransformer, addr 0xa41ce18, size 0xd0, virtual false, abstract: false, final false
inline void InjectTrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  trackingToWorldTransformer) ;

static inline ::Oculus::Interaction::Input::FromOVRControllerDataSource* New_ctor() ;

/// @brief Method OnDisable, addr 0xa41c6d0, size 0x128, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa41c5b0, size 0x120, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa41c4d0, size 0xe0, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateConfig, addr 0xa41c498, size 0x38, virtual false, abstract: false, final false
inline void UpdateConfig() ;

/// @brief Method UpdateData, addr 0xa41c89c, size 0x4f4, virtual true, abstract: false, final false
inline void UpdateData() ;

/// [CompilerGenerated]
/// @brief Method <Start>b__18_0, addr 0xa41d464, size 0x48, virtual false, abstract: false, final false
inline void _Start_b__18_0() ;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& __cordl_internal_get_TrackingToWorldTransformer() const;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& __cordl_internal_get_TrackingToWorldTransformer() ;

constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef* const& __cordl_internal_get__CameraRigRef_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IOVRCameraRigRef*& __cordl_internal_get__CameraRigRef_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__cameraRigRef() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__cameraRigRef() ;

constexpr ::Oculus::Interaction::Input::ControllerDataSourceConfig* const& __cordl_internal_get__config() const;

constexpr ::Oculus::Interaction::Input::ControllerDataSourceConfig*& __cordl_internal_get__config() ;

constexpr ::Oculus::Interaction::Input::ControllerDataAsset* const& __cordl_internal_get__controllerDataAsset() const;

constexpr ::Oculus::Interaction::Input::ControllerDataAsset*& __cordl_internal_get__controllerDataAsset() ;

constexpr ::Oculus::Interaction::Input::Handedness const& __cordl_internal_get__handedness() const;

constexpr ::Oculus::Interaction::Input::Handedness& __cordl_internal_get__handedness() ;

constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__ovrController() const;

constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__ovrController() ;

constexpr ::Oculus::Interaction::Input::OVRPointerPoseSelector const& __cordl_internal_get__pointerPoseSelector() const;

constexpr ::Oculus::Interaction::Input::OVRPointerPoseSelector& __cordl_internal_get__pointerPoseSelector() ;

constexpr bool const& __cordl_internal_get__processLateUpdates() const;

constexpr bool& __cordl_internal_get__processLateUpdates() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__trackingToWorldTransformer() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__trackingToWorldTransformer() ;

constexpr void __cordl_internal_set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

constexpr void __cordl_internal_set__CameraRigRef_k__BackingField(::Oculus::Interaction::Input::IOVRCameraRigRef*  value) ;

constexpr void __cordl_internal_set__cameraRigRef(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__config(::Oculus::Interaction::Input::ControllerDataSourceConfig*  value) ;

constexpr void __cordl_internal_set__controllerDataAsset(::Oculus::Interaction::Input::ControllerDataAsset*  value) ;

constexpr void __cordl_internal_set__handedness(::Oculus::Interaction::Input::Handedness  value) ;

constexpr void __cordl_internal_set__ovrController(::GlobalNamespace::OVRInput_Controller  value) ;

constexpr void __cordl_internal_set__pointerPoseSelector(::Oculus::Interaction::Input::OVRPointerPoseSelector  value) ;

constexpr void __cordl_internal_set__processLateUpdates(bool  value) ;

constexpr void __cordl_internal_set__trackingToWorldTransformer(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa41cef0, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::Oculus::Interaction::Input::IUsage*> getStaticF_ControllerUsageMappings() ;

/// [CompilerGenerated]
/// @brief Method get_CameraRigRef, addr 0xa41c3cc, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IOVRCameraRigRef* get_CameraRigRef() ;

/// @brief Method get_Config, addr 0xa41c818, size 0x84, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ControllerDataSourceConfig* get_Config() ;

/// @brief Method get_DataAsset, addr 0xa41cd90, size 0x8, virtual true, abstract: false, final false
inline ::Oculus::Interaction::Input::ControllerDataAsset* get_DataAsset() ;

/// @brief Method get_ProcessLateUpdates, addr 0xa41c3dc, size 0x8, virtual false, abstract: false, final false
inline bool get_ProcessLateUpdates() ;

static inline void setStaticF_ControllerUsageMappings(::ArrayW<::Oculus::Interaction::Input::IUsage*>  value) ;

/// [CompilerGenerated]
/// @brief Method set_CameraRigRef, addr 0xa41c3d4, size 0x8, virtual false, abstract: false, final false
inline void set_CameraRigRef(::Oculus::Interaction::Input::IOVRCameraRigRef*  value) ;

/// @brief Method set_ProcessLateUpdates, addr 0xa41c3e4, size 0x8, virtual false, abstract: false, final false
inline void set_ProcessLateUpdates(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FromOVRControllerDataSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FromOVRControllerDataSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FromOVRControllerDataSource(FromOVRControllerDataSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FromOVRControllerDataSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FromOVRControllerDataSource(FromOVRControllerDataSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31142};

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

/// [Header("Shared Configuration")]
/// [SerializeField]
/// @brief Field _handedness, offset: 0x5c, size: 0x4, def value: None
 ::Oculus::Interaction::Input::Handedness  ____handedness;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.ITrackingToWorldTransformer), new[] {  })]
/// @brief Field _trackingToWorldTransformer, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____trackingToWorldTransformer;

/// @brief Field TrackingToWorldTransformer, offset: 0x68, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  ___TrackingToWorldTransformer;

/// @brief Field _controllerDataAsset, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ControllerDataAsset*  ____controllerDataAsset;

/// @brief Field _ovrController, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Controller  ____ovrController;

/// @brief Field _config, offset: 0x80, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ControllerDataSourceConfig*  ____config;

/// @brief Field _pointerPoseSelector, offset: 0x88, size: 0x1c, def value: None
 ::Oculus::Interaction::Input::OVRPointerPoseSelector  ____pointerPoseSelector;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::FromOVRControllerDataSource, ____cameraRigRef) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRControllerDataSource, ____CameraRigRef_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRControllerDataSource, ____processLateUpdates) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRControllerDataSource, ____handedness) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRControllerDataSource, ____trackingToWorldTransformer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRControllerDataSource, ___TrackingToWorldTransformer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRControllerDataSource, ____controllerDataAsset) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRControllerDataSource, ____ovrController) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRControllerDataSource, ____config) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::FromOVRControllerDataSource, ____pointerPoseSelector) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::FromOVRControllerDataSource) == 0xa8, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
