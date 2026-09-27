#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Jump/JumpProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Jump/zzzz__JumpProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputButtonReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/zzzz__GravityOverride_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/zzzz__GravityProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Gravity/zzzz__IGravityController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XROriginMovement_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_disableGravityDuringJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_disableGravityDuringJump)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_disableGravityDuringJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.set_disableGravityDuringJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_disableGravityDuringJump)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_disableGravityDuringJump", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_unlimitedInAirJumps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_unlimitedInAirJumps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_unlimitedInAirJumps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.set_unlimitedInAirJumps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_unlimitedInAirJumps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_unlimitedInAirJumps", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_inAirJumpCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_inAirJumpCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_inAirJumpCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.set_inAirJumpCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_inAirJumpCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb452f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_inAirJumpCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_jumpForgivenessWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_jumpForgivenessWindow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_jumpForgivenessWindow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.set_jumpForgivenessWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_jumpForgivenessWindow)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb452f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_jumpForgivenessWindow", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_jumpHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_jumpHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_jumpHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.set_jumpHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_jumpHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_jumpHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_variableHeightJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_variableHeightJump)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_variableHeightJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.set_variableHeightJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_variableHeightJump)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_variableHeightJump", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_minJumpHoldTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_minJumpHoldTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_minJumpHoldTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.set_minJumpHoldTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_minJumpHoldTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_minJumpHoldTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_maxJumpHoldTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_maxJumpHoldTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_maxJumpHoldTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.set_maxJumpHoldTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_maxJumpHoldTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_maxJumpHoldTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_earlyOutDecelerationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_earlyOutDecelerationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_earlyOutDecelerationSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.set_earlyOutDecelerationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_earlyOutDecelerationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_earlyOutDecelerationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_jumpInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_jumpInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_jumpInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.set_jumpInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_jumpInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb452fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_jumpInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_transformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_transformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.set_transformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_transformation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_transformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_isJumping
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_isJumping)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_isJumping", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_canProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_canProcess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_canProcess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.get_gravityPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_gravityPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_gravityPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.set_gravityPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_gravityPaused)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb452fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_gravityPaused", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb452fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::Awake)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb452ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb4530d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb453104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb45311c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.CheckJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::CheckJump)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb453120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"CheckJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.Jump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::Jump)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4531c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"Jump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.CanJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::CanJump)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb4532f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"CanJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.UpdateJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::UpdateJump)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb45323c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"UpdateJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.ProcessJumpForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::ProcessJumpForce)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb453430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"ProcessJumpForce", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.CalculateJumpForceForFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::CalculateJumpForceForFrame)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb4536a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"CalculateJumpForceForFrame", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.StopJump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::StopJump)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb453704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"StopJump", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.StartCoyoteTimer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::StartCoyoteTimer)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb45379c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"StartCoyoteTimer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.IsPausingGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::IsPausingGravity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4537a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"IsPausingGravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.TryLockGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::TryLockGravity)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb45333c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"TryLockGravity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.RemoveGravityLock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::RemoveGravityLock)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb453718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"RemoveGravityLock", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGroundedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGroundedChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4537c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGroundedChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGravityLockChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGravityLockChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4537d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGravityLockChanged", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.OnGroundedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::OnGroundedChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4537e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider.OnGravityLockChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::OnGravityLockChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb453898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb4538a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_DisableGravityDuringJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisableGravityDuringJump;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_DisableGravityDuringJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisableGravityDuringJump;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_DisableGravityDuringJump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DisableGravityDuringJump = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_UnlimitedInAirJumps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnlimitedInAirJumps;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_UnlimitedInAirJumps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UnlimitedInAirJumps;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_UnlimitedInAirJumps(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UnlimitedInAirJumps = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_InAirJumpCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InAirJumpCount;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_InAirJumpCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InAirJumpCount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_InAirJumpCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InAirJumpCount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_JumpForgivenessWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JumpForgivenessWindow;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_JumpForgivenessWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JumpForgivenessWindow;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_JumpForgivenessWindow(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_JumpForgivenessWindow = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_JumpHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JumpHeight;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_JumpHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JumpHeight;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_JumpHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_JumpHeight = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_VariableHeightJump()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariableHeightJump;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_VariableHeightJump() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VariableHeightJump;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_VariableHeightJump(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VariableHeightJump = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_MinJumpHoldTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinJumpHoldTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_MinJumpHoldTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinJumpHoldTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_MinJumpHoldTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinJumpHoldTime = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_MaxJumpHoldTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxJumpHoldTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_MaxJumpHoldTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxJumpHoldTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_MaxJumpHoldTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxJumpHoldTime = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_EarlyOutDecelerationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EarlyOutDecelerationSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_EarlyOutDecelerationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EarlyOutDecelerationSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_EarlyOutDecelerationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EarlyOutDecelerationSpeed = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_JumpInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JumpInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_JumpInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JumpInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_JumpInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_JumpInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get__transformation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformation_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get__transformation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformation_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set__transformation_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformation_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_IsJumping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsJumping;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_IsJumping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsJumping;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_IsJumping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsJumping = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get__gravityPaused_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gravityPaused_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get__gravityPaused_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gravityPaused_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set__gravityPaused_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gravityPaused_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_HasJumped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasJumped;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_HasJumped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasJumped;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_HasJumped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasJumped = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_CurrentJumpForgivenessWindowTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentJumpForgivenessWindowTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_CurrentJumpForgivenessWindowTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentJumpForgivenessWindowTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_CurrentJumpForgivenessWindowTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentJumpForgivenessWindowTime = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_StoppingJumpTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StoppingJumpTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_StoppingJumpTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StoppingJumpTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_StoppingJumpTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StoppingJumpTime = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_CurrentJumpForceThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentJumpForceThisFrame;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_CurrentJumpForceThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentJumpForceThisFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_CurrentJumpForceThisFrame(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentJumpForceThisFrame = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_JumpVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JumpVector;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_JumpVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_JumpVector;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_JumpVector(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_JumpVector = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_GravityProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityProvider;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_GravityProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GravityProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_GravityProvider(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GravityProvider = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_HasGravityProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasGravityProvider;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_HasGravityProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasGravityProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_HasGravityProvider(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasGravityProvider = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_CurrentJumpTimer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentJumpTimer;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_CurrentJumpTimer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentJumpTimer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_CurrentJumpTimer(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentJumpTimer = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_CurrentInAirJumpCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentInAirJumpCount;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_get_m_CurrentInAirJumpCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentInAirJumpCount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::__cordl_internal_set_m_CurrentInAirJumpCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentInAirJumpCount = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_disableGravityDuringJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_disableGravityDuringJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_disableGravityDuringJump(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_disableGravityDuringJump", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_unlimitedInAirJumps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_unlimitedInAirJumps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_unlimitedInAirJumps(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_unlimitedInAirJumps", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_inAirJumpCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_inAirJumpCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_inAirJumpCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_inAirJumpCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_jumpForgivenessWindow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_jumpForgivenessWindow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_jumpForgivenessWindow(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_jumpForgivenessWindow", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_jumpHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_jumpHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_jumpHeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_jumpHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_variableHeightJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_variableHeightJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_variableHeightJump(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_variableHeightJump", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_minJumpHoldTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_minJumpHoldTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_minJumpHoldTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_minJumpHoldTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_maxJumpHoldTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_maxJumpHoldTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_maxJumpHoldTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_maxJumpHoldTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_earlyOutDecelerationSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_earlyOutDecelerationSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_earlyOutDecelerationSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_earlyOutDecelerationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_jumpInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_jumpInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_jumpInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_jumpInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_transformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_transformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_transformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_transformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_isJumping()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_isJumping", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_canProcess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_canProcess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::get_gravityPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"get_gravityPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::set_gravityPaused(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"set_gravityPaused", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::CheckJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"CheckJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::Jump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"Jump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::CanJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"CanJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::UpdateJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"UpdateJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::ProcessJumpForce(float_t  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"ProcessJumpForce", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dt);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::CalculateJumpForceForFrame(float_t  normalizedJumpTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"CalculateJumpForceForFrame", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, normalizedJumpTime);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::StopJump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"StopJump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::StartCoyoteTimer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"StartCoyoteTimer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::IsPausingGravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"IsPausingGravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::TryLockGravity(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"TryLockGravity", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gravityOverride);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::RemoveGravityLock()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"RemoveGravityLock", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGroundedChanged(bool  isGrounded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGroundedChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isGrounded);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::UnityEngine_XR_Interaction_Toolkit_Locomotion_Gravity_IGravityController_OnGravityLockChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.IGravityController.OnGravityLockChanged", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gravityOverride);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::OnGroundedChanged(bool  isGrounded)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isGrounded);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::OnGravityLockChanged(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::GravityOverride  gravityOverride)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gravityOverride);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider* UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController"
constexpr  UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::operator ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController* UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::i___UnityEngine__XR__Interaction__Toolkit__Locomotion__Gravity__IGravityController() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Gravity::IGravityController*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Jump::JumpProvider::JumpProvider()   {
}
