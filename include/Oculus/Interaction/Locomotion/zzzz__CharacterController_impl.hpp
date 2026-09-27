#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/CharacterController.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__CharacterController_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.get_SkinWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CharacterController::*)()>(&::Oculus::Interaction::Locomotion::CharacterController::get_SkinWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_SkinWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.set_SkinWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)(float_t)>(&::Oculus::Interaction::Locomotion::CharacterController::set_SkinWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"set_SkinWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.get_LayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::Oculus::Interaction::Locomotion::CharacterController::*)()>(&::Oculus::Interaction::Locomotion::CharacterController::get_LayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_LayerMask", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.set_LayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::LayerMask)>(&::Oculus::Interaction::Locomotion::CharacterController::set_LayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"set_LayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.get_MaxSlopeAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CharacterController::*)()>(&::Oculus::Interaction::Locomotion::CharacterController::get_MaxSlopeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_MaxSlopeAngle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.set_MaxSlopeAngle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)(float_t)>(&::Oculus::Interaction::Locomotion::CharacterController::set_MaxSlopeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdbe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"set_MaxSlopeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.get_MaxStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CharacterController::*)()>(&::Oculus::Interaction::Locomotion::CharacterController::get_MaxStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_MaxStep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.set_MaxStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)(float_t)>(&::Oculus::Interaction::Locomotion::CharacterController::set_MaxStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdbf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"set_MaxStep", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.get_MaxReboundSteps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::CharacterController::*)()>(&::Oculus::Interaction::Locomotion::CharacterController::get_MaxReboundSteps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_MaxReboundSteps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.set_MaxReboundSteps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)(int32_t)>(&::Oculus::Interaction::Locomotion::CharacterController::set_MaxReboundSteps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"set_MaxReboundSteps", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.get_IsGrounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CharacterController::*)()>(&::Oculus::Interaction::Locomotion::CharacterController::get_IsGrounded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4bdc10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_IsGrounded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.get_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CharacterController::*)()>(&::Oculus::Interaction::Locomotion::CharacterController::get_Height)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4bdc18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_Height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::CharacterController::*)()>(&::Oculus::Interaction::Locomotion::CharacterController::get_Radius)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4bdc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Locomotion::CharacterController::*)()>(&::Oculus::Interaction::Locomotion::CharacterController::get_Pose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa4bdc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_Pose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)()>(&::Oculus::Interaction::Locomotion::CharacterController::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4bdc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)()>(&::Oculus::Interaction::Locomotion::CharacterController::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4bdcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.TrySetHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CharacterController::*)(float_t)>(&::Oculus::Interaction::Locomotion::CharacterController::TrySetHeight)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa4bdefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"TrySetHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.TryGround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CharacterController::*)(float_t)>(&::Oculus::Interaction::Locomotion::CharacterController::TryGround)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa4be2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"TryGround", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.SetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Quaternion)>(&::Oculus::Interaction::Locomotion::CharacterController::SetRotation)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa4be95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"SetRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.SetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::CharacterController::SetPosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4be9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"SetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::CharacterController::Move)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xa4bea1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"Move", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.Rebound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Vector3, int32_t)>(&::Oculus::Interaction::Locomotion::CharacterController::Rebound)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa4beca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"Rebound", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.ClimbStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>)>(&::Oculus::Interaction::Locomotion::CharacterController::ClimbStep)> {
  constexpr static std::size_t size = 0x8c4;
  constexpr static std::size_t addrs = 0xa4bf668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"ClimbStep", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.CheckMoveCharacter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::Locomotion::CharacterController::CheckMoveCharacter)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0xa4be0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"CheckMoveCharacter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.MoveCapsuleCollides
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>)>(&::Oculus::Interaction::Locomotion::CharacterController::MoveCapsuleCollides)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xa4bff2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"MoveCapsuleCollides", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.DecomposeDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Vector3, ::UnityEngine::RaycastHit)>(&::Oculus::Interaction::Locomotion::CharacterController::DecomposeDelta)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa4c01f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"DecomposeDelta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.SlideDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit)>(&::Oculus::Interaction::Locomotion::CharacterController::SlideDelta)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0xa4c090c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"SlideDelta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.IsFlat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Locomotion::CharacterController::IsFlat)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa4be684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"IsFlat", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.UpdateGrounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)(bool)>(&::Oculus::Interaction::Locomotion::CharacterController::UpdateGrounded)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa4bef1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"UpdateGrounded", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.CalculateGround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CharacterController::*)(::by_ref<::UnityEngine::RaycastHit>, float_t)>(&::Oculus::Interaction::Locomotion::CharacterController::CalculateGround)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xa4be484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"CalculateGround", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.CalculateGround
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Vector3, float_t, float_t, ::by_ref<::UnityEngine::RaycastHit>)>(&::Oculus::Interaction::Locomotion::CharacterController::CalculateGround)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0xa4c0394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"CalculateGround", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.UpdateAnchorPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)()>(&::Oculus::Interaction::Locomotion::CharacterController::UpdateAnchorPoints)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa4bdcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"UpdateAnchorPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.RaycastSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::by_ref<float_t>)>(&::Oculus::Interaction::Locomotion::CharacterController::RaycastSphere)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa4c07d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"RaycastSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.RaycastHitPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<float_t>)>(&::Oculus::Interaction::Locomotion::CharacterController::RaycastHitPlane)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa4be7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"RaycastHitPlane", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.InjectAllCharacterController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::CapsuleCollider*)>(&::Oculus::Interaction::Locomotion::CharacterController::InjectAllCharacterController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"InjectAllCharacterController", {}, {::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.InjectCapsule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::CapsuleCollider*)>(&::Oculus::Interaction::Locomotion::CharacterController::InjectCapsule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"InjectCapsule", {}, {::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.InjectOptionalFeetAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::CharacterController::InjectOptionalFeetAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"InjectOptionalFeetAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController.InjectOptionalHeadAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::CharacterController::InjectOptionalHeadAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4c0d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"InjectOptionalHeadAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::CharacterController::*)()>(&::Oculus::Interaction::Locomotion::CharacterController::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4c0d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::CharacterController._Rebound_g__ReboundRecursive_42_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Locomotion::CharacterController::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, int32_t)>(&::Oculus::Interaction::Locomotion::CharacterController::_Rebound_g__ReboundRecursive_42_0)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0xa4bf08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"<Rebound>g__ReboundRecursive|42_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__capsule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsule;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__capsule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capsule;
}
constexpr void Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_set__capsule(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capsule = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__skinWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinWidth;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__skinWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skinWidth;
}
constexpr void Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_set__skinWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skinWidth = value;
}
constexpr ::UnityEngine::LayerMask& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__layerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerMask;
}
constexpr ::UnityEngine::LayerMask const& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__layerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layerMask;
}
constexpr void Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_set__layerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layerMask = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__maxSlopeAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSlopeAngle;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__maxSlopeAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSlopeAngle;
}
constexpr void Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_set__maxSlopeAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxSlopeAngle = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__maxStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxStep;
}
constexpr float_t const& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__maxStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxStep;
}
constexpr void Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_set__maxStep(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxStep = value;
}
constexpr int32_t& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__maxReboundSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxReboundSteps;
}
constexpr int32_t const& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__maxReboundSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxReboundSteps;
}
constexpr void Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_set__maxReboundSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxReboundSteps = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__headAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__headAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headAnchor;
}
constexpr void Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_set__headAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headAnchor = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__feetAnchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feetAnchor;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__feetAnchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feetAnchor;
}
constexpr void Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_set__feetAnchor(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____feetAnchor = value;
}
constexpr ::UnityEngine::RaycastHit& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__groundHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundHit;
}
constexpr ::UnityEngine::RaycastHit const& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__groundHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____groundHit;
}
constexpr void Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_set__groundHit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____groundHit = value;
}
constexpr bool& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__isGrounded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isGrounded;
}
constexpr bool const& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__isGrounded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isGrounded;
}
constexpr void Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_set__isGrounded(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isGrounded = value;
}
constexpr bool& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Locomotion::CharacterController::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline float_t Oculus::Interaction::Locomotion::CharacterController::get_SkinWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_SkinWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CharacterController::set_SkinWidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"set_SkinWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LayerMask Oculus::Interaction::Locomotion::CharacterController::get_LayerMask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_LayerMask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CharacterController::set_LayerMask(::UnityEngine::LayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"set_LayerMask", {}, {::i2c::type_of<::UnityEngine::LayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CharacterController::get_MaxSlopeAngle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_MaxSlopeAngle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CharacterController::set_MaxSlopeAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"set_MaxSlopeAngle", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::CharacterController::get_MaxStep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_MaxStep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CharacterController::set_MaxStep(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"set_MaxStep", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::Locomotion::CharacterController::get_MaxReboundSteps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_MaxReboundSteps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CharacterController::set_MaxReboundSteps(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"set_MaxReboundSteps", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Locomotion::CharacterController::get_IsGrounded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_IsGrounded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::CharacterController::get_Height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_Height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Locomotion::CharacterController::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Locomotion::CharacterController::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"get_Pose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CharacterController::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::CharacterController::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::CharacterController::TrySetHeight(float_t  desiredHeight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"TrySetHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, desiredHeight);
}
inline bool Oculus::Interaction::Locomotion::CharacterController::TryGround(float_t  extraDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"TryGround", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, extraDistance);
}
inline void Oculus::Interaction::Locomotion::CharacterController::SetRotation(::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"SetRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotation);
}
inline void Oculus::Interaction::Locomotion::CharacterController::SetPosition(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"SetPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void Oculus::Interaction::Locomotion::CharacterController::Move(::UnityEngine::Vector3  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"Move", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::CharacterController::Rebound(::UnityEngine::Vector3  delta, int32_t  bounces)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"Rebound", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, delta, bounces);
}
inline bool Oculus::Interaction::Locomotion::CharacterController::ClimbStep(::UnityEngine::Vector3  capsuleBase, ::UnityEngine::Vector3  capsuleTop, float_t  radius, ::UnityEngine::Vector3  delta, ::by_ref<::UnityEngine::Vector3>  climbDelta, ::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>  stepHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"ClimbStep", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, capsuleBase, capsuleTop, radius, delta, climbDelta, stepHit);
}
inline bool Oculus::Interaction::Locomotion::CharacterController::CheckMoveCharacter(::UnityEngine::Vector3  delta, ::by_ref<::UnityEngine::Vector3>  movement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"CheckMoveCharacter", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, delta, movement);
}
inline bool Oculus::Interaction::Locomotion::CharacterController::MoveCapsuleCollides(::UnityEngine::Vector3  capsuleBase, ::UnityEngine::Vector3  capsuleTop, float_t  radius, ::UnityEngine::Vector3  delta, ::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>  moveHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"MoveCapsuleCollides", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::RaycastHit>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, capsuleBase, capsuleTop, radius, delta, moveHit);
}
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> Oculus::Interaction::Locomotion::CharacterController::DecomposeDelta(::UnityEngine::Vector3  delta, ::UnityEngine::RaycastHit  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"DecomposeDelta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>(this, ___internal_method, delta, hit);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::CharacterController::SlideDelta(::UnityEngine::Vector3  delta, ::UnityEngine::Vector3  originalFlatDelta, ::UnityEngine::RaycastHit  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"SlideDelta", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, delta, originalFlatDelta, hit);
}
inline bool Oculus::Interaction::Locomotion::CharacterController::IsFlat(::UnityEngine::Vector3  groundNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"IsFlat", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, groundNormal);
}
inline void Oculus::Interaction::Locomotion::CharacterController::UpdateGrounded(bool  forceGrounded)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"UpdateGrounded", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceGrounded);
}
inline bool Oculus::Interaction::Locomotion::CharacterController::CalculateGround(::by_ref<::UnityEngine::RaycastHit>  groundHit, float_t  extraDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"CalculateGround", {}, {::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, groundHit, extraDistance);
}
inline bool Oculus::Interaction::Locomotion::CharacterController::CalculateGround(::UnityEngine::Vector3  origin, float_t  radius, float_t  distance, ::by_ref<::UnityEngine::RaycastHit>  groundHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"CalculateGround", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::RaycastHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, radius, distance, groundHit);
}
inline void Oculus::Interaction::Locomotion::CharacterController::UpdateAnchorPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"UpdateAnchorPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::CharacterController::RaycastSphere(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::UnityEngine::Vector3  sphereCenter, float_t  radius, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"RaycastSphere", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, origin, direction, sphereCenter, radius, distance);
}
inline bool Oculus::Interaction::Locomotion::CharacterController::RaycastHitPlane(::UnityEngine::RaycastHit  hit, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, ::by_ref<float_t>  enter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"RaycastHitPlane", {}, {::i2c::type_of<::UnityEngine::RaycastHit>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hit, origin, direction, enter);
}
inline void Oculus::Interaction::Locomotion::CharacterController::InjectAllCharacterController(::UnityEngine::CapsuleCollider*  capsule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"InjectAllCharacterController", {}, {::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capsule);
}
inline void Oculus::Interaction::Locomotion::CharacterController::InjectCapsule(::UnityEngine::CapsuleCollider*  capsule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"InjectCapsule", {}, {::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capsule);
}
inline void Oculus::Interaction::Locomotion::CharacterController::InjectOptionalFeetAnchor(::UnityEngine::Transform*  feetAnchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"InjectOptionalFeetAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feetAnchor);
}
inline void Oculus::Interaction::Locomotion::CharacterController::InjectOptionalHeadAnchor(::UnityEngine::Transform*  headAnchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"InjectOptionalHeadAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headAnchor);
}
inline void Oculus::Interaction::Locomotion::CharacterController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Locomotion::CharacterController::_Rebound_g__ReboundRecursive_42_0(::UnityEngine::Vector3  capsuleBase, ::UnityEngine::Vector3  capsuleTop, float_t  radius, ::UnityEngine::Vector3  delta, ::UnityEngine::Vector3  originalFlatDelta, int32_t  bounceStep)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::CharacterController*>(),
                        {"<Rebound>g__ReboundRecursive|42_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, capsuleBase, capsuleTop, radius, delta, originalFlatDelta, bounceStep);
}
inline ::Oculus::Interaction::Locomotion::CharacterController* Oculus::Interaction::Locomotion::CharacterController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::CharacterController*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::CharacterController::CharacterController()   {
}
