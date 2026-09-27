#pragma once
// IWYU pragma private; include "Oculus/Interaction/JoystickPoseMovement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(JoystickPoseMovement)
namespace Oculus::Interaction::Input {
class IController;
}
namespace Oculus::Interaction {
class IMovement;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class JoystickPoseMovement;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::JoystickPoseMovement*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::JoystickPoseMovement*, "Oculus.Interaction", "JoystickPoseMovement");
// Dependencies System.Object, UnityEngine.Pose, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.JoystickPoseMovement
class CORDL_TYPE JoystickPoseMovement : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_Stopped)) bool  Stopped;

/// @brief Field _controller, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::Oculus::Interaction::Input::IController*  _controller;

/// @brief Field _currentPose, offset 0x10, size 0x1c 
 __declspec(property(get=__cordl_internal_get__currentPose, put=__cordl_internal_set__currentPose)) ::UnityEngine::Pose  _currentPose;

/// @brief Field _localDirection, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get__localDirection, put=__cordl_internal_set__localDirection)) ::UnityEngine::Vector3  _localDirection;

/// @brief Field _maxDistance, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistance, put=__cordl_internal_set__maxDistance)) float_t  _maxDistance;

/// @brief Field _minDistance, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__minDistance, put=__cordl_internal_set__minDistance)) float_t  _minDistance;

/// @brief Field _moveSpeed, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__moveSpeed, put=__cordl_internal_set__moveSpeed)) float_t  _moveSpeed;

/// @brief Field _rotationSpeed, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationSpeed, put=__cordl_internal_set__rotationSpeed)) float_t  _rotationSpeed;

/// @brief Field _targetPose, offset 0x2c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__targetPose, put=__cordl_internal_set__targetPose)) ::UnityEngine::Pose  _targetPose;

/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr operator  ::Oculus::Interaction::IMovement*() noexcept;

/// @brief Method AdjustPoseWithJoystickInput, addr 0xa4746e4, size 0x380, virtual false, abstract: false, final false
inline void AdjustPoseWithJoystickInput() ;

/// @brief Method InjectController, addr 0xa474a64, size 0x8, virtual false, abstract: false, final false
inline void InjectController(::Oculus::Interaction::Input::IController*  controller) ;

/// @brief Method MoveTo, addr 0xa474558, size 0x150, virtual true, abstract: false, final true
inline void MoveTo(::UnityEngine::Pose  target) ;

static inline ::Oculus::Interaction::JoystickPoseMovement* New_ctor(::Oculus::Interaction::Input::IController*  controller, float_t  moveSpeed, float_t  rotationSpeed, float_t  minDistance, float_t  maxDistance) ;

/// @brief Method StopAndSetPose, addr 0xa4746c4, size 0x1c, virtual true, abstract: false, final true
inline void StopAndSetPose(::UnityEngine::Pose  pose) ;

/// @brief Method Tick, addr 0xa4746e0, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateTarget, addr 0xa4746a8, size 0x1c, virtual true, abstract: false, final true
inline void UpdateTarget(::UnityEngine::Pose  target) ;

constexpr ::Oculus::Interaction::Input::IController* const& __cordl_internal_get__controller() const;

constexpr ::Oculus::Interaction::Input::IController*& __cordl_internal_get__controller() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__currentPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__currentPose() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localDirection() ;

constexpr float_t const& __cordl_internal_get__maxDistance() const;

constexpr float_t& __cordl_internal_get__maxDistance() ;

constexpr float_t const& __cordl_internal_get__minDistance() const;

constexpr float_t& __cordl_internal_get__minDistance() ;

constexpr float_t const& __cordl_internal_get__moveSpeed() const;

constexpr float_t& __cordl_internal_get__moveSpeed() ;

constexpr float_t const& __cordl_internal_get__rotationSpeed() const;

constexpr float_t& __cordl_internal_get__rotationSpeed() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__targetPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__targetPose() ;

constexpr void __cordl_internal_set__controller(::Oculus::Interaction::Input::IController*  value) ;

constexpr void __cordl_internal_set__currentPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__localDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__maxDistance(float_t  value) ;

constexpr void __cordl_internal_set__minDistance(float_t  value) ;

constexpr void __cordl_internal_set__moveSpeed(float_t  value) ;

constexpr void __cordl_internal_set__rotationSpeed(float_t  value) ;

constexpr void __cordl_internal_set__targetPose(::UnityEngine::Pose  value) ;

/// @brief Method .ctor, addr 0xa4744cc, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::IController*  controller, float_t  moveSpeed, float_t  rotationSpeed, float_t  minDistance, float_t  maxDistance) ;

/// @brief Method get_Pose, addr 0xa47453c, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_Pose() ;

/// @brief Method get_Stopped, addr 0xa474550, size 0x8, virtual true, abstract: false, final true
inline bool get_Stopped() ;

/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* i___Oculus__Interaction__IMovement() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JoystickPoseMovement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JoystickPoseMovement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JoystickPoseMovement(JoystickPoseMovement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JoystickPoseMovement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JoystickPoseMovement(JoystickPoseMovement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15946};

/// @brief Field _currentPose, offset: 0x10, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____currentPose;

/// @brief Field _targetPose, offset: 0x2c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____targetPose;

/// @brief Field _localDirection, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localDirection;

/// @brief Field _controller, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IController*  ____controller;

/// @brief Field _moveSpeed, offset: 0x60, size: 0x4, def value: None
 float_t  ____moveSpeed;

/// @brief Field _rotationSpeed, offset: 0x64, size: 0x4, def value: None
 float_t  ____rotationSpeed;

/// @brief Field _minDistance, offset: 0x68, size: 0x4, def value: None
 float_t  ____minDistance;

/// @brief Field _maxDistance, offset: 0x6c, size: 0x4, def value: None
 float_t  ____maxDistance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovement, ____currentPose) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovement, ____targetPose) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovement, ____localDirection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovement, ____controller) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovement, ____moveSpeed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovement, ____rotationSpeed) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovement, ____minDistance) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::JoystickPoseMovement, ____maxDistance) == 0x6c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::JoystickPoseMovement) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction
