#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneMovement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DroneMovement)
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class DroneMovement;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::DroneMovement*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::DroneMovement*, "Liv.Lck.GorillaTag", "DroneMovement");
// Dependencies System.Object, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.DroneMovement
class CORDL_TYPE DroneMovement : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_PositionSpeed)) float_t  PositionSpeed;

 __declspec(property(get=get_RotationSpeed)) float_t  RotationSpeed;

 __declspec(property(get=get_SmoothPositionSpeed)) float_t  SmoothPositionSpeed;

 __declspec(property(get=get_SmoothRotationSpeed)) float_t  SmoothRotationSpeed;

/// @brief Field _droneTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__droneTransform, put=__cordl_internal_set__droneTransform)) ::UnityW<::UnityEngine::Transform>  _droneTransform;

/// @brief Field _gimbalTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__gimbalTransform, put=__cordl_internal_set__gimbalTransform)) ::UnityW<::UnityEngine::Transform>  _gimbalTransform;

/// @brief Field _isMouseInverted, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMouseInverted, put=__cordl_internal_set__isMouseInverted)) bool  _isMouseInverted;

/// @brief Field _localTargetPosition, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get__localTargetPosition, put=__cordl_internal_set__localTargetPosition)) ::UnityEngine::Vector3  _localTargetPosition;

/// @brief Field _localTargetRotation, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get__localTargetRotation, put=__cordl_internal_set__localTargetRotation)) ::UnityEngine::Quaternion  _localTargetRotation;

/// @brief Field _moveSmoothness, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveSmoothness, put=__cordl_internal_set__moveSmoothness)) float_t  _moveSmoothness;

/// @brief Field _moveSpeed, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveSpeed, put=__cordl_internal_set__moveSpeed)) float_t  _moveSpeed;

/// @brief Field _rollAngle, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__rollAngle, put=__cordl_internal_set__rollAngle)) float_t  _rollAngle;

/// @brief Field _rollTargetRotation, offset 0x6c, size 0x10 
 __declspec(property(get=__cordl_internal_get__rollTargetRotation, put=__cordl_internal_set__rollTargetRotation)) ::UnityEngine::Quaternion  _rollTargetRotation;

/// @brief Field _rotationSmoothness, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationSmoothness, put=__cordl_internal_set__rotationSmoothness)) float_t  _rotationSmoothness;

/// @brief Field _rotationSpeed, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationSpeed, put=__cordl_internal_set__rotationSpeed)) float_t  _rotationSpeed;

/// @brief Field _smoothMovement, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__smoothMovement, put=__cordl_internal_set__smoothMovement)) bool  _smoothMovement;

/// @brief Field _smoothRotation, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get__smoothRotation, put=__cordl_internal_set__smoothRotation)) bool  _smoothRotation;

/// @brief Field _snapAxis, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__snapAxis, put=__cordl_internal_set__snapAxis)) bool  _snapAxis;

/// @brief Field _tiltAngle, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__tiltAngle, put=__cordl_internal_set__tiltAngle)) float_t  _tiltAngle;

/// @brief Field _tiltDownAngle, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__tiltDownAngle, put=__cordl_internal_set__tiltDownAngle)) float_t  _tiltDownAngle;

/// @brief Field _tiltTargetRotation, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get__tiltTargetRotation, put=__cordl_internal_set__tiltTargetRotation)) ::UnityEngine::Quaternion  _tiltTargetRotation;

/// @brief Field _tiltUpAngle, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__tiltUpAngle, put=__cordl_internal_set__tiltUpAngle)) float_t  _tiltUpAngle;

/// @brief Field _useTiltAsDirection, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get__useTiltAsDirection, put=__cordl_internal_set__useTiltAsDirection)) bool  _useTiltAsDirection;

/// @brief Method MoveAndRotateDroneInstantly, addr 0x9d1cc54, size 0x90, virtual false, abstract: false, final false
inline void MoveAndRotateDroneInstantly(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method MoveBackward, addr 0x9d1fd40, size 0x7c, virtual false, abstract: false, final false
inline void MoveBackward() ;

/// @brief Method MoveDown, addr 0x9d1ff30, size 0x7c, virtual false, abstract: false, final false
inline void MoveDown() ;

/// @brief Method MoveForward, addr 0x9d1fcc4, size 0x7c, virtual false, abstract: false, final false
inline void MoveForward() ;

/// @brief Method MoveForwardBackwardLeftRight, addr 0x9d20430, size 0x30, virtual false, abstract: false, final false
inline void MoveForwardBackwardLeftRight(::UnityEngine::Vector2  v) ;

/// @brief Method MoveLeft, addr 0x9d1fdbc, size 0x7c, virtual false, abstract: false, final false
inline void MoveLeft() ;

/// @brief Method MoveRight, addr 0x9d1fe38, size 0x7c, virtual false, abstract: false, final false
inline void MoveRight() ;

/// @brief Method MoveUp, addr 0x9d1feb4, size 0x7c, virtual false, abstract: false, final false
inline void MoveUp() ;

/// @brief Method MoveUpAndDown, addr 0x9d20460, size 0x60, virtual false, abstract: false, final false
inline void MoveUpAndDown(float_t  f) ;

static inline ::Liv::Lck::GorillaTag::DroneMovement* New_ctor(::UnityEngine::Transform*  droneTransform, ::UnityEngine::Transform*  gimbalTransform) ;

/// @brief Method ProcessMovement, addr 0x9d20324, size 0xf0, virtual false, abstract: false, final false
inline void ProcessMovement(::UnityEngine::Vector2  stick, float_t  trigger) ;

/// @brief Method ProcessRoll, addr 0x9d202b4, size 0x70, virtual false, abstract: false, final false
inline void ProcessRoll() ;

/// @brief Method ProcessTilt, addr 0x9d201f4, size 0x88, virtual false, abstract: false, final false
inline void ProcessTilt() ;

/// @brief Method ResetTillAndRoll, addr 0x9d20414, size 0x1c, virtual false, abstract: false, final false
inline void ResetTillAndRoll() ;

/// @brief Method Roll, addr 0x9d20654, size 0x54, virtual false, abstract: false, final false
inline void Roll(::UnityEngine::Vector2  v) ;

/// @brief Method RotateLeft, addr 0x9d1ffac, size 0x108, virtual false, abstract: false, final false
inline void RotateLeft() ;

/// @brief Method RotateRight, addr 0x9d200b4, size 0x108, virtual false, abstract: false, final false
inline void RotateRight() ;

/// @brief Method Run, addr 0x9d1c7ec, size 0x444, virtual false, abstract: false, final false
inline void Run() ;

/// @brief Method SetIsMouseInverted, addr 0x9d206e8, size 0x8, virtual false, abstract: false, final false
inline void SetIsMouseInverted(bool  inverted) ;

/// @brief Method SetIsSmoothMovement, addr 0x9d206d0, size 0x8, virtual false, abstract: false, final false
inline void SetIsSmoothMovement(bool  smooth) ;

/// @brief Method SetIsSmoothRotation, addr 0x9d206d8, size 0x8, virtual false, abstract: false, final false
inline void SetIsSmoothRotation(bool  smooth) ;

/// @brief Method SetMoveSmoothness, addr 0x9d206b0, size 0x8, virtual false, abstract: false, final false
inline void SetMoveSmoothness(float_t  smoothness) ;

/// @brief Method SetMoveSpeedChanged, addr 0x9d206a8, size 0x8, virtual false, abstract: false, final false
inline void SetMoveSpeedChanged(float_t  speed) ;

/// @brief Method SetRotationSmoothness, addr 0x9d206c0, size 0x8, virtual false, abstract: false, final false
inline void SetRotationSmoothness(float_t  smoothness) ;

/// @brief Method SetRotationSpeed, addr 0x9d206b8, size 0x8, virtual false, abstract: false, final false
inline void SetRotationSpeed(float_t  speed) ;

/// @brief Method SetSnapAxis, addr 0x9d206c8, size 0x8, virtual false, abstract: false, final false
inline void SetSnapAxis(bool  snap) ;

/// @brief Method SetUseTiltAsDirection, addr 0x9d206e0, size 0x8, virtual false, abstract: false, final false
inline void SetUseTiltAsDirection(bool  use) ;

/// @brief Method TiltAndRotate, addr 0x9d204c8, size 0x160, virtual false, abstract: false, final false
inline void TiltAndRotate(::UnityEngine::Vector2  v) ;

/// @brief Method TiltAndRotateGamePad, addr 0x9d204c0, size 0x8, virtual false, abstract: false, final false
inline void TiltAndRotateGamePad(::UnityEngine::Vector2  v) ;

/// @brief Method TiltAndRotateMouse, addr 0x9d20628, size 0x2c, virtual false, abstract: false, final false
inline void TiltAndRotateMouse(::UnityEngine::Vector2  v) ;

/// @brief Method TiltDown, addr 0x9d2027c, size 0x38, virtual false, abstract: false, final false
inline void TiltDown() ;

/// @brief Method TiltUp, addr 0x9d201bc, size 0x38, virtual false, abstract: false, final false
inline void TiltUp() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__droneTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__droneTransform() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__gimbalTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__gimbalTransform() ;

constexpr bool const& __cordl_internal_get__isMouseInverted() const;

constexpr bool& __cordl_internal_get__isMouseInverted() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localTargetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localTargetPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__localTargetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__localTargetRotation() ;

constexpr float_t const& __cordl_internal_get__moveSmoothness() const;

constexpr float_t& __cordl_internal_get__moveSmoothness() ;

constexpr float_t const& __cordl_internal_get__moveSpeed() const;

constexpr float_t& __cordl_internal_get__moveSpeed() ;

constexpr float_t const& __cordl_internal_get__rollAngle() const;

constexpr float_t& __cordl_internal_get__rollAngle() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__rollTargetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__rollTargetRotation() ;

constexpr float_t const& __cordl_internal_get__rotationSmoothness() const;

constexpr float_t& __cordl_internal_get__rotationSmoothness() ;

constexpr float_t const& __cordl_internal_get__rotationSpeed() const;

constexpr float_t& __cordl_internal_get__rotationSpeed() ;

constexpr bool const& __cordl_internal_get__smoothMovement() const;

constexpr bool& __cordl_internal_get__smoothMovement() ;

constexpr bool const& __cordl_internal_get__smoothRotation() const;

constexpr bool& __cordl_internal_get__smoothRotation() ;

constexpr bool const& __cordl_internal_get__snapAxis() const;

constexpr bool& __cordl_internal_get__snapAxis() ;

constexpr float_t const& __cordl_internal_get__tiltAngle() const;

constexpr float_t& __cordl_internal_get__tiltAngle() ;

constexpr float_t const& __cordl_internal_get__tiltDownAngle() const;

constexpr float_t& __cordl_internal_get__tiltDownAngle() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__tiltTargetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__tiltTargetRotation() ;

constexpr float_t const& __cordl_internal_get__tiltUpAngle() const;

constexpr float_t& __cordl_internal_get__tiltUpAngle() ;

constexpr bool const& __cordl_internal_get__useTiltAsDirection() const;

constexpr bool& __cordl_internal_get__useTiltAsDirection() ;

constexpr void __cordl_internal_set__droneTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__gimbalTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__isMouseInverted(bool  value) ;

constexpr void __cordl_internal_set__localTargetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__localTargetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__moveSmoothness(float_t  value) ;

constexpr void __cordl_internal_set__moveSpeed(float_t  value) ;

constexpr void __cordl_internal_set__rollAngle(float_t  value) ;

constexpr void __cordl_internal_set__rollTargetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__rotationSmoothness(float_t  value) ;

constexpr void __cordl_internal_set__rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set__smoothMovement(bool  value) ;

constexpr void __cordl_internal_set__smoothRotation(bool  value) ;

constexpr void __cordl_internal_set__snapAxis(bool  value) ;

constexpr void __cordl_internal_set__tiltAngle(float_t  value) ;

constexpr void __cordl_internal_set__tiltDownAngle(float_t  value) ;

constexpr void __cordl_internal_set__tiltTargetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__tiltUpAngle(float_t  value) ;

constexpr void __cordl_internal_set__useTiltAsDirection(bool  value) ;

/// @brief Method .ctor, addr 0x9d164a8, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Transform*  droneTransform, ::UnityEngine::Transform*  gimbalTransform) ;

/// @brief Method get_PositionSpeed, addr 0x9d1fc3c, size 0x24, virtual false, abstract: false, final false
inline float_t get_PositionSpeed() ;

/// @brief Method get_RotationSpeed, addr 0x9d1fc60, size 0x24, virtual false, abstract: false, final false
inline float_t get_RotationSpeed() ;

/// @brief Method get_SmoothPositionSpeed, addr 0x9d1fc84, size 0x20, virtual false, abstract: false, final false
inline float_t get_SmoothPositionSpeed() ;

/// @brief Method get_SmoothRotationSpeed, addr 0x9d1fca4, size 0x20, virtual false, abstract: false, final false
inline float_t get_SmoothRotationSpeed() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DroneMovement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DroneMovement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DroneMovement(DroneMovement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DroneMovement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DroneMovement(DroneMovement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29613};

/// @brief Field _moveSpeed, offset: 0x10, size: 0x4, def value: None
 float_t  ____moveSpeed;

/// @brief Field _rotationSpeed, offset: 0x14, size: 0x4, def value: None
 float_t  ____rotationSpeed;

/// @brief Field _tiltUpAngle, offset: 0x18, size: 0x4, def value: None
 float_t  ____tiltUpAngle;

/// @brief Field _tiltDownAngle, offset: 0x1c, size: 0x4, def value: None
 float_t  ____tiltDownAngle;

/// @brief Field _smoothMovement, offset: 0x20, size: 0x1, def value: None
 bool  ____smoothMovement;

/// @brief Field _smoothRotation, offset: 0x21, size: 0x1, def value: None
 bool  ____smoothRotation;

/// @brief Field _moveSmoothness, offset: 0x24, size: 0x4, def value: None
 float_t  ____moveSmoothness;

/// @brief Field _rotationSmoothness, offset: 0x28, size: 0x4, def value: None
 float_t  ____rotationSmoothness;

/// @brief Field _snapAxis, offset: 0x2c, size: 0x1, def value: None
 bool  ____snapAxis;

/// @brief Field _useTiltAsDirection, offset: 0x2d, size: 0x1, def value: None
 bool  ____useTiltAsDirection;

/// @brief Field _isMouseInverted, offset: 0x2e, size: 0x1, def value: None
 bool  ____isMouseInverted;

/// @brief Field _gimbalTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____gimbalTransform;

/// @brief Field _droneTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____droneTransform;

/// @brief Field _localTargetPosition, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localTargetPosition;

/// @brief Field _localTargetRotation, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____localTargetRotation;

/// @brief Field _tiltTargetRotation, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____tiltTargetRotation;

/// @brief Field _rollTargetRotation, offset: 0x6c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____rollTargetRotation;

/// @brief Field _tiltAngle, offset: 0x7c, size: 0x4, def value: None
 float_t  ____tiltAngle;

/// @brief Field _rollAngle, offset: 0x80, size: 0x4, def value: None
 float_t  ____rollAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____moveSpeed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____rotationSpeed) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____tiltUpAngle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____tiltDownAngle) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____smoothMovement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____smoothRotation) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____moveSmoothness) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____rotationSmoothness) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____snapAxis) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____useTiltAsDirection) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____isMouseInverted) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____gimbalTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____droneTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____localTargetPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____localTargetRotation) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____tiltTargetRotation) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____rollTargetRotation) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____tiltAngle) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::DroneMovement, ____rollAngle) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::DroneMovement) == 0x88, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
