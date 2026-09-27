#pragma once
// IWYU pragma private; include "Oculus/Interaction/IMovement.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IMovement.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::IMovement::*)()>(&::Oculus::Interaction::IMovement::get_Pose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IMovement*>(),
                    {::i2c::class_of<::Oculus::Interaction::IMovement*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IMovement.get_Stopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::IMovement::*)()>(&::Oculus::Interaction::IMovement::get_Stopped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IMovement*>(),
                    {::i2c::class_of<::Oculus::Interaction::IMovement*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IMovement.MoveTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IMovement::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::IMovement::MoveTo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IMovement*>(),
                    {::i2c::class_of<::Oculus::Interaction::IMovement*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IMovement.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IMovement::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::IMovement::UpdateTarget)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IMovement*>(),
                    {::i2c::class_of<::Oculus::Interaction::IMovement*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IMovement.StopAndSetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IMovement::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::IMovement::StopAndSetPose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IMovement*>(),
                    {::i2c::class_of<::Oculus::Interaction::IMovement*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IMovement.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IMovement::*)()>(&::Oculus::Interaction::IMovement::Tick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IMovement*>(),
                    {::i2c::class_of<::Oculus::Interaction::IMovement*>(), 5}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Pose Oculus::Interaction::IMovement::get_Pose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IMovement*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline bool Oculus::Interaction::IMovement::get_Stopped()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IMovement*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::IMovement::MoveTo(::UnityEngine::Pose  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IMovement*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::IMovement::UpdateTarget(::UnityEngine::Pose  target)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IMovement*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::IMovement::StopAndSetPose(::UnityEngine::Pose  pose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IMovement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::IMovement::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IMovement*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
