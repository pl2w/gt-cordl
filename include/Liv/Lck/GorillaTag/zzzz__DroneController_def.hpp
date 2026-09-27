#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DroneController)
namespace Liv::Lck::GorillaTag {
class DroneCamera;
}
namespace Liv::Lck::GorillaTag {
class DroneDataModel;
}
namespace Liv::Lck::GorillaTag {
class DroneGUI;
}
namespace Liv::Lck::GorillaTag {
class DroneGamepad;
}
namespace Liv::Lck::GorillaTag {
class DroneGeneralKeyboard;
}
namespace Liv::Lck::GorillaTag {
class DroneKeyboard;
}
namespace Liv::Lck::GorillaTag {
class DroneMouse;
}
namespace Liv::Lck::GorillaTag {
class DroneMovement;
}
namespace Liv::Lck::Recorder {
struct RecordingData;
}
namespace Liv::Lck {
class ILckService;
}
namespace Liv::Lck {
class LckCamera;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace Liv::Lck {
class LckResult;
}
namespace UnityEngine {
class GUISkin;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class DroneController;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::DroneController*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneController*, "Liv.Lck.GorillaTag", "DroneController");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneController
class CORDL_TYPE DroneController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _droneCamera, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__droneCamera, put=__cordl_internal_set__droneCamera)) ::Liv::Lck::GorillaTag::DroneCamera*  _droneCamera;

/// @brief Field _droneGUI, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__droneGUI, put=__cordl_internal_set__droneGUI)) ::Liv::Lck::GorillaTag::DroneGUI*  _droneGUI;

/// @brief Field _droneGamepad, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__droneGamepad, put=__cordl_internal_set__droneGamepad)) ::Liv::Lck::GorillaTag::DroneGamepad*  _droneGamepad;

/// @brief Field _droneGeneralKeyboard, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__droneGeneralKeyboard, put=__cordl_internal_set__droneGeneralKeyboard)) ::Liv::Lck::GorillaTag::DroneGeneralKeyboard*  _droneGeneralKeyboard;

/// @brief Field _droneKeyboard, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__droneKeyboard, put=__cordl_internal_set__droneKeyboard)) ::Liv::Lck::GorillaTag::DroneKeyboard*  _droneKeyboard;

/// @brief Field _droneMouse, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__droneMouse, put=__cordl_internal_set__droneMouse)) ::Liv::Lck::GorillaTag::DroneMouse*  _droneMouse;

/// @brief Field _droneMovement, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__droneMovement, put=__cordl_internal_set__droneMovement)) ::Liv::Lck::GorillaTag::DroneMovement*  _droneMovement;

/// @brief Field _droneTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__droneTransform, put=__cordl_internal_set__droneTransform)) ::UnityW<::UnityEngine::Transform>  _droneTransform;

/// @brief Field _gimbalTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__gimbalTransform, put=__cordl_internal_set__gimbalTransform)) ::UnityW<::UnityEngine::Transform>  _gimbalTransform;

/// @brief Field _lckCamera, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckCamera, put=__cordl_internal_set__lckCamera)) ::UnityW<::Liv::Lck::LckCamera>  _lckCamera;

/// @brief Field _lckService, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _model, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__model, put=__cordl_internal_set__model)) ::Liv::Lck::GorillaTag::DroneDataModel*  _model;

/// @brief Field _skin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__skin, put=__cordl_internal_set__skin)) ::UnityW<::UnityEngine::GUISkin>  _skin;

/// @brief Method Awake, addr 0x9d15e00, size 0x344, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetLckCamera, addr 0x9d1cc30, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Liv::Lck::LckCamera> GetLckCamera() ;

/// @brief Method GetModel, addr 0x9d1cc38, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::GorillaTag::DroneDataModel* GetModel() ;

static inline ::Liv::Lck::GorillaTag::DroneController* New_ctor() ;

/// @brief Method OnDisable, addr 0x9d19c4c, size 0xc44, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d17448, size 0xc80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGUI, addr 0x9d1bde4, size 0x30, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnRecordingSaved, addr 0x9d1cdf4, size 0xa4, virtual false, abstract: false, final false
inline void OnRecordingSaved(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  lckResult) ;

/// @brief Method OnRecordingStarted, addr 0x9d1cce4, size 0xa8, virtual false, abstract: false, final false
inline void OnRecordingStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnRecordingStopped, addr 0x9d1cdac, size 0x48, virtual false, abstract: false, final false
inline void OnRecordingStopped(::Liv::Lck::LckResult*  result) ;

/// @brief Method ProcessDroneActiveState, addr 0x9d1d03c, size 0x134, virtual false, abstract: false, final false
inline void ProcessDroneActiveState(bool  isActive) ;

/// @brief Method ProcessRecordButtonBeingPressed, addr 0x9d1ce98, size 0x1a4, virtual false, abstract: false, final false
inline void ProcessRecordButtonBeingPressed() ;

/// @brief Method SetDronePositionAndRotation, addr 0x9d1cc40, size 0x14, virtual false, abstract: false, final false
inline void SetDronePositionAndRotation(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method SetProcessedFovSmoothness, addr 0x9d1d1d8, size 0x2c, virtual false, abstract: false, final false
inline void SetProcessedFovSmoothness(float_t  value) ;

/// @brief Method SetProcessedMovementSmoothness, addr 0x9d1d170, size 0x34, virtual false, abstract: false, final false
inline void SetProcessedMovementSmoothness(float_t  value) ;

/// @brief Method SetProcessedRotationSmoothness, addr 0x9d1d1a4, size 0x34, virtual false, abstract: false, final false
inline void SetProcessedRotationSmoothness(float_t  value) ;

/// @brief Method Update, addr 0x9d1bf54, size 0x16c, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::Liv::Lck::GorillaTag::DroneCamera* const& __cordl_internal_get__droneCamera() const;

constexpr ::Liv::Lck::GorillaTag::DroneCamera*& __cordl_internal_get__droneCamera() ;

constexpr ::Liv::Lck::GorillaTag::DroneGUI* const& __cordl_internal_get__droneGUI() const;

constexpr ::Liv::Lck::GorillaTag::DroneGUI*& __cordl_internal_get__droneGUI() ;

constexpr ::Liv::Lck::GorillaTag::DroneGamepad* const& __cordl_internal_get__droneGamepad() const;

constexpr ::Liv::Lck::GorillaTag::DroneGamepad*& __cordl_internal_get__droneGamepad() ;

constexpr ::Liv::Lck::GorillaTag::DroneGeneralKeyboard* const& __cordl_internal_get__droneGeneralKeyboard() const;

constexpr ::Liv::Lck::GorillaTag::DroneGeneralKeyboard*& __cordl_internal_get__droneGeneralKeyboard() ;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard* const& __cordl_internal_get__droneKeyboard() const;

constexpr ::Liv::Lck::GorillaTag::DroneKeyboard*& __cordl_internal_get__droneKeyboard() ;

constexpr ::Liv::Lck::GorillaTag::DroneMouse* const& __cordl_internal_get__droneMouse() const;

constexpr ::Liv::Lck::GorillaTag::DroneMouse*& __cordl_internal_get__droneMouse() ;

constexpr ::Liv::Lck::GorillaTag::DroneMovement* const& __cordl_internal_get__droneMovement() const;

constexpr ::Liv::Lck::GorillaTag::DroneMovement*& __cordl_internal_get__droneMovement() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__droneTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__droneTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__gimbalTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__gimbalTransform() ;

constexpr ::UnityW<::Liv::Lck::LckCamera> const& __cordl_internal_get__lckCamera() const;

constexpr ::UnityW<::Liv::Lck::LckCamera>& __cordl_internal_get__lckCamera() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel* const& __cordl_internal_get__model() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel*& __cordl_internal_get__model() ;

constexpr ::UnityW<::UnityEngine::GUISkin> const& __cordl_internal_get__skin() const;

constexpr ::UnityW<::UnityEngine::GUISkin>& __cordl_internal_get__skin() ;

constexpr void __cordl_internal_set__droneCamera(::Liv::Lck::GorillaTag::DroneCamera*  value) ;

constexpr void __cordl_internal_set__droneGUI(::Liv::Lck::GorillaTag::DroneGUI*  value) ;

constexpr void __cordl_internal_set__droneGamepad(::Liv::Lck::GorillaTag::DroneGamepad*  value) ;

constexpr void __cordl_internal_set__droneGeneralKeyboard(::Liv::Lck::GorillaTag::DroneGeneralKeyboard*  value) ;

constexpr void __cordl_internal_set__droneKeyboard(::Liv::Lck::GorillaTag::DroneKeyboard*  value) ;

constexpr void __cordl_internal_set__droneMouse(::Liv::Lck::GorillaTag::DroneMouse*  value) ;

constexpr void __cordl_internal_set__droneMovement(::Liv::Lck::GorillaTag::DroneMovement*  value) ;

constexpr void __cordl_internal_set__droneTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__gimbalTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__lckCamera(::UnityW<::Liv::Lck::LckCamera>  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__model(::Liv::Lck::GorillaTag::DroneDataModel*  value) ;

constexpr void __cordl_internal_set__skin(::UnityW<::UnityEngine::GUISkin>  value) ;

/// @brief Method .ctor, addr 0x9d1d204, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneController(DroneController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneController(DroneController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29592};

/// [Header("UI Style")]
/// [SerializeField]
/// @brief Field _skin, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GUISkin>  ____skin;

/// [Header("Drone Parts")]
/// [SerializeField]
/// @brief Field _droneTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____droneTransform;

/// [SerializeField]
/// @brief Field _gimbalTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____gimbalTransform;

/// [Header("Cameras")]
/// [SerializeField]
/// @brief Field _lckCamera, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckCamera>  ____lckCamera;

/// @brief Field _model, offset: 0x40, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel*  ____model;

/// @brief Field _droneGeneralKeyboard, offset: 0x48, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneGeneralKeyboard*  ____droneGeneralKeyboard;

/// @brief Field _droneKeyboard, offset: 0x50, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneKeyboard*  ____droneKeyboard;

/// @brief Field _droneMouse, offset: 0x58, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneMouse*  ____droneMouse;

/// @brief Field _droneGamepad, offset: 0x60, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneGamepad*  ____droneGamepad;

/// @brief Field _droneMovement, offset: 0x68, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneMovement*  ____droneMovement;

/// @brief Field _droneCamera, offset: 0x70, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneCamera*  ____droneCamera;

/// @brief Field _droneGUI, offset: 0x78, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneGUI*  ____droneGUI;

/// [InjectLck]
/// @brief Field _lckService, offset: 0x80, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::DroneController, ____skin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneController, ____droneTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneController, ____gimbalTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneController, ____lckCamera) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneController, ____model) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneController, ____droneGeneralKeyboard) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneController, ____droneKeyboard) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneController, ____droneMouse) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneController, ____droneGamepad) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneController, ____droneMovement) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneController, ____droneCamera) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneController, ____droneGUI) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneController, ____lckService) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::DroneController) == 0x88, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
