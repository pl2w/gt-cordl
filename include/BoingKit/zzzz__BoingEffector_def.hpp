#pragma once
// IWYU pragma private; include "BoingKit/BoingEffector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__BoingBase_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BoingEffector)
namespace GlobalNamespace {
struct BoingEffector_Params;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BoingKit {
class BoingEffector;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingEffector*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingEffector*, "BoingKit", "BoingEffector");
// Dependencies BoingKit.BoingBase, UnityEngine.Vector3
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingEffector
class CORDL_TYPE BoingEffector : public ::BoingKit::BoingBase {
public:
// Declarations
using Params = ::GlobalNamespace::BoingEffector_Params;

/// @brief Field AngularImpulse, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_AngularImpulse, put=__cordl_internal_set_AngularImpulse)) float_t  AngularImpulse;

/// @brief Field ContinuousMotion, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_ContinuousMotion, put=__cordl_internal_set_ContinuousMotion)) bool  ContinuousMotion;

/// @brief Field DrawAffectedReactorFieldGizmos, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_DrawAffectedReactorFieldGizmos, put=__cordl_internal_set_DrawAffectedReactorFieldGizmos)) bool  DrawAffectedReactorFieldGizmos;

/// @brief Field FullEffectRadiusRatio, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_FullEffectRadiusRatio, put=__cordl_internal_set_FullEffectRadiusRatio)) float_t  FullEffectRadiusRatio;

/// @brief Field LinearImpulse, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_LinearImpulse, put=__cordl_internal_set_LinearImpulse)) float_t  LinearImpulse;

 __declspec(property(get=get_LinearSpeed)) float_t  LinearSpeed;

 __declspec(property(get=get_LinearVelocity)) ::UnityEngine::Vector3  LinearVelocity;

/// @brief Field MaxImpulseSpeed, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxImpulseSpeed, put=__cordl_internal_set_MaxImpulseSpeed)) float_t  MaxImpulseSpeed;

/// @brief Field MoveDistance, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_MoveDistance, put=__cordl_internal_set_MoveDistance)) float_t  MoveDistance;

/// @brief Field Radius, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) float_t  Radius;

/// @brief Field RotationAngle, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RotationAngle, put=__cordl_internal_set_RotationAngle)) float_t  RotationAngle;

/// @brief Field m_currPosition, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_currPosition, put=__cordl_internal_set_m_currPosition)) ::UnityEngine::Vector3  m_currPosition;

/// @brief Field m_linearVelocity, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_linearVelocity, put=__cordl_internal_set_m_linearVelocity)) ::UnityEngine::Vector3  m_linearVelocity;

/// @brief Field m_prevPosition, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_prevPosition, put=__cordl_internal_set_m_prevPosition)) ::UnityEngine::Vector3  m_prevPosition;

static inline ::BoingKit::BoingEffector* New_ctor() ;

/// @brief Method OnDisable, addr 0x5e15ff0, size 0x54, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5e16224, size 0xc0, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5e15e30, size 0xd8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Update, addr 0x5e1612c, size 0xf8, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_AngularImpulse() const;

constexpr float_t& __cordl_internal_get_AngularImpulse() ;

constexpr bool const& __cordl_internal_get_ContinuousMotion() const;

constexpr bool& __cordl_internal_get_ContinuousMotion() ;

constexpr bool const& __cordl_internal_get_DrawAffectedReactorFieldGizmos() const;

constexpr bool& __cordl_internal_get_DrawAffectedReactorFieldGizmos() ;

constexpr float_t const& __cordl_internal_get_FullEffectRadiusRatio() const;

constexpr float_t& __cordl_internal_get_FullEffectRadiusRatio() ;

constexpr float_t const& __cordl_internal_get_LinearImpulse() const;

constexpr float_t& __cordl_internal_get_LinearImpulse() ;

constexpr float_t const& __cordl_internal_get_MaxImpulseSpeed() const;

constexpr float_t& __cordl_internal_get_MaxImpulseSpeed() ;

constexpr float_t const& __cordl_internal_get_MoveDistance() const;

constexpr float_t& __cordl_internal_get_MoveDistance() ;

constexpr float_t const& __cordl_internal_get_Radius() const;

constexpr float_t& __cordl_internal_get_Radius() ;

constexpr float_t const& __cordl_internal_get_RotationAngle() const;

constexpr float_t& __cordl_internal_get_RotationAngle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_currPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_currPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_linearVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_linearVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_prevPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_prevPosition() ;

constexpr void __cordl_internal_set_AngularImpulse(float_t  value) ;

constexpr void __cordl_internal_set_ContinuousMotion(bool  value) ;

constexpr void __cordl_internal_set_DrawAffectedReactorFieldGizmos(bool  value) ;

constexpr void __cordl_internal_set_FullEffectRadiusRatio(float_t  value) ;

constexpr void __cordl_internal_set_LinearImpulse(float_t  value) ;

constexpr void __cordl_internal_set_MaxImpulseSpeed(float_t  value) ;

constexpr void __cordl_internal_set_MoveDistance(float_t  value) ;

constexpr void __cordl_internal_set_Radius(float_t  value) ;

constexpr void __cordl_internal_set_RotationAngle(float_t  value) ;

constexpr void __cordl_internal_set_m_currPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_linearVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_prevPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5e162e4, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LinearSpeed, addr 0x5e15db8, size 0x78, virtual false, abstract: false, final false
inline float_t get_LinearSpeed() ;

/// @brief Method get_LinearVelocity, addr 0x5e15dac, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LinearVelocity() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingEffector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingEffector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingEffector(BoingEffector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingEffector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingEffector(BoingEffector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5172};

/// [Header("Metrics")]
/// [Range(0, 20)]
/// [Tooltip("Maximum radius of influence.")]
/// @brief Field Radius, offset: 0x44, size: 0x4, def value: None
 float_t  ___Radius;

/// [Range(0, 1)]
/// [Tooltip("Fraction of Radius past which influence begins decaying gradually to zero exactly at Radius.\n\ne.g. With a Radius of 10.0 and FullEffectRadiusRatio of 0.5, reactors within distance of 5.0 will be fully influenced, reactors at distance of 7.5 will experience 50% influence, and reactors past distance of 10.0 will not be influenced at all.")]
/// @brief Field FullEffectRadiusRatio, offset: 0x48, size: 0x4, def value: None
 float_t  ___FullEffectRadiusRatio;

/// [Header("Dynamics")]
/// [Range(0, 100)]
/// [Tooltip("Speed of this effector at which impulse effects will be at maximum strength.\n\ne.g. With a MaxImpulseSpeed of 10.0 and an effector traveling at speed of 4.0, impulse effects will be at 40% maximum strength.")]
/// @brief Field MaxImpulseSpeed, offset: 0x4c, size: 0x4, def value: None
 float_t  ___MaxImpulseSpeed;

/// [Tooltip("This affects impulse-related effects.\n\nIf checked, continuous motion will be simulated between frames. This means even if an effector \"teleports\" by moving a huge distance between frames, the effector will still affect all reactors caught on the effector\'s path in between frames, not just the reactors around the effector\'s discrete positions at different frames.")]
/// @brief Field ContinuousMotion, offset: 0x50, size: 0x1, def value: None
 bool  ___ContinuousMotion;

/// [Header("Position Effect")]
/// [Range(-10, 10)]
/// [Tooltip("Distance to push away reactors at maximum influence.\n\ne.g. With a MoveDistance of 2.0, a Radius of 10.0, a FullEffectRadiusRatio of 0.5, and a reactor at distance of 7.5 away from effector, the reactor will be pushed away to 50% of maximum influence, i.e. 50% of MoveDistance, which is a distance of 1.0 away from the effector.")]
/// @brief Field MoveDistance, offset: 0x54, size: 0x4, def value: None
 float_t  ___MoveDistance;

/// [Range(-200, 200)]
/// [Tooltip("Under maximum impulse influence (within distance of Radius * FullEffectRadiusRatio and with effector moving at speed faster or equal to MaxImpulaseSpeed), a reactor\'s movement speed will be maintained to be at least as fast as LinearImpulse (unit: distance per second) in the direction of effector\'s movement direction.\n\ne.g. With a LinearImpulse of 2.0, a Radius of 10.0, a FullEffectRadiusRatio of 0.5, and a reactor at distance of 7.5 away from effector, the reactor\'s movement speed in the direction of effector\'s movement direction will be maintained to be at least 50% of LinearImpulse, which is 1.0 per second.")]
/// @brief Field LinearImpulse, offset: 0x58, size: 0x4, def value: None
 float_t  ___LinearImpulse;

/// [Header("Rotation Effect")]
/// [Range(-180, 180)]
/// [Tooltip("Angle (in degrees) to rotate reactors at maximum influence. The rotation will point reactors\' up vectors (defined individually in the reactor component) away from the effector.\n\ne.g. With a RotationAngle of 20.0, a Radius of 10.0, a FullEffectRadiusRatio of 0.5, and a reactor at distance of 7.5 away from effector, the reactor will be rotated to 50% of maximum influence, i.e. 50% of RotationAngle, which is 10 degrees.")]
/// @brief Field RotationAngle, offset: 0x5c, size: 0x4, def value: None
 float_t  ___RotationAngle;

/// [Range(-2000, 2000)]
/// [Tooltip("Under maximum impulse influence (within distance of Radius * FullEffectRadiusRatio and with effector moving at speed faster or equal to MaxImpulaseSpeed), a reactor\'s rotation speed will be maintained to be at least as fast as AngularImpulse (unit: degrees per second) in the direction of effector\'s movement direction, i.e. the reactor\'s up vector will be pulled in the direction of effector\'s movement direction.\n\ne.g. With a AngularImpulse of 20.0, a Radius of 10.0, a FullEffectRadiusRatio of 0.5, and a reactor at distance of 7.5 away from effector, the reactor\'s rotation speed in the direction of effector\'s movement direction will be maintained to be at least 50% of AngularImpulse, which is 10.0 degrees per second.")]
/// @brief Field AngularImpulse, offset: 0x60, size: 0x4, def value: None
 float_t  ___AngularImpulse;

/// [Header("Debug")]
/// [Tooltip("If checked, gizmos of reactor fields affected by this effector will be drawn.")]
/// @brief Field DrawAffectedReactorFieldGizmos, offset: 0x64, size: 0x1, def value: None
 bool  ___DrawAffectedReactorFieldGizmos;

/// @brief Field m_currPosition, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_currPosition;

/// @brief Field m_prevPosition, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_prevPosition;

/// @brief Field m_linearVelocity, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_linearVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BoingKit::BoingEffector, ___Radius) == 0x44, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingEffector, ___FullEffectRadiusRatio) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingEffector, ___MaxImpulseSpeed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingEffector, ___ContinuousMotion) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingEffector, ___MoveDistance) == 0x54, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingEffector, ___LinearImpulse) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingEffector, ___RotationAngle) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingEffector, ___AngularImpulse) == 0x60, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingEffector, ___DrawAffectedReactorFieldGizmos) == 0x64, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingEffector, ___m_currPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingEffector, ___m_prevPosition) == 0x74, "Offset mismatch!");

static_assert(offsetof(::BoingKit::BoingEffector, ___m_linearVelocity) == 0x80, "Offset mismatch!");

static_assert(sizeof(::BoingKit::BoingEffector) == 0x90, "Size mismatch!");

} // namespace end def BoingKit
