#pragma once
// IWYU pragma private; include "Liv/Lck/Smoothing/LckSimpleStabilizer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LckSimpleStabilizer)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Liv::Lck::Smoothing {
class LckSimpleStabilizer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Smoothing::LckSimpleStabilizer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Smoothing::LckSimpleStabilizer*, "Liv.Lck.Smoothing", "LckSimpleStabilizer");
// [DefaultExecutionOrder(1000)]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Liv::Lck::Smoothing {
// Is value type: false
// CS Name: Liv.Lck.Smoothing.LckSimpleStabilizer
class CORDL_TYPE LckSimpleStabilizer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _followTime, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__followTime, put=__cordl_internal_set__followTime)) float_t  _followTime;

/// @brief Field _lastPosition, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get__lastPosition, put=__cordl_internal_set__lastPosition)) ::UnityEngine::Vector3  _lastPosition;

/// @brief Field _lastRotation, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get__lastRotation, put=__cordl_internal_set__lastRotation)) ::UnityEngine::Quaternion  _lastRotation;

/// @brief Field _rotateTime, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__rotateTime, put=__cordl_internal_set__rotateTime)) float_t  _rotateTime;

/// @brief Field _rotationVelocity, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get__rotationVelocity, put=__cordl_internal_set__rotationVelocity)) ::UnityEngine::Vector3  _rotationVelocity;

/// @brief Field _stabilizationTarget, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__stabilizationTarget, put=__cordl_internal_set__stabilizationTarget)) ::UnityW<::UnityEngine::Transform>  _stabilizationTarget;

/// @brief Field _targetToFollow, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetToFollow, put=__cordl_internal_set__targetToFollow)) ::UnityW<::UnityEngine::Transform>  _targetToFollow;

/// @brief Field _velocity, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get__velocity, put=__cordl_internal_set__velocity)) ::UnityEngine::Vector3  _velocity;

/// @brief Method LateUpdate, addr 0x9d3dba0, size 0x16c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Liv::Lck::Smoothing::LckSimpleStabilizer* New_ctor() ;

/// @brief Method OnEnable, addr 0x9d3db5c, size 0x44, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReachTargetInstantly, addr 0x9d3dda0, size 0x60, virtual false, abstract: false, final false
inline void ReachTargetInstantly() ;

constexpr float_t const& __cordl_internal_get__followTime() const;

constexpr float_t& __cordl_internal_get__followTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__lastPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__lastRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get__lastRotation() ;

constexpr float_t const& __cordl_internal_get__rotateTime() const;

constexpr float_t& __cordl_internal_get__rotateTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__rotationVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__rotationVelocity() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__stabilizationTarget() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__stabilizationTarget() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__targetToFollow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__targetToFollow() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__velocity() ;

constexpr void __cordl_internal_set__followTime(float_t  value) ;

constexpr void __cordl_internal_set__lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__lastRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__rotateTime(float_t  value) ;

constexpr void __cordl_internal_set__rotationVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__stabilizationTarget(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__targetToFollow(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x9d3de00, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckSimpleStabilizer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckSimpleStabilizer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckSimpleStabilizer(LckSimpleStabilizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckSimpleStabilizer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckSimpleStabilizer(LckSimpleStabilizer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24847};

/// @brief Field _stabilizationTarget, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____stabilizationTarget;

/// @brief Field _targetToFollow, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____targetToFollow;

/// @brief Field _followTime, offset: 0x30, size: 0x4, def value: None
 float_t  ____followTime;

/// @brief Field _rotateTime, offset: 0x34, size: 0x4, def value: None
 float_t  ____rotateTime;

/// @brief Field _velocity, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____velocity;

/// @brief Field _rotationVelocity, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____rotationVelocity;

/// @brief Field _lastPosition, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____lastPosition;

/// @brief Field _lastRotation, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ____lastRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Smoothing::LckSimpleStabilizer, ____stabilizationTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckSimpleStabilizer, ____targetToFollow) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckSimpleStabilizer, ____followTime) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckSimpleStabilizer, ____rotateTime) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckSimpleStabilizer, ____velocity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckSimpleStabilizer, ____rotationVelocity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckSimpleStabilizer, ____lastPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Smoothing::LckSimpleStabilizer, ____lastRotation) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Smoothing::LckSimpleStabilizer) == 0x70, "Size mismatch!");

} // namespace end def Liv::Lck::Smoothing
