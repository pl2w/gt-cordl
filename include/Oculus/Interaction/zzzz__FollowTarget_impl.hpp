#pragma once
// IWYU pragma private; include "Oculus/Interaction/FollowTarget.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/zzzz__FollowTarget_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::FollowTarget.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::FollowTarget::*)()>(&::Oculus::Interaction::FollowTarget::get_Pose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa473a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"get_Pose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FollowTarget.get_Stopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::FollowTarget::*)()>(&::Oculus::Interaction::FollowTarget::get_Stopped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa473b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"get_Stopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FollowTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FollowTarget::*)(float_t, ::UnityEngine::Transform*)>(&::Oculus::Interaction::FollowTarget::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa4739e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FollowTarget.ToLocal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::FollowTarget::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::FollowTarget::ToLocal)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa473b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"ToLocal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FollowTarget.ToWorld
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::FollowTarget::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::FollowTarget::ToWorld)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa473a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"ToWorld", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FollowTarget.MoveTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FollowTarget::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::FollowTarget::MoveTo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa473c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FollowTarget.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FollowTarget::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::FollowTarget::UpdateTarget)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa473ce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FollowTarget.StopAndSetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FollowTarget::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::FollowTarget::StopAndSetPose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa473f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::FollowTarget.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::FollowTarget::*)()>(&::Oculus::Interaction::FollowTarget::Tick)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa473d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::FollowTarget::__cordl_internal_get__speed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr float_t const& Oculus::Interaction::FollowTarget::__cordl_internal_get__speed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____speed;
}
constexpr void Oculus::Interaction::FollowTarget::__cordl_internal_set__speed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____speed = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::FollowTarget::__cordl_internal_get__space()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____space;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::FollowTarget::__cordl_internal_get__space() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____space;
}
constexpr void Oculus::Interaction::FollowTarget::__cordl_internal_set__space(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____space = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::FollowTarget::__cordl_internal_get__localTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localTarget;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::FollowTarget::__cordl_internal_get__localTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localTarget;
}
constexpr void Oculus::Interaction::FollowTarget::__cordl_internal_set__localTarget(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localTarget = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::FollowTarget::__cordl_internal_get__localPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPose;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::FollowTarget::__cordl_internal_get__localPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localPose;
}
constexpr void Oculus::Interaction::FollowTarget::__cordl_internal_set__localPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localPose = value;
}
constexpr float_t& Oculus::Interaction::FollowTarget::__cordl_internal_get__startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime;
}
constexpr float_t const& Oculus::Interaction::FollowTarget::__cordl_internal_get__startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime;
}
constexpr void Oculus::Interaction::FollowTarget::__cordl_internal_set__startTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime = value;
}
inline ::UnityEngine::Pose Oculus::Interaction::FollowTarget::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"get_Pose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline bool Oculus::Interaction::FollowTarget::get_Stopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"get_Stopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::FollowTarget::_ctor(float_t  speed, ::UnityEngine::Transform*  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed, space);
}
inline ::UnityEngine::Pose Oculus::Interaction::FollowTarget::ToLocal(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"ToLocal", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, pose);
}
inline ::UnityEngine::Pose Oculus::Interaction::FollowTarget::ToWorld(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"ToWorld", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::FollowTarget::MoveTo(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::FollowTarget::UpdateTarget(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::FollowTarget::StopAndSetPose(::UnityEngine::Pose  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Oculus::Interaction::FollowTarget::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::FollowTarget*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::FollowTarget* Oculus::Interaction::FollowTarget::New_ctor(float_t  speed, ::UnityEngine::Transform*  space)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::FollowTarget*>(speed, space));
}
/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr  Oculus::Interaction::FollowTarget::operator ::Oculus::Interaction::IMovement*() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* Oculus::Interaction::FollowTarget::i___Oculus__Interaction__IMovement() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::FollowTarget::FollowTarget()   {
}
