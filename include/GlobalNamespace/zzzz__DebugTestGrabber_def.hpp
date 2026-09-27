#pragma once
// IWYU pragma private; include "GlobalNamespace/DebugTestGrabber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugTestGrabber)
namespace GlobalNamespace {
class CrittersActorGrabber;
}
namespace GlobalNamespace {
class CrittersGrabber;
}
namespace GlobalNamespace {
class GorillaVelocityEstimator;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class DebugTestGrabber;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::DebugTestGrabber*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugTestGrabber*, "", "DebugTestGrabber");
// Dependencies UnityEngine.Collider, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: DebugTestGrabber
class CORDL_TYPE DebugTestGrabber : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field colliders, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  colliders;

/// @brief Field estimator, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_estimator, put=__cordl_internal_set_estimator)) ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  estimator;

/// @brief Field grabDuration, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabDuration, put=__cordl_internal_set_grabDuration)) float_t  grabDuration;

/// @brief Field grabRadius, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabRadius, put=__cordl_internal_set_grabRadius)) float_t  grabRadius;

/// @brief Field grabber, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabber, put=__cordl_internal_set_grabber)) ::UnityW<::GlobalNamespace::CrittersGrabber>  grabber;

/// @brief Field isGrabbing, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isGrabbing, put=__cordl_internal_set_isGrabbing)) bool  isGrabbing;

/// @brief Field isHandGrabbingDisabled, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHandGrabbingDisabled, put=__cordl_internal_set_isHandGrabbingDisabled)) bool  isHandGrabbingDisabled;

/// @brief Field isLeft, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeft, put=__cordl_internal_set_isLeft)) bool  isLeft;

/// @brief Field otherHand, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_otherHand, put=__cordl_internal_set_otherHand)) ::UnityW<::GlobalNamespace::CrittersActorGrabber>  otherHand;

/// @brief Field remainingGrabDuration, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_remainingGrabDuration, put=__cordl_internal_set_remainingGrabDuration)) float_t  remainingGrabDuration;

/// @brief Field setIsGrabbing, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_setIsGrabbing, put=__cordl_internal_set_setIsGrabbing)) bool  setIsGrabbing;

/// @brief Field setRelease, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_setRelease, put=__cordl_internal_set_setRelease)) bool  setRelease;

/// @brief Field transformToFollow, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformToFollow, put=__cordl_internal_set_transformToFollow)) ::UnityW<::UnityEngine::Transform>  transformToFollow;

/// @brief Method Awake, addr 0x56f8bf4, size 0xa4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DoGrab, addr 0x56f8fa8, size 0x2d4, virtual false, abstract: false, final false
inline void DoGrab() ;

/// @brief Method DoRelease, addr 0x56f8e10, size 0x198, virtual false, abstract: false, final false
inline void DoRelease() ;

/// @brief Method LateUpdate, addr 0x56f8c98, size 0x178, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::DebugTestGrabber* New_ctor() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_colliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_colliders() ;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator> const& __cordl_internal_get_estimator() const;

constexpr ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>& __cordl_internal_get_estimator() ;

constexpr float_t const& __cordl_internal_get_grabDuration() const;

constexpr float_t& __cordl_internal_get_grabDuration() ;

constexpr float_t const& __cordl_internal_get_grabRadius() const;

constexpr float_t& __cordl_internal_get_grabRadius() ;

constexpr ::UnityW<::GlobalNamespace::CrittersGrabber> const& __cordl_internal_get_grabber() const;

constexpr ::UnityW<::GlobalNamespace::CrittersGrabber>& __cordl_internal_get_grabber() ;

constexpr bool const& __cordl_internal_get_isGrabbing() const;

constexpr bool& __cordl_internal_get_isGrabbing() ;

constexpr bool const& __cordl_internal_get_isHandGrabbingDisabled() const;

constexpr bool& __cordl_internal_get_isHandGrabbingDisabled() ;

constexpr bool const& __cordl_internal_get_isLeft() const;

constexpr bool& __cordl_internal_get_isLeft() ;

constexpr ::UnityW<::GlobalNamespace::CrittersActorGrabber> const& __cordl_internal_get_otherHand() const;

constexpr ::UnityW<::GlobalNamespace::CrittersActorGrabber>& __cordl_internal_get_otherHand() ;

constexpr float_t const& __cordl_internal_get_remainingGrabDuration() const;

constexpr float_t& __cordl_internal_get_remainingGrabDuration() ;

constexpr bool const& __cordl_internal_get_setIsGrabbing() const;

constexpr bool& __cordl_internal_get_setIsGrabbing() ;

constexpr bool const& __cordl_internal_get_setRelease() const;

constexpr bool& __cordl_internal_get_setRelease() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transformToFollow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transformToFollow() ;

constexpr void __cordl_internal_set_colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_estimator(::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  value) ;

constexpr void __cordl_internal_set_grabDuration(float_t  value) ;

constexpr void __cordl_internal_set_grabRadius(float_t  value) ;

constexpr void __cordl_internal_set_grabber(::UnityW<::GlobalNamespace::CrittersGrabber>  value) ;

constexpr void __cordl_internal_set_isGrabbing(bool  value) ;

constexpr void __cordl_internal_set_isHandGrabbingDisabled(bool  value) ;

constexpr void __cordl_internal_set_isLeft(bool  value) ;

constexpr void __cordl_internal_set_otherHand(::UnityW<::GlobalNamespace::CrittersActorGrabber>  value) ;

constexpr void __cordl_internal_set_remainingGrabDuration(float_t  value) ;

constexpr void __cordl_internal_set_setIsGrabbing(bool  value) ;

constexpr void __cordl_internal_set_setRelease(bool  value) ;

constexpr void __cordl_internal_set_transformToFollow(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x56f927c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugTestGrabber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugTestGrabber", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugTestGrabber(DebugTestGrabber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugTestGrabber", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugTestGrabber(DebugTestGrabber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{131};

/// @brief Field isGrabbing, offset: 0x20, size: 0x1, def value: None
 bool  ___isGrabbing;

/// @brief Field setIsGrabbing, offset: 0x21, size: 0x1, def value: None
 bool  ___setIsGrabbing;

/// @brief Field setRelease, offset: 0x22, size: 0x1, def value: None
 bool  ___setRelease;

/// @brief Field colliders, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___colliders;

/// @brief Field isLeft, offset: 0x30, size: 0x1, def value: None
 bool  ___isLeft;

/// @brief Field grabRadius, offset: 0x34, size: 0x4, def value: None
 float_t  ___grabRadius;

/// @brief Field transformToFollow, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transformToFollow;

/// @brief Field estimator, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaVelocityEstimator>  ___estimator;

/// @brief Field grabber, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersGrabber>  ___grabber;

/// @brief Field otherHand, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CrittersActorGrabber>  ___otherHand;

/// @brief Field isHandGrabbingDisabled, offset: 0x58, size: 0x1, def value: None
 bool  ___isHandGrabbingDisabled;

/// @brief Field grabDuration, offset: 0x5c, size: 0x4, def value: None
 float_t  ___grabDuration;

/// @brief Field remainingGrabDuration, offset: 0x60, size: 0x4, def value: None
 float_t  ___remainingGrabDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugTestGrabber, ___isGrabbing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugTestGrabber, ___setIsGrabbing) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugTestGrabber, ___setRelease) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugTestGrabber, ___colliders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugTestGrabber, ___isLeft) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugTestGrabber, ___grabRadius) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugTestGrabber, ___transformToFollow) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugTestGrabber, ___estimator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugTestGrabber, ___grabber) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugTestGrabber, ___otherHand) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugTestGrabber, ___isHandGrabbingDisabled) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugTestGrabber, ___grabDuration) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugTestGrabber, ___remainingGrabDuration) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugTestGrabber) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
