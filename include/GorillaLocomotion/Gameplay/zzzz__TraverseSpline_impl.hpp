#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/TraverseSpline.hpp"
#include "GlobalNamespace/zzzz__NetworkComponent_impl.hpp"
#include "GlobalNamespace/zzzz__SplineWalkerMode_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__TraverseSpline_def.hpp"
#include "GlobalNamespace/zzzz__BezierSpline_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TraverseSpline::*)()>(&::GorillaLocomotion::Gameplay::TraverseSpline::Awake)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cf150c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TraverseSpline::*)()>(&::GorillaLocomotion::Gameplay::TraverseSpline::FixedUpdate)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5cf1534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::Gameplay::TraverseSpline::*)()>(&::GorillaLocomotion::Gameplay::TraverseSpline::get_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cf1768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline.set_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TraverseSpline::*)(float_t)>(&::GorillaLocomotion::Gameplay::TraverseSpline::set_Data)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cf17c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                        {"set_Data", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline.WriteDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TraverseSpline::*)()>(&::GorillaLocomotion::Gameplay::TraverseSpline::WriteDataFusion)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5cf1820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline.ReadDataFusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TraverseSpline::*)()>(&::GorillaLocomotion::Gameplay::TraverseSpline::ReadDataFusion)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cf1838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TraverseSpline::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaLocomotion::Gameplay::TraverseSpline::WriteDataPUN)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cf18c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TraverseSpline::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GorillaLocomotion::Gameplay::TraverseSpline::ReadDataPUN)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cf1924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline.ReadDataShared
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TraverseSpline::*)()>(&::GorillaLocomotion::Gameplay::TraverseSpline::ReadDataShared)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5cf1854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                        {"ReadDataShared", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline.GetProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::Gameplay::TraverseSpline::*)()>(&::GorillaLocomotion::Gameplay::TraverseSpline::GetProgress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cf1980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                        {"GetProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline.GetCurrentSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::Gameplay::TraverseSpline::*)()>(&::GorillaLocomotion::Gameplay::TraverseSpline::GetCurrentSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cf1988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                        {"GetCurrentSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TraverseSpline::*)()>(&::GorillaLocomotion::Gameplay::TraverseSpline::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5cf1990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline.CopyBackingFieldsToState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TraverseSpline::*)(bool)>(&::GorillaLocomotion::Gameplay::TraverseSpline::CopyBackingFieldsToState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5cf19b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::TraverseSpline.CopyStateToBackingFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::TraverseSpline::*)()>(&::GorillaLocomotion::Gameplay::TraverseSpline::CopyStateToBackingFields)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cf19d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BezierSpline>& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_spline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr ::UnityW<::GlobalNamespace::BezierSpline> const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_spline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spline;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_spline(::UnityW<::GlobalNamespace::BezierSpline>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spline = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_speedMultiplierWhileHeld()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedMultiplierWhileHeld;
}
constexpr float_t const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_speedMultiplierWhileHeld() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___speedMultiplierWhileHeld;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_speedMultiplierWhileHeld(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___speedMultiplierWhileHeld = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_currentSpeedMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeedMultiplier;
}
constexpr float_t const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_currentSpeedMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentSpeedMultiplier;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_currentSpeedMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentSpeedMultiplier = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_acceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr float_t const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_acceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_acceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acceleration = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_deceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deceleration;
}
constexpr float_t const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_deceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deceleration;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_deceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deceleration = value;
}
constexpr bool& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_isHeldByLocalPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeldByLocalPlayer;
}
constexpr bool const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_isHeldByLocalPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isHeldByLocalPlayer;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_isHeldByLocalPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isHeldByLocalPlayer = value;
}
constexpr bool& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_lookForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookForward;
}
constexpr bool const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_lookForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lookForward;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_lookForward(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lookForward = value;
}
constexpr ::GlobalNamespace::SplineWalkerMode& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::SplineWalkerMode const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_mode(::GlobalNamespace::SplineWalkerMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_SplineProgressOffet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplineProgressOffet;
}
constexpr float_t const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_SplineProgressOffet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SplineProgressOffet;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_SplineProgressOffet(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SplineProgressOffet = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr float_t const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_progress(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_progressLerpStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressLerpStart;
}
constexpr float_t const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_progressLerpStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressLerpStart;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_progressLerpStart(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressLerpStart = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_progressLerpEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressLerpEnd;
}
constexpr float_t const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_progressLerpEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressLerpEnd;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_progressLerpEnd(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressLerpEnd = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_progressLerpStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressLerpStartTime;
}
constexpr float_t const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_progressLerpStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressLerpStartTime;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_progressLerpStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressLerpStartTime = value;
}
constexpr bool& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_goingForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goingForward;
}
constexpr bool const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_goingForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___goingForward;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_goingForward(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___goingForward = value;
}
constexpr bool& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_constantVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constantVelocity;
}
constexpr bool const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get_constantVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constantVelocity;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set_constantVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constantVelocity = value;
}
constexpr float_t& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get__Data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr float_t const& GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_get__Data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data;
}
constexpr void GorillaLocomotion::Gameplay::TraverseSpline::__cordl_internal_set__Data(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data = value;
}
inline void GorillaLocomotion::Gameplay::TraverseSpline::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::TraverseSpline::FixedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GorillaLocomotion::Gameplay::TraverseSpline::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::TraverseSpline::set_Data(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                        {"set_Data", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaLocomotion::Gameplay::TraverseSpline::WriteDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::TraverseSpline::ReadDataFusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::TraverseSpline::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaLocomotion::Gameplay::TraverseSpline::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GorillaLocomotion::Gameplay::TraverseSpline::ReadDataShared()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                        {"ReadDataShared", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GorillaLocomotion::Gameplay::TraverseSpline::GetProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                        {"GetProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GorillaLocomotion::Gameplay::TraverseSpline::GetCurrentSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                        {"GetCurrentSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::TraverseSpline::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::Gameplay::TraverseSpline::CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void GorillaLocomotion::Gameplay::TraverseSpline::CopyStateToBackingFields()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::TraverseSpline*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::Gameplay::TraverseSpline* GorillaLocomotion::Gameplay::TraverseSpline::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::Gameplay::TraverseSpline*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::Gameplay::TraverseSpline::TraverseSpline()   {
}
