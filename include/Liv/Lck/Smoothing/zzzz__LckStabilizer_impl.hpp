#pragma once
// IWYU pragma private; include "Liv/Lck/Smoothing/LckStabilizer.hpp"
#include "Liv/Lck/zzzz__UpdateTimingMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Smoothing/zzzz__LckStabilizer_def.hpp"
#include "Liv/Lck/Smoothing/zzzz__KalmanFilterQuaternion_def.hpp"
#include "Liv/Lck/Smoothing/zzzz__KalmanFilterVector3_def.hpp"
#include "Liv/Lck/zzzz__UpdateTimingMode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.get_StabilizationUpdateTimingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::UpdateTimingMode (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::get_StabilizationUpdateTimingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3de84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_StabilizationUpdateTimingMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.set_StabilizationUpdateTimingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)(::Liv::Lck::UpdateTimingMode)>(&::Liv::Lck::Smoothing::LckStabilizer::set_StabilizationUpdateTimingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3de8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_StabilizationUpdateTimingMode", {}, {::i2c::type_of<::Liv::Lck::UpdateTimingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.get_StabilizationTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::get_StabilizationTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3de94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_StabilizationTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.set_StabilizationTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)(::UnityEngine::Transform*)>(&::Liv::Lck::Smoothing::LckStabilizer::set_StabilizationTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3de9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_StabilizationTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.get_TargetToFollow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::get_TargetToFollow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3dea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_TargetToFollow", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.set_TargetToFollow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)(::UnityEngine::Transform*)>(&::Liv::Lck::Smoothing::LckStabilizer::set_TargetToFollow)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3deac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_TargetToFollow", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.get_StabilizationSpaceOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::get_StabilizationSpaceOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3deb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_StabilizationSpaceOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.set_StabilizationSpaceOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)(::UnityEngine::Transform*)>(&::Liv::Lck::Smoothing::LckStabilizer::set_StabilizationSpaceOrigin)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d3debc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_StabilizationSpaceOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.get_PositionalSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::get_PositionalSmoothing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e05c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_PositionalSmoothing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.set_PositionalSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)(float_t)>(&::Liv::Lck::Smoothing::LckStabilizer::set_PositionalSmoothing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_PositionalSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.get_RotationalSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::get_RotationalSmoothing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_RotationalSmoothing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.set_RotationalSmoothing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)(float_t)>(&::Liv::Lck::Smoothing::LckStabilizer::set_RotationalSmoothing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_RotationalSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.get_AffectPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::get_AffectPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_AffectPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.set_AffectPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)(bool)>(&::Liv::Lck::Smoothing::LckStabilizer::set_AffectPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_AffectPosition", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.get_AffectRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::get_AffectRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_AffectRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.set_AffectRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)(bool)>(&::Liv::Lck::Smoothing::LckStabilizer::set_AffectRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3e094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_AffectRotation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.get_PositionFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Smoothing::KalmanFilterVector3* (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::get_PositionFilter)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x9d3e09c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_PositionFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.get_RotationFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Smoothing::KalmanFilterQuaternion* (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::get_RotationFilter)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9d3e1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_RotationFilter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.get_HasCustomStabilizationSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::get_HasCustomStabilizationSpace)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d3e354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_HasCustomStabilizationSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::LateUpdate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d3e3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d3e518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::FixedUpdate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d3e530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.ReachTargetInstantly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::ReachTargetInstantly)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d3e544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"ReachTargetInstantly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.DoStabilizationUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)(float_t, float_t)>(&::Liv::Lck::Smoothing::LckStabilizer::DoStabilizationUpdate)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x9d3e3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"DoStabilizationUpdate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.HandleStabilizationSpaceChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::HandleStabilizationSpaceChanged)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d3df58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"HandleStabilizationSpaceChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.GetWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Liv::Lck::Smoothing::LckStabilizer::*)(::UnityEngine::Vector3)>(&::Liv::Lck::Smoothing::LckStabilizer::GetWorldPosition)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d3e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"GetWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.GetWorldRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Liv::Lck::Smoothing::LckStabilizer::*)(::UnityEngine::Quaternion)>(&::Liv::Lck::Smoothing::LckStabilizer::GetWorldRotation)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9d3e5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"GetWorldRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.GetStabilizationSpacePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Liv::Lck::Smoothing::LckStabilizer::*)(::UnityEngine::Vector3)>(&::Liv::Lck::Smoothing::LckStabilizer::GetStabilizationSpacePosition)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9d3e154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"GetStabilizationSpacePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer.GetStabilizationSpaceRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Liv::Lck::Smoothing::LckStabilizer::*)(::UnityEngine::Quaternion)>(&::Liv::Lck::Smoothing::LckStabilizer::GetStabilizationSpaceRotation)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9d3e280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"GetStabilizationSpaceRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Smoothing::LckStabilizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Smoothing::LckStabilizer::*)()>(&::Liv::Lck::Smoothing::LckStabilizer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d3e688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__stabilizationTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stabilizationTarget;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__stabilizationTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stabilizationTarget;
}
constexpr void Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_set__stabilizationTarget(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stabilizationTarget = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__targetToFollow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetToFollow;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__targetToFollow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetToFollow;
}
constexpr void Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_set__targetToFollow(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetToFollow = value;
}
constexpr float_t& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__positionalSmoothing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionalSmoothing;
}
constexpr float_t const& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__positionalSmoothing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionalSmoothing;
}
constexpr void Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_set__positionalSmoothing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionalSmoothing = value;
}
constexpr float_t& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__rotationalSmoothing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationalSmoothing;
}
constexpr float_t const& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__rotationalSmoothing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationalSmoothing;
}
constexpr void Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_set__rotationalSmoothing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationalSmoothing = value;
}
constexpr bool& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__affectPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affectPosition;
}
constexpr bool const& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__affectPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affectPosition;
}
constexpr void Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_set__affectPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____affectPosition = value;
}
constexpr bool& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__affectRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affectRotation;
}
constexpr bool const& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__affectRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____affectRotation;
}
constexpr void Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_set__affectRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____affectRotation = value;
}
constexpr ::Liv::Lck::UpdateTimingMode& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__stabilizationUpdateTimingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stabilizationUpdateTimingMode;
}
constexpr ::Liv::Lck::UpdateTimingMode const& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__stabilizationUpdateTimingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stabilizationUpdateTimingMode;
}
constexpr void Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_set__stabilizationUpdateTimingMode(::Liv::Lck::UpdateTimingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stabilizationUpdateTimingMode = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__stabilizationSpaceOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stabilizationSpaceOrigin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__stabilizationSpaceOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stabilizationSpaceOrigin;
}
constexpr void Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_set__stabilizationSpaceOrigin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stabilizationSpaceOrigin = value;
}
constexpr ::Liv::Lck::Smoothing::KalmanFilterVector3*& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__positionFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionFilter;
}
constexpr ::Liv::Lck::Smoothing::KalmanFilterVector3* const& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__positionFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionFilter;
}
constexpr void Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_set__positionFilter(::Liv::Lck::Smoothing::KalmanFilterVector3*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionFilter = value;
}
constexpr ::Liv::Lck::Smoothing::KalmanFilterQuaternion*& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__rotationFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationFilter;
}
constexpr ::Liv::Lck::Smoothing::KalmanFilterQuaternion* const& Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_get__rotationFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationFilter;
}
constexpr void Liv::Lck::Smoothing::LckStabilizer::__cordl_internal_set__rotationFilter(::Liv::Lck::Smoothing::KalmanFilterQuaternion*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationFilter = value;
}
inline ::Liv::Lck::UpdateTimingMode Liv::Lck::Smoothing::LckStabilizer::get_StabilizationUpdateTimingMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_StabilizationUpdateTimingMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::UpdateTimingMode>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckStabilizer::set_StabilizationUpdateTimingMode(::Liv::Lck::UpdateTimingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_StabilizationUpdateTimingMode", {}, {::i2c::type_of<::Liv::Lck::UpdateTimingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Liv::Lck::Smoothing::LckStabilizer::get_StabilizationTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_StabilizationTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckStabilizer::set_StabilizationTarget(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_StabilizationTarget", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Liv::Lck::Smoothing::LckStabilizer::get_TargetToFollow()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_TargetToFollow", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckStabilizer::set_TargetToFollow(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_TargetToFollow", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Liv::Lck::Smoothing::LckStabilizer::get_StabilizationSpaceOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_StabilizationSpaceOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckStabilizer::set_StabilizationSpaceOrigin(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_StabilizationSpaceOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Liv::Lck::Smoothing::LckStabilizer::get_PositionalSmoothing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_PositionalSmoothing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckStabilizer::set_PositionalSmoothing(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_PositionalSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Liv::Lck::Smoothing::LckStabilizer::get_RotationalSmoothing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_RotationalSmoothing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckStabilizer::set_RotationalSmoothing(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_RotationalSmoothing", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Liv::Lck::Smoothing::LckStabilizer::get_AffectPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_AffectPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckStabilizer::set_AffectPosition(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_AffectPosition", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Liv::Lck::Smoothing::LckStabilizer::get_AffectRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_AffectRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckStabilizer::set_AffectRotation(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"set_AffectRotation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::Smoothing::KalmanFilterVector3* Liv::Lck::Smoothing::LckStabilizer::get_PositionFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_PositionFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Smoothing::KalmanFilterVector3*>(this, ___internal_method);
}
inline ::Liv::Lck::Smoothing::KalmanFilterQuaternion* Liv::Lck::Smoothing::LckStabilizer::get_RotationFilter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_RotationFilter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Smoothing::KalmanFilterQuaternion*>(this, ___internal_method);
}
inline bool Liv::Lck::Smoothing::LckStabilizer::get_HasCustomStabilizationSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"get_HasCustomStabilizationSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckStabilizer::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckStabilizer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckStabilizer::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckStabilizer::ReachTargetInstantly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"ReachTargetInstantly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Smoothing::LckStabilizer::DoStabilizationUpdate(float_t  positionalSmoothing, float_t  rotationalSmoothing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"DoStabilizationUpdate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positionalSmoothing, rotationalSmoothing);
}
inline void Liv::Lck::Smoothing::LckStabilizer::HandleStabilizationSpaceChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"HandleStabilizationSpaceChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Liv::Lck::Smoothing::LckStabilizer::GetWorldPosition(::UnityEngine::Vector3  stabilizationSpacePosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"GetWorldPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, stabilizationSpacePosition);
}
inline ::UnityEngine::Quaternion Liv::Lck::Smoothing::LckStabilizer::GetWorldRotation(::UnityEngine::Quaternion  stabilizationSpaceRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"GetWorldRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, stabilizationSpaceRotation);
}
inline ::UnityEngine::Vector3 Liv::Lck::Smoothing::LckStabilizer::GetStabilizationSpacePosition(::UnityEngine::Vector3  worldPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"GetStabilizationSpacePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, worldPosition);
}
inline ::UnityEngine::Quaternion Liv::Lck::Smoothing::LckStabilizer::GetStabilizationSpaceRotation(::UnityEngine::Quaternion  worldRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {"GetStabilizationSpaceRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, worldRotation);
}
inline void Liv::Lck::Smoothing::LckStabilizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Smoothing::LckStabilizer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Smoothing::LckStabilizer* Liv::Lck::Smoothing::LckStabilizer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Smoothing::LckStabilizer*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Smoothing::LckStabilizer::LckStabilizer()   {
}
