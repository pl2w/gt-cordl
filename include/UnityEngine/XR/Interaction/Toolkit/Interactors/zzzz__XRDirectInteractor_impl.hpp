#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRDirectInteractor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRDirectInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRDirectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__TriggerContactMonitor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractableUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractorRegisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractorUnregisteredEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__SphereCollider_def.hpp"
#include "UnityEngine/zzzz__WaitForFixedUpdate_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.get_improveAccuracyWithSphereCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::get_improveAccuracyWithSphereCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46cb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"get_improveAccuracyWithSphereCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.set_improveAccuracyWithSphereCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::set_improveAccuracyWithSphereCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46cb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"set_improveAccuracyWithSphereCollider", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.get_usingSphereColliderAccuracyImprovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::get_usingSphereColliderAccuracyImprovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46cb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"get_usingSphereColliderAccuracyImprovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.get_physicsLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::get_physicsLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46cb88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"get_physicsLayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.set_physicsLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::UnityEngine::LayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::set_physicsLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46cb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"set_physicsLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.get_physicsTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::QueryTriggerInteraction (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::get_physicsTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46cb98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"get_physicsTriggerInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.set_physicsTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::set_physicsTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46cba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"set_physicsTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.get_unsortedValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::get_unsortedValidTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46cba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"get_unsortedValidTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::Awake)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb46cbb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnEnable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb46ce34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnDisable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb46d014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb46d124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnTriggerStay)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb46d148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnTriggerExit)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb46d1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.UpdateCollidersAfterOnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::UpdateCollidersAfterOnTriggerStay)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb46cc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"UpdateCollidersAfterOnTriggerStay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.PreprocessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::PreprocessInteractor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb46d200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.ProcessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::ProcessInteractor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb46d554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.EvaluateSphereOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::EvaluateSphereOverlap)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xb46d240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"EvaluateSphereOverlap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.ValidateColliderConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::ValidateColliderConfiguration)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xb46cc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"ValidateColliderConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.GetValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::GetValidTargets)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xb46d5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.CanHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::CanHover)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb46d7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.CanSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::CanSelect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb46d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.OnRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnRegistered)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb46d804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.OnUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnUnregistered)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb46d988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.OnInteractableRegistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnInteractableRegistered)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb46da90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnInteractableRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.OnInteractableUnregistered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnInteractableUnregistered)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb46dbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnInteractableUnregistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.OnContactAdded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnContactAdded)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb46daf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnContactAdded", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.OnContactRemoved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnContactRemoved)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb46dbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnContactRemoved", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor.ResetCollidersAndValidTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::ResetCollidersAndValidTargets)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb46cf44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"ResetCollidersAndValidTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::_ctor)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xb46dc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_ImproveAccuracyWithSphereCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ImproveAccuracyWithSphereCollider;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_ImproveAccuracyWithSphereCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ImproveAccuracyWithSphereCollider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_ImproveAccuracyWithSphereCollider(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ImproveAccuracyWithSphereCollider = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_PhysicsLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PhysicsLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_PhysicsLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PhysicsLayerMask;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_PhysicsLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PhysicsLayerMask = value;
}
constexpr ::UnityEngine::QueryTriggerInteraction& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_PhysicsTriggerInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PhysicsTriggerInteraction;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_PhysicsTriggerInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PhysicsTriggerInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_PhysicsTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PhysicsTriggerInteraction = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get__unsortedValidTargets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unsortedValidTargets_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get__unsortedValidTargets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unsortedValidTargets_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set__unsortedValidTargets_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unsortedValidTargets_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_StayedColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StayedColliders;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_StayedColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StayedColliders;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_StayedColliders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StayedColliders = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_TriggerContactMonitor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerContactMonitor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_TriggerContactMonitor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TriggerContactMonitor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_TriggerContactMonitor(::UnityEngine::XR::Interaction::Toolkit::Utilities::TriggerContactMonitor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TriggerContactMonitor = value;
}
constexpr ::System::Collections::IEnumerator*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_UpdateCollidersAfterTriggerStay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateCollidersAfterTriggerStay;
}
constexpr ::System::Collections::IEnumerator* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_UpdateCollidersAfterTriggerStay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateCollidersAfterTriggerStay;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_UpdateCollidersAfterTriggerStay(::System::Collections::IEnumerator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdateCollidersAfterTriggerStay = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_UsingSphereColliderAccuracyImprovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsingSphereColliderAccuracyImprovement;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_UsingSphereColliderAccuracyImprovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsingSphereColliderAccuracyImprovement;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_UsingSphereColliderAccuracyImprovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UsingSphereColliderAccuracyImprovement = value;
}
constexpr ::UnityW<::UnityEngine::SphereCollider>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_SphereCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCollider;
}
constexpr ::UnityW<::UnityEngine::SphereCollider> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_SphereCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCollider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_SphereCollider(::UnityW<::UnityEngine::SphereCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SphereCollider = value;
}
constexpr ::UnityEngine::PhysicsScene& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_LocalPhysicsScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr ::UnityEngine::PhysicsScene const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_LocalPhysicsScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalPhysicsScene = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_LastSphereCastOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastSphereCastOrigin;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_LastSphereCastOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastSphereCastOrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_LastSphereCastOrigin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastSphereCastOrigin = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_OverlapSphereHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverlapSphereHits;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_OverlapSphereHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverlapSphereHits;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_OverlapSphereHits(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverlapSphereHits = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_SphereCastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_SphereCastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastHits;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_SphereCastHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SphereCastHits = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_FirstFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_FirstFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_FirstFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FirstFrame = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_ContactsSortedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ContactsSortedThisFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_ContactsSortedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ContactsSortedThisFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_ContactsSortedThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ContactsSortedThisFrame = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_SortedValidTargets()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortedValidTargets;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_get_m_SortedValidTargets() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SortedValidTargets;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::__cordl_internal_set_m_SortedValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SortedValidTargets = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::setStaticF_s_WaitForFixedUpdate(::UnityEngine::WaitForFixedUpdate*  value)  {
::cordl_internals::setStaticField<::UnityEngine::WaitForFixedUpdate*, "s_WaitForFixedUpdate", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(std::forward<::UnityEngine::WaitForFixedUpdate*>(value));
}
inline ::UnityEngine::WaitForFixedUpdate* UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::getStaticF_s_WaitForFixedUpdate()  {
return ::cordl_internals::getStaticField<::UnityEngine::WaitForFixedUpdate*, "s_WaitForFixedUpdate", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>();
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::get_improveAccuracyWithSphereCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"get_improveAccuracyWithSphereCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::set_improveAccuracyWithSphereCollider(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"set_improveAccuracyWithSphereCollider", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::get_usingSphereColliderAccuracyImprovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"get_usingSphereColliderAccuracyImprovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::get_physicsLayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"get_physicsLayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::set_physicsLayerMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"set_physicsLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::QueryTriggerInteraction UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::get_physicsTriggerInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"get_physicsTriggerInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryTriggerInteraction>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::set_physicsTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"set_physicsTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::get_unsortedValidTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"get_unsortedValidTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnTriggerStay(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnTriggerStay", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::UpdateCollidersAfterOnTriggerStay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"UpdateCollidersAfterOnTriggerStay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::EvaluateSphereOverlap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"EvaluateSphereOverlap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::ValidateColliderConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"ValidateColliderConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnInteractableRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnInteractableRegistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnInteractableUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnInteractableUnregistered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnContactAdded(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnContactAdded", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::OnContactRemoved(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"OnContactRemoved", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::ResetCollidersAndValidTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {"ResetCollidersAndValidTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor::XRDirectInteractor()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb46d1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb46dee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::MoveNext)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb46deec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46dfa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb46dfb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46dfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::__cordl_internal_set___4__this(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36* UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36::XRDirectInteractor__UpdateCollidersAfterOnTriggerStay_d__36()   {
}
