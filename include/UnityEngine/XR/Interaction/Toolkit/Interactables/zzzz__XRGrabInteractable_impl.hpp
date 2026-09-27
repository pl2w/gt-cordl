#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRGrabInteractable.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractableFarAttachMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_MovementType_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_impl.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__RigidbodyInterpolation_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRGrabInteractable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__IFarAttachProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Attachment/zzzz__InteractableFarAttachMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Gaze/zzzz__IXRAimAssist_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_MovementType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRGrabInteractable_AttachPointCompatibilityMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRGrabInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__DropEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__IXRGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__BaseRegistrationList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__SmallRegistrationList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__TeleportationMonitor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_attachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_attachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_attachTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_attachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_attachTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb495c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_attachTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_secondaryAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_secondaryAttachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_secondaryAttachTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_secondaryAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_secondaryAttachTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb495c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_secondaryAttachTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_useDynamicAttach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_useDynamicAttach)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_useDynamicAttach", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_useDynamicAttach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_useDynamicAttach)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_useDynamicAttach", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_matchAttachPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_matchAttachPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_matchAttachPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_matchAttachPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_matchAttachPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_matchAttachPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_matchAttachRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_matchAttachRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_matchAttachRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_matchAttachRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_matchAttachRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_matchAttachRotation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_snapToColliderVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_snapToColliderVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_snapToColliderVolume", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_snapToColliderVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_snapToColliderVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_snapToColliderVolume", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_reinitializeDynamicAttachEverySingleGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_reinitializeDynamicAttachEverySingleGrab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_reinitializeDynamicAttachEverySingleGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_reinitializeDynamicAttachEverySingleGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_reinitializeDynamicAttachEverySingleGrab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_reinitializeDynamicAttachEverySingleGrab", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_attachEaseInTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_attachEaseInTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_attachEaseInTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_attachEaseInTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_attachEaseInTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_attachEaseInTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_movementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRBaseInteractable_MovementType (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_movementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_movementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_movementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::GlobalNamespace::XRBaseInteractable_MovementType)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_movementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb495cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_movementType", {}, {::i2c::type_of<::GlobalNamespace::XRBaseInteractable_MovementType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_predictedVisualsTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_predictedVisualsTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4960b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_predictedVisualsTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_predictedVisualsTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_predictedVisualsTransform)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4960c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_predictedVisualsTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_velocityDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_velocityDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4960d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_velocityDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_velocityDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_velocityDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4960d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_velocityDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_velocityScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_velocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4960e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_velocityScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_velocityScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_velocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4960e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_velocityScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_angularVelocityDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_angularVelocityDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4960f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_angularVelocityDamping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_angularVelocityDamping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_angularVelocityDamping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4960f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_angularVelocityDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_angularVelocityScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_angularVelocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_angularVelocityScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_angularVelocityScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_angularVelocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_angularVelocityScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_trackPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_trackPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_trackPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_trackPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_trackPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_trackPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_smoothPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_smoothPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_smoothPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_smoothPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_smoothPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_smoothPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_smoothPositionAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_smoothPositionAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_smoothPositionAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_smoothPositionAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_smoothPositionAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_smoothPositionAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_tightenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_tightenPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_tightenPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_tightenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_tightenPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_tightenPosition", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_trackRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_trackRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_trackRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_trackRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_trackRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_trackRotation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_smoothRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_smoothRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_smoothRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_smoothRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_smoothRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_smoothRotation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_smoothRotationAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_smoothRotationAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_smoothRotationAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_smoothRotationAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_smoothRotationAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_smoothRotationAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_tightenRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_tightenRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_tightenRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_tightenRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_tightenRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_tightenRotation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_trackScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_trackScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_trackScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_trackScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_trackScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_trackScale", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_smoothScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_smoothScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4961a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_smoothScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_smoothScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_smoothScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4961a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_smoothScale", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_smoothScaleAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_smoothScaleAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4961b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_smoothScaleAmount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_smoothScaleAmount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_smoothScaleAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4961b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_smoothScaleAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_tightenScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_tightenScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4961c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_tightenScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_tightenScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_tightenScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4961c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_tightenScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_throwOnDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_throwOnDetach)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4961d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_throwOnDetach", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_throwOnDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_throwOnDetach)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4961d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_throwOnDetach", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_throwSmoothingDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_throwSmoothingDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4961e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_throwSmoothingDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_throwSmoothingDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_throwSmoothingDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4961e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_throwSmoothingDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_throwSmoothingCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_throwSmoothingCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4961f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_throwSmoothingCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_throwSmoothingCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_throwSmoothingCurve)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4961f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_throwSmoothingCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_throwVelocityScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_throwVelocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_throwVelocityScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_throwVelocityScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_throwVelocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_throwVelocityScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_throwAngularVelocityScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_throwAngularVelocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_throwAngularVelocityScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_throwAngularVelocityScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_throwAngularVelocityScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_throwAngularVelocityScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_forceGravityOnDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_forceGravityOnDetach)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_forceGravityOnDetach", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_forceGravityOnDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_forceGravityOnDetach)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_forceGravityOnDetach", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_retainTransformParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_retainTransformParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_retainTransformParent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_retainTransformParent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_retainTransformParent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_retainTransformParent", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_startingSingleGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_startingSingleGrabTransformers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_startingSingleGrabTransformers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_startingSingleGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_startingSingleGrabTransformers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb496250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_startingSingleGrabTransformers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_startingMultipleGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_startingMultipleGrabTransformers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_startingMultipleGrabTransformers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_startingMultipleGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_startingMultipleGrabTransformers)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb496268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_startingMultipleGrabTransformers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_addDefaultGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_addDefaultGrabTransformers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_addDefaultGrabTransformers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_addDefaultGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_addDefaultGrabTransformers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_addDefaultGrabTransformers", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_farAttachMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_farAttachMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_farAttachMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_farAttachMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_farAttachMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_farAttachMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_limitLinearVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_limitLinearVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb496298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_limitLinearVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_limitLinearVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_limitLinearVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4962a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_limitLinearVelocity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_limitAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_limitAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4962a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_limitAngularVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_limitAngularVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_limitAngularVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4962b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_limitAngularVelocity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_maxLinearVelocityDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_maxLinearVelocityDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4962b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_maxLinearVelocityDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_maxLinearVelocityDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_maxLinearVelocityDelta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4962c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_maxLinearVelocityDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_maxAngularVelocityDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_maxAngularVelocityDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4962d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_maxAngularVelocityDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_maxAngularVelocityDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_maxAngularVelocityDelta)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4962dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_maxAngularVelocityDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_isRigidbodyMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_isRigidbodyMovement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4962f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_isRigidbodyMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_singleGrabTransformersCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_singleGrabTransformersCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb496300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_singleGrabTransformersCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_multipleGrabTransformersCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_multipleGrabTransformersCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb496350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_multipleGrabTransformersCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_allowVisualAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_allowVisualAttachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4963a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_allowVisualAttachTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_allowVisualAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_allowVisualAttachTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4963a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_allowVisualAttachTransform", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_isTransformDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_isTransformDirty)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4963b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_isTransformDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_isTransformDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_isTransformDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4963d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_isTransformDirty", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::Reset)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xb4963dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::Awake)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xb496584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4972f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 70}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.OnCollisionStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnCollisionStay)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb497324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 116}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.ProcessInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ProcessInteractable)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0xb497330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.GetAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetAttachTransform)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0xb498e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.AddSingleGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::AddSingleGrabTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb499190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"AddSingleGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.AddMultipleGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::AddMultipleGrabTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4992d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"AddMultipleGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.RemoveSingleGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::RemoveSingleGrabTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4992dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"RemoveSingleGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.RemoveMultipleGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::RemoveMultipleGrabTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb499334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"RemoveMultipleGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.ClearSingleGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ClearSingleGrabTransformers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb497314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ClearSingleGrabTransformers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.ClearMultipleGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ClearMultipleGrabTransformers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49731c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ClearMultipleGrabTransformers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.GetSingleGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetSingleGrabTransformers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb4993cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetSingleGrabTransformers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.GetMultipleGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetMultipleGrabTransformers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb49949c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetMultipleGrabTransformers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.GetSingleGrabTransformerAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetSingleGrabTransformerAt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb499504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetSingleGrabTransformerAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.GetMultipleGrabTransformerAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetMultipleGrabTransformerAt)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb499520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetMultipleGrabTransformerAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.MoveSingleGrabTransformerTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::MoveSingleGrabTransformerTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49953c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"MoveSingleGrabTransformerTo", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.MoveMultipleGrabTransformerTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::MoveMultipleGrabTransformerTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4996b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"MoveMultipleGrabTransformerTo", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.GetTargetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetTargetPose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4996bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetTargetPose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.SetTargetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Pose)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::SetTargetPose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb4996d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"SetTargetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.GetTargetLocalScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetTargetLocalScale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb49974c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetTargetLocalScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.SetTargetLocalScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::SetTargetLocalScale)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb49975c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"SetTargetLocalScale", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.InitializeTargetPoseAndScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InitializeTargetPoseAndScale)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb496818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"InitializeTargetPoseAndScale", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.AddGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*, ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::AddGrabTransformer)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb499198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"AddGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.RemoveGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*, ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::RemoveGrabTransformer)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb4992e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"RemoveGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.ClearGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ClearGrabTransformers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb49933c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ClearGrabTransformers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.GetGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetGrabTransformers)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb499434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetGrabTransformers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.MoveGrabTransformerTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*, int32_t, ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::MoveGrabTransformerTo)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb499544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"MoveGrabTransformerTo", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.FindStartingGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::FindStartingGrabTransformers)> {
  constexpr static std::size_t size = 0x5d0;
  constexpr static std::size_t addrs = 0xb496890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"FindStartingGrabTransformers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.RegisterStartingGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::RegisterStartingGrabTransformers)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0xb496e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"RegisterStartingGrabTransformers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.FlushRegistration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::FlushRegistration)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb4972bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"FlushRegistration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.InvokeGrabTransformersOnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InvokeGrabTransformersOnGrab)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0xb499b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"InvokeGrabTransformersOnGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.InvokeGrabTransformersOnDrop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InvokeGrabTransformersOnDrop)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0xb499e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"InvokeGrabTransformersOnDrop", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.InvokeGrabTransformersProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InvokeGrabTransformersProcess)> {
  constexpr static std::size_t size = 0x10e0;
  constexpr static std::size_t addrs = 0xb49a224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"InvokeGrabTransformersProcess", {}, {::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.CanProcessAnySingleGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::CanProcessAnySingleGrabTransformer)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xb49b304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"CanProcessAnySingleGrabTransformer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.OnAddedGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnAddedGrabTransformer)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0xb4997dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnAddedGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.OnRemovedGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnRemovedGrabTransformer)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb499a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnRemovedGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.AddDefaultGrabTransformers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::AddDefaultGrabTransformers)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb49762c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"AddDefaultGrabTransformers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.AddDefaultSingleGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::AddDefaultSingleGrabTransformer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb49b51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 117}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.AddDefaultMultipleGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::AddDefaultMultipleGrabTransformer)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb49b5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 118}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.GetOrAddDefaultGrabTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetOrAddDefaultGrabTransformer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb49b594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetOrAddDefaultGrabTransformer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::UpdateTarget)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0xb497f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.StepSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::StepSmoothing)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb49b948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"StepSmoothing", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.EaseAttachBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::EaseAttachBurst)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb495c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"EaseAttachBurst", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.StepSmoothingBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, float_t, bool, float_t, float_t, bool, float_t, float_t, bool, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::StepSmoothingBurst)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb495c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"StepSmoothingBurst", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.PerformInstantaneousUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::PerformInstantaneousUpdate)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb497ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"PerformInstantaneousUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.PerformKinematicUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::PerformKinematicUpdate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb49774c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"PerformKinematicUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.PerformVelocityTrackingUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::PerformVelocityTrackingUpdate)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0xb4977b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"PerformVelocityTrackingUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.PerformVelocityVisualsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::PerformVelocityVisualsUpdate)> {
  constexpr static std::size_t size = 0x578;
  constexpr static std::size_t addrs = 0xb498224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"PerformVelocityVisualsUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.PerformKinematicVisualsUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::PerformKinematicVisualsUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb498194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"PerformKinematicVisualsUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.ApplyVisuals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Pose)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ApplyVisuals)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb49bd64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ApplyVisuals", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.ApplyTargetScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ApplyTargetScale)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb497710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ApplyTargetScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.PerformVisualAttachUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::PerformVisualAttachUpdate)> {
  constexpr static std::size_t size = 0x524;
  constexpr static std::size_t addrs = 0xb49879c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"PerformVisualAttachUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.UpdateCurrentMovementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::UpdateCurrentMovementType)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xb495cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"UpdateCurrentMovementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.OnHoverEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnHoverEntering)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb49bf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 82}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.OnSelectEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnSelectEntering)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0xb49bf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 86}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.OnSelectExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnSelectExiting)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0xb49c810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 88}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnSelectExited)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb49cb48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.CreateDynamicAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::CreateDynamicAttachTransform)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb49c428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"CreateDynamicAttachTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.CreateVisualAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::CreateVisualAttachTransform)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb49c50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"CreateVisualAttachTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.InitializeDynamicAttachPoseInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InitializeDynamicAttachPoseInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb49b654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"InitializeDynamicAttachPoseInternal", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.InitializeDynamicAttachPoseWithStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InitializeDynamicAttachPoseWithStatic)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xb49cbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"InitializeDynamicAttachPoseWithStatic", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.ReleaseDynamicAttachTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ReleaseDynamicAttachTransform)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb49cb84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ReleaseDynamicAttachTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.ShouldMatchAttachPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ShouldMatchAttachPosition)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb49cf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 119}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.ShouldMatchAttachRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ShouldMatchAttachRotation)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb49cfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 120}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.ShouldSnapToColliderVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ShouldSnapToColliderVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49d078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 121}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.InitializeDynamicAttachPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, ::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InitializeDynamicAttachPose)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb49d080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 122}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.Grab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::Grab)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xb49d274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 123}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.Drop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::Drop)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb49d4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 124}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.Detach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::Detach)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0xb49d704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 125}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.SetupRigidbodyGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Rigidbody*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::SetupRigidbodyGrab)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb49da3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 126}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.SetupRigidbodyDrop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Rigidbody*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::SetupRigidbodyDrop)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb49db6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 127}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.ResetThrowSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ResetThrowSmoothing)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb49c5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ResetThrowSmoothing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.EndThrowSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::EndThrowSmoothing)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb49d684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"EndThrowSmoothing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.StepThrowSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Pose, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::StepThrowSmoothing)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xb49b690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"StepThrowSmoothing", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.GetSmoothedVelocityValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetSmoothedVelocityValue)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xb49dc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetSmoothedVelocityValue", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.SubscribeTeleportationProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::SubscribeTeleportationProvider)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb49c7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"SubscribeTeleportationProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.UnsubscribeTeleportationProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::UnsubscribeTeleportationProvider)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb49cb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"UnsubscribeTeleportationProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.OnTeleported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Pose)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnTeleported)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb49de88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnTeleported", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.StartIgnoringCharacterCollision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::StartIgnoringCharacterCollision)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb49c658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"StartIgnoringCharacterCollision", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.IsOutsideCharacterCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::IsOutsideCharacterCollider)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xb497c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"IsOutsideCharacterCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.StopIgnoringCharacterCollision
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::UnityEngine::Collider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::StopIgnoringCharacterCollision)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xb498cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"StopIgnoringCharacterCollision", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.OnCreatePooledItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnCreatePooledItem)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb49e044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnCreatePooledItem", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.OnGetPooledItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnGetPooledItem)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb49e154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnGetPooledItem", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.OnReleasePooledItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnReleasePooledItem)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb49e1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnReleasePooledItem", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.OnDestroyPooledItem
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnDestroyPooledItem)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb49e27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnDestroyPooledItem", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_attachPointCompatibilityMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_attachPointCompatibilityMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb49e320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_attachPointCompatibilityMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_attachPointCompatibilityMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_attachPointCompatibilityMode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb49e39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_attachPointCompatibilityMode", {}, {::i2c::type_of<::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.get_gravityOnDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_gravityOnDetach)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb49e418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_gravityOnDetach", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.set_gravityOnDetach
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_gravityOnDetach)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb49e494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_gravityOnDetach", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::_ctor)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xb49e510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable._ReleaseDynamicAttachTransform_g__Release_303_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::_ReleaseDynamicAttachTransform_g__Release_303_0)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb49cdd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"<ReleaseDynamicAttachTransform>g__Release|303_0", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.EaseAttachBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::EaseAttachBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xb49ebb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"EaseAttachBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable.StepSmoothingBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, float_t, bool, float_t, float_t, bool, float_t, float_t, bool, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::StepSmoothingBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0xb49ed58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"StepSmoothingBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_AttachTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_AttachTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_AttachTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AttachTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SecondaryAttachTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryAttachTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SecondaryAttachTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SecondaryAttachTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_SecondaryAttachTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SecondaryAttachTransform = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_UseDynamicAttach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseDynamicAttach;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_UseDynamicAttach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseDynamicAttach;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_UseDynamicAttach(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseDynamicAttach = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_MatchAttachPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MatchAttachPosition;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_MatchAttachPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MatchAttachPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_MatchAttachPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MatchAttachPosition = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_MatchAttachRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MatchAttachRotation;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_MatchAttachRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MatchAttachRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_MatchAttachRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MatchAttachRotation = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SnapToColliderVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapToColliderVolume;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SnapToColliderVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapToColliderVolume;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_SnapToColliderVolume(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SnapToColliderVolume = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ReinitializeDynamicAttachEverySingleGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReinitializeDynamicAttachEverySingleGrab;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ReinitializeDynamicAttachEverySingleGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReinitializeDynamicAttachEverySingleGrab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_ReinitializeDynamicAttachEverySingleGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReinitializeDynamicAttachEverySingleGrab = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_AttachEaseInTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachEaseInTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_AttachEaseInTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttachEaseInTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_AttachEaseInTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AttachEaseInTime = value;
}
constexpr ::GlobalNamespace::XRBaseInteractable_MovementType& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_MovementType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MovementType;
}
constexpr ::GlobalNamespace::XRBaseInteractable_MovementType const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_MovementType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MovementType;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_MovementType(::GlobalNamespace::XRBaseInteractable_MovementType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MovementType = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_PredictedVisualsTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PredictedVisualsTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_PredictedVisualsTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PredictedVisualsTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_PredictedVisualsTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PredictedVisualsTransform = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_VelocityDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VelocityDamping;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_VelocityDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VelocityDamping;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_VelocityDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VelocityDamping = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_VelocityScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VelocityScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_VelocityScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VelocityScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_VelocityScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VelocityScale = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_AngularVelocityDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngularVelocityDamping;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_AngularVelocityDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngularVelocityDamping;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_AngularVelocityDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AngularVelocityDamping = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_AngularVelocityScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngularVelocityScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_AngularVelocityScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngularVelocityScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_AngularVelocityScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AngularVelocityScale = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TrackPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackPosition;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TrackPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_TrackPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TrackPosition = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SmoothPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothPosition;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SmoothPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_SmoothPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothPosition = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SmoothPositionAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothPositionAmount;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SmoothPositionAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothPositionAmount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_SmoothPositionAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothPositionAmount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TightenPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TightenPosition;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TightenPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TightenPosition;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_TightenPosition(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TightenPosition = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TrackRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackRotation;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TrackRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_TrackRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TrackRotation = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SmoothRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothRotation;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SmoothRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_SmoothRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothRotation = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SmoothRotationAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothRotationAmount;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SmoothRotationAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothRotationAmount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_SmoothRotationAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothRotationAmount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TightenRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TightenRotation;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TightenRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TightenRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_TightenRotation(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TightenRotation = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TrackScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackScale;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TrackScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_TrackScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TrackScale = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SmoothScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothScale;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SmoothScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_SmoothScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothScale = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SmoothScaleAmount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothScaleAmount;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SmoothScaleAmount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothScaleAmount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_SmoothScaleAmount(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothScaleAmount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TightenScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TightenScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TightenScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TightenScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_TightenScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TightenScale = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowOnDetach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowOnDetach;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowOnDetach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowOnDetach;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_ThrowOnDetach(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThrowOnDetach = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThrowSmoothingDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingCurve;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThrowSmoothingCurve = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowVelocityScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowVelocityScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowVelocityScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowVelocityScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_ThrowVelocityScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThrowVelocityScale = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowAngularVelocityScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowAngularVelocityScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowAngularVelocityScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowAngularVelocityScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_ThrowAngularVelocityScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThrowAngularVelocityScale = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ForceGravityOnDetach()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ForceGravityOnDetach;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ForceGravityOnDetach() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ForceGravityOnDetach;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_ForceGravityOnDetach(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ForceGravityOnDetach = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_RetainTransformParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RetainTransformParent;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_RetainTransformParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RetainTransformParent;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_RetainTransformParent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RetainTransformParent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_StartingSingleGrabTransformers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingSingleGrabTransformers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_StartingSingleGrabTransformers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingSingleGrabTransformers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_StartingSingleGrabTransformers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartingSingleGrabTransformers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_StartingMultipleGrabTransformers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingMultipleGrabTransformers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_StartingMultipleGrabTransformers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartingMultipleGrabTransformers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_StartingMultipleGrabTransformers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartingMultipleGrabTransformers = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_AddDefaultGrabTransformers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddDefaultGrabTransformers;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_AddDefaultGrabTransformers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AddDefaultGrabTransformers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_AddDefaultGrabTransformers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AddDefaultGrabTransformers = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_FarAttachMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FarAttachMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_FarAttachMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FarAttachMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_FarAttachMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FarAttachMode = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_LimitLinearVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LimitLinearVelocity;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_LimitLinearVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LimitLinearVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_LimitLinearVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LimitLinearVelocity = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_LimitAngularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LimitAngularVelocity;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_LimitAngularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LimitAngularVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_LimitAngularVelocity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LimitAngularVelocity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_MaxLinearVelocityDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxLinearVelocityDelta;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_MaxLinearVelocityDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxLinearVelocityDelta;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_MaxLinearVelocityDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxLinearVelocityDelta = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_MaxAngularVelocityDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxAngularVelocityDelta;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_MaxAngularVelocityDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxAngularVelocityDelta;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_MaxAngularVelocityDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxAngularVelocityDelta = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get__allowVisualAttachTransform_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowVisualAttachTransform_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get__allowVisualAttachTransform_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowVisualAttachTransform_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set__allowVisualAttachTransform_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowVisualAttachTransform_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SingleGrabTransformers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SingleGrabTransformers;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SingleGrabTransformers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SingleGrabTransformers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_SingleGrabTransformers(::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SingleGrabTransformers = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_MultipleGrabTransformers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MultipleGrabTransformers;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_MultipleGrabTransformers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MultipleGrabTransformers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_MultipleGrabTransformers(::UnityEngine::XR::Interaction::Toolkit::Utilities::SmallRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MultipleGrabTransformers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_GrabTransformersAddedWhenGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabTransformersAddedWhenGrabbed;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_GrabTransformersAddedWhenGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabTransformersAddedWhenGrabbed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_GrabTransformersAddedWhenGrabbed(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrabTransformersAddedWhenGrabbed = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_GrabCountChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabCountChanged;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_GrabCountChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabCountChanged;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_GrabCountChanged(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrabCountChanged = value;
}
constexpr ::System::ValueTuple_2<int32_t,int32_t>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_GrabCountBeforeAndAfterChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabCountBeforeAndAfterChange;
}
constexpr ::System::ValueTuple_2<int32_t,int32_t> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_GrabCountBeforeAndAfterChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GrabCountBeforeAndAfterChange;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_GrabCountBeforeAndAfterChange(::System::ValueTuple_2<int32_t,int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GrabCountBeforeAndAfterChange = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_IsProcessingGrabTransformers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsProcessingGrabTransformers;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_IsProcessingGrabTransformers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsProcessingGrabTransformers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_IsProcessingGrabTransformers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsProcessingGrabTransformers = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_DropTransformersCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DropTransformersCount;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_DropTransformersCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DropTransformersCount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_DropTransformersCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DropTransformersCount = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TargetPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TargetPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_TargetPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetPose = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TargetLocalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetLocalScale;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TargetLocalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetLocalScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_TargetLocalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetLocalScale = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_IsTargetPoseDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsTargetPoseDirty;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_IsTargetPoseDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsTargetPoseDirty;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_IsTargetPoseDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsTargetPoseDirty = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_IsTargetLocalScaleDirty()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsTargetLocalScaleDirty;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_IsTargetLocalScaleDirty() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsTargetLocalScaleDirty;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_IsTargetLocalScaleDirty(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsTargetLocalScaleDirty = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_Transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_Transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Transform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_Transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Transform = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_CurrentAttachEaseTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentAttachEaseTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_CurrentAttachEaseTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentAttachEaseTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_CurrentAttachEaseTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentAttachEaseTime = value;
}
constexpr ::GlobalNamespace::XRBaseInteractable_MovementType& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_CurrentMovementType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentMovementType;
}
constexpr ::GlobalNamespace::XRBaseInteractable_MovementType const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_CurrentMovementType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentMovementType;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_CurrentMovementType(::GlobalNamespace::XRBaseInteractable_MovementType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentMovementType = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_DetachInLateUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DetachInLateUpdate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_DetachInLateUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DetachInLateUpdate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_DetachInLateUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DetachInLateUpdate = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_DetachLinearVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DetachLinearVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_DetachLinearVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DetachLinearVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_DetachLinearVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DetachLinearVelocity = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_DetachAngularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DetachAngularVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_DetachAngularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DetachAngularVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_DetachAngularVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DetachAngularVelocity = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingCurrentFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingCurrentFrame;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingCurrentFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingCurrentFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingCurrentFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThrowSmoothingCurrentFrame = value;
}
constexpr ::ArrayW<float_t>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingFrameTimes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingFrameTimes;
}
constexpr ::ArrayW<float_t> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingFrameTimes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingFrameTimes;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingFrameTimes(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThrowSmoothingFrameTimes = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingLinearVelocityFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingLinearVelocityFrames;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingLinearVelocityFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingLinearVelocityFrames;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingLinearVelocityFrames(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThrowSmoothingLinearVelocityFrames = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingAngularVelocityFrames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingAngularVelocityFrames;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingAngularVelocityFrames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingAngularVelocityFrames;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingAngularVelocityFrames(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThrowSmoothingAngularVelocityFrames = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingFirstUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingFirstUpdate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowSmoothingFirstUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowSmoothingFirstUpdate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_ThrowSmoothingFirstUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThrowSmoothingFirstUpdate = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_LastThrowReferencePose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastThrowReferencePose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_LastThrowReferencePose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastThrowReferencePose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_LastThrowReferencePose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastThrowReferencePose = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowAssist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowAssist;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_ThrowAssist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThrowAssist;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_ThrowAssist(::UnityEngine::XR::Interaction::Toolkit::Gaze::IXRAimAssist*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThrowAssist = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_Rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_Rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Rigidbody;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_Rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Rigidbody = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_RigidbodyColliding()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RigidbodyColliding;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_RigidbodyColliding() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RigidbodyColliding;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_RigidbodyColliding(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RigidbodyColliding = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_WasKinematic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasKinematic;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_WasKinematic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WasKinematic;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_WasKinematic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WasKinematic = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_UsedGravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsedGravity;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_UsedGravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsedGravity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_UsedGravity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UsedGravity = value;
}
constexpr ::UnityEngine::RigidbodyInterpolation& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_InterpolationOnGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InterpolationOnGrab;
}
constexpr ::UnityEngine::RigidbodyInterpolation const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_InterpolationOnGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InterpolationOnGrab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_InterpolationOnGrab(::UnityEngine::RigidbodyInterpolation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InterpolationOnGrab = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_LinearDampingOnGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinearDampingOnGrab;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_LinearDampingOnGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinearDampingOnGrab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_LinearDampingOnGrab(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LinearDampingOnGrab = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_AngularDampingOnGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngularDampingOnGrab;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_AngularDampingOnGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngularDampingOnGrab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_AngularDampingOnGrab(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AngularDampingOnGrab = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_LastFixedFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFixedFrame;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_LastFixedFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFixedFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_LastFixedFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastFixedFrame = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_LastFixedDynamicTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFixedDynamicTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_LastFixedDynamicTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastFixedDynamicTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_LastFixedDynamicTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastFixedDynamicTime = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_InitialVisualsTransformLocalPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialVisualsTransformLocalPose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_InitialVisualsTransformLocalPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialVisualsTransformLocalPose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_InitialVisualsTransformLocalPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InitialVisualsTransformLocalPose = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_InitialVisualsTransformLocalPoseIsIdentity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialVisualsTransformLocalPoseIsIdentity;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_InitialVisualsTransformLocalPoseIsIdentity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialVisualsTransformLocalPoseIsIdentity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_InitialVisualsTransformLocalPoseIsIdentity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InitialVisualsTransformLocalPoseIsIdentity = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_InitialVisualsTransformLocalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialVisualsTransformLocalScale;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_InitialVisualsTransformLocalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialVisualsTransformLocalScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_InitialVisualsTransformLocalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InitialVisualsTransformLocalScale = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_IgnoringCharacterCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoringCharacterCollision;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_IgnoringCharacterCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IgnoringCharacterCollision;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_IgnoringCharacterCollision(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IgnoringCharacterCollision = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_StopIgnoringCollisionInLateUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StopIgnoringCollisionInLateUpdate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_StopIgnoringCollisionInLateUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StopIgnoringCollisionInLateUpdate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_StopIgnoringCollisionInLateUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StopIgnoringCollisionInLateUpdate = value;
}
constexpr ::UnityW<::UnityEngine::CharacterController>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SelectingCharacterController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectingCharacterController;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SelectingCharacterController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectingCharacterController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_SelectingCharacterController(::UnityW<::UnityEngine::CharacterController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectingCharacterController = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SelectingCharacterInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectingCharacterInteractors;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_SelectingCharacterInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectingCharacterInteractors;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_SelectingCharacterInteractors(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectingCharacterInteractors = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_RigidbodyColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RigidbodyColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_RigidbodyColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RigidbodyColliders;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_RigidbodyColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RigidbodyColliders = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_CollidersThatAllowedCharacterCollision()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollidersThatAllowedCharacterCollision;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_CollidersThatAllowedCharacterCollision() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CollidersThatAllowedCharacterCollision;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_CollidersThatAllowedCharacterCollision(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CollidersThatAllowedCharacterCollision = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_OriginalSceneParent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalSceneParent;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_OriginalSceneParent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalSceneParent;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_OriginalSceneParent(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OriginalSceneParent = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TeleportationMonitor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportationMonitor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_TeleportationMonitor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TeleportationMonitor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_TeleportationMonitor(::UnityEngine::XR::Interaction::Toolkit::Utilities::TeleportationMonitor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TeleportationMonitor = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_DynamicAttachTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DynamicAttachTransforms;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_DynamicAttachTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DynamicAttachTransforms;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_DynamicAttachTransforms(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DynamicAttachTransforms = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_VisualAttachTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisualAttachTransforms;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_get_m_VisualAttachTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisualAttachTransforms;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::__cordl_internal_set_m_VisualAttachTransforms(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VisualAttachTransforms = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::setStaticF_s_DropEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>*, "s_DropEventArgs", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::getStaticF_s_DropEventArgs()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>*, "s_DropEventArgs", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::setStaticF_s_DynamicAttachTransformPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>*, "s_DynamicAttachTransformPool", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::getStaticF_s_DynamicAttachTransformPool()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityW<::UnityEngine::Transform>>*, "s_DynamicAttachTransformPool", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::setStaticF_s_ProcessGrabTransformersMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessGrabTransformersMarker", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::getStaticF_s_ProcessGrabTransformersMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_ProcessGrabTransformersMarker", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>();
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_attachTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_attachTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_attachTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_attachTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_secondaryAttachTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_secondaryAttachTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_secondaryAttachTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_secondaryAttachTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_useDynamicAttach()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_useDynamicAttach", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_useDynamicAttach(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_useDynamicAttach", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_matchAttachPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_matchAttachPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_matchAttachPosition(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_matchAttachPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_matchAttachRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_matchAttachRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_matchAttachRotation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_matchAttachRotation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_snapToColliderVolume()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_snapToColliderVolume", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_snapToColliderVolume(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_snapToColliderVolume", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_reinitializeDynamicAttachEverySingleGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_reinitializeDynamicAttachEverySingleGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_reinitializeDynamicAttachEverySingleGrab(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_reinitializeDynamicAttachEverySingleGrab", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_attachEaseInTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_attachEaseInTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_attachEaseInTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_attachEaseInTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRBaseInteractable_MovementType UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_movementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_movementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRBaseInteractable_MovementType>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_movementType(::GlobalNamespace::XRBaseInteractable_MovementType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_movementType", {}, {::i2c::type_of<::GlobalNamespace::XRBaseInteractable_MovementType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_predictedVisualsTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_predictedVisualsTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_predictedVisualsTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_predictedVisualsTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_velocityDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_velocityDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_velocityDamping(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_velocityDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_velocityScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_velocityScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_velocityScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_velocityScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_angularVelocityDamping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_angularVelocityDamping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_angularVelocityDamping(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_angularVelocityDamping", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_angularVelocityScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_angularVelocityScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_angularVelocityScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_angularVelocityScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_trackPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_trackPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_trackPosition(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_trackPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_smoothPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_smoothPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_smoothPosition(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_smoothPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_smoothPositionAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_smoothPositionAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_smoothPositionAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_smoothPositionAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_tightenPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_tightenPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_tightenPosition(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_tightenPosition", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_trackRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_trackRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_trackRotation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_trackRotation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_smoothRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_smoothRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_smoothRotation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_smoothRotation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_smoothRotationAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_smoothRotationAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_smoothRotationAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_smoothRotationAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_tightenRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_tightenRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_tightenRotation(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_tightenRotation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_trackScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_trackScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_trackScale(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_trackScale", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_smoothScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_smoothScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_smoothScale(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_smoothScale", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_smoothScaleAmount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_smoothScaleAmount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_smoothScaleAmount(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_smoothScaleAmount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_tightenScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_tightenScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_tightenScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_tightenScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_throwOnDetach()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_throwOnDetach", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_throwOnDetach(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_throwOnDetach", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_throwSmoothingDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_throwSmoothingDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_throwSmoothingDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_throwSmoothingDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_throwSmoothingCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_throwSmoothingCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_throwSmoothingCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_throwSmoothingCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_throwVelocityScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_throwVelocityScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_throwVelocityScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_throwVelocityScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_throwAngularVelocityScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_throwAngularVelocityScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_throwAngularVelocityScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_throwAngularVelocityScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_forceGravityOnDetach()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_forceGravityOnDetach", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_forceGravityOnDetach(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_forceGravityOnDetach", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_retainTransformParent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_retainTransformParent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_retainTransformParent(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_retainTransformParent", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_startingSingleGrabTransformers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_startingSingleGrabTransformers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_startingSingleGrabTransformers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_startingSingleGrabTransformers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_startingMultipleGrabTransformers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_startingMultipleGrabTransformers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_startingMultipleGrabTransformers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_startingMultipleGrabTransformers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_addDefaultGrabTransformers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_addDefaultGrabTransformers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_addDefaultGrabTransformers(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_addDefaultGrabTransformers", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_farAttachMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_farAttachMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_farAttachMode(::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_farAttachMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Attachment::InteractableFarAttachMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_limitLinearVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_limitLinearVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_limitLinearVelocity(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_limitLinearVelocity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_limitAngularVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_limitAngularVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_limitAngularVelocity(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_limitAngularVelocity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_maxLinearVelocityDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_maxLinearVelocityDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_maxLinearVelocityDelta(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_maxLinearVelocityDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_maxAngularVelocityDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_maxAngularVelocityDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_maxAngularVelocityDelta(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_maxAngularVelocityDelta", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_isRigidbodyMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_isRigidbodyMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_singleGrabTransformersCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_singleGrabTransformersCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_multipleGrabTransformersCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_multipleGrabTransformersCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_allowVisualAttachTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_allowVisualAttachTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_allowVisualAttachTransform(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_allowVisualAttachTransform", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_isTransformDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_isTransformDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_isTransformDirty(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_isTransformDirty", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnCollisionStay()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 116}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ProcessInteractable(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::AddSingleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"AddSingleGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformer);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::AddMultipleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"AddMultipleGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformer);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::RemoveSingleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"RemoveSingleGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, transformer);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::RemoveMultipleGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"RemoveMultipleGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, transformer);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ClearSingleGrabTransformers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ClearSingleGrabTransformers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ClearMultipleGrabTransformers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ClearMultipleGrabTransformers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetSingleGrabTransformers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetSingleGrabTransformers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetMultipleGrabTransformers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetMultipleGrabTransformers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, results);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetSingleGrabTransformerAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetSingleGrabTransformerAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(this, ___internal_method, index);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetMultipleGrabTransformerAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetMultipleGrabTransformerAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(this, ___internal_method, index);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::MoveSingleGrabTransformerTo(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer, int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"MoveSingleGrabTransformerTo", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformer, newIndex);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::MoveMultipleGrabTransformerTo(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer, int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"MoveMultipleGrabTransformerTo", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformer, newIndex);
}
inline ::UnityEngine::Pose UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetTargetPose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetTargetPose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::SetTargetPose(::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"SetTargetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetTargetLocalScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetTargetLocalScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::SetTargetLocalScale(::UnityEngine::Vector3  localScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"SetTargetLocalScale", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InitializeTargetPoseAndScale(::UnityEngine::Transform*  thisTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"InitializeTargetPoseAndScale", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, thisTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::AddGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer, ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  grabTransformers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"AddGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformer, grabTransformers);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::RemoveGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer, ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  grabTransformers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"RemoveGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, transformer, grabTransformers);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ClearGrabTransformers(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  grabTransformers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ClearGrabTransformers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabTransformers);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetGrabTransformers(::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  grabTransformers, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  results)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetGrabTransformers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, grabTransformers, results);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::MoveGrabTransformerTo(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer, int32_t  newIndex, ::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*  grabTransformers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"MoveGrabTransformerTo", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Utilities::BaseRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformer, newIndex, grabTransformers);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::FindStartingGrabTransformers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"FindStartingGrabTransformers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::RegisterStartingGrabTransformers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"RegisterStartingGrabTransformers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::FlushRegistration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"FlushRegistration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InvokeGrabTransformersOnGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"InvokeGrabTransformersOnGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InvokeGrabTransformersOnDrop(::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"InvokeGrabTransformersOnDrop", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InvokeGrabTransformersProcess(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"InvokeGrabTransformersProcess", {}, {::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase, targetPose, localScale);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::CanProcessAnySingleGrabTransformer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"CanProcessAnySingleGrabTransformer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnAddedGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnAddedGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformer);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnRemovedGrabTransformer(::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*  transformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnRemovedGrabTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformer);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::AddDefaultGrabTransformers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"AddDefaultGrabTransformers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::AddDefaultSingleGrabTransformer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 117}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::AddDefaultMultipleGrabTransformer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 118}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetOrAddDefaultGrabTransformer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetOrAddDefaultGrabTransformer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
inline T UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetOrAddComponent()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                    {"GetOrAddComponent", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::UpdateTarget(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase, deltaTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::StepSmoothing(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"StepSmoothing", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rawTargetPose, rawTargetLocalScale, deltaTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::EaseAttachBurst(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, float_t  attachEaseInTime, ::by_ref<float_t>  currentAttachEaseTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"EaseAttachBurst", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPose, targetLocalScale, rawTargetPose, rawTargetLocalScale, deltaTime, attachEaseInTime, currentAttachEaseTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::StepSmoothingBurst(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, bool  smoothPos, float_t  smoothPosAmount, float_t  tightenPos, bool  smoothRot, float_t  smoothRotAmount, float_t  tightenRot, bool  smoothScale, float_t  smoothScaleAmount, float_t  tightenScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"StepSmoothingBurst", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPose, targetLocalScale, rawTargetPose, rawTargetLocalScale, deltaTime, smoothPos, smoothPosAmount, tightenPos, smoothRot, smoothRotAmount, tightenRot, smoothScale, smoothScaleAmount, tightenScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::PerformInstantaneousUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"PerformInstantaneousUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::PerformKinematicUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"PerformKinematicUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::PerformVelocityTrackingUpdate(float_t  fixedDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"PerformVelocityTrackingUpdate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fixedDeltaTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::PerformVelocityVisualsUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"PerformVelocityVisualsUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::PerformKinematicVisualsUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"PerformKinematicVisualsUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ApplyVisuals(::UnityEngine::Pose  visualsPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ApplyVisuals", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visualsPose);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ApplyTargetScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ApplyTargetScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::PerformVisualAttachUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"PerformVisualAttachUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::UpdateCurrentMovementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"UpdateCurrentMovementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 82}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 86}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 88}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::CreateDynamicAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"CreateDynamicAttachTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, interactor);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::CreateVisualAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"CreateVisualAttachTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InitializeDynamicAttachPoseInternal(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::Transform*  dynamicAttachTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"InitializeDynamicAttachPoseInternal", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, dynamicAttachTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InitializeDynamicAttachPoseWithStatic(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::Transform*  dynamicAttachTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"InitializeDynamicAttachPoseWithStatic", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, dynamicAttachTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ReleaseDynamicAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ReleaseDynamicAttachTransform", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ShouldMatchAttachPosition(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 119}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ShouldMatchAttachRotation(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 120}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ShouldSnapToColliderVolume(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 121}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::InitializeDynamicAttachPose(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::Transform*  dynamicAttachTransform)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 122}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor, dynamicAttachTransform);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::Grab()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 123}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::Drop()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 124}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::Detach()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 125}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::SetupRigidbodyGrab(::UnityEngine::Rigidbody*  rigidbody)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 126}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::SetupRigidbodyDrop(::UnityEngine::Rigidbody*  rigidbody)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), 127}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::ResetThrowSmoothing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"ResetThrowSmoothing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::EndThrowSmoothing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"EndThrowSmoothing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::StepThrowSmoothing(::UnityEngine::Pose  targetPose, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"StepThrowSmoothing", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPose, deltaTime);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::GetSmoothedVelocityValue(::ArrayW<::UnityEngine::Vector3>  velocityFrames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"GetSmoothedVelocityValue", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, velocityFrames);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::SubscribeTeleportationProvider(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"SubscribeTeleportationProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::UnsubscribeTeleportationProvider(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"UnsubscribeTeleportationProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnTeleported(::UnityEngine::Pose  beforePose, ::UnityEngine::Pose  afterPose, ::UnityEngine::Pose  deltaPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnTeleported", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beforePose, afterPose, deltaPose);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::StartIgnoringCharacterCollision(::UnityEngine::Collider*  characterCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"StartIgnoringCharacterCollision", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characterCollider);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::IsOutsideCharacterCollider(::UnityEngine::Collider*  characterCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"IsOutsideCharacterCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, characterCollider);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::StopIgnoringCharacterCollision(::UnityEngine::Collider*  characterCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"StopIgnoringCharacterCollision", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, characterCollider);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnCreatePooledItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnCreatePooledItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnGetPooledItem(::UnityEngine::Transform*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnGetPooledItem", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, item);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnReleasePooledItem(::UnityEngine::Transform*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnReleasePooledItem", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, item);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::OnDestroyPooledItem(::UnityEngine::Transform*  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"OnDestroyPooledItem", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, item);
}
inline ::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_attachPointCompatibilityMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_attachPointCompatibilityMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_attachPointCompatibilityMode(::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_attachPointCompatibilityMode", {}, {::i2c::type_of<::GlobalNamespace::XRGrabInteractable_AttachPointCompatibilityMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::get_gravityOnDetach()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"get_gravityOnDetach", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::set_gravityOnDetach(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"set_gravityOnDetach", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::_ReleaseDynamicAttachTransform_g__Release_303_0(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*  transforms, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"<ReleaseDynamicAttachTransform>g__Release|303_0", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityW<::UnityEngine::Transform>>*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, transforms, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::EaseAttachBurst$BurstManaged(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, float_t  attachEaseInTime, ::by_ref<float_t>  currentAttachEaseTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"EaseAttachBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPose, targetLocalScale, rawTargetPose, rawTargetLocalScale, deltaTime, attachEaseInTime, currentAttachEaseTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::StepSmoothingBurst$BurstManaged(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, bool  smoothPos, float_t  smoothPosAmount, float_t  tightenPos, bool  smoothRot, float_t  smoothRotAmount, float_t  tightenRot, bool  smoothScale, float_t  smoothScaleAmount, float_t  tightenScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(),
                        {"StepSmoothingBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPose, targetLocalScale, rawTargetPose, rawTargetLocalScale, deltaTime, smoothPos, smoothPosAmount, tightenPos, smoothRot, smoothRotAmount, tightenRot, smoothScale, smoothScaleAmount, tightenScale);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::operator ::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::i___UnityEngine__XR__Interaction__Toolkit__Attachment__IFarAttachProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Attachment::IFarAttachProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable::XRGrabInteractable()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb49f764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb49f854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, float_t, bool, float_t, float_t, bool, float_t, float_t, bool, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb49bbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall::Invoke(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, bool  smoothPos, float_t  smoothPosAmount, float_t  tightenPos, bool  smoothRot, float_t  smoothRotAmount, float_t  tightenRot, bool  smoothScale, float_t  smoothScaleAmount, float_t  tightenScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPose, targetLocalScale, rawTargetPose, rawTargetLocalScale, deltaTime, smoothPos, smoothPosAmount, tightenPos, smoothRot, smoothRotAmount, tightenRot, smoothScale, smoothScaleAmount, tightenScale);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall::XRGrabInteractable_StepSmoothingBurst_00000F9B$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb49f494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, float_t, bool, float_t, float_t, bool, float_t, float_t, bool, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb49f548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, float_t, bool, float_t, float_t, bool, float_t, float_t, bool, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xb49f560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb49f758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::Invoke(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, bool  smoothPos, float_t  smoothPosAmount, float_t  tightenPos, bool  smoothRot, float_t  smoothRotAmount, float_t  tightenRot, bool  smoothScale, float_t  smoothScaleAmount, float_t  tightenScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPose, targetLocalScale, rawTargetPose, rawTargetLocalScale, deltaTime, smoothPos, smoothPosAmount, tightenPos, smoothRot, smoothRotAmount, tightenRot, smoothScale, smoothScaleAmount, tightenScale);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::BeginInvoke(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, bool  smoothPos, float_t  smoothPosAmount, float_t  tightenPos, bool  smoothRot, float_t  smoothRotAmount, float_t  tightenRot, bool  smoothScale, float_t  smoothScaleAmount, float_t  tightenScale, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_15)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, targetPose, targetLocalScale, rawTargetPose, rawTargetLocalScale, deltaTime, smoothPos, smoothPosAmount, tightenPos, smoothRot, smoothRotAmount, tightenRot, smoothScale, smoothScaleAmount, tightenScale, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_15);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate::XRGrabInteractable_StepSmoothingBurst_00000F9B$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb49f38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb49f47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb49baa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall::Invoke(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, float_t  attachEaseInTime, ::by_ref<float_t>  currentAttachEaseTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPose, targetLocalScale, rawTargetPose, rawTargetLocalScale, deltaTime, attachEaseInTime, currentAttachEaseTime);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall::XRGrabInteractable_EaseAttachBurst_00000F9A$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb49f168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb49f21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb49f230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb49f380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::Invoke(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, float_t  attachEaseInTime, ::by_ref<float_t>  currentAttachEaseTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPose, targetLocalScale, rawTargetPose, rawTargetLocalScale, deltaTime, attachEaseInTime, currentAttachEaseTime);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::BeginInvoke(::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  targetLocalScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  rawTargetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  rawTargetLocalScale, float_t  deltaTime, float_t  attachEaseInTime, ::by_ref<float_t>  currentAttachEaseTime, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, targetPose, targetLocalScale, rawTargetPose, rawTargetLocalScale, deltaTime, attachEaseInTime, currentAttachEaseTime, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_8);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate::XRGrabInteractable_EaseAttachBurst_00000F9A$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb49f10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c.__cctor_b__337_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs* (::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c::__cctor_b__337_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb49f114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*>(),
                        {"<.cctor>b__337_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c::__cctor_b__337_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*>(),
                        {"<.cctor>b__337_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Transformers::DropEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c* UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable___c::XRGrabInteractable___c()   {
}
