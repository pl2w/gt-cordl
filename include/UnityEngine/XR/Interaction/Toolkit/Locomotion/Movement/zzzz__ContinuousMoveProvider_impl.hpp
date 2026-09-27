#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Movement/ContinuousMoveProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Movement/zzzz__ContinuousMoveProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/zzzz__GravityOverride_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/zzzz__GravityProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/zzzz__IGravityController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XROriginMovement_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.get_moveSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_moveSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45035c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_moveSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.set_moveSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_moveSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb450364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_moveSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.get_inAirControlModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_inAirControlModifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45036c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_inAirControlModifier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.set_inAirControlModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_inAirControlModifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb450374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_inAirControlModifier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.get_enableStrafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_enableStrafe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45037c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_enableStrafe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.set_enableStrafe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_enableStrafe)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb450384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_enableStrafe", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.get_enableFly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_enableFly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45038c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_enableFly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.set_enableFly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_enableFly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb450394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_enableFly", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.get_forwardSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_forwardSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45039c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_forwardSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.set_forwardSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_forwardSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4503a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_forwardSource", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.get_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_transformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4503ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_transformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.set_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_transformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4503b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_transformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.get_leftHandMoveInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_leftHandMoveInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4503bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_leftHandMoveInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.set_leftHandMoveInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_leftHandMoveInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4503c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_leftHandMoveInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.get_rightHandMoveInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_rightHandMoveInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb450420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_rightHandMoveInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.set_rightHandMoveInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_rightHandMoveInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb450428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_rightHandMoveInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.get_canProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_canProcess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb450484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_canProcess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.get_gravityPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_gravityPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45048c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_gravityPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::Awake)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb450494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnEnable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb450640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnDisable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4506d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.OnLocomotionStateChanging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnLocomotionStateChanging)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb450700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.OnLocomotionStarting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnLocomotionStarting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb450884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.OnLocomotionEnding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnLocomotionEnding)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45088c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::Update)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb450894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.ReadInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::ReadInput)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb450a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"ReadInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.ComputeDesiredMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(::UnityEngine::Vector2)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::ComputeDesiredMove)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0xb450b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.MoveRig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::MoveRig)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xb45104c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.FindCharacterController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::FindCharacterController)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb4512c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"FindCharacterController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.TryLockGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::TryLockGravity)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb450764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"TryLockGravity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.RemoveGravityLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::RemoveGravityLock)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb450800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"RemoveGravityLock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGroundedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGroundedChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb451880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGroundedChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGravityLockChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGravityLockChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb451890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGravityLockChanged", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.OnGroundedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnGroundedChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4518a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.OnGravityLockChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnGravityLockChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4518a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.get_useGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_useGravity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4518a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_useGravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.set_useGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_useGravity)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb4518b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_useGravity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider.MigrateUseGravityToGravityProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::MigrateUseGravityToGravityProvider)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb45052c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"MigrateUseGravityToGravityProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::_ctor)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb45196c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_MoveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_MoveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MoveSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_MoveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MoveSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_InAirControlModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InAirControlModifier;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_InAirControlModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InAirControlModifier;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_InAirControlModifier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InAirControlModifier = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_EnableStrafe()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableStrafe;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_EnableStrafe() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableStrafe;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_EnableStrafe(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableStrafe = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_EnableFly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableFly;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_EnableFly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EnableFly;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_EnableFly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EnableFly = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_ForwardSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ForwardSource;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_ForwardSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ForwardSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_ForwardSource(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ForwardSource = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get__transformation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformation_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get__transformation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformation_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set__transformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformation_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_LeftHandMoveInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftHandMoveInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_LeftHandMoveInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftHandMoveInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_LeftHandMoveInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftHandMoveInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_RightHandMoveInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightHandMoveInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_RightHandMoveInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightHandMoveInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_RightHandMoveInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightHandMoveInput = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_GravityProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityProvider;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_GravityProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_GravityProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GravityProvider = value;
}
constexpr ::UnityW<::UnityEngine::CharacterController>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_CharacterController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CharacterController;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_CharacterController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CharacterController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_CharacterController(::UnityW<::UnityEngine::CharacterController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CharacterController = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_AttemptedGetCharacterController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttemptedGetCharacterController;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_AttemptedGetCharacterController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AttemptedGetCharacterController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_AttemptedGetCharacterController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AttemptedGetCharacterController = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_IsMovingXROrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsMovingXROrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_IsMovingXROrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsMovingXROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_IsMovingXROrigin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsMovingXROrigin = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_GravityDrivenVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityDrivenVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_GravityDrivenVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityDrivenVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_GravityDrivenVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GravityDrivenVelocity = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_InAirVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InAirVelocity;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_InAirVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InAirVelocity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_InAirVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InAirVelocity = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_UseGravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseGravity;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_get_m_UseGravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseGravity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::__cordl_internal_set_m_UseGravity(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseGravity = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_moveSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_moveSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_moveSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_moveSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_inAirControlModifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_inAirControlModifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_inAirControlModifier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_inAirControlModifier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_enableStrafe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_enableStrafe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_enableStrafe(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_enableStrafe", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_enableFly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_enableFly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_enableFly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_enableFly", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_forwardSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_forwardSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_forwardSource(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_forwardSource", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_transformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_transformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_transformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_transformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_leftHandMoveInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_leftHandMoveInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_leftHandMoveInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_leftHandMoveInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_rightHandMoveInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_rightHandMoveInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_rightHandMoveInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_rightHandMoveInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_canProcess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_canProcess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_gravityPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_gravityPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnLocomotionStateChanging(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnLocomotionStarting()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnLocomotionEnding()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::ReadInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"ReadInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::ComputeDesiredMove(::UnityEngine::Vector2  input)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, input);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::MoveRig(::UnityEngine::Vector3  translationInWorldSpace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, translationInWorldSpace);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::FindCharacterController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"FindCharacterController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::TryLockGravity(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"TryLockGravity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gravityOverride);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::RemoveGravityLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"RemoveGravityLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGroundedChanged(bool  isGrounded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGroundedChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isGrounded);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGravityLockChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGravityLockChanged", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gravityOverride);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnGroundedChanged(bool  isGrounded)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isGrounded);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::OnGravityLockChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gravityOverride);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::get_useGravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"get_useGravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::set_useGravity(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"set_useGravity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::MigrateUseGravityToGravityProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {"MigrateUseGravityToGravityProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider* UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController"
constexpr  UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::operator ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController* UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::i___UnityEngine__XR__Interaction__Toolkit__Locomotion__Gravity__IGravityController() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Movement::ContinuousMoveProvider::ContinuousMoveProvider()   {
}
