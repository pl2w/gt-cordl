#pragma once
// IWYU pragma private; include "GorillaLocomotion/Climbing/GorillaClimbable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaClimbable_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaClimbableRef_def.hpp"
#include "GorillaLocomotion/Climbing/zzzz__GorillaHandClimber_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaClimbable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaClimbable::*)()>(&::GorillaLocomotion::Climbing::GorillaClimbable::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cf3584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaClimbable*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Climbing::GorillaClimbable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Climbing::GorillaClimbable::*)()>(&::GorillaLocomotion::Climbing::GorillaClimbable::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cf35dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaClimbable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_snapX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapX;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_snapX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapX;
}
constexpr void GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_set_snapX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapX = value;
}
constexpr bool& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_snapY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapY;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_snapY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapY;
}
constexpr void GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_set_snapY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapY = value;
}
constexpr bool& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_snapZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapZ;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_snapZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___snapZ;
}
constexpr void GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_set_snapZ(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___snapZ = value;
}
constexpr float_t& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_maxDistanceSnap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceSnap;
}
constexpr float_t const& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_maxDistanceSnap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistanceSnap;
}
constexpr void GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_set_maxDistanceSnap(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistanceSnap = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_clip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_clip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clip;
}
constexpr void GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_set_clip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clip = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_clipOnFullRelease()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipOnFullRelease;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_clipOnFullRelease() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipOnFullRelease;
}
constexpr void GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_set_clipOnFullRelease(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipOnFullRelease = value;
}
constexpr ::System::Action_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,::UnityW<::GorillaLocomotion::Climbing::GorillaClimbableRef>>*& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_onBeforeClimb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBeforeClimb;
}
constexpr ::System::Action_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,::UnityW<::GorillaLocomotion::Climbing::GorillaClimbableRef>>* const& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_onBeforeClimb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onBeforeClimb;
}
constexpr void GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_set_onBeforeClimb(::System::Action_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,::UnityW<::GorillaLocomotion::Climbing::GorillaClimbableRef>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onBeforeClimb = value;
}
constexpr bool& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_climbOnlyWhileSmall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climbOnlyWhileSmall;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_climbOnlyWhileSmall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___climbOnlyWhileSmall;
}
constexpr void GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_set_climbOnlyWhileSmall(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___climbOnlyWhileSmall = value;
}
constexpr bool& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_IsPlayerAttached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPlayerAttached;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_IsPlayerAttached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsPlayerAttached;
}
constexpr void GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_set_IsPlayerAttached(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsPlayerAttached = value;
}
constexpr bool& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_isBeingClimbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBeingClimbed;
}
constexpr bool const& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_isBeingClimbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isBeingClimbed;
}
constexpr void GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_set_isBeingClimbed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isBeingClimbed = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_colliderCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderCache;
}
constexpr ::UnityW<::UnityEngine::Collider> const& GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_get_colliderCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colliderCache;
}
constexpr void GorillaLocomotion::Climbing::GorillaClimbable::__cordl_internal_set_colliderCache(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colliderCache = value;
}
inline void GorillaLocomotion::Climbing::GorillaClimbable::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaClimbable*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Climbing::GorillaClimbable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Climbing::GorillaClimbable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Climbing::GorillaClimbable* GorillaLocomotion::Climbing::GorillaClimbable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Climbing::GorillaClimbable*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Climbing::GorillaClimbable::GorillaClimbable()   {
}
