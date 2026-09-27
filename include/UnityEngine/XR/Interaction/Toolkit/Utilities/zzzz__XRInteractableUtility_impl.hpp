#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Utilities/XRInteractableUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__XRInteractableUtility_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__DistanceInfo_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__XRInteractableUtility_AllowTriggerCollidersScope_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility.get_allowTriggerColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::get_allowTriggerColliders)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb427268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>(),
                        {"get_allowTriggerColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility.set_allowTriggerColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::set_allowTriggerColliders)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb4272b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>(),
                        {"set_allowTriggerColliders", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility.TryGetClosestCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::TryGetClosestCollider)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0xb427300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>(),
                        {"TryGetClosestCollider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility.TryGetClosestPointOnCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>)>(&::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::TryGetClosestPointOnCollider)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xb41cd48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>(),
                        {"TryGetClosestPointOnCollider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::setStaticF__allowTriggerColliders_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<allowTriggerColliders>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>(std::forward<bool>(value));
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::getStaticF__allowTriggerColliders_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<allowTriggerColliders>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>();
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::get_allowTriggerColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>(),
                        {"get_allowTriggerColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::set_allowTriggerColliders(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>(),
                        {"set_allowTriggerColliders", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::TryGetClosestCollider(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>  distanceInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>(),
                        {"TryGetClosestCollider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactable, position, distanceInfo);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::TryGetClosestPointOnCollider(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>  distanceInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility*>(),
                        {"TryGetClosestPointOnCollider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactable, position, distanceInfo);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::XRInteractableUtility::XRInteractableUtility()   {
}
