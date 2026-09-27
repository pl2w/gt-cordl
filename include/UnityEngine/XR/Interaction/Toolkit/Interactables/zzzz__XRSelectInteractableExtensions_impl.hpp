#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRSelectInteractableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRSelectInteractableExtensions_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__InteractorHandedness_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions.GetOldestInteractorSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions::GetOldestInteractorSelecting)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb4912f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions*>(),
                        {"GetOldestInteractorSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions.IsSelectedByLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions::IsSelectedByLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb491440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions*>(),
                        {"IsSelectedByLeft", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions.IsSelectedByRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions::IsSelectedByRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4915e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions*>(),
                        {"IsSelectedByRight", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions.IsSelectedBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions::IsSelectedBy)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb491448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions*>(),
                        {"IsSelectedBy", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions::GetOldestInteractorSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions*>(),
                        {"GetOldestInteractorSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(nullptr, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions::IsSelectedByLeft(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions*>(),
                        {"IsSelectedByLeft", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions::IsSelectedByRight(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions*>(),
                        {"IsSelectedByRight", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions::IsSelectedBy(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions*>(),
                        {"IsSelectedBy", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactable, handedness);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSelectInteractableExtensions::XRSelectInteractableExtensions()   {
}
