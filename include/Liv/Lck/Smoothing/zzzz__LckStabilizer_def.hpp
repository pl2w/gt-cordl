#pragma once
// IWYU pragma private; include "Liv/Lck/Smoothing/LckStabilizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__UpdateTimingMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LckStabilizer)
namespace Liv::Lck::Smoothing {
class KalmanFilterQuaternion;
}
namespace Liv::Lck::Smoothing {
class KalmanFilterVector3;
}
namespace Liv::Lck {
struct UpdateTimingMode;
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
namespace Liv::Lck::Smoothing {
class LckStabilizer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Smoothing::LckStabilizer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Smoothing::LckStabilizer*, "Liv.Lck.Smoothing", "LckStabilizer");
// [DefaultExecutionOrder(1000)]
// Dependencies Liv.Lck.UpdateTimingMode, UnityEngine.MonoBehaviour
namespace Liv::Lck::Smoothing {
// Is value type: false
// CS Name: Liv.Lck.Smoothing.LckStabilizer
class CORDL_TYPE LckStabilizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AffectPosition, put=set_AffectPosition)) bool  AffectPosition;

 __declspec(property(get=get_AffectRotation, put=set_AffectRotation)) bool  AffectRotation;

 __declspec(property(get=get_HasCustomStabilizationSpace)) bool  HasCustomStabilizationSpace;

 __declspec(property(get=get_PositionFilter)) ::Liv::Lck::Smoothing::KalmanFilterVector3*  PositionFilter;

 __declspec(property(get=get_PositionalSmoothing, put=set_PositionalSmoothing)) float_t  PositionalSmoothing;

 __declspec(property(get=get_RotationFilter)) ::Liv::Lck::Smoothing::KalmanFilterQuaternion*  RotationFilter;

 __declspec(property(get=get_RotationalSmoothing, put=set_RotationalSmoothing)) float_t  RotationalSmoothing;

 __declspec(property(get=get_StabilizationSpaceOrigin, put=set_StabilizationSpaceOrigin)) ::UnityW<::UnityEngine::Transform>  StabilizationSpaceOrigin;

 __declspec(property(get=get_StabilizationTarget, put=set_StabilizationTarget)) ::UnityW<::UnityEngine::Transform>  StabilizationTarget;

 __declspec(property(get=get_StabilizationUpdateTimingMode, put=set_StabilizationUpdateTimingMode)) ::Liv::Lck::UpdateTimingMode  StabilizationUpdateTimingMode;

 __declspec(property(get=get_TargetToFollow, put=set_TargetToFollow)) ::UnityW<::UnityEngine::Transform>  TargetToFollow;

/// @brief Field _affectPosition, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__affectPosition, put=__cordl_internal_set__affectPosition)) bool  _affectPosition;

/// @brief Field _affectRotation, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__affectRotation, put=__cordl_internal_set__affectRotation)) bool  _affectRotation;

/// @brief Field _positionFilter, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__positionFilter, put=__cordl_internal_set__positionFilter)) ::Liv::Lck::Smoothing::KalmanFilterVector3*  _positionFilter;

/// @brief Field _positionalSmoothing, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__positionalSmoothing, put=__cordl_internal_set__positionalSmoothing)) float_t  _positionalSmoothing;

/// @brief Field _rotationFilter, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__rotationFilter, put=__cordl_internal_set__rotationFilter)) ::Liv::Lck::Smoothing::KalmanFilterQuaternion*  _rotationFilter;

/// @brief Field _rotationalSmoothing, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotationalSmoothing, put=__cordl_internal_set__rotationalSmoothing)) float_t  _rotationalSmoothing;

/// @brief Field _stabilizationSpaceOrigin, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__stabilizationSpaceOrigin, put=__cordl_internal_set__stabilizationSpaceOrigin)) ::UnityW<::UnityEngine::Transform>  _stabilizationSpaceOrigin;

/// @brief Field _stabilizationTarget, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__stabilizationTarget, put=__cordl_internal_set__stabilizationTarget)) ::UnityW<::UnityEngine::Transform>  _stabilizationTarget;

/// @brief Field _stabilizationUpdateTimingMode, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__stabilizationUpdateTimingMode, put=__cordl_internal_set__stabilizationUpdateTimingMode)) ::Liv::Lck::UpdateTimingMode  _stabilizationUpdateTimingMode;

/// @brief Field _targetToFollow, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetToFollow, put=__cordl_internal_set__targetToFollow)) ::UnityW<::UnityEngine::Transform>  _targetToFollow;

/// @brief Method DoStabilizationUpdate, addr 0x9d3e3c8, size 0x150, virtual false, abstract: false, final false
inline void DoStabilizationUpdate(float_t  positionalSmoothing, float_t  rotationalSmoothing) ;

/// @brief Method FixedUpdate, addr 0x9d3e530, size 0x14, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetStabilizationSpacePosition, addr 0x9d3e154, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetStabilizationSpacePosition(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method GetStabilizationSpaceRotation, addr 0x9d3e280, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetStabilizationSpaceRotation(::UnityEngine::Quaternion  worldRotation) ;

/// @brief Method GetWorldPosition, addr 0x9d3e550, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetWorldPosition(::UnityEngine::Vector3  stabilizationSpacePosition) ;

/// @brief Method GetWorldRotation, addr 0x9d3e5bc, size 0xcc, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetWorldRotation(::UnityEngine::Quaternion  stabilizationSpaceRotation) ;

/// @brief Method HandleStabilizationSpaceChanged, addr 0x9d3df58, size 0x104, virtual false, abstract: false, final false
inline void HandleStabilizationSpaceChanged() ;

/// @brief Method LateUpdate, addr 0x9d3e3b0, size 0x18, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Liv::Lck::Smoothing::LckStabilizer* New_ctor() ;

/// @brief Method ReachTargetInstantly, addr 0x9d3e544, size 0xc, virtual false, abstract: false, final false
inline void ReachTargetInstantly() ;

/// @brief Method Update, addr 0x9d3e518, size 0x18, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__affectPosition() const;

constexpr bool& __cordl_internal_get__affectPosition() ;

constexpr bool const& __cordl_internal_get__affectRotation() const;

constexpr bool& __cordl_internal_get__affectRotation() ;

constexpr ::Liv::Lck::Smoothing::KalmanFilterVector3* const& __cordl_internal_get__positionFilter() const;

constexpr ::Liv::Lck::Smoothing::KalmanFilterVector3*& __cordl_internal_get__positionFilter() ;

constexpr float_t const& __cordl_internal_get__positionalSmoothing() const;

constexpr float_t& __cordl_internal_get__positionalSmoothing() ;

constexpr ::Liv::Lck::Smoothing::KalmanFilterQuaternion* const& __cordl_internal_get__rotationFilter() const;

constexpr ::Liv::Lck::Smoothing::KalmanFilterQuaternion*& __cordl_internal_get__rotationFilter() ;

constexpr float_t const& __cordl_internal_get__rotationalSmoothing() const;

constexpr float_t& __cordl_internal_get__rotationalSmoothing() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__stabilizationSpaceOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__stabilizationSpaceOrigin() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__stabilizationTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__stabilizationTarget() ;

constexpr ::Liv::Lck::UpdateTimingMode const& __cordl_internal_get__stabilizationUpdateTimingMode() const;

constexpr ::Liv::Lck::UpdateTimingMode& __cordl_internal_get__stabilizationUpdateTimingMode() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetToFollow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetToFollow() ;

constexpr void __cordl_internal_set__affectPosition(bool  value) ;

constexpr void __cordl_internal_set__affectRotation(bool  value) ;

constexpr void __cordl_internal_set__positionFilter(::Liv::Lck::Smoothing::KalmanFilterVector3*  value) ;

constexpr void __cordl_internal_set__positionalSmoothing(float_t  value) ;

constexpr void __cordl_internal_set__rotationFilter(::Liv::Lck::Smoothing::KalmanFilterQuaternion*  value) ;

constexpr void __cordl_internal_set__rotationalSmoothing(float_t  value) ;

constexpr void __cordl_internal_set__stabilizationSpaceOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__stabilizationTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__stabilizationUpdateTimingMode(::Liv::Lck::UpdateTimingMode  value) ;

constexpr void __cordl_internal_set__targetToFollow(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x9d3e688, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AffectPosition, addr 0x9d3e07c, size 0x8, virtual false, abstract: false, final false
inline bool get_AffectPosition() ;

/// @brief Method get_AffectRotation, addr 0x9d3e08c, size 0x8, virtual false, abstract: false, final false
inline bool get_AffectRotation() ;

/// @brief Method get_HasCustomStabilizationSpace, addr 0x9d3e354, size 0x5c, virtual false, abstract: false, final false
inline bool get_HasCustomStabilizationSpace() ;

/// @brief Method get_PositionFilter, addr 0x9d3e09c, size 0xb8, virtual false, abstract: false, final false
inline ::Liv::Lck::Smoothing::KalmanFilterVector3* get_PositionFilter() ;

/// @brief Method get_PositionalSmoothing, addr 0x9d3e05c, size 0x8, virtual false, abstract: false, final false
inline float_t get_PositionalSmoothing() ;

/// @brief Method get_RotationFilter, addr 0x9d3e1c0, size 0xc0, virtual false, abstract: false, final false
inline ::Liv::Lck::Smoothing::KalmanFilterQuaternion* get_RotationFilter() ;

/// @brief Method get_RotationalSmoothing, addr 0x9d3e06c, size 0x8, virtual false, abstract: false, final false
inline float_t get_RotationalSmoothing() ;

/// @brief Method get_StabilizationSpaceOrigin, addr 0x9d3deb4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_StabilizationSpaceOrigin() ;

/// @brief Method get_StabilizationTarget, addr 0x9d3de94, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_StabilizationTarget() ;

/// @brief Method get_StabilizationUpdateTimingMode, addr 0x9d3de84, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::UpdateTimingMode get_StabilizationUpdateTimingMode() ;

/// @brief Method get_TargetToFollow, addr 0x9d3dea4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_TargetToFollow() ;

/// @brief Method set_AffectPosition, addr 0x9d3e084, size 0x8, virtual false, abstract: false, final false
inline void set_AffectPosition(bool  value) ;

/// @brief Method set_AffectRotation, addr 0x9d3e094, size 0x8, virtual false, abstract: false, final false
inline void set_AffectRotation(bool  value) ;

/// @brief Method set_PositionalSmoothing, addr 0x9d3e064, size 0x8, virtual false, abstract: false, final false
inline void set_PositionalSmoothing(float_t  value) ;

/// @brief Method set_RotationalSmoothing, addr 0x9d3e074, size 0x8, virtual false, abstract: false, final false
inline void set_RotationalSmoothing(float_t  value) ;

/// @brief Method set_StabilizationSpaceOrigin, addr 0x9d3debc, size 0x9c, virtual false, abstract: false, final false
inline void set_StabilizationSpaceOrigin(::UnityEngine::Transform*  value) ;

/// @brief Method set_StabilizationTarget, addr 0x9d3de9c, size 0x8, virtual false, abstract: false, final false
inline void set_StabilizationTarget(::UnityEngine::Transform*  value) ;

/// @brief Method set_StabilizationUpdateTimingMode, addr 0x9d3de8c, size 0x8, virtual false, abstract: false, final false
inline void set_StabilizationUpdateTimingMode(::Liv::Lck::UpdateTimingMode  value) ;

/// @brief Method set_TargetToFollow, addr 0x9d3deac, size 0x8, virtual false, abstract: false, final false
inline void set_TargetToFollow(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckStabilizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckStabilizer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckStabilizer(LckStabilizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckStabilizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckStabilizer(LckStabilizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24848};

/// [Header("Transform References")]
/// [SerializeField]
/// [FormerlySerializedAs("StabilizationTarget")]
/// @brief Field _stabilizationTarget, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____stabilizationTarget;

/// [SerializeField]
/// [FormerlySerializedAs("TargetToFollow")]
/// @brief Field _targetToFollow, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____targetToFollow;

/// [Header("Stabilization Settings")]
/// [SerializeField]
/// [FormerlySerializedAs("PositionalSmoothing")]
/// @brief Field _positionalSmoothing, offset: 0x30, size: 0x4, def value: None
 float_t  ____positionalSmoothing;

/// [SerializeField]
/// [FormerlySerializedAs("RotationalSmoothing")]
/// @brief Field _rotationalSmoothing, offset: 0x34, size: 0x4, def value: None
 float_t  ____rotationalSmoothing;

/// [SerializeField]
/// [FormerlySerializedAs("AffectPosition")]
/// @brief Field _affectPosition, offset: 0x38, size: 0x1, def value: None
 bool  ____affectPosition;

/// [SerializeField]
/// [FormerlySerializedAs("AffectRotation")]
/// @brief Field _affectRotation, offset: 0x39, size: 0x1, def value: None
 bool  ____affectRotation;

/// [SerializeField]
/// @brief Field _stabilizationUpdateTimingMode, offset: 0x3c, size: 0x4, def value: None
 ::Liv::Lck::UpdateTimingMode  ____stabilizationUpdateTimingMode;

/// [Header("Optional References")]
/// [SerializeField]
/// [Tooltip("(Optional) Follow target movement relative to this transform will be stabilized. If left unspecified, will stabilize follow target movement in world space.")]
/// @brief Field _stabilizationSpaceOrigin, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____stabilizationSpaceOrigin;

/// @brief Field _positionFilter, offset: 0x48, size: 0x8, def value: None
 ::Liv::Lck::Smoothing::KalmanFilterVector3*  ____positionFilter;

/// @brief Field _rotationFilter, offset: 0x50, size: 0x8, def value: None
 ::Liv::Lck::Smoothing::KalmanFilterQuaternion*  ____rotationFilter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Smoothing::LckStabilizer, ____stabilizationTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckStabilizer, ____targetToFollow) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckStabilizer, ____positionalSmoothing) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckStabilizer, ____rotationalSmoothing) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckStabilizer, ____affectPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckStabilizer, ____affectRotation) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckStabilizer, ____stabilizationUpdateTimingMode) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckStabilizer, ____stabilizationSpaceOrigin) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckStabilizer, ____positionFilter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckStabilizer, ____rotationFilter) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Smoothing::LckStabilizer) == 0x58, "Size mismatch!");

} // namespace end def Liv::Lck::Smoothing
