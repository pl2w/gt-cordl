#pragma once
// IWYU pragma private; include "GlobalNamespace/LckSocialCameraManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LckBodyCameraSpawner_CameraState_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(LckSocialCameraManager)
namespace GlobalNamespace {
struct LckBodyCameraSpawner_CameraState;
}
namespace GlobalNamespace {
class LckDirectGrabbable;
}
namespace GlobalNamespace {
class LckSocialCamera;
}
namespace Liv::Lck::GorillaTag {
struct CameraMode;
}
namespace Liv::Lck::GorillaTag {
class CoconutCamera;
}
namespace Liv::Lck::GorillaTag {
class GTLckController;
}
namespace Liv::Lck {
class ILckCamera;
}
namespace Liv::Lck {
class LckResult;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class LckSocialCameraManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LckSocialCameraManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LckSocialCameraManager*, "", "LckSocialCameraManager");
// Dependencies LckBodyCameraSpawner::CameraState, Liv.Lck.GorillaTag.CameraMode, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: LckSocialCameraManager
class CORDL_TYPE LckSocialCameraManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field CoconutCamera, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_CoconutCamera, put=__cordl_internal_set_CoconutCamera)) ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>  CoconutCamera;

/// @brief Field OnManagerSpawned, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnManagerSpawned, put=setStaticF_OnManagerSpawned)) ::System::Action_1<::UnityW<::GlobalNamespace::LckSocialCameraManager>>*  OnManagerSpawned;

/// @brief Field _cameraMode, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__cameraMode, put=__cordl_internal_set__cameraMode)) ::Liv::Lck::GorillaTag::CameraMode  _cameraMode;

/// @brief Field _cameraState, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__cameraState, put=__cordl_internal_set__cameraState)) ::GlobalNamespace::LckBodyCameraSpawner_CameraState  _cameraState;

/// @brief Field _gtLckController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__gtLckController, put=__cordl_internal_set__gtLckController)) ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  _gtLckController;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::LckSocialCameraManager>  _instance;

/// @brief Field _isForceHidden, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get__isForceHidden, put=__cordl_internal_set__isForceHidden)) bool  _isForceHidden;

/// @brief Field _isRecording, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRecording, put=__cordl_internal_set__isRecording)) bool  _isRecording;

/// @brief Field _lckCamera, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckCamera, put=__cordl_internal_set__lckCamera)) ::UnityW<::UnityEngine::Camera>  _lckCamera;

/// @brief Field _lckDirectGrabbable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckDirectGrabbable, put=__cordl_internal_set__lckDirectGrabbable)) ::UnityW<::GlobalNamespace::LckDirectGrabbable>  _lckDirectGrabbable;

/// @brief Field _localCameras, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__localCameras, put=__cordl_internal_set__localCameras)) ::UnityW<::UnityEngine::GameObject>  _localCameras;

/// @brief Field _localUi, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__localUi, put=__cordl_internal_set__localUi)) ::UnityW<::UnityEngine::GameObject>  _localUi;

/// @brief Field _needsUpdate, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get__needsUpdate, put=__cordl_internal_set__needsUpdate)) bool  _needsUpdate;

/// @brief Field _networkedCococam, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__networkedCococam, put=__cordl_internal_set__networkedCococam)) ::UnityW<::GlobalNamespace::LckSocialCamera>  _networkedCococam;

/// @brief Field _networkedTablet, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__networkedTablet, put=__cordl_internal_set__networkedTablet)) ::UnityW<::GlobalNamespace::LckSocialCamera>  _networkedTablet;

/// @brief Field _tabletPositionOffset, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get__tabletPositionOffset, put=__cordl_internal_set__tabletPositionOffset)) ::UnityEngine::Vector3  _tabletPositionOffset;

 __declspec(property(get=get_cameraActive, put=set_cameraActive)) bool  cameraActive;

 __declspec(property(get=get_lckDirectGrabbable)) ::UnityW<::GlobalNamespace::LckDirectGrabbable>  lckDirectGrabbable;

 __declspec(property(get=get_uiVisible, put=set_uiVisible)) bool  uiVisible;

/// @brief Method Awake, addr 0x56cb870, size 0x34, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::LckSocialCameraManager* New_ctor() ;

/// @brief Method OnBodyCameraStateChanged, addr 0x56cc440, size 0x1c, virtual false, abstract: false, final false
inline void OnBodyCameraStateChanged(::GlobalNamespace::LckBodyCameraSpawner_CameraState  state) ;

/// @brief Method OnCameraModeChanged, addr 0x56cc45c, size 0xe0, virtual false, abstract: false, final false
inline void OnCameraModeChanged(::Liv::Lck::GorillaTag::CameraMode  mode, ::Liv::Lck::ILckCamera*  lckCamera) ;

/// @brief Method OnDisable, addr 0x56cc200, size 0x208, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x56cb92c, size 0x21c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRecordingStarted, addr 0x56cc53c, size 0x2c, virtual false, abstract: false, final false
inline void OnRecordingStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnRecordingStopped, addr 0x56cc568, size 0x18, virtual false, abstract: false, final false
inline void OnRecordingStopped(::Liv::Lck::LckResult*  result) ;

/// @brief Method SetForceHidden, addr 0x56cc408, size 0x20, virtual false, abstract: false, final false
inline void SetForceHidden(bool  hidden) ;

/// @brief Method SetLckSocialCococamCamera, addr 0x56cab54, size 0x90, virtual false, abstract: false, final false
inline void SetLckSocialCococamCamera(::GlobalNamespace::LckSocialCamera*  socialCamera) ;

/// @brief Method SetLckSocialTabletCamera, addr 0x56cabe4, size 0x90, virtual false, abstract: false, final false
inline void SetLckSocialTabletCamera(::GlobalNamespace::LckSocialCamera*  socialCameraTablet) ;

/// @brief Method SetManagerInstance, addr 0x56cb8a4, size 0x88, virtual false, abstract: false, final false
inline void SetManagerInstance() ;

/// @brief Method Update, addr 0x56cbb48, size 0x2f0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCococamRecording, addr 0x56cc09c, size 0xb8, virtual false, abstract: false, final false
inline void UpdateCococamRecording(bool  recording) ;

/// @brief Method UpdateCococamVisibility, addr 0x56cbe50, size 0x120, virtual false, abstract: false, final false
inline void UpdateCococamVisibility(::GlobalNamespace::LckBodyCameraSpawner_CameraState  cameraState, ::Liv::Lck::GorillaTag::CameraMode  cameraMode, bool  forceHidden, bool  cameraActive) ;

/// @brief Method UpdateTabletRecording, addr 0x56cc154, size 0xac, virtual false, abstract: false, final false
inline void UpdateTabletRecording(bool  recording) ;

/// @brief Method UpdateTabletVisibility, addr 0x56cbf70, size 0x12c, virtual false, abstract: false, final false
inline void UpdateTabletVisibility(::GlobalNamespace::LckBodyCameraSpawner_CameraState  cameraState, bool  forceHidden, bool  cameraActive) ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera> const& __cordl_internal_get_CoconutCamera() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>& __cordl_internal_get_CoconutCamera() ;

constexpr ::Liv::Lck::GorillaTag::CameraMode const& __cordl_internal_get__cameraMode() const;

constexpr ::Liv::Lck::GorillaTag::CameraMode& __cordl_internal_get__cameraMode() ;

constexpr ::GlobalNamespace::LckBodyCameraSpawner_CameraState const& __cordl_internal_get__cameraState() const;

constexpr ::GlobalNamespace::LckBodyCameraSpawner_CameraState& __cordl_internal_get__cameraState() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController> const& __cordl_internal_get__gtLckController() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GTLckController>& __cordl_internal_get__gtLckController() ;

constexpr bool const& __cordl_internal_get__isForceHidden() const;

constexpr bool& __cordl_internal_get__isForceHidden() ;

constexpr bool const& __cordl_internal_get__isRecording() const;

constexpr bool& __cordl_internal_get__isRecording() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__lckCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__lckCamera() ;

constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable> const& __cordl_internal_get__lckDirectGrabbable() const;

constexpr ::UnityW<::GlobalNamespace::LckDirectGrabbable>& __cordl_internal_get__lckDirectGrabbable() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__localCameras() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__localCameras() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__localUi() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__localUi() ;

constexpr bool const& __cordl_internal_get__needsUpdate() const;

constexpr bool& __cordl_internal_get__needsUpdate() ;

constexpr ::UnityW<::GlobalNamespace::LckSocialCamera> const& __cordl_internal_get__networkedCococam() const;

constexpr ::UnityW<::GlobalNamespace::LckSocialCamera>& __cordl_internal_get__networkedCococam() ;

constexpr ::UnityW<::GlobalNamespace::LckSocialCamera> const& __cordl_internal_get__networkedTablet() const;

constexpr ::UnityW<::GlobalNamespace::LckSocialCamera>& __cordl_internal_get__networkedTablet() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__tabletPositionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__tabletPositionOffset() ;

constexpr void __cordl_internal_set_CoconutCamera(::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>  value) ;

constexpr void __cordl_internal_set__cameraMode(::Liv::Lck::GorillaTag::CameraMode  value) ;

constexpr void __cordl_internal_set__cameraState(::GlobalNamespace::LckBodyCameraSpawner_CameraState  value) ;

constexpr void __cordl_internal_set__gtLckController(::UnityW<::Liv::Lck::GorillaTag::GTLckController>  value) ;

constexpr void __cordl_internal_set__isForceHidden(bool  value) ;

constexpr void __cordl_internal_set__isRecording(bool  value) ;

constexpr void __cordl_internal_set__lckCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__lckDirectGrabbable(::UnityW<::GlobalNamespace::LckDirectGrabbable>  value) ;

constexpr void __cordl_internal_set__localCameras(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__localUi(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__needsUpdate(bool  value) ;

constexpr void __cordl_internal_set__networkedCococam(::UnityW<::GlobalNamespace::LckSocialCamera>  value) ;

constexpr void __cordl_internal_set__networkedTablet(::UnityW<::GlobalNamespace::LckSocialCamera>  value) ;

constexpr void __cordl_internal_set__tabletPositionOffset(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x56cc580, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::UnityW<::GlobalNamespace::LckSocialCameraManager>>* getStaticF_OnManagerSpawned() ;

static inline ::UnityW<::GlobalNamespace::LckSocialCameraManager> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x56cb828, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::LckSocialCameraManager> get_Instance() ;

/// @brief Method get_cameraActive, addr 0x56cbe38, size 0x18, virtual false, abstract: false, final false
inline bool get_cameraActive() ;

/// @brief Method get_lckDirectGrabbable, addr 0x56cb820, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::LckDirectGrabbable> get_lckDirectGrabbable() ;

/// @brief Method get_uiVisible, addr 0x56cc428, size 0x18, virtual false, abstract: false, final false
inline bool get_uiVisible() ;

static inline void setStaticF_OnManagerSpawned(::System::Action_1<::UnityW<::GlobalNamespace::LckSocialCameraManager>>*  value) ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::LckSocialCameraManager>  value) ;

/// @brief Method set_cameraActive, addr 0x56c2850, size 0x5c, virtual false, abstract: false, final false
inline void set_cameraActive(bool  value) ;

/// @brief Method set_uiVisible, addr 0x56c2960, size 0x1c, virtual false, abstract: false, final false
inline void set_uiVisible(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckSocialCameraManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckSocialCameraManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckSocialCameraManager(LckSocialCameraManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckSocialCameraManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckSocialCameraManager(LckSocialCameraManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1041};

/// [SerializeField]
/// @brief Field _localUi, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____localUi;

/// [SerializeField]
/// @brief Field _localCameras, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____localCameras;

/// [SerializeField]
/// @brief Field _gtLckController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GTLckController>  ____gtLckController;

/// [SerializeField]
/// @brief Field _lckDirectGrabbable, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckDirectGrabbable>  ____lckDirectGrabbable;

/// [SerializeField]
/// @brief Field CoconutCamera, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>  ___CoconutCamera;

/// @brief Field _networkedCococam, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckSocialCamera>  ____networkedCococam;

/// @brief Field _networkedTablet, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LckSocialCamera>  ____networkedTablet;

/// @brief Field _lckCamera, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____lckCamera;

/// @brief Field _cameraMode, offset: 0x60, size: 0x4, def value: None
 ::Liv::Lck::GorillaTag::CameraMode  ____cameraMode;

/// @brief Field _cameraState, offset: 0x64, size: 0x4, def value: None
 ::GlobalNamespace::LckBodyCameraSpawner_CameraState  ____cameraState;

/// @brief Field _isRecording, offset: 0x68, size: 0x1, def value: None
 bool  ____isRecording;

/// @brief Field _isForceHidden, offset: 0x69, size: 0x1, def value: None
 bool  ____isForceHidden;

/// @brief Field _needsUpdate, offset: 0x6a, size: 0x1, def value: None
 bool  ____needsUpdate;

/// @brief Field _tabletPositionOffset, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____tabletPositionOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ____localUi) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ____localCameras) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ____gtLckController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ____lckDirectGrabbable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ___CoconutCamera) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ____networkedCococam) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ____networkedTablet) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ____lckCamera) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ____cameraMode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ____cameraState) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ____isRecording) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ____isForceHidden) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ____needsUpdate) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LckSocialCameraManager, ____tabletPositionOffset) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LckSocialCameraManager) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
