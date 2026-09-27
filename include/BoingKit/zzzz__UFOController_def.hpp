#pragma once
// IWYU pragma private; include "BoingKit/UFOController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__Vector3Spring_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UFOController)
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace BoingKit {
class UFOController;
}
// Write type traits
MARK_REF_T(::BoingKit::UFOController*);
DEFINE_IL2CPP_CLASS(::BoingKit::UFOController*, "BoingKit", "UFOController");
// Dependencies BoingKit.Vector3Spring, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.UFOController
class CORDL_TYPE UFOController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AngularDrag, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_AngularDrag, put=__cordl_internal_set_AngularDrag)) float_t  AngularDrag;

/// @brief Field AngularThrust, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_AngularThrust, put=__cordl_internal_set_AngularThrust)) float_t  AngularThrust;

/// @brief Field BlinkInterval, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_BlinkInterval, put=__cordl_internal_set_BlinkInterval)) float_t  BlinkInterval;

/// @brief Field BubbleBaseEmissionRate, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_BubbleBaseEmissionRate, put=__cordl_internal_set_BubbleBaseEmissionRate)) float_t  BubbleBaseEmissionRate;

/// @brief Field BubbleEmitter, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_BubbleEmitter, put=__cordl_internal_set_BubbleEmitter)) ::UnityW<::UnityEngine::ParticleSystem>  BubbleEmitter;

/// @brief Field BubbleMaxEmissionRate, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_BubbleMaxEmissionRate, put=__cordl_internal_set_BubbleMaxEmissionRate)) float_t  BubbleMaxEmissionRate;

/// @brief Field Eyes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_Eyes, put=__cordl_internal_set_Eyes)) ::UnityW<::UnityEngine::Transform>  Eyes;

/// @brief Field Hover, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Hover, put=__cordl_internal_set_Hover)) float_t  Hover;

/// @brief Field LinearDrag, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_LinearDrag, put=__cordl_internal_set_LinearDrag)) float_t  LinearDrag;

/// @brief Field LinearThrust, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_LinearThrust, put=__cordl_internal_set_LinearThrust)) float_t  LinearThrust;

/// @brief Field MaxAngularSpeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxAngularSpeed, put=__cordl_internal_set_MaxAngularSpeed)) float_t  MaxAngularSpeed;

/// @brief Field MaxLinearSpeed, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxLinearSpeed, put=__cordl_internal_set_MaxLinearSpeed)) float_t  MaxLinearSpeed;

/// @brief Field Motor, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_Motor, put=__cordl_internal_set_Motor)) ::UnityW<::UnityEngine::Transform>  Motor;

/// @brief Field MotorBaseAngularSpeed, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_MotorBaseAngularSpeed, put=__cordl_internal_set_MotorBaseAngularSpeed)) float_t  MotorBaseAngularSpeed;

/// @brief Field MotorMaxAngularSpeed, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_MotorMaxAngularSpeed, put=__cordl_internal_set_MotorMaxAngularSpeed)) float_t  MotorMaxAngularSpeed;

/// @brief Field Tilt, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Tilt, put=__cordl_internal_set_Tilt)) float_t  Tilt;

/// @brief Field m_angularVelocity, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_angularVelocity, put=__cordl_internal_set_m_angularVelocity)) float_t  m_angularVelocity;

/// @brief Field m_blinkTimer, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_blinkTimer, put=__cordl_internal_set_m_blinkTimer)) float_t  m_blinkTimer;

/// @brief Field m_eyeInitPositionLs, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_eyeInitPositionLs, put=__cordl_internal_set_m_eyeInitPositionLs)) ::UnityEngine::Vector3  m_eyeInitPositionLs;

/// @brief Field m_eyeInitScale, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_eyeInitScale, put=__cordl_internal_set_m_eyeInitScale)) ::UnityEngine::Vector3  m_eyeInitScale;

/// @brief Field m_eyePositionLsSpring, offset 0x8c, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_eyePositionLsSpring, put=__cordl_internal_set_m_eyePositionLsSpring)) ::BoingKit::Vector3Spring  m_eyePositionLsSpring;

/// @brief Field m_eyeScaleSpring, offset 0x6c, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_eyeScaleSpring, put=__cordl_internal_set_m_eyeScaleSpring)) ::BoingKit::Vector3Spring  m_eyeScaleSpring;

/// @brief Field m_hoverCenter, offset 0xe4, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_hoverCenter, put=__cordl_internal_set_m_hoverCenter)) ::UnityEngine::Vector3  m_hoverCenter;

/// @brief Field m_hoverPhase, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_hoverPhase, put=__cordl_internal_set_m_hoverPhase)) float_t  m_hoverPhase;

/// @brief Field m_lastBlinkWasDouble, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_lastBlinkWasDouble, put=__cordl_internal_set_m_lastBlinkWasDouble)) bool  m_lastBlinkWasDouble;

/// @brief Field m_linearVelocity, offset 0xd0, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_linearVelocity, put=__cordl_internal_set_m_linearVelocity)) ::UnityEngine::Vector3  m_linearVelocity;

/// @brief Field m_motorAngle, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_motorAngle, put=__cordl_internal_set_m_motorAngle)) float_t  m_motorAngle;

/// @brief Field m_yawAngle, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_yawAngle, put=__cordl_internal_set_m_yawAngle)) float_t  m_yawAngle;

/// @brief Method FixedUpdate, addr 0x5e105d8, size 0xeb4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::BoingKit::UFOController* New_ctor() ;

/// @brief Method OnEnable, addr 0x5e105d4, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0x5e103c0, size 0x214, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_AngularDrag() const;

constexpr float_t& __cordl_internal_get_AngularDrag() ;

constexpr float_t const& __cordl_internal_get_AngularThrust() const;

constexpr float_t& __cordl_internal_get_AngularThrust() ;

constexpr float_t const& __cordl_internal_get_BlinkInterval() const;

constexpr float_t& __cordl_internal_get_BlinkInterval() ;

constexpr float_t const& __cordl_internal_get_BubbleBaseEmissionRate() const;

constexpr float_t& __cordl_internal_get_BubbleBaseEmissionRate() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_BubbleEmitter() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_BubbleEmitter() ;

constexpr float_t const& __cordl_internal_get_BubbleMaxEmissionRate() const;

constexpr float_t& __cordl_internal_get_BubbleMaxEmissionRate() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Eyes() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Eyes() ;

constexpr float_t const& __cordl_internal_get_Hover() const;

constexpr float_t& __cordl_internal_get_Hover() ;

constexpr float_t const& __cordl_internal_get_LinearDrag() const;

constexpr float_t& __cordl_internal_get_LinearDrag() ;

constexpr float_t const& __cordl_internal_get_LinearThrust() const;

constexpr float_t& __cordl_internal_get_LinearThrust() ;

constexpr float_t const& __cordl_internal_get_MaxAngularSpeed() const;

constexpr float_t& __cordl_internal_get_MaxAngularSpeed() ;

constexpr float_t const& __cordl_internal_get_MaxLinearSpeed() const;

constexpr float_t& __cordl_internal_get_MaxLinearSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_Motor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_Motor() ;

constexpr float_t const& __cordl_internal_get_MotorBaseAngularSpeed() const;

constexpr float_t& __cordl_internal_get_MotorBaseAngularSpeed() ;

constexpr float_t const& __cordl_internal_get_MotorMaxAngularSpeed() const;

constexpr float_t& __cordl_internal_get_MotorMaxAngularSpeed() ;

constexpr float_t const& __cordl_internal_get_Tilt() const;

constexpr float_t& __cordl_internal_get_Tilt() ;

constexpr float_t const& __cordl_internal_get_m_angularVelocity() const;

constexpr float_t& __cordl_internal_get_m_angularVelocity() ;

constexpr float_t const& __cordl_internal_get_m_blinkTimer() const;

constexpr float_t& __cordl_internal_get_m_blinkTimer() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_eyeInitPositionLs() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_eyeInitPositionLs() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_eyeInitScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_eyeInitScale() ;

constexpr ::BoingKit::Vector3Spring const& __cordl_internal_get_m_eyePositionLsSpring() const;

constexpr ::BoingKit::Vector3Spring& __cordl_internal_get_m_eyePositionLsSpring() ;

constexpr ::BoingKit::Vector3Spring const& __cordl_internal_get_m_eyeScaleSpring() const;

constexpr ::BoingKit::Vector3Spring& __cordl_internal_get_m_eyeScaleSpring() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_hoverCenter() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_hoverCenter() ;

constexpr float_t const& __cordl_internal_get_m_hoverPhase() const;

constexpr float_t& __cordl_internal_get_m_hoverPhase() ;

constexpr bool const& __cordl_internal_get_m_lastBlinkWasDouble() const;

constexpr bool& __cordl_internal_get_m_lastBlinkWasDouble() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_linearVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_linearVelocity() ;

constexpr float_t const& __cordl_internal_get_m_motorAngle() const;

constexpr float_t& __cordl_internal_get_m_motorAngle() ;

constexpr float_t const& __cordl_internal_get_m_yawAngle() const;

constexpr float_t& __cordl_internal_get_m_yawAngle() ;

constexpr void __cordl_internal_set_AngularDrag(float_t  value) ;

constexpr void __cordl_internal_set_AngularThrust(float_t  value) ;

constexpr void __cordl_internal_set_BlinkInterval(float_t  value) ;

constexpr void __cordl_internal_set_BubbleBaseEmissionRate(float_t  value) ;

constexpr void __cordl_internal_set_BubbleEmitter(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_BubbleMaxEmissionRate(float_t  value) ;

constexpr void __cordl_internal_set_Eyes(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_Hover(float_t  value) ;

constexpr void __cordl_internal_set_LinearDrag(float_t  value) ;

constexpr void __cordl_internal_set_LinearThrust(float_t  value) ;

constexpr void __cordl_internal_set_MaxAngularSpeed(float_t  value) ;

constexpr void __cordl_internal_set_MaxLinearSpeed(float_t  value) ;

constexpr void __cordl_internal_set_Motor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_MotorBaseAngularSpeed(float_t  value) ;

constexpr void __cordl_internal_set_MotorMaxAngularSpeed(float_t  value) ;

constexpr void __cordl_internal_set_Tilt(float_t  value) ;

constexpr void __cordl_internal_set_m_angularVelocity(float_t  value) ;

constexpr void __cordl_internal_set_m_blinkTimer(float_t  value) ;

constexpr void __cordl_internal_set_m_eyeInitPositionLs(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_eyeInitScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_eyePositionLsSpring(::BoingKit::Vector3Spring  value) ;

constexpr void __cordl_internal_set_m_eyeScaleSpring(::BoingKit::Vector3Spring  value) ;

constexpr void __cordl_internal_set_m_hoverCenter(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_hoverPhase(float_t  value) ;

constexpr void __cordl_internal_set_m_lastBlinkWasDouble(bool  value) ;

constexpr void __cordl_internal_set_m_linearVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_motorAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_yawAngle(float_t  value) ;

/// @brief Method .ctor, addr 0x5e1148c, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UFOController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UFOController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UFOController(UFOController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UFOController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UFOController(UFOController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5161};

/// @brief Field LinearThrust, offset: 0x20, size: 0x4, def value: None
 float_t  ___LinearThrust;

/// @brief Field MaxLinearSpeed, offset: 0x24, size: 0x4, def value: None
 float_t  ___MaxLinearSpeed;

/// @brief Field LinearDrag, offset: 0x28, size: 0x4, def value: None
 float_t  ___LinearDrag;

/// @brief Field Tilt, offset: 0x2c, size: 0x4, def value: None
 float_t  ___Tilt;

/// @brief Field AngularThrust, offset: 0x30, size: 0x4, def value: None
 float_t  ___AngularThrust;

/// @brief Field MaxAngularSpeed, offset: 0x34, size: 0x4, def value: None
 float_t  ___MaxAngularSpeed;

/// @brief Field AngularDrag, offset: 0x38, size: 0x4, def value: None
 float_t  ___AngularDrag;

/// [Range(0, 1)]
/// @brief Field Hover, offset: 0x3c, size: 0x4, def value: None
 float_t  ___Hover;

/// @brief Field Eyes, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Eyes;

/// @brief Field BlinkInterval, offset: 0x48, size: 0x4, def value: None
 float_t  ___BlinkInterval;

/// @brief Field m_blinkTimer, offset: 0x4c, size: 0x4, def value: None
 float_t  ___m_blinkTimer;

/// @brief Field m_lastBlinkWasDouble, offset: 0x50, size: 0x1, def value: None
 bool  ___m_lastBlinkWasDouble;

/// @brief Field m_eyeInitScale, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_eyeInitScale;

/// @brief Field m_eyeInitPositionLs, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_eyeInitPositionLs;

/// @brief Field m_eyeScaleSpring, offset: 0x6c, size: 0x20, def value: None
 ::BoingKit::Vector3Spring  ___m_eyeScaleSpring;

/// @brief Field m_eyePositionLsSpring, offset: 0x8c, size: 0x20, def value: None
 ::BoingKit::Vector3Spring  ___m_eyePositionLsSpring;

/// @brief Field Motor, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___Motor;

/// @brief Field MotorBaseAngularSpeed, offset: 0xb8, size: 0x4, def value: None
 float_t  ___MotorBaseAngularSpeed;

/// @brief Field MotorMaxAngularSpeed, offset: 0xbc, size: 0x4, def value: None
 float_t  ___MotorMaxAngularSpeed;

/// @brief Field BubbleEmitter, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___BubbleEmitter;

/// @brief Field BubbleBaseEmissionRate, offset: 0xc8, size: 0x4, def value: None
 float_t  ___BubbleBaseEmissionRate;

/// @brief Field BubbleMaxEmissionRate, offset: 0xcc, size: 0x4, def value: None
 float_t  ___BubbleMaxEmissionRate;

/// @brief Field m_linearVelocity, offset: 0xd0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_linearVelocity;

/// @brief Field m_angularVelocity, offset: 0xdc, size: 0x4, def value: None
 float_t  ___m_angularVelocity;

/// @brief Field m_yawAngle, offset: 0xe0, size: 0x4, def value: None
 float_t  ___m_yawAngle;

/// @brief Field m_hoverCenter, offset: 0xe4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_hoverCenter;

/// @brief Field m_hoverPhase, offset: 0xf0, size: 0x4, def value: None
 float_t  ___m_hoverPhase;

/// @brief Field m_motorAngle, offset: 0xf4, size: 0x4, def value: None
 float_t  ___m_motorAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::UFOController, ___LinearThrust) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___MaxLinearSpeed) == 0x24, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___LinearDrag) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___Tilt) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___AngularThrust) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___MaxAngularSpeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___AngularDrag) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___Hover) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___Eyes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___BlinkInterval) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___m_blinkTimer) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___m_lastBlinkWasDouble) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___m_eyeInitScale) == 0x54, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___m_eyeInitPositionLs) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___m_eyeScaleSpring) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___m_eyePositionLsSpring) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___Motor) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___MotorBaseAngularSpeed) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___MotorMaxAngularSpeed) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___BubbleEmitter) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___BubbleBaseEmissionRate) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___BubbleMaxEmissionRate) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___m_linearVelocity) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___m_angularVelocity) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___m_yawAngle) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___m_hoverCenter) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___m_hoverPhase) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::BoingKit::UFOController, ___m_motorAngle) == 0xf4, "Offset mismatch!");

static_assert(sizeof(::BoingKit::UFOController) == 0xf8, "Size mismatch!");

} // namespace end def BoingKit
