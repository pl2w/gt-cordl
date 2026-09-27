#pragma once
// IWYU pragma private; include "Oculus/Interaction/ObjectPull.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ObjectPull)
namespace Oculus::Interaction {
class IMovement;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction {
class ObjectPull;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::ObjectPull*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ObjectPull*, "Oculus.Interaction", "ObjectPull");
// Dependencies System.Object, UnityEngine.Plane, UnityEngine.Pose, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.ObjectPull
class CORDL_TYPE ObjectPull : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Pose)) ::UnityEngine::Pose  Pose;

 __declspec(property(get=get_Stopped)) bool  Stopped;

/// @brief Field _current, offset 0x18, size 0x1c 
 __declspec(property(get=__cordl_internal_get__current, put=__cordl_internal_set__current)) ::UnityEngine::Pose  _current;

/// @brief Field _deadZone, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__deadZone, put=__cordl_internal_set__deadZone)) float_t  _deadZone;

/// @brief Field _grabbableStartPose, offset 0x50, size 0x1c 
 __declspec(property(get=__cordl_internal_get__grabbableStartPose, put=__cordl_internal_set__grabbableStartPose)) ::UnityEngine::Pose  _grabbableStartPose;

/// @brief Field _grabberStartPose, offset 0x34, size 0x1c 
 __declspec(property(get=__cordl_internal_get__grabberStartPose, put=__cordl_internal_set__grabberStartPose)) ::UnityEngine::Pose  _grabberStartPose;

/// @brief Field _lastTime, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastTime, put=__cordl_internal_set__lastTime)) float_t  _lastTime;

/// @brief Field _originalDistance, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__originalDistance, put=__cordl_internal_set__originalDistance)) float_t  _originalDistance;

/// @brief Field _pullingPlane, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get__pullingPlane, put=__cordl_internal_set__pullingPlane)) ::UnityEngine::Plane  _pullingPlane;

/// @brief Field _reachedGrabber, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get__reachedGrabber, put=__cordl_internal_set__reachedGrabber)) bool  _reachedGrabber;

/// @brief Field _speed, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__speed, put=__cordl_internal_set__speed)) float_t  _speed;

/// @brief Field _target, offset 0x6c, size 0x1c 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityEngine::Pose  _target;

/// @brief Field _translationDelta, offset 0x98, size 0xc 
 __declspec(property(get=__cordl_internal_get__translationDelta, put=__cordl_internal_set__translationDelta)) ::UnityEngine::Vector3  _translationDelta;

/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr operator  ::Oculus::Interaction::IMovement*() noexcept;

/// @brief Method MoveTo, addr 0xa475458, size 0x240, virtual true, abstract: false, final true
inline void MoveTo(::UnityEngine::Pose  target) ;

static inline ::Oculus::Interaction::ObjectPull* New_ctor(float_t  speed, float_t  deadZone) ;

/// @brief Method StopAndSetPose, addr 0xa4756b4, size 0x1c, virtual true, abstract: false, final true
inline void StopAndSetPose(::UnityEngine::Pose  source) ;

/// @brief Method Tick, addr 0xa4756d0, size 0x338, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method UpdateTarget, addr 0xa475698, size 0x1c, virtual true, abstract: false, final true
inline void UpdateTarget(::UnityEngine::Pose  target) ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__current() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__current() ;

constexpr float_t const& __cordl_internal_get__deadZone() const;

constexpr float_t& __cordl_internal_get__deadZone() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__grabbableStartPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__grabbableStartPose() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__grabberStartPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__grabberStartPose() ;

constexpr float_t const& __cordl_internal_get__lastTime() const;

constexpr float_t& __cordl_internal_get__lastTime() ;

constexpr float_t const& __cordl_internal_get__originalDistance() const;

constexpr float_t& __cordl_internal_get__originalDistance() ;

constexpr ::UnityEngine::Plane const& __cordl_internal_get__pullingPlane() const;

constexpr ::UnityEngine::Plane& __cordl_internal_get__pullingPlane() ;

constexpr bool const& __cordl_internal_get__reachedGrabber() const;

constexpr bool& __cordl_internal_get__reachedGrabber() ;

constexpr float_t const& __cordl_internal_get__speed() const;

constexpr float_t& __cordl_internal_get__speed() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get__target() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get__target() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__translationDelta() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__translationDelta() ;

constexpr void __cordl_internal_set__current(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__deadZone(float_t  value) ;

constexpr void __cordl_internal_set__grabbableStartPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__grabberStartPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__lastTime(float_t  value) ;

constexpr void __cordl_internal_set__originalDistance(float_t  value) ;

constexpr void __cordl_internal_set__pullingPlane(::UnityEngine::Plane  value) ;

constexpr void __cordl_internal_set__reachedGrabber(bool  value) ;

constexpr void __cordl_internal_set__speed(float_t  value) ;

constexpr void __cordl_internal_set__target(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set__translationDelta(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0xa47534c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor(float_t  speed, float_t  deadZone) ;

/// @brief Method get_Pose, addr 0xa47543c, size 0x14, virtual true, abstract: false, final true
inline ::UnityEngine::Pose get_Pose() ;

/// @brief Method get_Stopped, addr 0xa475450, size 0x8, virtual true, abstract: false, final true
inline bool get_Stopped() ;

/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* i___Oculus__Interaction__IMovement() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectPull() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectPull", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectPull(ObjectPull && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectPull", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectPull(ObjectPull const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15954};

/// @brief Field _speed, offset: 0x10, size: 0x4, def value: None
 float_t  ____speed;

/// @brief Field _deadZone, offset: 0x14, size: 0x4, def value: None
 float_t  ____deadZone;

/// @brief Field _current, offset: 0x18, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____current;

/// @brief Field _grabberStartPose, offset: 0x34, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____grabberStartPose;

/// @brief Field _grabbableStartPose, offset: 0x50, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____grabbableStartPose;

/// @brief Field _target, offset: 0x6c, size: 0x1c, def value: None
 ::UnityEngine::Pose  ____target;

/// @brief Field _pullingPlane, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Plane  ____pullingPlane;

/// @brief Field _translationDelta, offset: 0x98, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____translationDelta;

/// @brief Field _lastTime, offset: 0xa4, size: 0x4, def value: None
 float_t  ____lastTime;

/// @brief Field _originalDistance, offset: 0xa8, size: 0x4, def value: None
 float_t  ____originalDistance;

/// @brief Field _reachedGrabber, offset: 0xac, size: 0x1, def value: None
 bool  ____reachedGrabber;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ObjectPull, ____speed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ObjectPull, ____deadZone) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ObjectPull, ____current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ObjectPull, ____grabberStartPose) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ObjectPull, ____grabbableStartPose) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ObjectPull, ____target) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ObjectPull, ____pullingPlane) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ObjectPull, ____translationDelta) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ObjectPull, ____lastTime) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ObjectPull, ____originalDistance) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ObjectPull, ____reachedGrabber) == 0xac, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ObjectPull) == 0xb0, "Size mismatch!");

} // namespace end def Oculus::Interaction
