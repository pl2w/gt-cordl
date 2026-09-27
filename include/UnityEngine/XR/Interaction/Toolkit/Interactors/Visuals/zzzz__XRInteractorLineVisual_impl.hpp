#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/XRInteractorLineVisual.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__XRInteractorLineVisual_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/zzzz__BindingsGroup_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRInteractableSnapVolume_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__IAdvancedLineRenderable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__ILineRenderable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__IXRCustomReticleProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__XRInteractorLineVisual_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRHoverInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Tweenables/Primitives/zzzz__FloatTweenableVariable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_lineWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4875ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_lineWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineWidth)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb4875b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_overrideInteractorLineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_overrideInteractorLineLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48761c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_overrideInteractorLineLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_overrideInteractorLineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_overrideInteractorLineLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_overrideInteractorLineLength", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_lineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48762c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_lineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_autoAdjustLineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_autoAdjustLineLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48763c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_autoAdjustLineLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_autoAdjustLineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_autoAdjustLineLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_autoAdjustLineLength", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_minLineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_minLineLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48764c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_minLineLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_minLineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_minLineLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_minLineLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_useDistanceToHitAsMaxLineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_useDistanceToHitAsMaxLineLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48765c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_useDistanceToHitAsMaxLineLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_useDistanceToHitAsMaxLineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_useDistanceToHitAsMaxLineLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_useDistanceToHitAsMaxLineLength", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_lineRetractionDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineRetractionDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48766c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineRetractionDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_lineRetractionDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineRetractionDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineRetractionDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_lineLengthChangeSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineLengthChangeSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48767c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineLengthChangeSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_lineLengthChangeSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineLengthChangeSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineLengthChangeSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_widthCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_widthCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48768c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_widthCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_widthCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_widthCurve)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb487694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_widthCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_setLineColorGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_setLineColorGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4876b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_setLineColorGradient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_setLineColorGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_setLineColorGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4876c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_setLineColorGradient", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_validColorGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_validColorGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4876c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_validColorGradient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_validColorGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::UnityEngine::Gradient*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_validColorGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4876d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_validColorGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_invalidColorGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_invalidColorGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4876d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_invalidColorGradient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_invalidColorGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::UnityEngine::Gradient*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_invalidColorGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4876e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_invalidColorGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_blockedColorGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_blockedColorGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4876e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_blockedColorGradient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_blockedColorGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::UnityEngine::Gradient*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_blockedColorGradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4876f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_blockedColorGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_treatSelectionAsValidState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_treatSelectionAsValidState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4876f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_treatSelectionAsValidState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_treatSelectionAsValidState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_treatSelectionAsValidState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_treatSelectionAsValidState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_smoothMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_smoothMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_smoothMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_smoothMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_smoothMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_smoothMovement", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_followTightness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_followTightness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_followTightness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_followTightness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_followTightness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_followTightness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_snapThresholdDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_snapThresholdDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_snapThresholdDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_snapThresholdDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_snapThresholdDistance)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb487730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_snapThresholdDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_reticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_reticle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_reticle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_reticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_reticle)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb487748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_reticle", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_blockedReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_blockedReticle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4878c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_blockedReticle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_blockedReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_blockedReticle)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb4878d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_blockedReticle", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_stopLineAtFirstRaycastHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_stopLineAtFirstRaycastHit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_stopLineAtFirstRaycastHit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_stopLineAtFirstRaycastHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_stopLineAtFirstRaycastHit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487a58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_stopLineAtFirstRaycastHit", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_stopLineAtSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_stopLineAtSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_stopLineAtSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_stopLineAtSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_stopLineAtSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_stopLineAtSelection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_snapEndpointIfAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_snapEndpointIfAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_snapEndpointIfAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_snapEndpointIfAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_snapEndpointIfAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_snapEndpointIfAvailable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_lineBendRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineBendRatio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineBendRatio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_lineBendRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineBendRatio)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb487a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineBendRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_bendingEnabledInteractionLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_bendingEnabledInteractionLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_bendingEnabledInteractionLayers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_bendingEnabledInteractionLayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_bendingEnabledInteractionLayers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_bendingEnabledInteractionLayers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_overrideInteractorLineOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_overrideInteractorLineOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_overrideInteractorLineOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_overrideInteractorLineOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_overrideInteractorLineOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_overrideInteractorLineOrigin", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_lineOriginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineOriginTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineOriginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_lineOriginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineOriginTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineOriginTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.get_lineOriginOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineOriginOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineOriginOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.set_lineOriginOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineOriginOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineOriginOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb487aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::OnValidate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb487af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::Awake)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xb487c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::OnEnable)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xb487f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::OnDisable)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb488234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::OnDestroy)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb488384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::LateUpdate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb488430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.OnBeforeRenderLineVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::OnBeforeRenderLineVisual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb488540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"OnBeforeRenderLineVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.UpdateLineVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::UpdateLineVisual)> {
  constexpr static std::size_t size = 0x9c4;
  constexpr static std::size_t addrs = 0xb488544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"UpdateLineVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.GetLinePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>, ::by_ref<int32_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::GetLinePoints)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0xb488f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"GetLinePoints", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.AdjustLineAndReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(bool, bool, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::AdjustLineAndReticle)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0xb489c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"AdjustLineAndReticle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.FindClosestInteractableAttachPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::FindClosestInteractableAttachPoint)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xb4898fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"FindClosestInteractableAttachPoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.EnsureSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::EnsureSize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb489ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"EnsureSize", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.GetLineOriginAndDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>, int32_t, bool, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::GetLineOriginAndDirection)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xb48928c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"GetLineOriginAndDirection", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.ExtractHitInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>, int32_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<bool>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::ExtractHitInformation)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0xb489594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"ExtractHitInformation", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.CalculateLineCurveRenderPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::CalculateLineCurveRenderPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb487594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"CalculateLineCurveRenderPoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.ComputeNewRenderPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, float_t, bool, bool, float_t, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::ComputeNewRenderPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48759c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"ComputeNewRenderPoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.EvaluateLineEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, bool, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::EvaluateLineEndPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4875a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"EvaluateLineEndPoint", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.UpdateTargetLineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, float_t, float_t, float_t, float_t, bool, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::UpdateTargetLineLength)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xb48a0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"UpdateTargetLineLength", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.AssignReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::AssignReticle)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0xb48a2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"AssignReticle", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.ClearReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::ClearReticle)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb48a61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"ClearReticle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.SetColorGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::UnityEngine::Gradient*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::SetColorGradient)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb48a28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"SetColorGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.UpdateSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::UpdateSettings)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb487b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"UpdateSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.TryFindLineRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::TryFindLineRenderer)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb48a6b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"TryFindLineRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.ClearLineRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::ClearLineRenderer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb487f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"ClearLineRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.FindXROrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::FindXROrigin)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb487e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"FindXROrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.SetupReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::SetupReticle)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb4877d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"SetupReticle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.SetupBlockedReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::SetupBlockedReticle)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb48795c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"SetupBlockedReticle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.AttachCustomReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(::UnityEngine::GameObject*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::AttachCustomReticle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb48a7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"AttachCustomReticle", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.RemoveCustomReticle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::RemoveCustomReticle)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb48a7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"RemoveCustomReticle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::_ctor)> {
  constexpr static std::size_t size = 0x718;
  constexpr static std::size_t addrs = 0xb48a80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual._OnEnable_b__158_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::_OnEnable_b__158_0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb48af24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"<OnEnable>b__158_0", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.CalculateLineCurveRenderPoints$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::CalculateLineCurveRenderPoints$BurstManaged)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb48af68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"CalculateLineCurveRenderPoints$BurstManaged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.ComputeNewRenderPoints$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, float_t, bool, bool, float_t, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::ComputeNewRenderPoints$BurstManaged)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb48b078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"ComputeNewRenderPoints$BurstManaged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual.EvaluateLineEndPoint$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, bool, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::EvaluateLineEndPoint$BurstManaged)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0xb48b26c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"EvaluateLineEndPoint$BurstManaged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineWidth;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineWidth;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineWidth = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_OverrideInteractorLineLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideInteractorLineLength;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_OverrideInteractorLineLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideInteractorLineLength;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_OverrideInteractorLineLength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverrideInteractorLineLength = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineLength;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineLength;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineLength = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_AutoAdjustLineLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoAdjustLineLength;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_AutoAdjustLineLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AutoAdjustLineLength;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_AutoAdjustLineLength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AutoAdjustLineLength = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_MinLineLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinLineLength;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_MinLineLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinLineLength;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_MinLineLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinLineLength = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_UseDistanceToHitAsMaxLineLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseDistanceToHitAsMaxLineLength;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_UseDistanceToHitAsMaxLineLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseDistanceToHitAsMaxLineLength;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_UseDistanceToHitAsMaxLineLength(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseDistanceToHitAsMaxLineLength = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRetractionDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRetractionDelay;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRetractionDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRetractionDelay;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineRetractionDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineRetractionDelay = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineLengthChangeSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineLengthChangeSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineLengthChangeSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineLengthChangeSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineLengthChangeSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineLengthChangeSpeed = value;
}
constexpr ::UnityEngine::AnimationCurve*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_WidthCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WidthCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_WidthCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WidthCurve;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_WidthCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WidthCurve = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_SetLineColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SetLineColorGradient;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_SetLineColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SetLineColorGradient;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_SetLineColorGradient(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SetLineColorGradient = value;
}
constexpr ::UnityEngine::Gradient*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_ValidColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidColorGradient;
}
constexpr ::UnityEngine::Gradient* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_ValidColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidColorGradient;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_ValidColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ValidColorGradient = value;
}
constexpr ::UnityEngine::Gradient*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_InvalidColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InvalidColorGradient;
}
constexpr ::UnityEngine::Gradient* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_InvalidColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InvalidColorGradient;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_InvalidColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InvalidColorGradient = value;
}
constexpr ::UnityEngine::Gradient*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_BlockedColorGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockedColorGradient;
}
constexpr ::UnityEngine::Gradient* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_BlockedColorGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockedColorGradient;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_BlockedColorGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlockedColorGradient = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_TreatSelectionAsValidState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TreatSelectionAsValidState;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_TreatSelectionAsValidState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TreatSelectionAsValidState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_TreatSelectionAsValidState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TreatSelectionAsValidState = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_SmoothMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothMovement;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_SmoothMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SmoothMovement;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_SmoothMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SmoothMovement = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_FollowTightness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FollowTightness;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_FollowTightness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FollowTightness;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_FollowTightness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FollowTightness = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_SnapThresholdDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapThresholdDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_SnapThresholdDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapThresholdDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_SnapThresholdDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SnapThresholdDistance = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_Reticle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Reticle;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_Reticle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Reticle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_Reticle(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Reticle = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_BlockedReticle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockedReticle;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_BlockedReticle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BlockedReticle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_BlockedReticle(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BlockedReticle = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_StopLineAtFirstRaycastHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StopLineAtFirstRaycastHit;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_StopLineAtFirstRaycastHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StopLineAtFirstRaycastHit;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_StopLineAtFirstRaycastHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StopLineAtFirstRaycastHit = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_StopLineAtSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StopLineAtSelection;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_StopLineAtSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StopLineAtSelection;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_StopLineAtSelection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StopLineAtSelection = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_SnapEndpointIfAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapEndpointIfAvailable;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_SnapEndpointIfAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapEndpointIfAvailable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_SnapEndpointIfAvailable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SnapEndpointIfAvailable = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineBendRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineBendRatio;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineBendRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineBendRatio;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineBendRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineBendRatio = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_BendingEnabledInteractionLayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BendingEnabledInteractionLayers;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_BendingEnabledInteractionLayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BendingEnabledInteractionLayers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_BendingEnabledInteractionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BendingEnabledInteractionLayers = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_OverrideInteractorLineOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideInteractorLineOrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_OverrideInteractorLineOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideInteractorLineOrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_OverrideInteractorLineOrigin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverrideInteractorLineOrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineOriginTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineOriginTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineOriginTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineOriginTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineOriginTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineOriginTransform = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineOriginOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineOriginOffset;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineOriginOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineOriginOffset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineOriginOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineOriginOffset = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_SquareSnapThresholdDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SquareSnapThresholdDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_SquareSnapThresholdDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SquareSnapThresholdDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_SquareSnapThresholdDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SquareSnapThresholdDistance = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_ReticlePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticlePos;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_ReticlePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticlePos;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_ReticlePos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReticlePos = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_ReticleNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticleNormal;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_ReticleNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticleNormal;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_ReticleNormal(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReticleNormal = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_EndPositionInLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPositionInLine;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_EndPositionInLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPositionInLine;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_EndPositionInLine(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EndPositionInLine = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_SnapCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapCurve;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_SnapCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapCurve;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_SnapCurve(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SnapCurve = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_PerformSetup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformSetup;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_PerformSetup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PerformSetup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_PerformSetup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PerformSetup = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_ReticleToUse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticleToUse;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_ReticleToUse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ReticleToUse;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_ReticleToUse(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ReticleToUse = value;
}
constexpr ::UnityW<::UnityEngine::LineRenderer>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineRenderer = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRenderable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRenderable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineRenderable(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ILineRenderable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineRenderable = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_AdvancedLineRenderable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdvancedLineRenderable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_AdvancedLineRenderable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdvancedLineRenderable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_AdvancedLineRenderable(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IAdvancedLineRenderable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AdvancedLineRenderable = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_HasAdvancedLineRenderable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasAdvancedLineRenderable;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_HasAdvancedLineRenderable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasAdvancedLineRenderable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_HasAdvancedLineRenderable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasAdvancedLineRenderable = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRenderableAsSelectInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderableAsSelectInteractor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRenderableAsSelectInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderableAsSelectInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineRenderableAsSelectInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineRenderableAsSelectInteractor = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRenderableAsHoverInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderableAsHoverInteractor;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRenderableAsHoverInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderableAsHoverInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineRenderableAsHoverInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineRenderableAsHoverInteractor = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRenderableAsBaseInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderableAsBaseInteractor;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRenderableAsBaseInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderableAsBaseInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineRenderableAsBaseInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineRenderableAsBaseInteractor = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRenderableAsRayInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderableAsRayInteractor;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineRenderableAsRayInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderableAsRayInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineRenderableAsRayInteractor(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineRenderableAsRayInteractor = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_TargetPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPoints;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_TargetPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_TargetPoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetPoints = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_NumTargetPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumTargetPoints;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_NumTargetPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumTargetPoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_NumTargetPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NumTargetPoints = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_TargetPointsFallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPointsFallback;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_TargetPointsFallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPointsFallback;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_TargetPointsFallback(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetPointsFallback = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_RenderPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderPoints;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_RenderPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderPoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_RenderPoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderPoints = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_NumRenderPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumRenderPoints;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_NumRenderPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumRenderPoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_NumRenderPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NumRenderPoints = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_PreviousRenderPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousRenderPoints;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_PreviousRenderPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousRenderPoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_PreviousRenderPoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousRenderPoints = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_NumPreviousRenderPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumPreviousRenderPoints;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_NumPreviousRenderPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NumPreviousRenderPoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_NumPreviousRenderPoints(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NumPreviousRenderPoints = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_ClearArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClearArray;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_ClearArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ClearArray;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_ClearArray(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ClearArray = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_CustomReticle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomReticle;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_CustomReticle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomReticle;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_CustomReticle(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CustomReticle = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_CustomReticleAttached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomReticleAttached;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_CustomReticleAttached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomReticleAttached;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_CustomReticleAttached(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CustomReticleAttached = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_XRInteractableSnapVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XRInteractableSnapVolume;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_XRInteractableSnapVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XRInteractableSnapVolume;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_XRInteractableSnapVolume(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XRInteractableSnapVolume = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_PreviousShouldBendLine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousShouldBendLine;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_PreviousShouldBendLine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousShouldBendLine;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_PreviousShouldBendLine(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousShouldBendLine = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_PreviousLineDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousLineDirection;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_PreviousLineDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousLineDirection;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_PreviousLineDirection(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousLineDirection = value;
}
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_CurrentHitPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentHitPoint;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_CurrentHitPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentHitPoint;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_CurrentHitPoint(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentHitPoint = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_HasHitInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasHitInfo;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_HasHitInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasHitInfo;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_HasHitInfo(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasHitInfo = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_ValidHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidHit;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_ValidHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ValidHit;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_ValidHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ValidHit = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LastValidHitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidHitTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LastValidHitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidHitTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LastValidHitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastValidHitTime = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LastValidLineLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidLineLength;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LastValidLineLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidLineLength;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LastValidLineLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastValidLineLength = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_PreviousCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_PreviousCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousCollider;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_PreviousCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousCollider = value;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_XROrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROrigin;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_XROrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XROrigin = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_HasRayInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasRayInteractor;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_HasRayInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasRayInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_HasRayInteractor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasRayInteractor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_HasBaseInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasBaseInteractor;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_HasBaseInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasBaseInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_HasBaseInteractor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasBaseInteractor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_HasHoverInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasHoverInteractor;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_HasHoverInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasHoverInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_HasHoverInteractor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasHoverInteractor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_HasSelectInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasSelectInteractor;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_HasSelectInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasSelectInteractor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_HasSelectInteractor(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasSelectInteractor = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_UserScaleVar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UserScaleVar;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_UserScaleVar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UserScaleVar;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_UserScaleVar(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UserScaleVar = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineLengthOverrideTweenableVariable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineLengthOverrideTweenableVariable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_LineLengthOverrideTweenableVariable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineLengthOverrideTweenableVariable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_LineLengthOverrideTweenableVariable(::UnityEngine::XR::Interaction::Toolkit::Utilities::Tweenables::Primitives::FloatTweenableVariable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineLengthOverrideTweenableVariable = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_BindingsGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsGroup;
}
constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_get_m_BindingsGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsGroup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::__cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingsGroup = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineWidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_overrideInteractorLineLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_overrideInteractorLineLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_overrideInteractorLineLength(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_overrideInteractorLineLength", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_autoAdjustLineLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_autoAdjustLineLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_autoAdjustLineLength(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_autoAdjustLineLength", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_minLineLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_minLineLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_minLineLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_minLineLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_useDistanceToHitAsMaxLineLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_useDistanceToHitAsMaxLineLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_useDistanceToHitAsMaxLineLength(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_useDistanceToHitAsMaxLineLength", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineRetractionDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineRetractionDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineRetractionDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineRetractionDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineLengthChangeSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineLengthChangeSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineLengthChangeSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineLengthChangeSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_widthCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_widthCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_widthCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_widthCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_setLineColorGradient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_setLineColorGradient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_setLineColorGradient(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_setLineColorGradient", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Gradient* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_validColorGradient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_validColorGradient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_validColorGradient(::UnityEngine::Gradient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_validColorGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Gradient* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_invalidColorGradient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_invalidColorGradient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_invalidColorGradient(::UnityEngine::Gradient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_invalidColorGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Gradient* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_blockedColorGradient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_blockedColorGradient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_blockedColorGradient(::UnityEngine::Gradient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_blockedColorGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_treatSelectionAsValidState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_treatSelectionAsValidState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_treatSelectionAsValidState(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_treatSelectionAsValidState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_smoothMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_smoothMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_smoothMovement(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_smoothMovement", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_followTightness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_followTightness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_followTightness(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_followTightness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_snapThresholdDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_snapThresholdDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_snapThresholdDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_snapThresholdDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_reticle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_reticle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_reticle(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_reticle", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_blockedReticle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_blockedReticle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_blockedReticle(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_blockedReticle", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_stopLineAtFirstRaycastHit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_stopLineAtFirstRaycastHit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_stopLineAtFirstRaycastHit(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_stopLineAtFirstRaycastHit", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_stopLineAtSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_stopLineAtSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_stopLineAtSelection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_stopLineAtSelection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_snapEndpointIfAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_snapEndpointIfAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_snapEndpointIfAvailable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_snapEndpointIfAvailable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineBendRatio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineBendRatio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineBendRatio(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineBendRatio", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_bendingEnabledInteractionLayers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_bendingEnabledInteractionLayers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_bendingEnabledInteractionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_bendingEnabledInteractionLayers", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_overrideInteractorLineOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_overrideInteractorLineOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_overrideInteractorLineOrigin(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_overrideInteractorLineOrigin", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineOriginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineOriginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineOriginTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineOriginTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::get_lineOriginOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"get_lineOriginOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::set_lineOriginOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"set_lineOriginOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::OnBeforeRenderLineVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"OnBeforeRenderLineVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::UpdateLineVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"UpdateLineVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::GetLinePoints(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  linePoints, ::by_ref<int32_t>  numPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"GetLinePoints", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, linePoints, numPoints);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::AdjustLineAndReticle(bool  hasSelection, bool  bendLine, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  targetEndPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"AdjustLineAndReticle", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasSelection, bendLine, lineOrigin, targetEndPoint);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::FindClosestInteractableAttachPoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, ::by_ref<::UnityEngine::Vector3>  closestPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"FindClosestInteractableAttachPoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineOrigin, closestPoint);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::EnsureSize(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  array, int32_t  targetSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"EnsureSize", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, array, targetSize);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::GetLineOriginAndDirection(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints, int32_t  numTargetPoints, bool  isLineStraight, ::by_ref<::UnityEngine::Vector3>  lineOrigin, ::by_ref<::UnityEngine::Vector3>  lineDirection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"GetLineOriginAndDirection", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPoints, numTargetPoints, isLineStraight, lineOrigin, lineDirection);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::ExtractHitInformation(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints, int32_t  numTargetPoints, ::by_ref<::UnityEngine::Vector3>  targetEndPoint, ::by_ref<bool>  hitSnapVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"ExtractHitInformation", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetPoints, numTargetPoints, targetEndPoint, hitSnapVolume);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::CalculateLineCurveRenderPoints(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"CalculateLineCurveRenderPoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, numTargetPoints, curveRatio, lineOrigin, lineDirection, endPoint, targetPoints);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::ComputeNewRenderPoints(int32_t  numRenderPoints, int32_t  numTargetPoints, float_t  targetLineLength, bool  shouldSmoothPoints, bool  shouldOverwritePoints, float_t  pointSmoothIncrement, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  previousRenderPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  renderPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"ComputeNewRenderPoints", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, numRenderPoints, numTargetPoints, targetLineLength, shouldSmoothPoints, shouldOverwritePoints, pointSmoothIncrement, targetPoints, previousRenderPoints, renderPoints);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::EvaluateLineEndPoint(float_t  targetLineLength, bool  shouldSmoothPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  unsmoothedTargetPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lastRenderPoint, ::by_ref<::Unity::Mathematics::float3>  newRenderPoint, ::by_ref<float_t>  lineLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"EvaluateLineEndPoint", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, targetLineLength, shouldSmoothPoint, unsmoothedTargetPoint, lastRenderPoint, newRenderPoint, lineLength);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::UpdateTargetLineLength(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  hitPoint, float_t  minimumLineLength, float_t  maximumLineLength, float_t  lineRetractionDelaySeconds, float_t  lineRetractionScalar, bool  hasHit, bool  deriveMaxLineLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"UpdateTargetLineLength", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, lineOrigin, hitPoint, minimumLineLength, maximumLineLength, lineRetractionDelaySeconds, lineRetractionScalar, hasHit, deriveMaxLineLength);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::AssignReticle(bool  useBlockedVisuals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"AssignReticle", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, useBlockedVisuals);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::ClearReticle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"ClearReticle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::SetColorGradient(::UnityEngine::Gradient*  colorGradient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"SetColorGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorGradient);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::UpdateSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"UpdateSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::TryFindLineRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"TryFindLineRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::ClearLineRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"ClearLineRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::FindXROrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"FindXROrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::SetupReticle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"SetupReticle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::SetupBlockedReticle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"SetupBlockedReticle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::AttachCustomReticle(::UnityEngine::GameObject*  reticleInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"AttachCustomReticle", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reticleInstance);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::RemoveCustomReticle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"RemoveCustomReticle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::_OnEnable_b__158_0(float_t  userScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"<OnEnable>b__158_0", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::CalculateLineCurveRenderPoints$BurstManaged(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"CalculateLineCurveRenderPoints$BurstManaged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, numTargetPoints, curveRatio, lineOrigin, lineDirection, endPoint, targetPoints);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::ComputeNewRenderPoints$BurstManaged(int32_t  numRenderPoints, int32_t  numTargetPoints, float_t  targetLineLength, bool  shouldSmoothPoints, bool  shouldOverwritePoints, float_t  pointSmoothIncrement, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  previousRenderPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  renderPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"ComputeNewRenderPoints$BurstManaged", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, numRenderPoints, numTargetPoints, targetLineLength, shouldSmoothPoints, shouldOverwritePoints, pointSmoothIncrement, targetPoints, previousRenderPoints, renderPoints);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::EvaluateLineEndPoint$BurstManaged(float_t  targetLineLength, bool  shouldSmoothPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  unsmoothedTargetPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lastRenderPoint, ::by_ref<::Unity::Mathematics::float3>  newRenderPoint, ::by_ref<float_t>  lineLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>(),
                        {"EvaluateLineEndPoint$BurstManaged", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, targetLineLength, shouldSmoothPoint, unsmoothedTargetPoint, lastRenderPoint, newRenderPoint, lineLength);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::i___UnityEngine__XR__Interaction__Toolkit__Interactors__Visuals__IXRCustomReticleProvider() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::IXRCustomReticleProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual::XRInteractorLineVisual()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb48c3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb48c4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, bool, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb48c4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall::Invoke(float_t  targetLineLength, bool  shouldSmoothPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  unsmoothedTargetPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lastRenderPoint, ::by_ref<::Unity::Mathematics::float3>  newRenderPoint, ::by_ref<float_t>  lineLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, targetLineLength, shouldSmoothPoint, unsmoothedTargetPoint, lastRenderPoint, newRenderPoint, lineLength);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb48c1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::*)(float_t, bool, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb48c294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::*)(float_t, bool, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb48c2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb48c3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::Invoke(float_t  targetLineLength, bool  shouldSmoothPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  unsmoothedTargetPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lastRenderPoint, ::by_ref<::Unity::Mathematics::float3>  newRenderPoint, ::by_ref<float_t>  lineLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetLineLength, shouldSmoothPoint, unsmoothedTargetPoint, lastRenderPoint, newRenderPoint, lineLength);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::BeginInvoke(float_t  targetLineLength, bool  shouldSmoothPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  unsmoothedTargetPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  lastRenderPoint, ::by_ref<::Unity::Mathematics::float3>  newRenderPoint, ::by_ref<float_t>  lineLength, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, targetLineLength, shouldSmoothPoint, unsmoothedTargetPoint, lastRenderPoint, newRenderPoint, lineLength, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_7);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate::XRInteractorLineVisual_EvaluateLineEndPoint_00000D7E$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb48be48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb48bf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t, float_t, bool, bool, float_t, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xb48bf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall::Invoke(int32_t  numRenderPoints, int32_t  numTargetPoints, float_t  targetLineLength, bool  shouldSmoothPoints, bool  shouldOverwritePoints, float_t  pointSmoothIncrement, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  previousRenderPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  renderPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, numRenderPoints, numTargetPoints, targetLineLength, shouldSmoothPoints, shouldOverwritePoints, pointSmoothIncrement, targetPoints, previousRenderPoints, renderPoints);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb48bc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::*)(int32_t, int32_t, float_t, bool, bool, float_t, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb48bca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::*)(int32_t, int32_t, float_t, bool, bool, float_t, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb48bcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb48be20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::Invoke(int32_t  numRenderPoints, int32_t  numTargetPoints, float_t  targetLineLength, bool  shouldSmoothPoints, bool  shouldOverwritePoints, float_t  pointSmoothIncrement, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  previousRenderPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  renderPoints)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, numRenderPoints, numTargetPoints, targetLineLength, shouldSmoothPoints, shouldOverwritePoints, pointSmoothIncrement, targetPoints, previousRenderPoints, renderPoints);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::BeginInvoke(int32_t  numRenderPoints, int32_t  numTargetPoints, float_t  targetLineLength, bool  shouldSmoothPoints, bool  shouldOverwritePoints, float_t  pointSmoothIncrement, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  targetPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  previousRenderPoints, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  renderPoints, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_10)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, numRenderPoints, numTargetPoints, targetLineLength, shouldSmoothPoints, shouldOverwritePoints, pointSmoothIncrement, targetPoints, previousRenderPoints, renderPoints, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_10);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate::XRInteractorLineVisual_ComputeNewRenderPoints_00000D7D$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb48ba18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb48bb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb48bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall::Invoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, numTargetPoints, curveRatio, lineOrigin, lineDirection, endPoint, targetPoints);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb48b81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::*)(int32_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb48b8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::*)(int32_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb48b8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb48ba0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::Invoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numTargetPoints, curveRatio, lineOrigin, lineDirection, endPoint, targetPoints);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::BeginInvoke(int32_t  numTargetPoints, float_t  curveRatio, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineOrigin, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  lineDirection, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  endPoint, ::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  targetPoints, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, numTargetPoints, curveRatio, lineOrigin, lineDirection, endPoint, targetPoints, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_7);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate::XRInteractorLineVisual_CalculateLineCurveRenderPoints_00000D7C$PostfixBurstDelegate()   {
}
