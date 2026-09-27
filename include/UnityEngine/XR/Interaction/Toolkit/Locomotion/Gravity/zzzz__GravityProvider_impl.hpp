#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/GravityProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__PhysicsScene_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/zzzz__GravityProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/zzzz__GravityOverride_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/zzzz__IGravityController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XROriginMovement_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_useGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_useGravity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4539d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_useGravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.set_useGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_useGravity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4539dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_useGravity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_useLocalSpaceGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_useLocalSpaceGravity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4539e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_useLocalSpaceGravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.set_useLocalSpaceGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_useLocalSpaceGravity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4539ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_useLocalSpaceGravity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_terminalVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_terminalVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4539f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_terminalVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.set_terminalVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_terminalVelocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4539fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_terminalVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_gravityAccelerationModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_gravityAccelerationModifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_gravityAccelerationModifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.set_gravityAccelerationModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_gravityAccelerationModifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_gravityAccelerationModifier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_updateCharacterControllerCenterEachFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_updateCharacterControllerCenterEachFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_updateCharacterControllerCenterEachFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.set_updateCharacterControllerCenterEachFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_updateCharacterControllerCenterEachFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_updateCharacterControllerCenterEachFrame", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_sphereCastRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_sphereCastRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_sphereCastRadius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.set_sphereCastRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_sphereCastRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_sphereCastRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_sphereCastDistanceBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_sphereCastDistanceBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_sphereCastDistanceBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.set_sphereCastDistanceBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_sphereCastDistanceBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_sphereCastDistanceBuffer", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_sphereCastLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_sphereCastLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_sphereCastLayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.set_sphereCastLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(::UnityEngine::LayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_sphereCastLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_sphereCastLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_sphereCastTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::QueryTriggerInteraction (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_sphereCastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_sphereCastTriggerInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.set_sphereCastTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(::UnityEngine::QueryTriggerInteraction)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_sphereCastTriggerInteraction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_sphereCastTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_onGravityLockChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_onGravityLockChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_onGravityLockChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.set_onGravityLockChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_onGravityLockChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_onGravityLockChanged", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_onGroundedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Events::UnityEvent_1<bool>* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_onGroundedChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_onGroundedChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_isGrounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_isGrounded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_isGrounded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_transformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_transformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.set_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_transformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_transformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.get_gravityControllers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_gravityControllers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb453a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_gravityControllers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::Awake)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb453a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb453b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::Update)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb453cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.TryProcessGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::TryProcessGravity)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb454114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.GetCurrentUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::GetCurrentUp)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xb453540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"GetCurrentUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.GetCurrentGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::GetCurrentGravity)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb4542fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"GetCurrentGravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.IsGravityBlocked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::IsGravityBlocked)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4542cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"IsGravityBlocked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.ResetFallForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::ResetFallForce)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4533d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"ResetFallForce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.CanProcessGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::CanProcessGravity)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0xb454444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"CanProcessGravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.TryLockGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::TryLockGravity)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0xb45143c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"TryLockGravity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.UnlockGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::UnlockGravity)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb451814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"UnlockGravity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.CheckGrounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::CheckGrounded)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xb453e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"CheckGrounded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.GetLocalHeadHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::GetLocalHeadHeight)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb454864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"GetLocalHeadHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.GetBodyHeadPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::GetBodyHeadPosition)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb4546ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"GetBodyHeadPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.FindCharacterController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::FindCharacterController)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb45489c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"FindCharacterController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.FindHeadTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::FindHeadTransform)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb453b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"FindHeadTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xb454a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::_ctor)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xb454bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_UseGravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseGravity;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_UseGravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseGravity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_UseGravity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseGravity = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_UseLocalSpaceGravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseLocalSpaceGravity;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_UseLocalSpaceGravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseLocalSpaceGravity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_UseLocalSpaceGravity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseLocalSpaceGravity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_TerminalVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TerminalVelocity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_TerminalVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TerminalVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_TerminalVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TerminalVelocity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_GravityAccelerationModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityAccelerationModifier;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_GravityAccelerationModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityAccelerationModifier;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_GravityAccelerationModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GravityAccelerationModifier = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_UpdateCharacterControllerCenterEachFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateCharacterControllerCenterEachFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_UpdateCharacterControllerCenterEachFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UpdateCharacterControllerCenterEachFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_UpdateCharacterControllerCenterEachFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UpdateCharacterControllerCenterEachFrame = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_SphereCastRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastRadius;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_SphereCastRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastRadius;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_SphereCastRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SphereCastRadius = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_SphereCastDistanceBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastDistanceBuffer;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_SphereCastDistanceBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastDistanceBuffer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_SphereCastDistanceBuffer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SphereCastDistanceBuffer = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_SphereCastLayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastLayerMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_SphereCastLayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastLayerMask;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_SphereCastLayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SphereCastLayerMask = value;
}
constexpr ::UnityEngine::QueryTriggerInteraction& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_SphereCastTriggerInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastTriggerInteraction;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_SphereCastTriggerInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SphereCastTriggerInteraction;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_SphereCastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SphereCastTriggerInteraction = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_OnGravityLockChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnGravityLockChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_OnGravityLockChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnGravityLockChanged;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_OnGravityLockChanged(::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnGravityLockChanged = value;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_OnGroundedChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnGroundedChanged;
}
constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_OnGroundedChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OnGroundedChanged;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_OnGroundedChanged(::UnityEngine::Events::UnityEvent_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OnGroundedChanged = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_IsGrounded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsGrounded;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_IsGrounded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsGrounded;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_IsGrounded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsGrounded = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get__transformation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformation_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get__transformation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformation_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set__transformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformation_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_GravityControllers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityControllers;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_GravityControllers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityControllers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_GravityControllers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GravityControllers = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_HeadTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HeadTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_HeadTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HeadTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_HeadTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HeadTransform = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_GroundedAllocHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroundedAllocHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_GroundedAllocHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroundedAllocHits;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_GroundedAllocHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GroundedAllocHits = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_CurrentFallVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentFallVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_CurrentFallVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentFallVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_CurrentFallVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentFallVelocity = value;
}
constexpr ::UnityEngine::PhysicsScene& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_LocalPhysicsScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr ::UnityEngine::PhysicsScene const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_LocalPhysicsScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LocalPhysicsScene;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LocalPhysicsScene = value;
}
constexpr ::UnityW<::UnityEngine::CharacterController>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_CharacterController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CharacterController;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_CharacterController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CharacterController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_CharacterController(::UnityW<::UnityEngine::CharacterController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CharacterController = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_AttemptedGetCharacterController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttemptedGetCharacterController;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_AttemptedGetCharacterController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttemptedGetCharacterController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_AttemptedGetCharacterController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AttemptedGetCharacterController = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_GravityForcedOnProviders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityForcedOnProviders;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_GravityForcedOnProviders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityForcedOnProviders;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_GravityForcedOnProviders(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GravityForcedOnProviders = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_GravityForcedOffProviders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityForcedOffProviders;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_get_m_GravityForcedOffProviders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityForcedOffProviders;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::__cordl_internal_set_m_GravityForcedOffProviders(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GravityForcedOffProviders = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_useGravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_useGravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_useGravity(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_useGravity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_useLocalSpaceGravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_useLocalSpaceGravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_useLocalSpaceGravity(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_useLocalSpaceGravity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_terminalVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_terminalVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_terminalVelocity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_terminalVelocity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_gravityAccelerationModifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_gravityAccelerationModifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_gravityAccelerationModifier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_gravityAccelerationModifier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_updateCharacterControllerCenterEachFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_updateCharacterControllerCenterEachFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_updateCharacterControllerCenterEachFrame(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_updateCharacterControllerCenterEachFrame", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_sphereCastRadius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_sphereCastRadius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_sphereCastRadius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_sphereCastRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_sphereCastDistanceBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_sphereCastDistanceBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_sphereCastDistanceBuffer(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_sphereCastDistanceBuffer", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_sphereCastLayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_sphereCastLayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_sphereCastLayerMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_sphereCastLayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::QueryTriggerInteraction UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_sphereCastTriggerInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_sphereCastTriggerInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::QueryTriggerInteraction>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_sphereCastTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_sphereCastTriggerInteraction", {}, {::i2c::type_of<::UnityEngine::QueryTriggerInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_onGravityLockChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_onGravityLockChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_onGravityLockChanged(::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_onGravityLockChanged", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<bool>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_onGroundedChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_onGroundedChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<bool>*>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_isGrounded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_isGrounded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_transformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_transformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::set_transformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"set_transformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::get_gravityControllers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"get_gravityControllers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::TryProcessGravity(float_t  time)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, time);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::GetCurrentUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"GetCurrentUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::GetCurrentGravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"GetCurrentGravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::IsGravityBlocked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"IsGravityBlocked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::ResetFallForce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"ResetFallForce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::CanProcessGravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"CanProcessGravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::TryLockGravity(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*  provider, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"TryLockGravity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, provider, gravityOverride);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::UnlockGravity(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"UnlockGravity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::CheckGrounded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"CheckGrounded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::GetLocalHeadHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"GetLocalHeadHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::GetBodyHeadPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"GetBodyHeadPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::FindCharacterController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"FindCharacterController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::FindHeadTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"FindHeadTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider* UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider::GravityProvider()   {
}
