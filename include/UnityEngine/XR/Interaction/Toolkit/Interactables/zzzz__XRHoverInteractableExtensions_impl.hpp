#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRHoverInteractableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRHoverInteractableExtensions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__InteractorHandedness_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions.GetOldestInteractorHovering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor* (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions::GetOldestInteractorHovering)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb490ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions*>(),
                        {"GetOldestInteractorHovering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions.IsHoveredByLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions::IsHoveredByLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions*>(),
                        {"IsHoveredByLeft", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions.IsHoveredByRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions::IsHoveredByRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4912ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions*>(),
                        {"IsHoveredByRight", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions.IsHoveredBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions::IsHoveredBy)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb49114c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions*>(),
                        {"IsHoveredBy", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor* UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions::GetOldestInteractorHovering(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions*>(),
                        {"GetOldestInteractorHovering", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>(nullptr, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions::IsHoveredByLeft(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions*>(),
                        {"IsHoveredByLeft", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions::IsHoveredByRight(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions*>(),
                        {"IsHoveredByRight", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions::IsHoveredBy(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions*>(),
                        {"IsHoveredBy", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactable, handedness);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRHoverInteractableExtensions::XRHoverInteractableExtensions()   {
}
