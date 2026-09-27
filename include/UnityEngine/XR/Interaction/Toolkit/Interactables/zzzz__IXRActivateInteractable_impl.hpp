#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/IXRActivateInteractable.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRActivateInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEvent_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable.get_activated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::get_activated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable.get_deactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* (::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::get_deactivated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable.OnActivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::OnActivated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable.OnDeactivated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::OnDeactivated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::get_activated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::get_deactivated()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable::i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRInteractable() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(static_cast<void*>(this));
}
