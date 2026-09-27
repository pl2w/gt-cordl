#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRInteractableSnapVolume.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRInteractableSnapVolume_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.get_interactionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::get_interactionManager)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49f86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"get_interactionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.set_interactionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::set_interactionManager)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb49f874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"set_interactionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.get_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::get_interactableObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49f9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"get_interactableObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.set_interactableObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)(::UnityEngine::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::set_interactableObject)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb49f9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.get_snapCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::get_snapCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49fb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"get_snapCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.set_snapCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::set_snapCollider)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb49fb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"set_snapCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.get_disableSnapColliderWhenSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::get_disableSnapColliderWhenSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49ff88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"get_disableSnapColliderWhenSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.set_disableSnapColliderWhenSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::set_disableSnapColliderWhenSelected)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb49ff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"set_disableSnapColliderWhenSelected", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.get_snapToCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::get_snapToCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a0020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"get_snapToCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.set_snapToCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::set_snapToCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a0028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"set_snapToCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.get_interactable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::get_interactable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a0030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"get_interactable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.set_interactable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::set_interactable)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb49fa64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"set_interactable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4a041c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::Awake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb4a0420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::OnEnable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4a05c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::OnDisable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4a0774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.FindCreateInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::FindCreateInteractionManager)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb4a06b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"FindCreateInteractionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.RegisterWithInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::RegisterWithInteractionManager)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb49f910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"RegisterWithInteractionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.UnregisterWithInteractionManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::UnregisterWithInteractionManager)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb49fca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"UnregisterWithInteractionManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.FindSnapCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Collider> (*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::FindSnapCollider)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb4a04b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"FindSnapCollider", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.SupportsTriggerCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::SupportsTriggerCollider)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb4a0834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"SupportsTriggerCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.ValidateSnapCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::ValidateSnapCollider)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb49fd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"ValidateSnapCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.SetSnapColliderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::SetSnapColliderEnabled)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb4a079c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"SetSnapColliderEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.GetClosestPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::GetClosestPoint)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xb4a096c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"GetClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.GetClosestPointOfAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::GetClosestPointOfAttachTransform)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xb4a0b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"GetClosestPointOfAttachTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.SetBoundInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::SetBoundInteractable)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0xb4a0038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"SetBoundInteractable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.RefreshSnapColliderEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::RefreshSnapColliderEnabled)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb49fec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"RefreshSnapColliderEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.OnFirstSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::OnFirstSelectEntered)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4a0d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"OnFirstSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume.OnLastSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::OnLastSelectExited)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4a0d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"OnLastSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4a0d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_InteractionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_InteractionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractionManager = value;
}
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_InteractableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_InteractableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractableObject;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_set_m_InteractableObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractableObject = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_SnapCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_SnapCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapCollider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_set_m_SnapCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SnapCollider = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_DisableSnapColliderWhenSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisableSnapColliderWhenSelected;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_DisableSnapColliderWhenSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisableSnapColliderWhenSelected;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_set_m_DisableSnapColliderWhenSelected(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DisableSnapColliderWhenSelected = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_SnapToCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapToCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_SnapToCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapToCollider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_set_m_SnapToCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SnapToCollider = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_Interactable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_Interactable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_set_m_Interactable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Interactable = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_BoundInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundInteractable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_BoundInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_set_m_BoundInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BoundInteractable = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_BoundSelectInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundSelectInteractable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_BoundSelectInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundSelectInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_set_m_BoundSelectInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BoundSelectInteractable = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_RegisteredInteractionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredInteractionManager;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_get_m_RegisteredInteractionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RegisteredInteractionManager;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::__cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RegisteredInteractionManager = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::get_interactionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"get_interactionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"set_interactionManager", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::get_interactableObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"get_interactableObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::set_interactableObject(::UnityEngine::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"set_interactableObject", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::get_snapCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"get_snapCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::set_snapCollider(::UnityEngine::Collider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"set_snapCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::get_disableSnapColliderWhenSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"get_disableSnapColliderWhenSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::set_disableSnapColliderWhenSelected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"set_disableSnapColliderWhenSelected", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::get_snapToCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"get_snapToCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::set_snapToCollider(::UnityEngine::Collider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"set_snapToCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::get_interactable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"get_interactable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::set_interactable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"set_interactable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::FindCreateInteractionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"FindCreateInteractionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::RegisterWithInteractionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"RegisterWithInteractionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::UnregisterWithInteractionManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"UnregisterWithInteractionManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Collider> UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::FindSnapCollider(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"FindSnapCollider", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Collider>>(nullptr, ___internal_method, gameObject);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::SupportsTriggerCollider(::UnityEngine::Collider*  col)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"SupportsTriggerCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, col);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::ValidateSnapCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"ValidateSnapCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::SetSnapColliderEnabled(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"SetSnapColliderEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::GetClosestPoint(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"GetClosestPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::GetClosestPointOfAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"GetClosestPointOfAttachTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::SetBoundInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"SetBoundInteractable", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::RefreshSnapColliderEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"RefreshSnapColliderEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::OnFirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"OnFirstSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::OnLastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {"OnLastSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume* UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume::XRInteractableSnapVolume()   {
}
