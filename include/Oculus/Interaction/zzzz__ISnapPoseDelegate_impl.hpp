#pragma once
// IWYU pragma private; include "Oculus/Interaction/ISnapPoseDelegate.hpp"
#include "Oculus/Interaction/zzzz__ISnapPoseDelegate_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::ISnapPoseDelegate.TrackElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ISnapPoseDelegate::*)(int32_t, ::UnityEngine::Pose)>(&::Oculus::Interaction::ISnapPoseDelegate::TrackElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ISnapPoseDelegate.UntrackElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ISnapPoseDelegate::*)(int32_t)>(&::Oculus::Interaction::ISnapPoseDelegate::UntrackElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ISnapPoseDelegate.SnapElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ISnapPoseDelegate::*)(int32_t, ::UnityEngine::Pose)>(&::Oculus::Interaction::ISnapPoseDelegate::SnapElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ISnapPoseDelegate.UnsnapElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ISnapPoseDelegate::*)(int32_t)>(&::Oculus::Interaction::ISnapPoseDelegate::UnsnapElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ISnapPoseDelegate.MoveTrackedElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::ISnapPoseDelegate::*)(int32_t, ::UnityEngine::Pose)>(&::Oculus::Interaction::ISnapPoseDelegate::MoveTrackedElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::ISnapPoseDelegate.SnapPoseForElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::ISnapPoseDelegate::*)(int32_t, ::UnityEngine::Pose, ::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::ISnapPoseDelegate::SnapPoseForElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(),
                    {::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::ISnapPoseDelegate::TrackElement(int32_t  id, ::UnityEngine::Pose  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, p);
}
inline void Oculus::Interaction::ISnapPoseDelegate::UntrackElement(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Oculus::Interaction::ISnapPoseDelegate::SnapElement(int32_t  id, ::UnityEngine::Pose  pose)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, pose);
}
inline void Oculus::Interaction::ISnapPoseDelegate::UnsnapElement(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void Oculus::Interaction::ISnapPoseDelegate::MoveTrackedElement(int32_t  id, ::UnityEngine::Pose  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, p);
}
inline bool Oculus::Interaction::ISnapPoseDelegate::SnapPoseForElement(int32_t  id, ::UnityEngine::Pose  pose, ::by_ref<::UnityEngine::Pose>  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::ISnapPoseDelegate*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, pose, result);
}
