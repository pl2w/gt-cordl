#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneDataModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DroneDataModel)
namespace Liv::Lck::GorillaTag {
class DroneDataModel_OnDroneModelBoolEvent;
}
namespace Liv::Lck::GorillaTag {
class DroneDataModel_OnDroneModelEvent;
}
namespace Liv::Lck::GorillaTag {
class DroneDataModel_OnDroneModelFloatEvent;
}
namespace Liv::Lck::GorillaTag {
class DroneDataModel_OnRecordingStateDataEvent;
}
namespace Liv::Lck::GorillaTag {
class DroneRecordingStateData;
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
namespace Liv::Lck::GorillaTag {
class DroneDataModel;
}
namespace Liv::Lck::GorillaTag {
class DroneDataModel_OnDroneModelBoolEvent;
}
namespace Liv::Lck::GorillaTag {
class DroneDataModel_OnDroneModelEvent;
}
namespace Liv::Lck::GorillaTag {
class DroneDataModel_OnDroneModelFloatEvent;
}
namespace Liv::Lck::GorillaTag {
class DroneDataModel_OnRecordingStateDataEvent;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::DroneDataModel*);
MARK_REF_T(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*);
MARK_REF_T(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelEvent*);
MARK_REF_T(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*);
MARK_REF_T(::Liv::Lck::GorillaTag::DroneDataModel_OnRecordingStateDataEvent*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneDataModel*, "Liv.Lck.GorillaTag", "DroneDataModel");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*, "Liv.Lck.GorillaTag", "DroneDataModel/OnDroneModelBoolEvent");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelEvent*, "Liv.Lck.GorillaTag", "DroneDataModel/OnDroneModelEvent");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*, "Liv.Lck.GorillaTag", "DroneDataModel/OnDroneModelFloatEvent");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneDataModel_OnRecordingStateDataEvent*, "Liv.Lck.GorillaTag", "DroneDataModel/OnRecordingStateDataEvent");
// Dependencies System.Object
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneDataModel
class CORDL_TYPE DroneDataModel : public ::System::Object {
public:
// Declarations
using OnDroneModelBoolEvent = ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent;

using OnDroneModelEvent = ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelEvent;

using OnDroneModelFloatEvent = ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent;

using OnRecordingStateDataEvent = ::Liv::Lck::GorillaTag::DroneDataModel_OnRecordingStateDataEvent;

 __declspec(property(get=get_DroneRecordingStateData, put=set_DroneRecordingStateData)) ::Liv::Lck::GorillaTag::DroneRecordingStateData*  DroneRecordingStateData;

 __declspec(property(get=get_Fov, put=set_Fov)) float_t  Fov;

 __declspec(property(get=get_FovSmoothness, put=set_FovSmoothness)) float_t  FovSmoothness;

 __declspec(property(get=get_FovSmoothnessStep, put=set_FovSmoothnessStep)) float_t  FovSmoothnessStep;

 __declspec(property(get=get_FovStep, put=set_FovStep)) float_t  FovStep;

 __declspec(property(get=get_IsDroneModeActive, put=set_IsDroneModeActive)) bool  IsDroneModeActive;

 __declspec(property(get=get_IsMouseInverted, put=set_IsMouseInverted)) bool  IsMouseInverted;

 __declspec(property(get=get_MaxFov)) float_t  MaxFov;

 __declspec(property(get=get_MaxFovSmoothness)) float_t  MaxFovSmoothness;

 __declspec(property(get=get_MaxMoveSmoothness)) float_t  MaxMoveSmoothness;

 __declspec(property(get=get_MaxMoveSpeed)) float_t  MaxMoveSpeed;

 __declspec(property(get=get_MaxRotationSmoothness)) float_t  MaxRotationSmoothness;

 __declspec(property(get=get_MaxRotationSpeed)) float_t  MaxRotationSpeed;

 __declspec(property(get=get_MinFov)) float_t  MinFov;

 __declspec(property(get=get_MoveSmoothness, put=set_MoveSmoothness)) float_t  MoveSmoothness;

 __declspec(property(get=get_MoveSmoothnessStep, put=set_MoveSmoothnessStep)) float_t  MoveSmoothnessStep;

 __declspec(property(get=get_MoveSpeed, put=set_MoveSpeed)) float_t  MoveSpeed;

 __declspec(property(get=get_MoveSpeedStep, put=set_MoveSpeedStep)) float_t  MoveSpeedStep;

/// @brief Field OnFovChanged, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFovChanged, put=__cordl_internal_set_OnFovChanged)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  OnFovChanged;

/// @brief Field OnFovSmoothnessChanged, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFovSmoothnessChanged, put=__cordl_internal_set_OnFovSmoothnessChanged)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  OnFovSmoothnessChanged;

/// @brief Field OnIsDroneModeActive, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnIsDroneModeActive, put=__cordl_internal_set_OnIsDroneModeActive)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  OnIsDroneModeActive;

/// @brief Field OnIsMouseInverted, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnIsMouseInverted, put=__cordl_internal_set_OnIsMouseInverted)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  OnIsMouseInverted;

/// @brief Field OnIsMoveSmooth, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnIsMoveSmooth, put=__cordl_internal_set_OnIsMoveSmooth)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  OnIsMoveSmooth;

/// @brief Field OnIsRotationSmooth, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnIsRotationSmooth, put=__cordl_internal_set_OnIsRotationSmooth)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  OnIsRotationSmooth;

/// @brief Field OnMoveSmoothnessChanged, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMoveSmoothnessChanged, put=__cordl_internal_set_OnMoveSmoothnessChanged)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  OnMoveSmoothnessChanged;

/// @brief Field OnMoveSpeedChanged, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMoveSpeedChanged, put=__cordl_internal_set_OnMoveSpeedChanged)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  OnMoveSpeedChanged;

/// @brief Field OnRecordButtonPressed, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRecordButtonPressed, put=__cordl_internal_set_OnRecordButtonPressed)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelEvent*  OnRecordButtonPressed;

/// @brief Field OnRecordingStateChanged, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRecordingStateChanged, put=__cordl_internal_set_OnRecordingStateChanged)) ::Liv::Lck::GorillaTag::DroneDataModel_OnRecordingStateDataEvent*  OnRecordingStateChanged;

/// @brief Field OnRotationSmoothnessChanged, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRotationSmoothnessChanged, put=__cordl_internal_set_OnRotationSmoothnessChanged)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  OnRotationSmoothnessChanged;

/// @brief Field OnRotationSpeedChanged, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRotationSpeedChanged, put=__cordl_internal_set_OnRotationSpeedChanged)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  OnRotationSpeedChanged;

/// @brief Field OnShowGUI, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnShowGUI, put=__cordl_internal_set_OnShowGUI)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  OnShowGUI;

/// @brief Field OnSnapAxis, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSnapAxis, put=__cordl_internal_set_OnSnapAxis)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  OnSnapAxis;

/// @brief Field OnUseGamepad, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUseGamepad, put=__cordl_internal_set_OnUseGamepad)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  OnUseGamepad;

/// @brief Field OnUseKeyboard, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUseKeyboard, put=__cordl_internal_set_OnUseKeyboard)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  OnUseKeyboard;

/// @brief Field OnUseMouse, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUseMouse, put=__cordl_internal_set_OnUseMouse)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  OnUseMouse;

/// @brief Field OnUseTiltAsDirection, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUseTiltAsDirection, put=__cordl_internal_set_OnUseTiltAsDirection)) ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  OnUseTiltAsDirection;

 __declspec(property(get=get_RotationSmoothness, put=set_RotationSmoothness)) float_t  RotationSmoothness;

 __declspec(property(get=get_RotationSmoothnessStep, put=set_RotationSmoothnessStep)) float_t  RotationSmoothnessStep;

 __declspec(property(get=get_RotationSpeed, put=set_RotationSpeed)) float_t  RotationSpeed;

 __declspec(property(get=get_RotationSpeedStep, put=set_RotationSpeedStep)) float_t  RotationSpeedStep;

 __declspec(property(get=get_ShowGUI, put=set_ShowGUI)) bool  ShowGUI;

 __declspec(property(get=get_SnapAxis, put=set_SnapAxis)) bool  SnapAxis;

 __declspec(property(get=get_UseGamepad, put=set_UseGamepad)) bool  UseGamepad;

 __declspec(property(get=get_UseKeyboard, put=set_UseKeyboard)) bool  UseKeyboard;

 __declspec(property(get=get_UseMouse, put=set_UseMouse)) bool  UseMouse;

 __declspec(property(get=get_UseTiltAsDirection, put=set_UseTiltAsDirection)) bool  UseTiltAsDirection;

/// @brief Field <DroneRecordingStateData>k__BackingField, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__DroneRecordingStateData_k__BackingField, put=__cordl_internal_set__DroneRecordingStateData_k__BackingField)) ::Liv::Lck::GorillaTag::DroneRecordingStateData*  _DroneRecordingStateData_k__BackingField;

/// @brief Field <FovSmoothnessStep>k__BackingField, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get__FovSmoothnessStep_k__BackingField, put=__cordl_internal_set__FovSmoothnessStep_k__BackingField)) float_t  _FovSmoothnessStep_k__BackingField;

/// @brief Field <FovStep>k__BackingField, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get__FovStep_k__BackingField, put=__cordl_internal_set__FovStep_k__BackingField)) float_t  _FovStep_k__BackingField;

/// @brief Field <MaxFovSmoothness>k__BackingField, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxFovSmoothness_k__BackingField, put=__cordl_internal_set__MaxFovSmoothness_k__BackingField)) float_t  _MaxFovSmoothness_k__BackingField;

/// @brief Field <MaxFov>k__BackingField, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxFov_k__BackingField, put=__cordl_internal_set__MaxFov_k__BackingField)) float_t  _MaxFov_k__BackingField;

/// @brief Field <MaxMoveSmoothness>k__BackingField, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxMoveSmoothness_k__BackingField, put=__cordl_internal_set__MaxMoveSmoothness_k__BackingField)) float_t  _MaxMoveSmoothness_k__BackingField;

/// @brief Field <MaxMoveSpeed>k__BackingField, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxMoveSpeed_k__BackingField, put=__cordl_internal_set__MaxMoveSpeed_k__BackingField)) float_t  _MaxMoveSpeed_k__BackingField;

/// @brief Field <MaxRotationSmoothness>k__BackingField, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxRotationSmoothness_k__BackingField, put=__cordl_internal_set__MaxRotationSmoothness_k__BackingField)) float_t  _MaxRotationSmoothness_k__BackingField;

/// @brief Field <MaxRotationSpeed>k__BackingField, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxRotationSpeed_k__BackingField, put=__cordl_internal_set__MaxRotationSpeed_k__BackingField)) float_t  _MaxRotationSpeed_k__BackingField;

/// @brief Field <MinFov>k__BackingField, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinFov_k__BackingField, put=__cordl_internal_set__MinFov_k__BackingField)) float_t  _MinFov_k__BackingField;

/// @brief Field <MoveSmoothnessStep>k__BackingField, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__MoveSmoothnessStep_k__BackingField, put=__cordl_internal_set__MoveSmoothnessStep_k__BackingField)) float_t  _MoveSmoothnessStep_k__BackingField;

/// @brief Field <MoveSpeedStep>k__BackingField, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__MoveSpeedStep_k__BackingField, put=__cordl_internal_set__MoveSpeedStep_k__BackingField)) float_t  _MoveSpeedStep_k__BackingField;

/// @brief Field <RotationSmoothnessStep>k__BackingField, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get__RotationSmoothnessStep_k__BackingField, put=__cordl_internal_set__RotationSmoothnessStep_k__BackingField)) float_t  _RotationSmoothnessStep_k__BackingField;

/// @brief Field <RotationSpeedStep>k__BackingField, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__RotationSpeedStep_k__BackingField, put=__cordl_internal_set__RotationSpeedStep_k__BackingField)) float_t  _RotationSpeedStep_k__BackingField;

/// @brief Field _fov, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get__fov, put=__cordl_internal_set__fov)) float_t  _fov;

/// @brief Field _fovSmoothness, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__fovSmoothness, put=__cordl_internal_set__fovSmoothness)) float_t  _fovSmoothness;

/// @brief Field _isDroneModeActive, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDroneModeActive, put=__cordl_internal_set__isDroneModeActive)) bool  _isDroneModeActive;

/// @brief Field _isMouseInverted, offset 0x126, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMouseInverted, put=__cordl_internal_set__isMouseInverted)) bool  _isMouseInverted;

/// @brief Field _maxFovSmoothnessStep, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxFovSmoothnessStep, put=__cordl_internal_set__maxFovSmoothnessStep)) float_t  _maxFovSmoothnessStep;

/// @brief Field _maxFovStep, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxFovStep, put=__cordl_internal_set__maxFovStep)) float_t  _maxFovStep;

/// @brief Field _maxMoveSmoothnessStep, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxMoveSmoothnessStep, put=__cordl_internal_set__maxMoveSmoothnessStep)) float_t  _maxMoveSmoothnessStep;

/// @brief Field _maxMoveSpeedStep, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxMoveSpeedStep, put=__cordl_internal_set__maxMoveSpeedStep)) float_t  _maxMoveSpeedStep;

/// @brief Field _maxRotationSmoothnessStep, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxRotationSmoothnessStep, put=__cordl_internal_set__maxRotationSmoothnessStep)) float_t  _maxRotationSmoothnessStep;

/// @brief Field _maxRotationSpeedStep, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxRotationSpeedStep, put=__cordl_internal_set__maxRotationSpeedStep)) float_t  _maxRotationSpeedStep;

/// @brief Field _minFovSmoothnessStep, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get__minFovSmoothnessStep, put=__cordl_internal_set__minFovSmoothnessStep)) float_t  _minFovSmoothnessStep;

/// @brief Field _minFovStep, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get__minFovStep, put=__cordl_internal_set__minFovStep)) float_t  _minFovStep;

/// @brief Field _minMoveSmoothnessStep, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get__minMoveSmoothnessStep, put=__cordl_internal_set__minMoveSmoothnessStep)) float_t  _minMoveSmoothnessStep;

/// @brief Field _minMoveSpeedStep, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__minMoveSpeedStep, put=__cordl_internal_set__minMoveSpeedStep)) float_t  _minMoveSpeedStep;

/// @brief Field _minRotationSmoothnessStep, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get__minRotationSmoothnessStep, put=__cordl_internal_set__minRotationSmoothnessStep)) float_t  _minRotationSmoothnessStep;

/// @brief Field _minRotationSpeedStep, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__minRotationSpeedStep, put=__cordl_internal_set__minRotationSpeedStep)) float_t  _minRotationSpeedStep;

/// @brief Field _moveSmoothness, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveSmoothness, put=__cordl_internal_set__moveSmoothness)) float_t  _moveSmoothness;

/// @brief Field _moveSpeed, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveSpeed, put=__cordl_internal_set__moveSpeed)) float_t  _moveSpeed;

/// @brief Field _previousMoveSpeed, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get__previousMoveSpeed, put=__cordl_internal_set__previousMoveSpeed)) float_t  _previousMoveSpeed;

/// @brief Field _rotationSmoothness, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationSmoothness, put=__cordl_internal_set__rotationSmoothness)) float_t  _rotationSmoothness;

/// @brief Field _rotationSpeed, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationSpeed, put=__cordl_internal_set__rotationSpeed)) float_t  _rotationSpeed;

/// @brief Field _showGUI, offset 0x127, size 0x1 
 __declspec(property(get=__cordl_internal_get__showGUI, put=__cordl_internal_set__showGUI)) bool  _showGUI;

/// @brief Field _snapAxis, offset 0x124, size 0x1 
 __declspec(property(get=__cordl_internal_get__snapAxis, put=__cordl_internal_set__snapAxis)) bool  _snapAxis;

/// @brief Field _useGamepad, offset 0xa3, size 0x1 
 __declspec(property(get=__cordl_internal_get__useGamepad, put=__cordl_internal_set__useGamepad)) bool  _useGamepad;

/// @brief Field _useKeyboard, offset 0xa1, size 0x1 
 __declspec(property(get=__cordl_internal_get__useKeyboard, put=__cordl_internal_set__useKeyboard)) bool  _useKeyboard;

/// @brief Field _useMouse, offset 0xa2, size 0x1 
 __declspec(property(get=__cordl_internal_get__useMouse, put=__cordl_internal_set__useMouse)) bool  _useMouse;

/// @brief Field _useTiltAsDirection, offset 0x125, size 0x1 
 __declspec(property(get=__cordl_internal_get__useTiltAsDirection, put=__cordl_internal_set__useTiltAsDirection)) bool  _useTiltAsDirection;

/// @brief Method BurstEnded, addr 0x9d1df2c, size 0x24, virtual false, abstract: false, final false
inline void BurstEnded() ;

/// @brief Method BurstStarted, addr 0x9d1df04, size 0x28, virtual false, abstract: false, final false
inline void BurstStarted() ;

/// @brief Method DecreaseFov, addr 0x9d1dfc0, size 0x70, virtual false, abstract: false, final false
inline void DecreaseFov() ;

/// @brief Method IncreaseFov, addr 0x9d1df50, size 0x70, virtual false, abstract: false, final false
inline void IncreaseFov() ;

/// @brief Method MaximizeStepping, addr 0x9d1e064, size 0x34, virtual false, abstract: false, final false
inline void MaximizeStepping() ;

/// @brief Method MinimizeStepping, addr 0x9d1e030, size 0x34, virtual false, abstract: false, final false
inline void MinimizeStepping() ;

static inline ::Liv::Lck::GorillaTag::DroneDataModel* New_ctor(bool  isDroneModeActive, bool  useKeyboard, bool  useMouse, bool  useGamepad, float_t  moveSpeed, float_t  maxMoveSpeed, float_t  minMoveSpeedStep, float_t  maxMoveSpeedStep, float_t  moveSmoothness, float_t  maxMoveSmoothness, float_t  minMoveSmoothnessStep, float_t  maxMoveSmoothnessStep, float_t  rotationSpeed, float_t  maxRotationSpeed, float_t  minRotationSpeedStep, float_t  maxRotationSpeedStep, float_t  rotationSmoothness, float_t  maxRotationSmoothness, float_t  minRotationSmoothnessStep, float_t  maxRotationSmoothnessStep, float_t  fov, float_t  minFov, float_t  maxFov, float_t  minFovStep, float_t  maxFovStep, float_t  fovSmoothness, float_t  maxFovSmoothness, float_t  minFovSmoothnessStep, float_t  maxFovSmoothnessStep, bool  snapAxis, bool  useTiltAsDirection, bool  isMouseInverted, bool  showGUI) ;

/// @brief Method RecordButtonPressed, addr 0x9d1e0c8, size 0x1c, virtual false, abstract: false, final false
inline void RecordButtonPressed() ;

/// @brief Method ToggleShowGUI, addr 0x9d1e098, size 0x30, virtual false, abstract: false, final false
inline void ToggleShowGUI() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent* const& __cordl_internal_get_OnFovChanged() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*& __cordl_internal_get_OnFovChanged() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent* const& __cordl_internal_get_OnFovSmoothnessChanged() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*& __cordl_internal_get_OnFovSmoothnessChanged() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent* const& __cordl_internal_get_OnIsDroneModeActive() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*& __cordl_internal_get_OnIsDroneModeActive() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent* const& __cordl_internal_get_OnIsMouseInverted() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*& __cordl_internal_get_OnIsMouseInverted() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent* const& __cordl_internal_get_OnIsMoveSmooth() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*& __cordl_internal_get_OnIsMoveSmooth() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent* const& __cordl_internal_get_OnIsRotationSmooth() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*& __cordl_internal_get_OnIsRotationSmooth() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent* const& __cordl_internal_get_OnMoveSmoothnessChanged() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*& __cordl_internal_get_OnMoveSmoothnessChanged() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent* const& __cordl_internal_get_OnMoveSpeedChanged() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*& __cordl_internal_get_OnMoveSpeedChanged() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelEvent* const& __cordl_internal_get_OnRecordButtonPressed() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelEvent*& __cordl_internal_get_OnRecordButtonPressed() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnRecordingStateDataEvent* const& __cordl_internal_get_OnRecordingStateChanged() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnRecordingStateDataEvent*& __cordl_internal_get_OnRecordingStateChanged() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent* const& __cordl_internal_get_OnRotationSmoothnessChanged() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*& __cordl_internal_get_OnRotationSmoothnessChanged() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent* const& __cordl_internal_get_OnRotationSpeedChanged() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*& __cordl_internal_get_OnRotationSpeedChanged() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent* const& __cordl_internal_get_OnShowGUI() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*& __cordl_internal_get_OnShowGUI() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent* const& __cordl_internal_get_OnSnapAxis() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*& __cordl_internal_get_OnSnapAxis() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent* const& __cordl_internal_get_OnUseGamepad() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*& __cordl_internal_get_OnUseGamepad() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent* const& __cordl_internal_get_OnUseKeyboard() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*& __cordl_internal_get_OnUseKeyboard() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent* const& __cordl_internal_get_OnUseMouse() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*& __cordl_internal_get_OnUseMouse() ;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent* const& __cordl_internal_get_OnUseTiltAsDirection() const;

constexpr ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*& __cordl_internal_get_OnUseTiltAsDirection() ;

constexpr ::Liv::Lck::GorillaTag::DroneRecordingStateData* const& __cordl_internal_get__DroneRecordingStateData_k__BackingField() const;

constexpr ::Liv::Lck::GorillaTag::DroneRecordingStateData*& __cordl_internal_get__DroneRecordingStateData_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__FovSmoothnessStep_k__BackingField() const;

constexpr float_t& __cordl_internal_get__FovSmoothnessStep_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__FovStep_k__BackingField() const;

constexpr float_t& __cordl_internal_get__FovStep_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxFovSmoothness_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxFovSmoothness_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxFov_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxFov_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxMoveSmoothness_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxMoveSmoothness_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxMoveSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxMoveSpeed_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxRotationSmoothness_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxRotationSmoothness_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxRotationSpeed_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxRotationSpeed_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MinFov_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MinFov_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MoveSmoothnessStep_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MoveSmoothnessStep_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MoveSpeedStep_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MoveSpeedStep_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__RotationSmoothnessStep_k__BackingField() const;

constexpr float_t& __cordl_internal_get__RotationSmoothnessStep_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__RotationSpeedStep_k__BackingField() const;

constexpr float_t& __cordl_internal_get__RotationSpeedStep_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__fov() const;

constexpr float_t& __cordl_internal_get__fov() ;

constexpr float_t const& __cordl_internal_get__fovSmoothness() const;

constexpr float_t& __cordl_internal_get__fovSmoothness() ;

constexpr bool const& __cordl_internal_get__isDroneModeActive() const;

constexpr bool& __cordl_internal_get__isDroneModeActive() ;

constexpr bool const& __cordl_internal_get__isMouseInverted() const;

constexpr bool& __cordl_internal_get__isMouseInverted() ;

constexpr float_t const& __cordl_internal_get__maxFovSmoothnessStep() const;

constexpr float_t& __cordl_internal_get__maxFovSmoothnessStep() ;

constexpr float_t const& __cordl_internal_get__maxFovStep() const;

constexpr float_t& __cordl_internal_get__maxFovStep() ;

constexpr float_t const& __cordl_internal_get__maxMoveSmoothnessStep() const;

constexpr float_t& __cordl_internal_get__maxMoveSmoothnessStep() ;

constexpr float_t const& __cordl_internal_get__maxMoveSpeedStep() const;

constexpr float_t& __cordl_internal_get__maxMoveSpeedStep() ;

constexpr float_t const& __cordl_internal_get__maxRotationSmoothnessStep() const;

constexpr float_t& __cordl_internal_get__maxRotationSmoothnessStep() ;

constexpr float_t const& __cordl_internal_get__maxRotationSpeedStep() const;

constexpr float_t& __cordl_internal_get__maxRotationSpeedStep() ;

constexpr float_t const& __cordl_internal_get__minFovSmoothnessStep() const;

constexpr float_t& __cordl_internal_get__minFovSmoothnessStep() ;

constexpr float_t const& __cordl_internal_get__minFovStep() const;

constexpr float_t& __cordl_internal_get__minFovStep() ;

constexpr float_t const& __cordl_internal_get__minMoveSmoothnessStep() const;

constexpr float_t& __cordl_internal_get__minMoveSmoothnessStep() ;

constexpr float_t const& __cordl_internal_get__minMoveSpeedStep() const;

constexpr float_t& __cordl_internal_get__minMoveSpeedStep() ;

constexpr float_t const& __cordl_internal_get__minRotationSmoothnessStep() const;

constexpr float_t& __cordl_internal_get__minRotationSmoothnessStep() ;

constexpr float_t const& __cordl_internal_get__minRotationSpeedStep() const;

constexpr float_t& __cordl_internal_get__minRotationSpeedStep() ;

constexpr float_t const& __cordl_internal_get__moveSmoothness() const;

constexpr float_t& __cordl_internal_get__moveSmoothness() ;

constexpr float_t const& __cordl_internal_get__moveSpeed() const;

constexpr float_t& __cordl_internal_get__moveSpeed() ;

constexpr float_t const& __cordl_internal_get__previousMoveSpeed() const;

constexpr float_t& __cordl_internal_get__previousMoveSpeed() ;

constexpr float_t const& __cordl_internal_get__rotationSmoothness() const;

constexpr float_t& __cordl_internal_get__rotationSmoothness() ;

constexpr float_t const& __cordl_internal_get__rotationSpeed() const;

constexpr float_t& __cordl_internal_get__rotationSpeed() ;

constexpr bool const& __cordl_internal_get__showGUI() const;

constexpr bool& __cordl_internal_get__showGUI() ;

constexpr bool const& __cordl_internal_get__snapAxis() const;

constexpr bool& __cordl_internal_get__snapAxis() ;

constexpr bool const& __cordl_internal_get__useGamepad() const;

constexpr bool& __cordl_internal_get__useGamepad() ;

constexpr bool const& __cordl_internal_get__useKeyboard() const;

constexpr bool& __cordl_internal_get__useKeyboard() ;

constexpr bool const& __cordl_internal_get__useMouse() const;

constexpr bool& __cordl_internal_get__useMouse() ;

constexpr bool const& __cordl_internal_get__useTiltAsDirection() const;

constexpr bool& __cordl_internal_get__useTiltAsDirection() ;

constexpr void __cordl_internal_set_OnFovChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

constexpr void __cordl_internal_set_OnFovSmoothnessChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

constexpr void __cordl_internal_set_OnIsDroneModeActive(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

constexpr void __cordl_internal_set_OnIsMouseInverted(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

constexpr void __cordl_internal_set_OnIsMoveSmooth(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

constexpr void __cordl_internal_set_OnIsRotationSmooth(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

constexpr void __cordl_internal_set_OnMoveSmoothnessChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

constexpr void __cordl_internal_set_OnMoveSpeedChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

constexpr void __cordl_internal_set_OnRecordButtonPressed(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelEvent*  value) ;

constexpr void __cordl_internal_set_OnRecordingStateChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnRecordingStateDataEvent*  value) ;

constexpr void __cordl_internal_set_OnRotationSmoothnessChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

constexpr void __cordl_internal_set_OnRotationSpeedChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

constexpr void __cordl_internal_set_OnShowGUI(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

constexpr void __cordl_internal_set_OnSnapAxis(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

constexpr void __cordl_internal_set_OnUseGamepad(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

constexpr void __cordl_internal_set_OnUseKeyboard(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

constexpr void __cordl_internal_set_OnUseMouse(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

constexpr void __cordl_internal_set_OnUseTiltAsDirection(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

constexpr void __cordl_internal_set__DroneRecordingStateData_k__BackingField(::Liv::Lck::GorillaTag::DroneRecordingStateData*  value) ;

constexpr void __cordl_internal_set__FovSmoothnessStep_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__FovStep_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MaxFovSmoothness_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MaxFov_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MaxMoveSmoothness_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MaxMoveSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MaxRotationSmoothness_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MaxRotationSpeed_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MinFov_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MoveSmoothnessStep_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MoveSpeedStep_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__RotationSmoothnessStep_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__RotationSpeedStep_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__fov(float_t  value) ;

constexpr void __cordl_internal_set__fovSmoothness(float_t  value) ;

constexpr void __cordl_internal_set__isDroneModeActive(bool  value) ;

constexpr void __cordl_internal_set__isMouseInverted(bool  value) ;

constexpr void __cordl_internal_set__maxFovSmoothnessStep(float_t  value) ;

constexpr void __cordl_internal_set__maxFovStep(float_t  value) ;

constexpr void __cordl_internal_set__maxMoveSmoothnessStep(float_t  value) ;

constexpr void __cordl_internal_set__maxMoveSpeedStep(float_t  value) ;

constexpr void __cordl_internal_set__maxRotationSmoothnessStep(float_t  value) ;

constexpr void __cordl_internal_set__maxRotationSpeedStep(float_t  value) ;

constexpr void __cordl_internal_set__minFovSmoothnessStep(float_t  value) ;

constexpr void __cordl_internal_set__minFovStep(float_t  value) ;

constexpr void __cordl_internal_set__minMoveSmoothnessStep(float_t  value) ;

constexpr void __cordl_internal_set__minMoveSpeedStep(float_t  value) ;

constexpr void __cordl_internal_set__minRotationSmoothnessStep(float_t  value) ;

constexpr void __cordl_internal_set__minRotationSpeedStep(float_t  value) ;

constexpr void __cordl_internal_set__moveSmoothness(float_t  value) ;

constexpr void __cordl_internal_set__moveSpeed(float_t  value) ;

constexpr void __cordl_internal_set__previousMoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set__rotationSmoothness(float_t  value) ;

constexpr void __cordl_internal_set__rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set__showGUI(bool  value) ;

constexpr void __cordl_internal_set__snapAxis(bool  value) ;

constexpr void __cordl_internal_set__useGamepad(bool  value) ;

constexpr void __cordl_internal_set__useKeyboard(bool  value) ;

constexpr void __cordl_internal_set__useMouse(bool  value) ;

constexpr void __cordl_internal_set__useTiltAsDirection(bool  value) ;

/// @brief Method .ctor, addr 0x9d16144, size 0x344, virtual false, abstract: false, final false
inline void _ctor(bool  isDroneModeActive, bool  useKeyboard, bool  useMouse, bool  useGamepad, float_t  moveSpeed, float_t  maxMoveSpeed, float_t  minMoveSpeedStep, float_t  maxMoveSpeedStep, float_t  moveSmoothness, float_t  maxMoveSmoothness, float_t  minMoveSmoothnessStep, float_t  maxMoveSmoothnessStep, float_t  rotationSpeed, float_t  maxRotationSpeed, float_t  minRotationSpeedStep, float_t  maxRotationSpeedStep, float_t  rotationSmoothness, float_t  maxRotationSmoothness, float_t  minRotationSmoothnessStep, float_t  maxRotationSmoothnessStep, float_t  fov, float_t  minFov, float_t  maxFov, float_t  minFovStep, float_t  maxFovStep, float_t  fovSmoothness, float_t  maxFovSmoothness, float_t  minFovSmoothnessStep, float_t  maxFovSmoothnessStep, bool  snapAxis, bool  useTiltAsDirection, bool  isMouseInverted, bool  showGUI) ;

/// [CompilerGenerated]
/// @brief Method add_OnFovChanged, addr 0x9d196cc, size 0x9c, virtual false, abstract: false, final false
inline void add_OnFovChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnFovSmoothnessChanged, addr 0x9d19768, size 0x9c, virtual false, abstract: false, final false
inline void add_OnFovSmoothnessChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnIsDroneModeActive, addr 0x9d19320, size 0x9c, virtual false, abstract: false, final false
inline void add_OnIsDroneModeActive(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnIsMouseInverted, addr 0x9d1993c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnIsMouseInverted(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnIsMoveSmooth, addr 0x9d1d5b4, size 0x9c, virtual false, abstract: false, final false
inline void add_OnIsMoveSmooth(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnIsRotationSmooth, addr 0x9d1d6ec, size 0x9c, virtual false, abstract: false, final false
inline void add_OnIsRotationSmooth(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMoveSmoothnessChanged, addr 0x9d194f8, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMoveSmoothnessChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMoveSpeedChanged, addr 0x9d1945c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnMoveSpeedChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRecordButtonPressed, addr 0x9d19a74, size 0x9c, virtual false, abstract: false, final false
inline void add_OnRecordButtonPressed(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRecordingStateChanged, addr 0x9d1d95c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnRecordingStateChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnRecordingStateDataEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRotationSmoothnessChanged, addr 0x9d19630, size 0x9c, virtual false, abstract: false, final false
inline void add_OnRotationSmoothnessChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRotationSpeedChanged, addr 0x9d19594, size 0x9c, virtual false, abstract: false, final false
inline void add_OnRotationSpeedChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnShowGUI, addr 0x9d1d824, size 0x9c, virtual false, abstract: false, final false
inline void add_OnShowGUI(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSnapAxis, addr 0x9d19804, size 0x9c, virtual false, abstract: false, final false
inline void add_OnSnapAxis(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnUseGamepad, addr 0x9d1d47c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnUseGamepad(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnUseKeyboard, addr 0x9d1d20c, size 0x9c, virtual false, abstract: false, final false
inline void add_OnUseKeyboard(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnUseMouse, addr 0x9d1d344, size 0x9c, virtual false, abstract: false, final false
inline void add_OnUseMouse(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnUseTiltAsDirection, addr 0x9d198a0, size 0x9c, virtual false, abstract: false, final false
inline void add_OnUseTiltAsDirection(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method get_DroneRecordingStateData, addr 0x9d1dee4, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::GorillaTag::DroneRecordingStateData* get_DroneRecordingStateData() ;

/// @brief Method get_Fov, addr 0x9d1ddac, size 0x8, virtual false, abstract: false, final false
inline float_t get_Fov() ;

/// @brief Method get_FovSmoothness, addr 0x9d1ddf4, size 0x8, virtual false, abstract: false, final false
inline float_t get_FovSmoothness() ;

/// [CompilerGenerated]
/// @brief Method get_FovSmoothnessStep, addr 0x9d1de24, size 0x8, virtual false, abstract: false, final false
inline float_t get_FovSmoothnessStep() ;

/// [CompilerGenerated]
/// @brief Method get_FovStep, addr 0x9d1dde4, size 0x8, virtual false, abstract: false, final false
inline float_t get_FovStep() ;

/// @brief Method get_IsDroneModeActive, addr 0x9d1da94, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDroneModeActive() ;

/// @brief Method get_IsMouseInverted, addr 0x9d1de8c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsMouseInverted() ;

/// [CompilerGenerated]
/// @brief Method get_MaxFov, addr 0x9d1dddc, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxFov() ;

/// [CompilerGenerated]
/// @brief Method get_MaxFovSmoothness, addr 0x9d1de1c, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxFovSmoothness() ;

/// [CompilerGenerated]
/// @brief Method get_MaxMoveSmoothness, addr 0x9d1dc60, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxMoveSmoothness() ;

/// [CompilerGenerated]
/// @brief Method get_MaxMoveSpeed, addr 0x9d1db6c, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxMoveSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_MaxRotationSmoothness, addr 0x9d1dd94, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxRotationSmoothness() ;

/// [CompilerGenerated]
/// @brief Method get_MaxRotationSpeed, addr 0x9d1dca0, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxRotationSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_MinFov, addr 0x9d1ddd4, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinFov() ;

/// @brief Method get_MoveSmoothness, addr 0x9d1db84, size 0x8, virtual false, abstract: false, final false
inline float_t get_MoveSmoothness() ;

/// [CompilerGenerated]
/// @brief Method get_MoveSmoothnessStep, addr 0x9d1dc68, size 0x8, virtual false, abstract: false, final false
inline float_t get_MoveSmoothnessStep() ;

/// @brief Method get_MoveSpeed, addr 0x9d1db44, size 0x8, virtual false, abstract: false, final false
inline float_t get_MoveSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_MoveSpeedStep, addr 0x9d1db74, size 0x8, virtual false, abstract: false, final false
inline float_t get_MoveSpeedStep() ;

/// @brief Method get_RotationSmoothness, addr 0x9d1dcb8, size 0x8, virtual false, abstract: false, final false
inline float_t get_RotationSmoothness() ;

/// [CompilerGenerated]
/// @brief Method get_RotationSmoothnessStep, addr 0x9d1dd9c, size 0x8, virtual false, abstract: false, final false
inline float_t get_RotationSmoothnessStep() ;

/// @brief Method get_RotationSpeed, addr 0x9d1dc78, size 0x8, virtual false, abstract: false, final false
inline float_t get_RotationSpeed() ;

/// [CompilerGenerated]
/// @brief Method get_RotationSpeedStep, addr 0x9d1dca8, size 0x8, virtual false, abstract: false, final false
inline float_t get_RotationSpeedStep() ;

/// @brief Method get_ShowGUI, addr 0x9d1deb8, size 0x8, virtual false, abstract: false, final false
inline bool get_ShowGUI() ;

/// @brief Method get_SnapAxis, addr 0x9d1de34, size 0x8, virtual false, abstract: false, final false
inline bool get_SnapAxis() ;

/// @brief Method get_UseGamepad, addr 0x9d1db18, size 0x8, virtual false, abstract: false, final false
inline bool get_UseGamepad() ;

/// @brief Method get_UseKeyboard, addr 0x9d1dac0, size 0x8, virtual false, abstract: false, final false
inline bool get_UseKeyboard() ;

/// @brief Method get_UseMouse, addr 0x9d1daec, size 0x8, virtual false, abstract: false, final false
inline bool get_UseMouse() ;

/// @brief Method get_UseTiltAsDirection, addr 0x9d1de60, size 0x8, virtual false, abstract: false, final false
inline bool get_UseTiltAsDirection() ;

/// [CompilerGenerated]
/// @brief Method remove_OnFovChanged, addr 0x9d1b9a0, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnFovChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnFovSmoothnessChanged, addr 0x9d1ba3c, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnFovSmoothnessChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnIsDroneModeActive, addr 0x9d1b694, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnIsDroneModeActive(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnIsMouseInverted, addr 0x9d1bc10, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnIsMouseInverted(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnIsMoveSmooth, addr 0x9d1d650, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnIsMoveSmooth(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnIsRotationSmooth, addr 0x9d1d788, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnIsRotationSmooth(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMoveSmoothnessChanged, addr 0x9d1b7cc, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMoveSmoothnessChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMoveSpeedChanged, addr 0x9d1b730, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnMoveSpeedChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRecordButtonPressed, addr 0x9d1bcac, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnRecordButtonPressed(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRecordingStateChanged, addr 0x9d1d9f8, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnRecordingStateChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnRecordingStateDataEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRotationSmoothnessChanged, addr 0x9d1b904, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnRotationSmoothnessChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRotationSpeedChanged, addr 0x9d1b868, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnRotationSpeedChanged(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnShowGUI, addr 0x9d1d8c0, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnShowGUI(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSnapAxis, addr 0x9d1bad8, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnSnapAxis(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnUseGamepad, addr 0x9d1d518, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnUseGamepad(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnUseKeyboard, addr 0x9d1d2a8, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnUseKeyboard(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnUseMouse, addr 0x9d1d3e0, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnUseMouse(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnUseTiltAsDirection, addr 0x9d1bb74, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnUseTiltAsDirection(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method set_DroneRecordingStateData, addr 0x9d1deec, size 0x10, virtual false, abstract: false, final false
inline void set_DroneRecordingStateData(::Liv::Lck::GorillaTag::DroneRecordingStateData*  value) ;

/// @brief Method set_Fov, addr 0x9d1ddb4, size 0x20, virtual false, abstract: false, final false
inline void set_Fov(float_t  value) ;

/// @brief Method set_FovSmoothness, addr 0x9d1ddfc, size 0x20, virtual false, abstract: false, final false
inline void set_FovSmoothness(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FovSmoothnessStep, addr 0x9d1de2c, size 0x8, virtual false, abstract: false, final false
inline void set_FovSmoothnessStep(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_FovStep, addr 0x9d1ddec, size 0x8, virtual false, abstract: false, final false
inline void set_FovStep(float_t  value) ;

/// @brief Method set_IsDroneModeActive, addr 0x9d1da9c, size 0x24, virtual false, abstract: false, final false
inline void set_IsDroneModeActive(bool  value) ;

/// @brief Method set_IsMouseInverted, addr 0x9d1de94, size 0x24, virtual false, abstract: false, final false
inline void set_IsMouseInverted(bool  value) ;

/// @brief Method set_MoveSmoothness, addr 0x9d1db8c, size 0xd4, virtual false, abstract: false, final false
inline void set_MoveSmoothness(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_MoveSmoothnessStep, addr 0x9d1dc70, size 0x8, virtual false, abstract: false, final false
inline void set_MoveSmoothnessStep(float_t  value) ;

/// @brief Method set_MoveSpeed, addr 0x9d1db4c, size 0x20, virtual false, abstract: false, final false
inline void set_MoveSpeed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_MoveSpeedStep, addr 0x9d1db7c, size 0x8, virtual false, abstract: false, final false
inline void set_MoveSpeedStep(float_t  value) ;

/// @brief Method set_RotationSmoothness, addr 0x9d1dcc0, size 0xd4, virtual false, abstract: false, final false
inline void set_RotationSmoothness(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RotationSmoothnessStep, addr 0x9d1dda4, size 0x8, virtual false, abstract: false, final false
inline void set_RotationSmoothnessStep(float_t  value) ;

/// @brief Method set_RotationSpeed, addr 0x9d1dc80, size 0x20, virtual false, abstract: false, final false
inline void set_RotationSpeed(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_RotationSpeedStep, addr 0x9d1dcb0, size 0x8, virtual false, abstract: false, final false
inline void set_RotationSpeedStep(float_t  value) ;

/// @brief Method set_ShowGUI, addr 0x9d1dec0, size 0x24, virtual false, abstract: false, final false
inline void set_ShowGUI(bool  value) ;

/// @brief Method set_SnapAxis, addr 0x9d1de3c, size 0x24, virtual false, abstract: false, final false
inline void set_SnapAxis(bool  value) ;

/// @brief Method set_UseGamepad, addr 0x9d1db20, size 0x24, virtual false, abstract: false, final false
inline void set_UseGamepad(bool  value) ;

/// @brief Method set_UseKeyboard, addr 0x9d1dac8, size 0x24, virtual false, abstract: false, final false
inline void set_UseKeyboard(bool  value) ;

/// @brief Method set_UseMouse, addr 0x9d1daf4, size 0x24, virtual false, abstract: false, final false
inline void set_UseMouse(bool  value) ;

/// @brief Method set_UseTiltAsDirection, addr 0x9d1de68, size 0x24, virtual false, abstract: false, final false
inline void set_UseTiltAsDirection(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneDataModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneDataModel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneDataModel(DroneDataModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneDataModel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneDataModel(DroneDataModel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29597};

/// [CompilerGenerated]
/// @brief Field OnIsDroneModeActive, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  ___OnIsDroneModeActive;

/// [CompilerGenerated]
/// @brief Field OnUseKeyboard, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  ___OnUseKeyboard;

/// [CompilerGenerated]
/// @brief Field OnUseMouse, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  ___OnUseMouse;

/// [CompilerGenerated]
/// @brief Field OnUseGamepad, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  ___OnUseGamepad;

/// [CompilerGenerated]
/// @brief Field OnMoveSpeedChanged, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  ___OnMoveSpeedChanged;

/// [CompilerGenerated]
/// @brief Field OnMoveSmoothnessChanged, offset: 0x38, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  ___OnMoveSmoothnessChanged;

/// [CompilerGenerated]
/// @brief Field OnIsMoveSmooth, offset: 0x40, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  ___OnIsMoveSmooth;

/// [CompilerGenerated]
/// @brief Field OnRotationSpeedChanged, offset: 0x48, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  ___OnRotationSpeedChanged;

/// [CompilerGenerated]
/// @brief Field OnRotationSmoothnessChanged, offset: 0x50, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  ___OnRotationSmoothnessChanged;

/// [CompilerGenerated]
/// @brief Field OnIsRotationSmooth, offset: 0x58, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  ___OnIsRotationSmooth;

/// [CompilerGenerated]
/// @brief Field OnFovChanged, offset: 0x60, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  ___OnFovChanged;

/// [CompilerGenerated]
/// @brief Field OnFovSmoothnessChanged, offset: 0x68, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent*  ___OnFovSmoothnessChanged;

/// [CompilerGenerated]
/// @brief Field OnSnapAxis, offset: 0x70, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  ___OnSnapAxis;

/// [CompilerGenerated]
/// @brief Field OnUseTiltAsDirection, offset: 0x78, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  ___OnUseTiltAsDirection;

/// [CompilerGenerated]
/// @brief Field OnIsMouseInverted, offset: 0x80, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  ___OnIsMouseInverted;

/// [CompilerGenerated]
/// @brief Field OnShowGUI, offset: 0x88, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent*  ___OnShowGUI;

/// [CompilerGenerated]
/// @brief Field OnRecordButtonPressed, offset: 0x90, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelEvent*  ___OnRecordButtonPressed;

/// [CompilerGenerated]
/// @brief Field OnRecordingStateChanged, offset: 0x98, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneDataModel_OnRecordingStateDataEvent*  ___OnRecordingStateChanged;

/// @brief Field _isDroneModeActive, offset: 0xa0, size: 0x1, def value: None
 bool  ____isDroneModeActive;

/// @brief Field _useKeyboard, offset: 0xa1, size: 0x1, def value: None
 bool  ____useKeyboard;

/// @brief Field _useMouse, offset: 0xa2, size: 0x1, def value: None
 bool  ____useMouse;

/// @brief Field _useGamepad, offset: 0xa3, size: 0x1, def value: None
 bool  ____useGamepad;

/// @brief Field _moveSpeed, offset: 0xa4, size: 0x4, def value: None
 float_t  ____moveSpeed;

/// [CompilerGenerated]
/// @brief Field <MaxMoveSpeed>k__BackingField, offset: 0xa8, size: 0x4, def value: None
 float_t  ____MaxMoveSpeed_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MoveSpeedStep>k__BackingField, offset: 0xac, size: 0x4, def value: None
 float_t  ____MoveSpeedStep_k__BackingField;

/// @brief Field _minMoveSpeedStep, offset: 0xb0, size: 0x4, def value: None
 float_t  ____minMoveSpeedStep;

/// @brief Field _maxMoveSpeedStep, offset: 0xb4, size: 0x4, def value: None
 float_t  ____maxMoveSpeedStep;

/// @brief Field _previousMoveSpeed, offset: 0xb8, size: 0x4, def value: None
 float_t  ____previousMoveSpeed;

/// @brief Field _moveSmoothness, offset: 0xbc, size: 0x4, def value: None
 float_t  ____moveSmoothness;

/// [CompilerGenerated]
/// @brief Field <MaxMoveSmoothness>k__BackingField, offset: 0xc0, size: 0x4, def value: None
 float_t  ____MaxMoveSmoothness_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MoveSmoothnessStep>k__BackingField, offset: 0xc4, size: 0x4, def value: None
 float_t  ____MoveSmoothnessStep_k__BackingField;

/// @brief Field _minMoveSmoothnessStep, offset: 0xc8, size: 0x4, def value: None
 float_t  ____minMoveSmoothnessStep;

/// @brief Field _maxMoveSmoothnessStep, offset: 0xcc, size: 0x4, def value: None
 float_t  ____maxMoveSmoothnessStep;

/// @brief Field _rotationSpeed, offset: 0xd0, size: 0x4, def value: None
 float_t  ____rotationSpeed;

/// [CompilerGenerated]
/// @brief Field <MaxRotationSpeed>k__BackingField, offset: 0xd4, size: 0x4, def value: None
 float_t  ____MaxRotationSpeed_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RotationSpeedStep>k__BackingField, offset: 0xd8, size: 0x4, def value: None
 float_t  ____RotationSpeedStep_k__BackingField;

/// @brief Field _minRotationSpeedStep, offset: 0xdc, size: 0x4, def value: None
 float_t  ____minRotationSpeedStep;

/// @brief Field _maxRotationSpeedStep, offset: 0xe0, size: 0x4, def value: None
 float_t  ____maxRotationSpeedStep;

/// @brief Field _rotationSmoothness, offset: 0xe4, size: 0x4, def value: None
 float_t  ____rotationSmoothness;

/// [CompilerGenerated]
/// @brief Field <MaxRotationSmoothness>k__BackingField, offset: 0xe8, size: 0x4, def value: None
 float_t  ____MaxRotationSmoothness_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RotationSmoothnessStep>k__BackingField, offset: 0xec, size: 0x4, def value: None
 float_t  ____RotationSmoothnessStep_k__BackingField;

/// @brief Field _maxRotationSmoothnessStep, offset: 0xf0, size: 0x4, def value: None
 float_t  ____maxRotationSmoothnessStep;

/// @brief Field _minRotationSmoothnessStep, offset: 0xf4, size: 0x4, def value: None
 float_t  ____minRotationSmoothnessStep;

/// @brief Field _fov, offset: 0xf8, size: 0x4, def value: None
 float_t  ____fov;

/// [CompilerGenerated]
/// @brief Field <MinFov>k__BackingField, offset: 0xfc, size: 0x4, def value: None
 float_t  ____MinFov_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaxFov>k__BackingField, offset: 0x100, size: 0x4, def value: None
 float_t  ____MaxFov_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FovStep>k__BackingField, offset: 0x104, size: 0x4, def value: None
 float_t  ____FovStep_k__BackingField;

/// @brief Field _minFovStep, offset: 0x108, size: 0x4, def value: None
 float_t  ____minFovStep;

/// @brief Field _maxFovStep, offset: 0x10c, size: 0x4, def value: None
 float_t  ____maxFovStep;

/// @brief Field _fovSmoothness, offset: 0x110, size: 0x4, def value: None
 float_t  ____fovSmoothness;

/// [CompilerGenerated]
/// @brief Field <MaxFovSmoothness>k__BackingField, offset: 0x114, size: 0x4, def value: None
 float_t  ____MaxFovSmoothness_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FovSmoothnessStep>k__BackingField, offset: 0x118, size: 0x4, def value: None
 float_t  ____FovSmoothnessStep_k__BackingField;

/// @brief Field _minFovSmoothnessStep, offset: 0x11c, size: 0x4, def value: None
 float_t  ____minFovSmoothnessStep;

/// @brief Field _maxFovSmoothnessStep, offset: 0x120, size: 0x4, def value: None
 float_t  ____maxFovSmoothnessStep;

/// @brief Field _snapAxis, offset: 0x124, size: 0x1, def value: None
 bool  ____snapAxis;

/// @brief Field _useTiltAsDirection, offset: 0x125, size: 0x1, def value: None
 bool  ____useTiltAsDirection;

/// @brief Field _isMouseInverted, offset: 0x126, size: 0x1, def value: None
 bool  ____isMouseInverted;

/// @brief Field _showGUI, offset: 0x127, size: 0x1, def value: None
 bool  ____showGUI;

/// [CompilerGenerated]
/// @brief Field <DroneRecordingStateData>k__BackingField, offset: 0x128, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::DroneRecordingStateData*  ____DroneRecordingStateData_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnIsDroneModeActive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnUseKeyboard) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnUseMouse) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnUseGamepad) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnMoveSpeedChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnMoveSmoothnessChanged) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnIsMoveSmooth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnRotationSpeedChanged) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnRotationSmoothnessChanged) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnIsRotationSmooth) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnFovChanged) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnFovSmoothnessChanged) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnSnapAxis) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnUseTiltAsDirection) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnIsMouseInverted) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnShowGUI) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnRecordButtonPressed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ___OnRecordingStateChanged) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____isDroneModeActive) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____useKeyboard) == 0xa1, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____useMouse) == 0xa2, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____useGamepad) == 0xa3, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____moveSpeed) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____MaxMoveSpeed_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____MoveSpeedStep_k__BackingField) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____minMoveSpeedStep) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____maxMoveSpeedStep) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____previousMoveSpeed) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____moveSmoothness) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____MaxMoveSmoothness_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____MoveSmoothnessStep_k__BackingField) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____minMoveSmoothnessStep) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____maxMoveSmoothnessStep) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____rotationSpeed) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____MaxRotationSpeed_k__BackingField) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____RotationSpeedStep_k__BackingField) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____minRotationSpeedStep) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____maxRotationSpeedStep) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____rotationSmoothness) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____MaxRotationSmoothness_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____RotationSmoothnessStep_k__BackingField) == 0xec, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____maxRotationSmoothnessStep) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____minRotationSmoothnessStep) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____fov) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____MinFov_k__BackingField) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____MaxFov_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____FovStep_k__BackingField) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____minFovStep) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____maxFovStep) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____fovSmoothness) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____MaxFovSmoothness_k__BackingField) == 0x114, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____FovSmoothnessStep_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____minFovSmoothnessStep) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____maxFovSmoothnessStep) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____snapAxis) == 0x124, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____useTiltAsDirection) == 0x125, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____isMouseInverted) == 0x126, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____showGUI) == 0x127, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneDataModel, ____DroneRecordingStateData_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::DroneDataModel) == 0x130, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneDataModel/OnRecordingStateDataEvent
class CORDL_TYPE DroneDataModel_OnRecordingStateDataEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d1e334, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Liv::Lck::GorillaTag::DroneRecordingStateData*  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d1e354, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d1e320, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Liv::Lck::GorillaTag::DroneRecordingStateData*  value) ;

static inline ::Liv::Lck::GorillaTag::DroneDataModel_OnRecordingStateDataEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d1e218, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneDataModel_OnRecordingStateDataEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneDataModel_OnRecordingStateDataEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneDataModel_OnRecordingStateDataEvent(DroneDataModel_OnRecordingStateDataEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneDataModel_OnRecordingStateDataEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneDataModel_OnRecordingStateDataEvent(DroneDataModel_OnRecordingStateDataEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29596};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::DroneDataModel_OnRecordingStateDataEvent) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneDataModel/OnDroneModelFloatEvent
class CORDL_TYPE DroneDataModel_OnDroneModelFloatEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d1e1b0, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d1e20c, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d1e19c, size 0x14, virtual true, abstract: false, final false
inline void Invoke(float_t  value) ;

static inline ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d193bc, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneDataModel_OnDroneModelFloatEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneDataModel_OnDroneModelFloatEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneDataModel_OnDroneModelFloatEvent(DroneDataModel_OnDroneModelFloatEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneDataModel_OnDroneModelFloatEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneDataModel_OnDroneModelFloatEvent(DroneDataModel_OnDroneModelFloatEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29595};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelFloatEvent) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneDataModel/OnDroneModelBoolEvent
class CORDL_TYPE DroneDataModel_OnDroneModelBoolEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d1e134, size 0x5c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(bool  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d1e190, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d1e120, size 0x14, virtual true, abstract: false, final false
inline void Invoke(bool  value) ;

static inline ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d19280, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneDataModel_OnDroneModelBoolEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneDataModel_OnDroneModelBoolEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneDataModel_OnDroneModelBoolEvent(DroneDataModel_OnDroneModelBoolEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneDataModel_OnDroneModelBoolEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneDataModel_OnDroneModelBoolEvent(DroneDataModel_OnDroneModelBoolEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29594};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelBoolEvent) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneDataModel/OnDroneModelEvent
class CORDL_TYPE DroneDataModel_OnDroneModelEvent : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d1e0f8, size 0x1c, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d1e114, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d1e0e4, size 0x14, virtual true, abstract: false, final false
inline void Invoke() ;

static inline ::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelEvent* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d199d8, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneDataModel_OnDroneModelEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneDataModel_OnDroneModelEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneDataModel_OnDroneModelEvent(DroneDataModel_OnDroneModelEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneDataModel_OnDroneModelEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneDataModel_OnDroneModelEvent(DroneDataModel_OnDroneModelEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29593};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::DroneDataModel_OnDroneModelEvent) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
