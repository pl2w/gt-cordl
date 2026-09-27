#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/IGorillaGrabable.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__IGorillaGrabable_def.hpp"
#include "GlobalNamespace/zzzz__GorillaGrabber_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::IGorillaGrabable.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaLocomotion::Gameplay::IGorillaGrabable::*)()>(&::GorillaLocomotion::Gameplay::IGorillaGrabable::get_name)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::IGorillaGrabable.MomentaryGrabOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::IGorillaGrabable::*)()>(&::GorillaLocomotion::Gameplay::IGorillaGrabable::MomentaryGrabOnly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::IGorillaGrabable.CanBeGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaLocomotion::Gameplay::IGorillaGrabable::*)(::GlobalNamespace::GorillaGrabber*)>(&::GorillaLocomotion::Gameplay::IGorillaGrabable::CanBeGrabbed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::IGorillaGrabable.OnGrabbed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::IGorillaGrabable::*)(::GlobalNamespace::GorillaGrabber*, ::by_ref<::UnityEngine::Transform*>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaLocomotion::Gameplay::IGorillaGrabable::OnGrabbed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::Gameplay::IGorillaGrabable.OnGrabReleased
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::Gameplay::IGorillaGrabable::*)(::GlobalNamespace::GorillaGrabber*)>(&::GorillaLocomotion::Gameplay::IGorillaGrabable::OnGrabReleased)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(),
                    {::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(), 4}
                ));
    return ___internal_method;
  }
};
inline ::StringW GorillaLocomotion::Gameplay::IGorillaGrabable::get_name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GorillaLocomotion::Gameplay::IGorillaGrabable::MomentaryGrabOnly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GorillaLocomotion::Gameplay::IGorillaGrabable::CanBeGrabbed(::GlobalNamespace::GorillaGrabber*  grabber)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, grabber);
}
inline void GorillaLocomotion::Gameplay::IGorillaGrabable::OnGrabbed(::GlobalNamespace::GorillaGrabber*  grabber, ::by_ref<::UnityEngine::Transform*>  grabbedTransform, ::by_ref<::UnityEngine::Vector3>  localGrabbedPosition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabber, grabbedTransform, localGrabbedPosition);
}
inline void GorillaLocomotion::Gameplay::IGorillaGrabable::OnGrabReleased(::GlobalNamespace::GorillaGrabber*  grabber)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::Gameplay::IGorillaGrabable*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabber);
}
