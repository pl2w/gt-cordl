#pragma once
// IWYU pragma private; include "GorillaLocomotion/Swimming/WaterCurrent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(WaterCurrent)
namespace GlobalNamespace {
class CatmullRomSpline;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaLocomotion::Swimming {
class WaterCurrent;
}
// Write type traits
MARK_REF_T(::GorillaLocomotion::Swimming::WaterCurrent*);
DEFINE_IL2CPP_CLASS(::GorillaLocomotion::Swimming::WaterCurrent*, "GorillaLocomotion.Swimming", "WaterCurrent");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaLocomotion::Swimming {
// Is value type: false
// CS Name: GorillaLocomotion.Swimming.WaterCurrent
class CORDL_TYPE WaterCurrent : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Accel)) float_t  Accel;

 __declspec(property(get=get_InwardAccel)) float_t  InwardAccel;

 __declspec(property(get=get_InwardSpeed)) float_t  InwardSpeed;

 __declspec(property(get=get_Speed)) float_t  Speed;

/// @brief Field currentAccel, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentAccel, put=__cordl_internal_set_currentAccel)) float_t  currentAccel;

/// @brief Field currentSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSpeed, put=__cordl_internal_set_currentSpeed)) float_t  currentSpeed;

/// @brief Field dampingHalfLife, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dampingHalfLife, put=__cordl_internal_set_dampingHalfLife)) float_t  dampingHalfLife;

/// @brief Field debugCurrentVelocity, offset 0x54, size 0xc 
 __declspec(property(get=__cordl_internal_get_debugCurrentVelocity, put=__cordl_internal_set_debugCurrentVelocity)) ::UnityEngine::Vector3  debugCurrentVelocity;

/// @brief Field debugDrawCurrentQueries, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDrawCurrentQueries, put=__cordl_internal_set_debugDrawCurrentQueries)) bool  debugDrawCurrentQueries;

/// @brief Field debugSplinePoint, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_debugSplinePoint, put=__cordl_internal_set_debugSplinePoint)) ::UnityEngine::Vector3  debugSplinePoint;

/// @brief Field fadeDistance, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeDistance, put=__cordl_internal_set_fadeDistance)) float_t  fadeDistance;

/// @brief Field fullEffectDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_fullEffectDistance, put=__cordl_internal_set_fullEffectDistance)) float_t  fullEffectDistance;

/// @brief Field inwardCurrentAccel, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_inwardCurrentAccel, put=__cordl_internal_set_inwardCurrentAccel)) float_t  inwardCurrentAccel;

/// @brief Field inwardCurrentFullEffectRadius, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_inwardCurrentFullEffectRadius, put=__cordl_internal_set_inwardCurrentFullEffectRadius)) float_t  inwardCurrentFullEffectRadius;

/// @brief Field inwardCurrentNoEffectRadius, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_inwardCurrentNoEffectRadius, put=__cordl_internal_set_inwardCurrentNoEffectRadius)) float_t  inwardCurrentNoEffectRadius;

/// @brief Field inwardCurrentSpeed, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_inwardCurrentSpeed, put=__cordl_internal_set_inwardCurrentSpeed)) float_t  inwardCurrentSpeed;

/// @brief Field splines, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_splines, put=__cordl_internal_set_splines)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CatmullRomSpline>>*  splines;

/// @brief Field velocityAnticipationAdjustment, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityAnticipationAdjustment, put=__cordl_internal_set_velocityAnticipationAdjustment)) float_t  velocityAnticipationAdjustment;

/// @brief Method DrawGizmoCircle, addr 0x5ce3608, size 0x19c, virtual false, abstract: false, final false
inline void DrawGizmoCircle(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  radius) ;

/// @brief Method GetCurrentAtPoint, addr 0x5ce0398, size 0x720, virtual false, abstract: false, final false
inline bool GetCurrentAtPoint(::UnityEngine::Vector3  worldPoint, ::UnityEngine::Vector3  startingVelocity, float_t  dt, ::by_ref<::UnityEngine::Vector3>  currentVelocity, ::by_ref<::UnityEngine::Vector3>  velocityChange) ;

static inline ::GorillaLocomotion::Swimming::WaterCurrent* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5ce3410, size 0x1f8, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method Update, addr 0x5ce32fc, size 0x114, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_currentAccel() const;

constexpr float_t& __cordl_internal_get_currentAccel() ;

constexpr float_t const& __cordl_internal_get_currentSpeed() const;

constexpr float_t& __cordl_internal_get_currentSpeed() ;

constexpr float_t const& __cordl_internal_get_dampingHalfLife() const;

constexpr float_t& __cordl_internal_get_dampingHalfLife() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugCurrentVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugCurrentVelocity() ;

constexpr bool const& __cordl_internal_get_debugDrawCurrentQueries() const;

constexpr bool& __cordl_internal_get_debugDrawCurrentQueries() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_debugSplinePoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_debugSplinePoint() ;

constexpr float_t const& __cordl_internal_get_fadeDistance() const;

constexpr float_t& __cordl_internal_get_fadeDistance() ;

constexpr float_t const& __cordl_internal_get_fullEffectDistance() const;

constexpr float_t& __cordl_internal_get_fullEffectDistance() ;

constexpr float_t const& __cordl_internal_get_inwardCurrentAccel() const;

constexpr float_t& __cordl_internal_get_inwardCurrentAccel() ;

constexpr float_t const& __cordl_internal_get_inwardCurrentFullEffectRadius() const;

constexpr float_t& __cordl_internal_get_inwardCurrentFullEffectRadius() ;

constexpr float_t const& __cordl_internal_get_inwardCurrentNoEffectRadius() const;

constexpr float_t& __cordl_internal_get_inwardCurrentNoEffectRadius() ;

constexpr float_t const& __cordl_internal_get_inwardCurrentSpeed() const;

constexpr float_t& __cordl_internal_get_inwardCurrentSpeed() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CatmullRomSpline>>* const& __cordl_internal_get_splines() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CatmullRomSpline>>*& __cordl_internal_get_splines() ;

constexpr float_t const& __cordl_internal_get_velocityAnticipationAdjustment() const;

constexpr float_t& __cordl_internal_get_velocityAnticipationAdjustment() ;

constexpr void __cordl_internal_set_currentAccel(float_t  value) ;

constexpr void __cordl_internal_set_currentSpeed(float_t  value) ;

constexpr void __cordl_internal_set_dampingHalfLife(float_t  value) ;

constexpr void __cordl_internal_set_debugCurrentVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_debugDrawCurrentQueries(bool  value) ;

constexpr void __cordl_internal_set_debugSplinePoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_fadeDistance(float_t  value) ;

constexpr void __cordl_internal_set_fullEffectDistance(float_t  value) ;

constexpr void __cordl_internal_set_inwardCurrentAccel(float_t  value) ;

constexpr void __cordl_internal_set_inwardCurrentFullEffectRadius(float_t  value) ;

constexpr void __cordl_internal_set_inwardCurrentNoEffectRadius(float_t  value) ;

constexpr void __cordl_internal_set_inwardCurrentSpeed(float_t  value) ;

constexpr void __cordl_internal_set_splines(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CatmullRomSpline>>*  value) ;

constexpr void __cordl_internal_set_velocityAnticipationAdjustment(float_t  value) ;

/// @brief Method .ctor, addr 0x5ce37a4, size 0x104, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Accel, addr 0x5ce32e4, size 0x8, virtual false, abstract: false, final false
inline float_t get_Accel() ;

/// @brief Method get_InwardAccel, addr 0x5ce32f4, size 0x8, virtual false, abstract: false, final false
inline float_t get_InwardAccel() ;

/// @brief Method get_InwardSpeed, addr 0x5ce32ec, size 0x8, virtual false, abstract: false, final false
inline float_t get_InwardSpeed() ;

/// @brief Method get_Speed, addr 0x5ce32dc, size 0x8, virtual false, abstract: false, final false
inline float_t get_Speed() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterCurrent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterCurrent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterCurrent(WaterCurrent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterCurrent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterCurrent(WaterCurrent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4516};

/// [SerializeField]
/// @brief Field splines, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::CatmullRomSpline>>*  ___splines;

/// [SerializeField]
/// @brief Field fullEffectDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___fullEffectDistance;

/// [SerializeField]
/// @brief Field fadeDistance, offset: 0x2c, size: 0x4, def value: None
 float_t  ___fadeDistance;

/// [SerializeField]
/// @brief Field currentSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ___currentSpeed;

/// [SerializeField]
/// @brief Field currentAccel, offset: 0x34, size: 0x4, def value: None
 float_t  ___currentAccel;

/// [SerializeField]
/// @brief Field velocityAnticipationAdjustment, offset: 0x38, size: 0x4, def value: None
 float_t  ___velocityAnticipationAdjustment;

/// [SerializeField]
/// @brief Field inwardCurrentFullEffectRadius, offset: 0x3c, size: 0x4, def value: None
 float_t  ___inwardCurrentFullEffectRadius;

/// [SerializeField]
/// @brief Field inwardCurrentNoEffectRadius, offset: 0x40, size: 0x4, def value: None
 float_t  ___inwardCurrentNoEffectRadius;

/// [SerializeField]
/// @brief Field inwardCurrentSpeed, offset: 0x44, size: 0x4, def value: None
 float_t  ___inwardCurrentSpeed;

/// [SerializeField]
/// @brief Field inwardCurrentAccel, offset: 0x48, size: 0x4, def value: None
 float_t  ___inwardCurrentAccel;

/// [SerializeField]
/// @brief Field dampingHalfLife, offset: 0x4c, size: 0x4, def value: None
 float_t  ___dampingHalfLife;

/// [SerializeField]
/// @brief Field debugDrawCurrentQueries, offset: 0x50, size: 0x1, def value: None
 bool  ___debugDrawCurrentQueries;

/// @brief Field debugCurrentVelocity, offset: 0x54, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___debugCurrentVelocity;

/// @brief Field debugSplinePoint, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___debugSplinePoint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___splines) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___fullEffectDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___fadeDistance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___currentSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___currentAccel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___velocityAnticipationAdjustment) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___inwardCurrentFullEffectRadius) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___inwardCurrentNoEffectRadius) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___inwardCurrentSpeed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___inwardCurrentAccel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___dampingHalfLife) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___debugDrawCurrentQueries) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___debugCurrentVelocity) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaLocomotion::Swimming::WaterCurrent, ___debugSplinePoint) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GorillaLocomotion::Swimming::WaterCurrent) == 0x70, "Size mismatch!");

} // namespace end def GorillaLocomotion::Swimming
