#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/XRTransformStabilizer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__XRTransformStabilizer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__XRTransformStabilizer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRRayProvider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.get_targetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::get_targetTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b55bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"get_targetTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.set_targetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::set_targetTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b55c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"set_targetTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.get_aimTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::get_aimTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b55cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"get_aimTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.set_aimTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::set_aimTarget)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb4b55d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"set_aimTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.get_useLocalSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::get_useLocalSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b56a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"get_useLocalSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.set_useLocalSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::set_useLocalSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b56a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"set_useLocalSpace", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.get_angleStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::get_angleStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b56b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"get_angleStabilization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.set_angleStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::set_angleStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b56b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"set_angleStabilization", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.get_positionStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::get_positionStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b56c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"get_positionStabilization", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.set_positionStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::set_positionStabilization)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4b56c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"set_positionStabilization", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::Awake)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb4b56d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::OnEnable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb4b5778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::Update)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb4b58a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.ApplyStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Transform*>, ::by_ref<::UnityEngine::Transform*>, float_t, float_t, float_t, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::ApplyStabilization)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb4afb58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"ApplyStabilization", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.ApplyStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Transform*>, ::by_ref<::UnityEngine::Transform*>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, float_t, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::ApplyStabilization)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb4afbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"ApplyStabilization", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.ApplyStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Transform*>, ::by_ref<::UnityEngine::Transform*>, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>, float_t, float_t, float_t, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::ApplyStabilization)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb4b59f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"ApplyStabilization", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.ProcessStabilization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Vector3, float_t, float_t, float_t, float_t, ::UnityEngine::Transform*, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::ProcessStabilization)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0xb4b5e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"ProcessStabilization", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.ProcessStabilizationWithoutAimTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Pose, ::UnityEngine::Pose, float_t, float_t, float_t, float_t, ::UnityEngine::Transform*, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::ProcessStabilizationWithoutAimTarget)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xb4b5c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"ProcessStabilizationWithoutAimTarget", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.CalculatePoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Transform*, ::UnityEngine::Transform*, bool, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::CalculatePoses)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb4b5b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"CalculatePoses", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.CalculateScaleFactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Transform*, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::CalculateScaleFactor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb4b5be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"CalculateScaleFactor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.StabilizeTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, float_t, float_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::StabilizeTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4b55a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"StabilizeTransform", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.StabilizePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::StabilizePosition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4b55ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"StabilizePosition", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.StabilizeOptimalRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, float_t, float_t, float_t, float_t, ::by_ref<::Unity::Mathematics::quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::StabilizeOptimalRotation)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4b55b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"StabilizeOptimalRotation", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.CalculateStabilizedLerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::CalculateStabilizedLerp)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4b55b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"CalculateStabilizedLerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.CalculateRotationParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::CalculateRotationParams)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4b55b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"CalculateRotationParams", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4b6780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.StabilizeTransform$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, float_t, float_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::StabilizeTransform$BurstManaged)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb4b6794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"StabilizeTransform$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.StabilizePosition$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::StabilizePosition$BurstManaged)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb4b6928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"StabilizePosition$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.StabilizeOptimalRotation$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, float_t, float_t, float_t, float_t, ::by_ref<::Unity::Mathematics::quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::StabilizeOptimalRotation$BurstManaged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4b6a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"StabilizeOptimalRotation$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.CalculateStabilizedLerp$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::CalculateStabilizedLerp$BurstManaged)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb4b6b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"CalculateStabilizedLerp$BurstManaged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer.CalculateRotationParams$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::CalculateRotationParams$BurstManaged)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb4b6be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"CalculateRotationParams$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_set_m_Target(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Target = value;
}
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_AimTargetObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimTargetObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_AimTargetObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimTargetObject;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_set_m_AimTargetObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AimTargetObject = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_AimTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimTarget;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* const& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_AimTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AimTarget;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_set_m_AimTarget(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AimTarget = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_UseLocalSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseLocalSpace;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_UseLocalSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseLocalSpace;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_set_m_UseLocalSpace(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseLocalSpace = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_AngleStabilization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngleStabilization;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_AngleStabilization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AngleStabilization;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_set_m_AngleStabilization(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AngleStabilization = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_PositionStabilization()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionStabilization;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_PositionStabilization() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PositionStabilization;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_set_m_PositionStabilization(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PositionStabilization = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_ThisTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThisTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_get_m_ThisTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThisTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::__cordl_internal_set_m_ThisTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThisTransform = value;
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::get_targetTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"get_targetTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::set_targetTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"set_targetTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider* UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::get_aimTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"get_aimTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::set_aimTarget(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"set_aimTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::get_useLocalSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"get_useLocalSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::set_useLocalSpace(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"set_useLocalSpace", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::get_angleStabilization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"get_angleStabilization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::set_angleStabilization(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"set_angleStabilization", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::get_positionStabilization()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"get_positionStabilization", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::set_positionStabilization(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"set_positionStabilization", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::ApplyStabilization(::by_ref<::UnityEngine::Transform*>  toStabilize, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Transform*>  target, float_t  positionStabilization, float_t  angleStabilization, float_t  deltaTime, bool  useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"ApplyStabilization", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toStabilize, target, positionStabilization, angleStabilization, deltaTime, useLocalSpace);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::ApplyStabilization(::by_ref<::UnityEngine::Transform*>  toStabilize, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Transform*>  target, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetEndpoint, float_t  positionStabilization, float_t  angleStabilization, float_t  deltaTime, bool  useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"ApplyStabilization", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toStabilize, target, targetEndpoint, positionStabilization, angleStabilization, deltaTime, useLocalSpace);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::ApplyStabilization(::by_ref<::UnityEngine::Transform*>  toStabilize, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Transform*>  target, /* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>  aimTarget, float_t  positionStabilization, float_t  angleStabilization, float_t  deltaTime, bool  useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"ApplyStabilization", {}, {::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Transform*>>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRRayProvider*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toStabilize, target, aimTarget, positionStabilization, angleStabilization, deltaTime, useLocalSpace);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::ProcessStabilization(::UnityEngine::Pose  currentPose, ::UnityEngine::Pose  targetPose, ::UnityEngine::Vector3  targetEndpoint, float_t  positionStabilization, float_t  angleStabilization, float_t  deltaTime, float_t  localScale, ::UnityEngine::Transform*  toStabilize, bool  useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"ProcessStabilization", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentPose, targetPose, targetEndpoint, positionStabilization, angleStabilization, deltaTime, localScale, toStabilize, useLocalSpace);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::ProcessStabilizationWithoutAimTarget(::UnityEngine::Pose  currentPose, ::UnityEngine::Pose  targetPose, float_t  positionStabilization, float_t  angleStabilization, float_t  deltaTime, float_t  localScale, ::UnityEngine::Transform*  toStabilize, bool  useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"ProcessStabilizationWithoutAimTarget", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentPose, targetPose, positionStabilization, angleStabilization, deltaTime, localScale, toStabilize, useLocalSpace);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::CalculatePoses(::UnityEngine::Transform*  toStabilize, ::UnityEngine::Transform*  target, bool  useLocalSpace, ::by_ref<::UnityEngine::Pose>  currentPose, ::by_ref<::UnityEngine::Pose>  targetPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"CalculatePoses", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, toStabilize, target, useLocalSpace, currentPose, targetPose);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::CalculateScaleFactor(::UnityEngine::Transform*  toStabilize, bool  useLocalSpace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"CalculateScaleFactor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, toStabilize, useLocalSpace);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::StabilizeTransform(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, float_t  deltaTime, float_t  positionStabilization, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos, ::by_ref<::Unity::Mathematics::quaternion>  resultRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"StabilizeTransform", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startPos, startRot, targetPos, targetRot, deltaTime, positionStabilization, angleStabilization, resultPos, resultRot);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::StabilizePosition(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, float_t  deltaTime, float_t  positionStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"StabilizePosition", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startPos, targetPos, deltaTime, positionStabilization, resultPos);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::StabilizeOptimalRotation(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  alternateStartRot, float_t  deltaTime, float_t  angleStabilization, float_t  alternateStabilization, float_t  scaleFactor, ::by_ref<::Unity::Mathematics::quaternion>  resultRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"StabilizeOptimalRotation", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startRot, targetRot, alternateStartRot, deltaTime, angleStabilization, alternateStabilization, scaleFactor, resultRot);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::CalculateStabilizedLerp(float_t  distance, float_t  timeSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"CalculateStabilizedLerp", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, distance, timeSlice);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::CalculateRotationParams(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  resultPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  forward, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  up, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  rayEnd, float_t  invScale, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::quaternion>  antiRotation, ::by_ref<float_t>  scaleFactor, ::by_ref<float_t>  targetAngleScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"CalculateRotationParams", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentPosition, resultPosition, forward, up, rayEnd, invScale, angleStabilization, antiRotation, scaleFactor, targetAngleScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::StabilizeTransform$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, float_t  deltaTime, float_t  positionStabilization, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos, ::by_ref<::Unity::Mathematics::quaternion>  resultRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"StabilizeTransform$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startPos, startRot, targetPos, targetRot, deltaTime, positionStabilization, angleStabilization, resultPos, resultRot);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::StabilizePosition$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, float_t  deltaTime, float_t  positionStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"StabilizePosition$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startPos, targetPos, deltaTime, positionStabilization, resultPos);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::StabilizeOptimalRotation$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  alternateStartRot, float_t  deltaTime, float_t  angleStabilization, float_t  alternateStabilization, float_t  scaleFactor, ::by_ref<::Unity::Mathematics::quaternion>  resultRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"StabilizeOptimalRotation$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startRot, targetRot, alternateStartRot, deltaTime, angleStabilization, alternateStabilization, scaleFactor, resultRot);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::CalculateStabilizedLerp$BurstManaged(float_t  distance, float_t  timeSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"CalculateStabilizedLerp$BurstManaged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, distance, timeSlice);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::CalculateRotationParams$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  resultPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  forward, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  up, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  rayEnd, float_t  invScale, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::quaternion>  antiRotation, ::by_ref<float_t>  scaleFactor, ::by_ref<float_t>  targetAngleScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>(),
                        {"CalculateRotationParams$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentPosition, resultPosition, forward, up, rayEnd, invScale, angleStabilization, antiRotation, scaleFactor, targetAngleScale);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer* UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer::XRTransformStabilizer()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4b7bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4b7cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb4b6650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  resultPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  forward, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  up, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  rayEnd, float_t  invScale, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::quaternion>  antiRotation, ::by_ref<float_t>  scaleFactor, ::by_ref<float_t>  targetAngleScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentPosition, resultPosition, forward, up, rayEnd, invScale, angleStabilization, antiRotation, scaleFactor, targetAngleScale);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall::XRTransformStabilizer_CalculateRotationParams_000011D8$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4b7958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4b7a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<float_t>, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb4b7a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4b7bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  resultPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  forward, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  up, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  rayEnd, float_t  invScale, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::quaternion>  antiRotation, ::by_ref<float_t>  scaleFactor, ::by_ref<float_t>  targetAngleScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentPosition, resultPosition, forward, up, rayEnd, invScale, angleStabilization, antiRotation, scaleFactor, targetAngleScale);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  currentPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  resultPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  forward, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  up, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  rayEnd, float_t  invScale, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::quaternion>  antiRotation, ::by_ref<float_t>  scaleFactor, ::by_ref<float_t>  targetAngleScale, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_11)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, currentPosition, resultPosition, forward, up, rayEnd, invScale, angleStabilization, antiRotation, scaleFactor, targetAngleScale, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_11);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate::XRTransformStabilizer_CalculateRotationParams_000011D8$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4b7850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4b7940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb4b6500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall::Invoke(float_t  distance, float_t  timeSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, distance, timeSlice);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb4b76f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::*)(float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4b7798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::*)(float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4b77ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4b7828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::Invoke(float_t  distance, float_t  timeSlice)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, distance, timeSlice);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::BeginInvoke(float_t  distance, float_t  timeSlice, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_3)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, distance, timeSlice, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_3);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate::XRTransformStabilizer_CalculateStabilizedLerp_000011D7$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4b75f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4b76e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, float_t, float_t, float_t, float_t, ::by_ref<::Unity::Mathematics::quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb4b63f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  alternateStartRot, float_t  deltaTime, float_t  angleStabilization, float_t  alternateStabilization, float_t  scaleFactor, ::by_ref<::Unity::Mathematics::quaternion>  resultRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startRot, targetRot, alternateStartRot, deltaTime, angleStabilization, alternateStabilization, scaleFactor, resultRot);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4b73d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, float_t, float_t, float_t, float_t, ::by_ref<::Unity::Mathematics::quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4b7484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, float_t, float_t, float_t, float_t, ::by_ref<::Unity::Mathematics::quaternion>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb4b7498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4b75e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  alternateStartRot, float_t  deltaTime, float_t  angleStabilization, float_t  alternateStabilization, float_t  scaleFactor, ::by_ref<::Unity::Mathematics::quaternion>  resultRot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startRot, targetRot, alternateStartRot, deltaTime, angleStabilization, alternateStabilization, scaleFactor, resultRot);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  alternateStartRot, float_t  deltaTime, float_t  angleStabilization, float_t  alternateStabilization, float_t  scaleFactor, ::by_ref<::Unity::Mathematics::quaternion>  resultRot, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_9)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, startRot, targetRot, alternateStartRot, deltaTime, angleStabilization, alternateStabilization, scaleFactor, resultRot, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_9);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate::XRTransformStabilizer_StabilizeOptimalRotation_000011D6$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4b72c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4b73b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb4b625c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, float_t  deltaTime, float_t  positionStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startPos, targetPos, deltaTime, positionStabilization, resultPos);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall::XRTransformStabilizer_StabilizePosition_000011D5$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4b70f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4b71a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb4b71b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4b72bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, float_t  deltaTime, float_t  positionStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPos, targetPos, deltaTime, positionStabilization, resultPos);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, float_t  deltaTime, float_t  positionStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, startPos, targetPos, deltaTime, positionStabilization, resultPos, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate::XRTransformStabilizer_StabilizePosition_000011D5$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb4b6fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4b70d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, float_t, float_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb4b612c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, float_t  deltaTime, float_t  positionStabilization, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos, ::by_ref<::Unity::Mathematics::quaternion>  resultRot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startPos, startRot, targetPos, targetRot, deltaTime, positionStabilization, angleStabilization, resultPos, resultRot);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall::XRTransformStabilizer_StabilizeTransform_000011D4$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4b6d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, float_t, float_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4b6e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, float_t, float_t, float_t, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb4b6e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4b6fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, float_t  deltaTime, float_t  positionStabilization, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos, ::by_ref<::Unity::Mathematics::quaternion>  resultRot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPos, startRot, targetPos, targetRot, deltaTime, positionStabilization, angleStabilization, resultPos, resultRot);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  startPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  startRot, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  targetPos, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  targetRot, float_t  deltaTime, float_t  positionStabilization, float_t  angleStabilization, ::by_ref<::Unity::Mathematics::float3>  resultPos, ::by_ref<::Unity::Mathematics::quaternion>  resultRot, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_10)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, startPos, startRot, targetPos, targetRot, deltaTime, positionStabilization, angleStabilization, resultPos, resultRot, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_10);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate::XRTransformStabilizer_StabilizeTransform_000011D4$PostfixBurstDelegate()   {
}
