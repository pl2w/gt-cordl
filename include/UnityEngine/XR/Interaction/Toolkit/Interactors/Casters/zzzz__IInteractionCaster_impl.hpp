#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/IInteractionCaster.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__IInteractionCaster_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster.get_isInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::get_isInitialized)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster.get_castOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::get_castOrigin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster.set_castOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::set_castOrigin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster.get_effectiveCastOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::get_effectiveCastOrigin)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster.TryGetColliderTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::TryGetColliderTargets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(), 4}
                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::get_isInitialized()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::get_castOrigin()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::set_castOrigin(::UnityEngine::Transform*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::get_effectiveCastOrigin()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster::TryGetColliderTargets(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactionManager, targets);
}
