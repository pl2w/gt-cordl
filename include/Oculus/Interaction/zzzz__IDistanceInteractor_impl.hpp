#pragma once
// IWYU pragma private; include "Oculus/Interaction/IDistanceInteractor.hpp"
#include "Oculus/Interaction/zzzz__IDistanceInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "Oculus/Interaction/zzzz__IRelativeToRef_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IDistanceInteractor.get_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::IDistanceInteractor::*)()>(&::Oculus::Interaction::IDistanceInteractor::get_Origin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IDistanceInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::IDistanceInteractor*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IDistanceInteractor.get_HitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::IDistanceInteractor::*)()>(&::Oculus::Interaction::IDistanceInteractor::get_HitPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IDistanceInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::IDistanceInteractor*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::IDistanceInteractor.get_DistanceInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IRelativeToRef* (::Oculus::Interaction::IDistanceInteractor::*)()>(&::Oculus::Interaction::IDistanceInteractor::get_DistanceInteractable)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IDistanceInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::IDistanceInteractor*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Pose Oculus::Interaction::IDistanceInteractor::get_Origin()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IDistanceInteractor*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::IDistanceInteractor::get_HitPoint()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IDistanceInteractor*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::Oculus::Interaction::IRelativeToRef* Oculus::Interaction::IDistanceInteractor::get_DistanceInteractable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IDistanceInteractor*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IRelativeToRef*>(this, ___internal_method);
}
/// @brief Convert operator to "::Oculus::Interaction::IInteractorView"
constexpr  Oculus::Interaction::IDistanceInteractor::operator ::Oculus::Interaction::IInteractorView*() noexcept {
return static_cast<::Oculus::Interaction::IInteractorView*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IInteractorView"
constexpr ::Oculus::Interaction::IInteractorView* Oculus::Interaction::IDistanceInteractor::i___Oculus__Interaction__IInteractorView() noexcept {
return static_cast<::Oculus::Interaction::IInteractorView*>(static_cast<void*>(this));
}
