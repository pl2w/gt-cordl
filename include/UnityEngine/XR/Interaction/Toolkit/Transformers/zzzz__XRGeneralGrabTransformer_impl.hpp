#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRGeneralGrabTransformer.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_ManipulationAxes_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_TwoHandedRotationMode_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRGrabInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRScaleValueProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_RegistrationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_ManipulationAxes_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_TwoHandedRotationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRGeneralGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_permittedDisplacementAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_permittedDisplacementAxes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_permittedDisplacementAxes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_permittedDisplacementAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_permittedDisplacementAxes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a19c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_permittedDisplacementAxes", {}, {::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_constrainedAxisDisplacementMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_constrainedAxisDisplacementMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_constrainedAxisDisplacementMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_constrainedAxisDisplacementMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_constrainedAxisDisplacementMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_constrainedAxisDisplacementMode", {}, {::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_allowTwoHandedRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_allowTwoHandedRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_allowTwoHandedRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_allowTwoHandedRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_allowTwoHandedRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_allowTwoHandedRotation", {}, {::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_allowOneHandedScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_allowOneHandedScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_allowOneHandedScaling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_allowOneHandedScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_allowOneHandedScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_allowOneHandedScaling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_allowTwoHandedScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_allowTwoHandedScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_allowTwoHandedScaling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_allowTwoHandedScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_allowTwoHandedScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_allowTwoHandedScaling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_oneHandedScaleSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_oneHandedScaleSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_oneHandedScaleSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_oneHandedScaleSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_oneHandedScaleSpeed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb45a1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_oneHandedScaleSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_thresholdMoveRatioForScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_thresholdMoveRatioForScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_thresholdMoveRatioForScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_thresholdMoveRatioForScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_thresholdMoveRatioForScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_thresholdMoveRatioForScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_clampScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_clampScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_clampScaling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_clampScaling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_clampScaling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_clampScaling", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_minimumScaleRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_minimumScaleRatio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_minimumScaleRatio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_minimumScaleRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_minimumScaleRatio)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb45a224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_minimumScaleRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_maximumScaleRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_maximumScaleRatio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_maximumScaleRatio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_maximumScaleRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_maximumScaleRatio)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb45a25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_maximumScaleRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_scaleMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_scaleMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_scaleMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.set_scaleMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_scaleMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_scaleMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.get_registrationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_registrationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb45a2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.OnLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::OnLink)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb45a2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::Process)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb45a3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::OnGrab)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0xb45a5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.OnGrabCountChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::UnityEngine::Pose, ::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::OnGrabCountChanged)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xb45ad1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.ComputeAdjustedInteractorPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeAdjustedInteractorPose)> {
  constexpr static std::size_t size = 0xad8;
  constexpr static std::size_t addrs = 0xb45b0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeAdjustedInteractorPose", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.TranslateSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(::UnityEngine::Pose, ::UnityEngine::Vector3, ::UnityEngine::Pose, ::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::TranslateSetup)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb45ac48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"TranslateSetup", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.ComputeNewObjectPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, bool, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewObjectPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb45a170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewObjectPosition", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.Scale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::float3 (*)(::Unity::Mathematics::float3, ::Unity::Mathematics::float3)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::Scale)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb45bcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"Scale", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.ComputeNewObjectRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(::by_ref<::UnityEngine::Quaternion>, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewObjectRotation)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb45bce8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewObjectRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.AdjustPositionForPermittedAxes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::AdjustPositionForPermittedAxes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb45abd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"AdjustPositionForPermittedAxes", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes>(), ::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.AdjustPositionForPermittedAxesBurst
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode, bool, bool, bool, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::AdjustPositionForPermittedAxesBurst)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"AdjustPositionForPermittedAxesBurst", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.ComputeNewScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewScale)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0xb45bd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewScale", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.ComputeNewOneHandedScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewOneHandedScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewOneHandedScale", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.ComputeNewTwoHandedScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewTwoHandedScale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45a18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewTwoHandedScale", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::UpdateTarget)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xb45a3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb45c02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.ComputeNewObjectPosition$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, bool, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewObjectPosition$BurstManaged)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xb45c070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewObjectPosition$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.AdjustPositionForPermittedAxesBurst$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode, bool, bool, bool, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::AdjustPositionForPermittedAxesBurst$BurstManaged)> {
  constexpr static std::size_t size = 0x7d0;
  constexpr static std::size_t addrs = 0xb45c27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"AdjustPositionForPermittedAxesBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.ComputeNewOneHandedScale$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewOneHandedScale$BurstManaged)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0xb45ca4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewOneHandedScale$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer.ComputeNewTwoHandedScale$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewTwoHandedScale$BurstManaged)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xb45cc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewTwoHandedScale$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_PermittedDisplacementAxes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PermittedDisplacementAxes;
}
constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_PermittedDisplacementAxes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PermittedDisplacementAxes;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_PermittedDisplacementAxes(::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PermittedDisplacementAxes = value;
}
constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ConstrainedAxisDisplacementMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConstrainedAxisDisplacementMode;
}
constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ConstrainedAxisDisplacementMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConstrainedAxisDisplacementMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ConstrainedAxisDisplacementMode(::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConstrainedAxisDisplacementMode = value;
}
constexpr ::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_TwoHandedRotationMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TwoHandedRotationMode;
}
constexpr ::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_TwoHandedRotationMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TwoHandedRotationMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_TwoHandedRotationMode(::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TwoHandedRotationMode = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_AllowOneHandedScaling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowOneHandedScaling;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_AllowOneHandedScaling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowOneHandedScaling;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_AllowOneHandedScaling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowOneHandedScaling = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_AllowTwoHandedScaling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowTwoHandedScaling;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_AllowTwoHandedScaling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowTwoHandedScaling;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_AllowTwoHandedScaling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowTwoHandedScaling = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OneHandedScaleSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OneHandedScaleSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OneHandedScaleSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OneHandedScaleSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_OneHandedScaleSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OneHandedScaleSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ThresholdMoveRatioForScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThresholdMoveRatioForScale;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ThresholdMoveRatioForScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ThresholdMoveRatioForScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ThresholdMoveRatioForScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ThresholdMoveRatioForScale = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ClampScaling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClampScaling;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ClampScaling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClampScaling;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ClampScaling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClampScaling = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MinimumScaleRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumScaleRatio;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MinimumScaleRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumScaleRatio;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_MinimumScaleRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinimumScaleRatio = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MaximumScaleRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumScaleRatio;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MaximumScaleRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumScaleRatio;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_MaximumScaleRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaximumScaleRatio = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ScaleMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleMultiplier;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ScaleMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleMultiplier;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ScaleMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaleMultiplier = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OriginalObjectPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalObjectPose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OriginalObjectPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalObjectPose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_OriginalObjectPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OriginalObjectPose = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OffsetPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OffsetPose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OffsetPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OffsetPose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_OffsetPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OffsetPose = value;
}
constexpr ::UnityEngine::Pose& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OriginalInteractorPose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalInteractorPose;
}
constexpr ::UnityEngine::Pose const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OriginalInteractorPose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalInteractorPose;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_OriginalInteractorPose(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OriginalInteractorPose = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_InteractorLocalGrabPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorLocalGrabPoint;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_InteractorLocalGrabPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorLocalGrabPoint;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_InteractorLocalGrabPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorLocalGrabPoint = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ObjectLocalGrabPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectLocalGrabPoint;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ObjectLocalGrabPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectLocalGrabPoint;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ObjectLocalGrabPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ObjectLocalGrabPoint = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OriginalInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalInteractor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_OriginalInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OriginalInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_OriginalInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OriginalInteractor = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_LastGrabCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastGrabCount;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_LastGrabCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastGrabCount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_LastGrabCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastGrabCount = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_StartHandleBar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartHandleBar;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_StartHandleBar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartHandleBar;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_StartHandleBar(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartHandleBar = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_StartHandleBarNormalized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartHandleBarNormalized;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_StartHandleBarNormalized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartHandleBarNormalized;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_StartHandleBarNormalized(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartHandleBarNormalized = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_StartHandleBarUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartHandleBarUp;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_StartHandleBarUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartHandleBarUp;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_StartHandleBarUp(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartHandleBarUp = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_StartHandleBarLookRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartHandleBarLookRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_StartHandleBarLookRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartHandleBarLookRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_StartHandleBarLookRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartHandleBarLookRotation = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_InverseStartHandleBarLookRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InverseStartHandleBarLookRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_InverseStartHandleBarLookRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InverseStartHandleBarLookRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_InverseStartHandleBarLookRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InverseStartHandleBarLookRotation = value;
}
constexpr ::UnityEngine::Quaternion& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_LastHandleBarLocalRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHandleBarLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_LastHandleBarLocalRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHandleBarLocalRotation;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_LastHandleBarLocalRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastHandleBarLocalRotation = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ScaleAtGrabStart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleAtGrabStart;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ScaleAtGrabStart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleAtGrabStart;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ScaleAtGrabStart(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaleAtGrabStart = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_FirstFrameSinceTwoHandedGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstFrameSinceTwoHandedGrab;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_FirstFrameSinceTwoHandedGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstFrameSinceTwoHandedGrab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_FirstFrameSinceTwoHandedGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FirstFrameSinceTwoHandedGrab = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_LastTwoHandedUp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTwoHandedUp;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_LastTwoHandedUp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastTwoHandedUp;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_LastTwoHandedUp(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastTwoHandedUp = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_InitialScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialScale;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_InitialScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_InitialScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InitialScale = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_InitialScaleProportions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialScaleProportions;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_InitialScaleProportions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InitialScaleProportions;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_InitialScaleProportions(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InitialScaleProportions = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MinimumScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumScale;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MinimumScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_MinimumScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinimumScale = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MaximumScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumScale;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_MaximumScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumScale;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_MaximumScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaximumScale = value;
}
constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ConstrainedAxisDisplacementModeOnGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConstrainedAxisDisplacementModeOnGrab;
}
constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ConstrainedAxisDisplacementModeOnGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConstrainedAxisDisplacementModeOnGrab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ConstrainedAxisDisplacementModeOnGrab(::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConstrainedAxisDisplacementModeOnGrab = value;
}
constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_PermittedDisplacementAxesOnGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PermittedDisplacementAxesOnGrab;
}
constexpr ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_PermittedDisplacementAxesOnGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PermittedDisplacementAxesOnGrab;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_PermittedDisplacementAxesOnGrab(::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PermittedDisplacementAxesOnGrab = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ScaleValueProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleValueProvider;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider* const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_ScaleValueProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScaleValueProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_ScaleValueProvider(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRScaleValueProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScaleValueProvider = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_HasScaleValueProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasScaleValueProvider;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_get_m_HasScaleValueProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasScaleValueProvider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::__cordl_internal_set_m_HasScaleValueProvider(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasScaleValueProvider = value;
}
inline ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_permittedDisplacementAxes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_permittedDisplacementAxes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_permittedDisplacementAxes(::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_permittedDisplacementAxes", {}, {::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_constrainedAxisDisplacementMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_constrainedAxisDisplacementMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_constrainedAxisDisplacementMode(::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_constrainedAxisDisplacementMode", {}, {::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_allowTwoHandedRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_allowTwoHandedRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_allowTwoHandedRotation(::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_allowTwoHandedRotation", {}, {::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_TwoHandedRotationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_allowOneHandedScaling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_allowOneHandedScaling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_allowOneHandedScaling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_allowOneHandedScaling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_allowTwoHandedScaling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_allowTwoHandedScaling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_allowTwoHandedScaling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_allowTwoHandedScaling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_oneHandedScaleSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_oneHandedScaleSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_oneHandedScaleSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_oneHandedScaleSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_thresholdMoveRatioForScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_thresholdMoveRatioForScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_thresholdMoveRatioForScale(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_thresholdMoveRatioForScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_clampScaling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_clampScaling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_clampScaling(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_clampScaling", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_minimumScaleRatio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_minimumScaleRatio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_minimumScaleRatio(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_minimumScaleRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_maximumScaleRatio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_maximumScaleRatio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_maximumScaleRatio(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_maximumScaleRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_scaleMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"get_scaleMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::set_scaleMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"set_scaleMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::get_registrationMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::OnLink(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::Process(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable, updatePhase, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::OnGrab(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::Pose  targetPose, ::UnityEngine::Vector3  localScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeAdjustedInteractorPose(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::by_ref<::UnityEngine::Vector3>  newHandleBar, ::by_ref<::UnityEngine::Vector3>  adjustedInteractorPosition, ::by_ref<::UnityEngine::Quaternion>  adjustedInteractorRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeAdjustedInteractorPose", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable, newHandleBar, adjustedInteractorPosition, adjustedInteractorRotation);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::TranslateSetup(::UnityEngine::Pose  interactorCentroidPose, ::UnityEngine::Vector3  grabCentroid, ::UnityEngine::Pose  objectPose, ::UnityEngine::Vector3  objectScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"TranslateSetup", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactorCentroidPose, grabCentroid, objectPose, objectScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewObjectPosition(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  objectRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectScale, bool  trackRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  offsetPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectLocalGrabPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorLocalGrabPoint, ::by_ref<::UnityEngine::Vector3>  newPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewObjectPosition", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactorPosition, interactorRotation, objectRotation, objectScale, trackRotation, offsetPosition, objectLocalGrabPoint, interactorLocalGrabPoint, newPosition);
}
inline ::Unity::Mathematics::float3 UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::Scale(::Unity::Mathematics::float3  a, ::Unity::Mathematics::float3  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"Scale", {}, {::i2c::type_of<::Unity::Mathematics::float3>(), ::i2c::type_of<::Unity::Mathematics::float3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::float3>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Quaternion UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewObjectRotation(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  interactorRotation, bool  trackRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewObjectRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, interactorRotation, trackRotation);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::AdjustPositionForPermittedAxes(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPosition, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  originalObjectPose, ::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes  permittedAxes, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  axisDisplacementMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"AdjustPositionForPermittedAxes", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ManipulationAxes>(), ::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, targetPosition, originalObjectPose, permittedAxes, axisDisplacementMode);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::AdjustPositionForPermittedAxesBurst(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPosition, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  originalObjectPose, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  axisDisplacementMode, bool  hasX, bool  hasY, bool  hasZ, ::by_ref<::UnityEngine::Vector3>  adjustedTargetPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"AdjustPositionForPermittedAxesBurst", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPosition, originalObjectPose, axisDisplacementMode, hasX, hasY, hasZ, adjustedTargetPosition);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewScale(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>  grabInteractable, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startHandleBar, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newHandleBar, bool  trackScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewScale", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, grabInteractable, startScale, currentScale, startHandleBar, newHandleBar, trackScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewOneHandedScale(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  initialScaleProportions, bool  clampScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, float_t  scaleInput, float_t  deltaTime, float_t  scaleSpeed, ::by_ref<::UnityEngine::Vector3>  newScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewOneHandedScale", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentScale, initialScaleProportions, clampScale, minScale, maxScale, scaleInput, deltaTime, scaleSpeed, newScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewTwoHandedScale(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startHandleBar, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newHandleBar, bool  clampScale, float_t  scaleMultiplier, float_t  thresholdMoveRatioForScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, ::by_ref<::UnityEngine::Vector3>  newScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewTwoHandedScale", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startScale, currentScale, startHandleBar, newHandleBar, clampScale, scaleMultiplier, thresholdMoveRatioForScale, minScale, maxScale, newScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewObjectPosition$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  objectRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectScale, bool  trackRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  offsetPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectLocalGrabPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorLocalGrabPoint, ::by_ref<::UnityEngine::Vector3>  newPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewObjectPosition$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactorPosition, interactorRotation, objectRotation, objectScale, trackRotation, offsetPosition, objectLocalGrabPoint, interactorLocalGrabPoint, newPosition);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::AdjustPositionForPermittedAxesBurst$BurstManaged(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPosition, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  originalObjectPose, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  axisDisplacementMode, bool  hasX, bool  hasY, bool  hasZ, ::by_ref<::UnityEngine::Vector3>  adjustedTargetPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"AdjustPositionForPermittedAxesBurst$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPosition, originalObjectPose, axisDisplacementMode, hasX, hasY, hasZ, adjustedTargetPosition);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewOneHandedScale$BurstManaged(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  initialScaleProportions, bool  clampScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, float_t  scaleInput, float_t  deltaTime, float_t  scaleSpeed, ::by_ref<::UnityEngine::Vector3>  newScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewOneHandedScale$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentScale, initialScaleProportions, clampScale, minScale, maxScale, scaleInput, deltaTime, scaleSpeed, newScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::ComputeNewTwoHandedScale$BurstManaged(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startHandleBar, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newHandleBar, bool  clampScale, float_t  scaleMultiplier, float_t  thresholdMoveRatioForScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, ::by_ref<::UnityEngine::Vector3>  newScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>(),
                        {"ComputeNewTwoHandedScale$BurstManaged", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startScale, currentScale, startHandleBar, newHandleBar, clampScale, scaleMultiplier, thresholdMoveRatioForScale, minScale, maxScale, newScale);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer* UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer::XRGeneralGrabTransformer()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb45df8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb45e07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb45e094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startHandleBar, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newHandleBar, bool  clampScale, float_t  scaleMultiplier, float_t  thresholdMoveRatioForScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, ::by_ref<::UnityEngine::Vector3>  newScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, startScale, currentScale, startHandleBar, newHandleBar, clampScale, scaleMultiplier, thresholdMoveRatioForScale, minScale, maxScale, newScale);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb45dd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb45ddd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb45ddf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb45df80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startHandleBar, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newHandleBar, bool  clampScale, float_t  scaleMultiplier, float_t  thresholdMoveRatioForScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, ::by_ref<::UnityEngine::Vector3>  newScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startScale, currentScale, startHandleBar, newHandleBar, clampScale, scaleMultiplier, thresholdMoveRatioForScale, minScale, maxScale, newScale);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  startHandleBar, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  newHandleBar, bool  clampScale, float_t  scaleMultiplier, float_t  thresholdMoveRatioForScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, ::by_ref<::UnityEngine::Vector3>  newScale, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_11)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, startScale, currentScale, startHandleBar, newHandleBar, clampScale, scaleMultiplier, thresholdMoveRatioForScale, minScale, maxScale, newScale, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_11);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate::XRGeneralGrabTransformer_ComputeNewTwoHandedScale_0000090C$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb45daec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb45dbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb45dbf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  initialScaleProportions, bool  clampScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, float_t  scaleInput, float_t  deltaTime, float_t  scaleSpeed, ::by_ref<::UnityEngine::Vector3>  newScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, currentScale, initialScaleProportions, clampScale, minScale, maxScale, scaleInput, deltaTime, scaleSpeed, newScale);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb45d8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb45d95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, bool, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb45d970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb45dae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  initialScaleProportions, bool  clampScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, float_t  scaleInput, float_t  deltaTime, float_t  scaleSpeed, ::by_ref<::UnityEngine::Vector3>  newScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentScale, initialScaleProportions, clampScale, minScale, maxScale, scaleInput, deltaTime, scaleSpeed, newScale);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  currentScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  initialScaleProportions, bool  clampScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  minScale, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  maxScale, float_t  scaleInput, float_t  deltaTime, float_t  scaleSpeed, ::by_ref<::UnityEngine::Vector3>  newScale, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_10)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, currentScale, initialScaleProportions, clampScale, minScale, maxScale, scaleInput, deltaTime, scaleSpeed, newScale, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_10);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate::XRGeneralGrabTransformer_ComputeNewOneHandedScale_0000090B$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb45d6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb45d790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode, bool, bool, bool, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb45d7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPosition, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  originalObjectPose, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  axisDisplacementMode, bool  hasX, bool  hasY, bool  hasZ, ::by_ref<::UnityEngine::Vector3>  adjustedTargetPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, targetPosition, originalObjectPose, axisDisplacementMode, hasX, hasY, hasZ, adjustedTargetPosition);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb45d468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode, bool, bool, bool, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb45d51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Pose>, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode, bool, bool, bool, ::by_ref<::UnityEngine::Vector3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb45d534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb45d694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPosition, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  originalObjectPose, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  axisDisplacementMode, bool  hasX, bool  hasY, bool  hasZ, ::by_ref<::UnityEngine::Vector3>  adjustedTargetPosition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPosition, originalObjectPose, axisDisplacementMode, hasX, hasY, hasZ, adjustedTargetPosition);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetPosition, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  originalObjectPose, ::GlobalNamespace::XRGeneralGrabTransformer_ConstrainedAxisDisplacementMode  axisDisplacementMode, bool  hasX, bool  hasY, bool  hasZ, ::by_ref<::UnityEngine::Vector3>  adjustedTargetPosition, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_8)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, targetPosition, originalObjectPose, axisDisplacementMode, hasX, hasY, hasZ, adjustedTargetPosition, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_8);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate::XRGeneralGrabTransformer_AdjustPositionForPermittedAxesBurst_00000909$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb45d154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xb45d244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, bool, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb45bbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  objectRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectScale, bool  trackRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  offsetPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectLocalGrabPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorLocalGrabPoint, ::by_ref<::UnityEngine::Vector3>  newPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::quaternion>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, interactorPosition, interactorRotation, objectRotation, objectScale, trackRotation, offsetPosition, objectLocalGrabPoint, interactorLocalGrabPoint, newPosition);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb45cee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, bool, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb45cf98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::quaternion>, ::by_ref<::Unity::Mathematics::float3>, bool, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::UnityEngine::Vector3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb45cfb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb45d148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  objectRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectScale, bool  trackRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  offsetPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectLocalGrabPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorLocalGrabPoint, ::by_ref<::UnityEngine::Vector3>  newPosition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactorPosition, interactorRotation, objectRotation, objectScale, trackRotation, offsetPosition, objectLocalGrabPoint, interactorLocalGrabPoint, newPosition);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  interactorRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::quaternion>  objectRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectScale, bool  trackRotation, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  offsetPosition, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  objectLocalGrabPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  interactorLocalGrabPoint, ::by_ref<::UnityEngine::Vector3>  newPosition, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_10)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, interactorPosition, interactorRotation, objectRotation, objectScale, trackRotation, offsetPosition, objectLocalGrabPoint, interactorLocalGrabPoint, newPosition, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_10);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate::XRGeneralGrabTransformer_ComputeNewObjectPosition_00000905$PostfixBurstDelegate()   {
}
