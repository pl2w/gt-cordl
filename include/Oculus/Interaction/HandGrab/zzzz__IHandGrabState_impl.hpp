#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/IHandGrabState.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabState_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandGrabTarget_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabState.get_IsGrabbing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::HandGrab::IHandGrabState::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabState::get_IsGrabbing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabState.get_FingersStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::IHandGrabState::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabState::get_FingersStrength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabState.get_WristStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::HandGrab::IHandGrabState::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabState::get_WristStrength)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabState.get_WristToGrabPoseOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::HandGrab::IHandGrabState::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabState::get_WristToGrabPoseOffset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabState.get_HandGrabTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::HandGrabTarget* (::Oculus::Interaction::HandGrab::IHandGrabState::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabState::get_HandGrabTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::IHandGrabState.GrabbingFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandFingerFlags (::Oculus::Interaction::HandGrab::IHandGrabState::*)()>(&::Oculus::Interaction::HandGrab::IHandGrabState::GrabbingFingers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(),
                    {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), 5}
                ));
    return ___internal_method;
  }
};
inline bool Oculus::Interaction::HandGrab::IHandGrabState::get_IsGrabbing()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Oculus::Interaction::HandGrab::IHandGrabState::get_FingersStrength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::HandGrab::IHandGrabState::get_WristStrength()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::HandGrab::IHandGrabState::get_WristToGrabPoseOffset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::HandGrabTarget* Oculus::Interaction::HandGrab::IHandGrabState::get_HandGrabTarget()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::HandGrabTarget*>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::HandFingerFlags Oculus::Interaction::HandGrab::IHandGrabState::GrabbingFingers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::HandGrab::IHandGrabState*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandFingerFlags>(this, ___internal_method);
}
