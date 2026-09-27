#pragma once
// IWYU pragma private; include "GorillaLocomotion/GTPlayerTransform.hpp"
#include "GorillaTag/Gravity/zzzz__MonkeGravityController_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/zzzz__GTPlayerTransform_def.hpp"
#include "GorillaLocomotion/zzzz__GTPlayer_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__ForceMode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_GravityStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::GorillaLocomotion::GTPlayerTransform::get_GravityStrength)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cdae4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_GravityStrength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.set_GravityStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GorillaLocomotion::GTPlayerTransform::set_GravityStrength)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cdaea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_GravityStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_GravityForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::GorillaLocomotion::GTPlayerTransform::get_GravityForce)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdaf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_GravityForce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.set_GravityForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayerTransform::set_GravityForce)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cdaf64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_GravityForce", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_Up
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::GorillaLocomotion::GTPlayerTransform::get_Up)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdafdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_Up", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.set_Up
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayerTransform::set_Up)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cdb038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_Up", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_PhysicsUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::GorillaLocomotion::GTPlayerTransform::get_PhysicsUp)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdb0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_PhysicsUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.set_PhysicsUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayerTransform::set_PhysicsUp)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cdb10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_PhysicsUp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_Down
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::GorillaLocomotion::GTPlayerTransform::get_Down)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdb184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_Down", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.set_Down
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayerTransform::set_Down)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cdb1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_Down", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_PhysicsDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::GorillaLocomotion::GTPlayerTransform::get_PhysicsDown)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdb258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_PhysicsDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.set_PhysicsDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayerTransform::set_PhysicsDown)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cdb2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_PhysicsDown", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_Forward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::GorillaLocomotion::GTPlayerTransform::get_Forward)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdb32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_Forward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.set_Forward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayerTransform::set_Forward)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cdb388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_Forward", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_Right
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::GorillaLocomotion::GTPlayerTransform::get_Right)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdb400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_Right", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.set_Right
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector3)>(&::GorillaLocomotion::GTPlayerTransform::set_Right)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5cdb45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_Right", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_BodyRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)()>(&::GorillaLocomotion::GTPlayerTransform::get_BodyRotation)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cdb4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_BodyRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_IgnoreGravityRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaLocomotion::GTPlayerTransform::get_IgnoreGravityRotation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cdb538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_IgnoreGravityRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.set_IgnoreGravityRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaLocomotion::GTPlayerTransform::set_IgnoreGravityRotation)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cdb590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_IgnoreGravityRotation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_IgnoreGravityForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaLocomotion::GTPlayerTransform::get_IgnoreGravityForce)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cdb5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_IgnoreGravityForce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.set_IgnoreGravityForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaLocomotion::GTPlayerTransform::set_IgnoreGravityForce)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cdb648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_IgnoreGravityForce", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_RotationPosOffsetChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::GorillaLocomotion::GTPlayerTransform::get_RotationPosOffsetChange)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5cdb6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_RotationPosOffsetChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GorillaLocomotion::GTPlayerTransform> (*)()>(&::GorillaLocomotion::GTPlayerTransform::get_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cdb704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GorillaLocomotion::GTPlayerTransform*)>(&::GorillaLocomotion::GTPlayerTransform::set_Instance)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5cdb75c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayerTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.RotateToUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>)>(&::GorillaLocomotion::GTPlayerTransform::RotateToUp)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5cdb7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"RotateToUp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.RotateFromToDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::GorillaLocomotion::GTPlayerTransform::RotateFromToDirection)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5cdb954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"RotateFromToDirection", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.RotateBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Quaternion>)>(&::GorillaLocomotion::GTPlayerTransform::RotateBy)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cdc3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"RotateBy", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.SetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Quaternion>)>(&::GorillaLocomotion::GTPlayerTransform::SetRotation)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5cdc4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"SetRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.SetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>)>(&::GorillaLocomotion::GTPlayerTransform::SetRotation)> {
  constexpr static std::size_t size = 0x90c;
  constexpr static std::size_t addrs = 0x5cdbaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"SetRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.GetRotatedDifference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::GorillaLocomotion::GTPlayerTransform::GetRotatedDifference)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cdc540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"GetRotatedDifference", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.ApplyRotationOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Quaternion>, int32_t)>(&::GorillaLocomotion::GTPlayerTransform::ApplyRotationOverride)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5cdc5a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"ApplyRotationOverride", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.ResetRotationPositionOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaLocomotion::GTPlayerTransform::ResetRotationPositionOffset)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5cdc614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"ResetRotationPositionOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.TeleportFromTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, bool, bool, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>)>(&::GorillaLocomotion::GTPlayerTransform::TeleportFromTo)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5cdc6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"TeleportFromTo", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.TeleportTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, bool, bool)>(&::GorillaLocomotion::GTPlayerTransform::TeleportTo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5cdcbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"TeleportTo", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.TeleportTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>, bool, bool)>(&::GorillaLocomotion::GTPlayerTransform::TeleportTo)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x5cdc8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"TeleportTo", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayerTransform::*)()>(&::GorillaLocomotion::GTPlayerTransform::Awake)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x5cdcc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                    {::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.ApplyGravityUpRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayerTransform::*)(::by_ref<::UnityEngine::Vector3>, float_t)>(&::GorillaLocomotion::GTPlayerTransform::ApplyGravityUpRotation)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0x5cdd0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                    {::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.ApplyGravityForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayerTransform::*)(::by_ref<::UnityEngine::Vector3>, ::UnityEngine::ForceMode)>(&::GorillaLocomotion::GTPlayerTransform::ApplyGravityForce)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5cdd5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                    {::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.GetWorldPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GorillaLocomotion::GTPlayerTransform::*)()>(&::GorillaLocomotion::GTPlayerTransform::GetWorldPoint)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5cdd828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                    {::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.get_Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaLocomotion::GTPlayerTransform::*)()>(&::GorillaLocomotion::GTPlayerTransform::get_Scale)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cdd88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                    {::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform.CallBack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayerTransform::*)()>(&::GorillaLocomotion::GTPlayerTransform::CallBack)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5cdd920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                    {::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaLocomotion::GTPlayerTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaLocomotion::GTPlayerTransform::*)()>(&::GorillaLocomotion::GTPlayerTransform::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cddc04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaLocomotion::GTPlayerTransform::__cordl_internal_get_m_gtPlayerBodyTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gtPlayerBodyTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaLocomotion::GTPlayerTransform::__cordl_internal_get_m_gtPlayerBodyTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gtPlayerBodyTransform;
}
constexpr void GorillaLocomotion::GTPlayerTransform::__cordl_internal_set_m_gtPlayerBodyTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gtPlayerBodyTransform = value;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& GorillaLocomotion::GTPlayerTransform::__cordl_internal_get_m_gtPlayerInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gtPlayerInstance;
}
constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& GorillaLocomotion::GTPlayerTransform::__cordl_internal_get_m_gtPlayerInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_gtPlayerInstance;
}
constexpr void GorillaLocomotion::GTPlayerTransform::__cordl_internal_set_m_gtPlayerInstance(::UnityW<::GorillaLocomotion::GTPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_gtPlayerInstance = value;
}
constexpr float_t& GorillaLocomotion::GTPlayerTransform::__cordl_internal_get_m_smallRotationAngleThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smallRotationAngleThreshold;
}
constexpr float_t const& GorillaLocomotion::GTPlayerTransform::__cordl_internal_get_m_smallRotationAngleThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smallRotationAngleThreshold;
}
constexpr void GorillaLocomotion::GTPlayerTransform::__cordl_internal_set_m_smallRotationAngleThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_smallRotationAngleThreshold = value;
}
constexpr float_t& GorillaLocomotion::GTPlayerTransform::__cordl_internal_get_m_smallRotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smallRotationSpeed;
}
constexpr float_t const& GorillaLocomotion::GTPlayerTransform::__cordl_internal_get_m_smallRotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_smallRotationSpeed;
}
constexpr void GorillaLocomotion::GTPlayerTransform::__cordl_internal_set_m_smallRotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_smallRotationSpeed = value;
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF__GravityStrength_k__BackingField(float_t  value)  {
::cordl_internals::setStaticField<float_t, "<GravityStrength>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<float_t>(value));
}
inline float_t GorillaLocomotion::GTPlayerTransform::getStaticF__GravityStrength_k__BackingField()  {
return ::cordl_internals::getStaticField<float_t, "<GravityStrength>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF__GravityForce_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "<GravityForce>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::getStaticF__GravityForce_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "<GravityForce>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF__Up_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "<Up>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::getStaticF__Up_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "<Up>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF__PhysicsUp_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "<PhysicsUp>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::getStaticF__PhysicsUp_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "<PhysicsUp>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF__Down_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "<Down>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::getStaticF__Down_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "<Down>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF__PhysicsDown_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "<PhysicsDown>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::getStaticF__PhysicsDown_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "<PhysicsDown>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF__Forward_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "<Forward>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::getStaticF__Forward_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "<Forward>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF__Right_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "<Right>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::getStaticF__Right_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "<Right>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF__IgnoreGravityRotation_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<IgnoreGravityRotation>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<bool>(value));
}
inline bool GorillaLocomotion::GTPlayerTransform::getStaticF__IgnoreGravityRotation_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<IgnoreGravityRotation>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF__IgnoreGravityForce_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<IgnoreGravityForce>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<bool>(value));
}
inline bool GorillaLocomotion::GTPlayerTransform::getStaticF__IgnoreGravityForce_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<IgnoreGravityForce>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF_k_rotationPosOffsetChange(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "k_rotationPosOffsetChange", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::getStaticF_k_rotationPosOffsetChange()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "k_rotationPosOffsetChange", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF__Instance_k__BackingField(::UnityW<::GorillaLocomotion::GTPlayerTransform>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaLocomotion::GTPlayerTransform>, "<Instance>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<::UnityW<::GorillaLocomotion::GTPlayerTransform>>(value));
}
inline ::UnityW<::GorillaLocomotion::GTPlayerTransform> GorillaLocomotion::GTPlayerTransform::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaLocomotion::GTPlayerTransform>, "<Instance>k__BackingField", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF_k_transform(::UnityW<::UnityEngine::Transform>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Transform>, "k_transform", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<::UnityW<::UnityEngine::Transform>>(value));
}
inline ::UnityW<::UnityEngine::Transform> GorillaLocomotion::GTPlayerTransform::getStaticF_k_transform()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Transform>, "k_transform", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF_k_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Rigidbody>, "k_rigidBody", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<::UnityW<::UnityEngine::Rigidbody>>(value));
}
inline ::UnityW<::UnityEngine::Rigidbody> GorillaLocomotion::GTPlayerTransform::getStaticF_k_rigidBody()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Rigidbody>, "k_rigidBody", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF_k_bodyTransform(::UnityW<::UnityEngine::Transform>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Transform>, "k_bodyTransform", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<::UnityW<::UnityEngine::Transform>>(value));
}
inline ::UnityW<::UnityEngine::Transform> GorillaLocomotion::GTPlayerTransform::getStaticF_k_bodyTransform()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Transform>, "k_bodyTransform", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF_k_playerInstance(::UnityW<::GorillaLocomotion::GTPlayer>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaLocomotion::GTPlayer>, "k_playerInstance", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<::UnityW<::GorillaLocomotion::GTPlayer>>(value));
}
inline ::UnityW<::GorillaLocomotion::GTPlayer> GorillaLocomotion::GTPlayerTransform::getStaticF_k_playerInstance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaLocomotion::GTPlayer>, "k_playerInstance", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF_k_rotationOverrideFrameTime(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "k_rotationOverrideFrameTime", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<int32_t>(value));
}
inline int32_t GorillaLocomotion::GTPlayerTransform::getStaticF_k_rotationOverrideFrameTime()  {
return ::cordl_internals::getStaticField<int32_t, "k_rotationOverrideFrameTime", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline void GorillaLocomotion::GTPlayerTransform::setStaticF_k_useFastRotation(bool  value)  {
::cordl_internals::setStaticField<bool, "k_useFastRotation", ::GorillaLocomotion::GTPlayerTransform*>(std::forward<bool>(value));
}
inline bool GorillaLocomotion::GTPlayerTransform::getStaticF_k_useFastRotation()  {
return ::cordl_internals::getStaticField<bool, "k_useFastRotation", ::GorillaLocomotion::GTPlayerTransform*>();
}
inline float_t GorillaLocomotion::GTPlayerTransform::get_GravityStrength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_GravityStrength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::set_GravityStrength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_GravityStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::get_GravityForce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_GravityForce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::set_GravityForce(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_GravityForce", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::get_Up()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_Up", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::set_Up(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_Up", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::get_PhysicsUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_PhysicsUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::set_PhysicsUp(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_PhysicsUp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::get_Down()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_Down", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::set_Down(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_Down", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::get_PhysicsDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_PhysicsDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::set_PhysicsDown(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_PhysicsDown", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::get_Forward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_Forward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::set_Forward(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_Forward", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::get_Right()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_Right", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::set_Right(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_Right", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Quaternion GorillaLocomotion::GTPlayerTransform::get_BodyRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_BodyRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method);
}
inline bool GorillaLocomotion::GTPlayerTransform::get_IgnoreGravityRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_IgnoreGravityRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::set_IgnoreGravityRotation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_IgnoreGravityRotation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GorillaLocomotion::GTPlayerTransform::get_IgnoreGravityForce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_IgnoreGravityForce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::set_IgnoreGravityForce(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_IgnoreGravityForce", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::get_RotationPosOffsetChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_RotationPosOffsetChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline ::UnityW<::GorillaLocomotion::GTPlayerTransform> GorillaLocomotion::GTPlayerTransform::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GorillaLocomotion::GTPlayerTransform>>(nullptr, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::set_Instance(::GorillaLocomotion::GTPlayerTransform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"set_Instance", {}, {::i2c::type_of<::GorillaLocomotion::GTPlayerTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaLocomotion::GTPlayerTransform::RotateToUp(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetUp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"RotateToUp", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetUp);
}
inline void GorillaLocomotion::GTPlayerTransform::RotateFromToDirection(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentDir, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"RotateFromToDirection", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentDir, targetDir);
}
inline void GorillaLocomotion::GTPlayerTransform::RotateBy(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"RotateBy", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rotation);
}
inline void GorillaLocomotion::GTPlayerTransform::SetRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  targetRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"SetRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetRotation);
}
inline void GorillaLocomotion::GTPlayerTransform::SetRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  newRotation, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  currentRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"SetRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newRotation, currentRotation);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::GetRotatedDifference(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  pivotPoint, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  worldPoint, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"GetRotatedDifference", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, pivotPoint, worldPoint, rotation);
}
inline void GorillaLocomotion::GTPlayerTransform::ApplyRotationOverride(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  rotation, int32_t  frameTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"ApplyRotationOverride", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rotation, frameTime);
}
inline void GorillaLocomotion::GTPlayerTransform::ResetRotationPositionOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"ResetRotationPositionOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::TeleportFromTo(::UnityEngine::Transform*  sourceNode, ::UnityEngine::Transform*  targetNode, bool  keepVelocity, bool  centre, /* [IsReadOnly] */ ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"TeleportFromTo", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceNode, targetNode, keepVelocity, centre, offset);
}
inline void GorillaLocomotion::GTPlayerTransform::TeleportTo(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPos, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  targetRot, bool  keepVelocity, bool  centre)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"TeleportTo", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPos, targetRot, keepVelocity, centre);
}
inline void GorillaLocomotion::GTPlayerTransform::TeleportTo(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPos, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  targetRot, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  currentRot, bool  keepVelocity, bool  centre)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {"TeleportTo", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPos, targetRot, currentRot, keepVelocity, centre);
}
inline void GorillaLocomotion::GTPlayerTransform::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::ApplyGravityUpRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  upDir, float_t  speed)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, upDir, speed);
}
inline void GorillaLocomotion::GTPlayerTransform::ApplyGravityForce(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  force, ::UnityEngine::ForceMode  forceType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force, forceType);
}
inline ::UnityEngine::Vector3 GorillaLocomotion::GTPlayerTransform::GetWorldPoint()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t GorillaLocomotion::GTPlayerTransform::get_Scale()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::CallBack()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaLocomotion::GTPlayerTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaLocomotion::GTPlayerTransform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaLocomotion::GTPlayerTransform* GorillaLocomotion::GTPlayerTransform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaLocomotion::GTPlayerTransform*>());
}
// Ctor Parameters []
constexpr ::GorillaLocomotion::GTPlayerTransform::GTPlayerTransform()   {
}
