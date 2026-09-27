#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/CurveVisualController.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__EndPointType_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__LineDynamicsMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__CurveVisualController_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__CurveVisualController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__EndPointType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__ICurveInteractionDataProvider_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__LineDynamicsMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Visuals/zzzz__LineProperties_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__UnityObjectReferenceCache_2_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__LineRenderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_lineRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::LineRenderer> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_lineRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb483e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_lineRenderer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_lineRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::LineRenderer*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_lineRenderer)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb483e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_lineRenderer", {}, {::i2c::type_of<::UnityEngine::LineRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_curveInteractionDataProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_curveInteractionDataProvider)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb483eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_curveInteractionDataProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_curveInteractionDataProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_curveInteractionDataProvider)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb483f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_curveInteractionDataProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_overrideLineOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_overrideLineOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb483f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_overrideLineOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_overrideLineOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_overrideLineOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb483f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_overrideLineOrigin", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_lineOriginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_lineOriginTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb483f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_lineOriginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_lineOriginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::Transform*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_lineOriginTransform)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb483f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_lineOriginTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_visualPointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_visualPointCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb483ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_visualPointCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_visualPointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_visualPointCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_visualPointCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_maxVisualCurveDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_maxVisualCurveDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48400c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_maxVisualCurveDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_maxVisualCurveDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_maxVisualCurveDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_maxVisualCurveDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_restingVisualLineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_restingVisualLineLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48401c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_restingVisualLineLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_restingVisualLineLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_restingVisualLineLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_restingVisualLineLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_lineDynamicsMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_lineDynamicsMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48402c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_lineDynamicsMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_lineDynamicsMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_lineDynamicsMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_lineDynamicsMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_retractDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_retractDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48403c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_retractDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_retractDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_retractDelay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_retractDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_retractDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_retractDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48404c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_retractDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_retractDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_retractDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_retractDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_extendLineToEmptyHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_extendLineToEmptyHit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48405c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_extendLineToEmptyHit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_extendLineToEmptyHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_extendLineToEmptyHit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_extendLineToEmptyHit", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_extensionRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_extensionRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48406c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_extensionRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_extensionRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_extensionRate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb484074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_extensionRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_endPointExpansionRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_endPointExpansionRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_endPointExpansionRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_endPointExpansionRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_endPointExpansionRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48409c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_endPointExpansionRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_computeMidPointWithComplexCurves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_computeMidPointWithComplexCurves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4840a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_computeMidPointWithComplexCurves", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_computeMidPointWithComplexCurves
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_computeMidPointWithComplexCurves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4840ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_computeMidPointWithComplexCurves", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_snapToSelectedAttachIfAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_snapToSelectedAttachIfAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4840b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_snapToSelectedAttachIfAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_snapToSelectedAttachIfAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_snapToSelectedAttachIfAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4840bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_snapToSelectedAttachIfAvailable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_snapToSnapVolumeIfAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_snapToSnapVolumeIfAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4840c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_snapToSnapVolumeIfAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_snapToSnapVolumeIfAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_snapToSnapVolumeIfAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4840cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_snapToSnapVolumeIfAvailable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_curveStartOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_curveStartOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4840d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_curveStartOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_curveStartOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_curveStartOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4840dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_curveStartOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_curveEndOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_curveEndOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4840e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_curveEndOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_curveEndOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_curveEndOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4840ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_curveEndOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_customizeLinePropertiesForState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_customizeLinePropertiesForState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4840f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_customizeLinePropertiesForState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_customizeLinePropertiesForState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_customizeLinePropertiesForState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4840fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_customizeLinePropertiesForState", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_linePropertyAnimationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_linePropertyAnimationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_linePropertyAnimationSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_linePropertyAnimationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_linePropertyAnimationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48410c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_linePropertyAnimationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_noValidHitProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_noValidHitProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_noValidHitProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_noValidHitProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_noValidHitProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48411c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_noValidHitProperties", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_uiHitProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_uiHitProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_uiHitProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_uiHitProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_uiHitProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48412c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_uiHitProperties", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_uiPressHitProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_uiPressHitProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_uiPressHitProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_uiPressHitProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_uiPressHitProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48413c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_uiPressHitProperties", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_selectHitProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_selectHitProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_selectHitProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_selectHitProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_selectHitProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48414c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_selectHitProperties", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_hoverHitProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_hoverHitProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_hoverHitProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_hoverHitProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_hoverHitProperties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48415c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_hoverHitProperties", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_renderLineInWorldSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_renderLineInWorldSpace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_renderLineInWorldSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_renderLineInWorldSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_renderLineInWorldSpace)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb48416c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_renderLineInWorldSpace", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_swapMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_swapMaterials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48420c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_swapMaterials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_swapMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_swapMaterials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_swapMaterials", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_baseLineMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_baseLineMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48421c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_baseLineMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_baseLineMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::Material*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_baseLineMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_baseLineMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.get_emptyHitMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_emptyHitMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb48422c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_emptyHitMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.set_emptyHitMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::Material*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_emptyHitMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb484234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_emptyHitMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::Awake)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xb48423c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::OnEnable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4845b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::OnDisable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb484654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::OnDestroy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb4846f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb484774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.OnBeforeRenderLineVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::OnBeforeRenderLineVisual)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb484778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"OnBeforeRenderLineVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.UpdateLineVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::UpdateLineVisual)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xb48477c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"UpdateLineVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.CheckIfVisualStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::CheckIfVisualStateChanged)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4851fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"CheckIfVisualStateChanged", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.GetLineOriginAndDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetLineOriginAndDirection)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb484b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetLineOriginAndDirection", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.GetEndpointInformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetEndpointInformation)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0xb484d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetEndpointInformation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.UpdateLinePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::UpdateLinePoints)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0xb4856f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"UpdateLinePoints", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.TryGetMidPointFromCurveSamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::TryGetMidPointFromCurveSamples)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0xb485ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"TryGetMidPointFromCurveSamples", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.TryGetLineProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::TryGetLineProperties)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb485e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"TryGetLineProperties", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.GetLineBendRatio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetLineBendRatio)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb485b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetLineBendRatio", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.DetermineOffsets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType, float_t, ::by_ref<float_t>, ::by_ref<float_t>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::DetermineOffsets)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb485298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"DetermineOffsets", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.UpdateLineWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::UpdateLineWidth)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xb4853c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"UpdateLineWidth", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.UpdateGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::UpdateGradient)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb4855b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"UpdateGradient", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.SetLinePositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::SetLinePositions)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb485e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"SetLinePositions", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.UpdateTargetDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType, float_t, float_t, float_t, bool, float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::UpdateTargetDistance)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xb4850ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"UpdateTargetDistance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.SwapMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::SwapMaterials)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb485254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"SwapMaterials", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.ValidatePointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::ValidatePointCount)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb484acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"ValidatePointCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.GetAdjustedEndPointForMaxDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetAdjustedEndPointForMaxDistance)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb483e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetAdjustedEndPointForMaxDistance", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.GetClosestPointOnLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetClosestPointOnLine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb483e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetClosestPointOnLine", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.AdjustCastHitEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::AdjustCastHitEndPoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb483e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"AdjustCastHitEndPoint", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.ComputeFallBackLine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::ComputeFallBackLine)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb483e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"ComputeFallBackLine", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb486440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.GetAdjustedEndPointForMaxDistance$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetAdjustedEndPointForMaxDistance$BurstManaged)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb486520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetAdjustedEndPointForMaxDistance$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.GetClosestPointOnLine$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetClosestPointOnLine$BurstManaged)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb4865f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetClosestPointOnLine$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.AdjustCastHitEndPoint$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::AdjustCastHitEndPoint$BurstManaged)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb486644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"AdjustCastHitEndPoint$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController.ComputeFallBackLine$BurstManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::ComputeFallBackLine$BurstManaged)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xb4867a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"ComputeFallBackLine$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::LineRenderer>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LineRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderer;
}
constexpr ::UnityW<::UnityEngine::LineRenderer> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LineRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineRenderer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LineRenderer(::UnityW<::UnityEngine::LineRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineRenderer = value;
}
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_CurveVisualObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurveVisualObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_CurveVisualObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurveVisualObject;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_CurveVisualObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurveVisualObject = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*,::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_CurveDataProviderObjectRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurveDataProviderObjectRef;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*,::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_CurveDataProviderObjectRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurveDataProviderObjectRef;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_CurveDataProviderObjectRef(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*,::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurveDataProviderObjectRef = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_OverrideLineOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideLineOrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_OverrideLineOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_OverrideLineOrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_OverrideLineOrigin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_OverrideLineOrigin = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LineOriginTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineOriginTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LineOriginTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineOriginTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LineOriginTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineOriginTransform = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_VisualPointCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisualPointCount;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_VisualPointCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VisualPointCount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_VisualPointCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VisualPointCount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_MaxVisualCurveDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxVisualCurveDistance;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_MaxVisualCurveDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxVisualCurveDistance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_MaxVisualCurveDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxVisualCurveDistance = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_RestingVisualLineLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RestingVisualLineLength;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_RestingVisualLineLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RestingVisualLineLength;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_RestingVisualLineLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RestingVisualLineLength = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LineDynamicsMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineDynamicsMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LineDynamicsMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineDynamicsMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LineDynamicsMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineDynamicsMode = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_RetractDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RetractDelay;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_RetractDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RetractDelay;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_RetractDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RetractDelay = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_RetractDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RetractDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_RetractDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RetractDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_RetractDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RetractDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_ExtendLineToEmptyHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtendLineToEmptyHit;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_ExtendLineToEmptyHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtendLineToEmptyHit;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_ExtendLineToEmptyHit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExtendLineToEmptyHit = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_ExtensionRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtensionRate;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_ExtensionRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtensionRate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_ExtensionRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExtensionRate = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_EndPointExpansionRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPointExpansionRate;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_EndPointExpansionRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPointExpansionRate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_EndPointExpansionRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EndPointExpansionRate = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_ComputeMidPointWithComplexCurves()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ComputeMidPointWithComplexCurves;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_ComputeMidPointWithComplexCurves() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ComputeMidPointWithComplexCurves;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_ComputeMidPointWithComplexCurves(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ComputeMidPointWithComplexCurves = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_SnapToSelectedAttachIfAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapToSelectedAttachIfAvailable;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_SnapToSelectedAttachIfAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapToSelectedAttachIfAvailable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_SnapToSelectedAttachIfAvailable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SnapToSelectedAttachIfAvailable = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_SnapToSnapVolumeIfAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapToSnapVolumeIfAvailable;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_SnapToSnapVolumeIfAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SnapToSnapVolumeIfAvailable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_SnapToSnapVolumeIfAvailable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SnapToSnapVolumeIfAvailable = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_CurveStartOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurveStartOffset;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_CurveStartOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurveStartOffset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_CurveStartOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurveStartOffset = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_CurveEndOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurveEndOffset;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_CurveEndOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurveEndOffset;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_CurveEndOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurveEndOffset = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_CustomizeLinePropertiesForState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomizeLinePropertiesForState;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_CustomizeLinePropertiesForState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CustomizeLinePropertiesForState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_CustomizeLinePropertiesForState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CustomizeLinePropertiesForState = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LinePropertyAnimationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinePropertyAnimationSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LinePropertyAnimationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LinePropertyAnimationSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LinePropertyAnimationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LinePropertyAnimationSpeed = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_NoValidHitProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NoValidHitProperties;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_NoValidHitProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NoValidHitProperties;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_NoValidHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NoValidHitProperties = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_UIHitProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHitProperties;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_UIHitProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIHitProperties;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_UIHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIHitProperties = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_UIPressHitProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressHitProperties;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_UIPressHitProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UIPressHitProperties;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_UIPressHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UIPressHitProperties = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_SelectHitProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectHitProperties;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_SelectHitProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectHitProperties;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_SelectHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectHitProperties = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_HoverHitProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverHitProperties;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_HoverHitProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverHitProperties;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_HoverHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverHitProperties = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_RenderLineInWorldSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderLineInWorldSpace;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_RenderLineInWorldSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderLineInWorldSpace;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_RenderLineInWorldSpace(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderLineInWorldSpace = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_SwapMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SwapMaterials;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_SwapMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SwapMaterials;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_SwapMaterials(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SwapMaterials = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_BaseLineMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BaseLineMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_BaseLineMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BaseLineMaterial;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_BaseLineMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BaseLineMaterial = value;
}
constexpr ::UnityW<::UnityEngine::Material>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_EmptyHitMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EmptyHitMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_EmptyHitMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EmptyHitMaterial;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_EmptyHitMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EmptyHitMaterial = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_InternalSamplePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalSamplePoints;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_InternalSamplePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InternalSamplePoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_InternalSamplePoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InternalSamplePoints = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_FallBackSamplePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FallBackSamplePoints;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_FallBackSamplePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FallBackSamplePoints;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_FallBackSamplePoints(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FallBackSamplePoints = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_ParentTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParentTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_ParentTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ParentTransform;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_ParentTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ParentTransform = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastHitTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHitTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastHitTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastHitTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LastHitTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastHitTime = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LengthToLastHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LengthToLastHit;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LengthToLastHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LengthToLastHit;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LengthToLastHit(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LengthToLastHit = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LineLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineLength;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LineLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LineLength;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LineLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LineLength = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastPosCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPosCount;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastPosCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastPosCount;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LastPosCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastPosCount = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_RenderLengthMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderLengthMultiplier;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_RenderLengthMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderLengthMultiplier;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_RenderLengthMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderLengthMultiplier = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_CanSwapMaterials()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CanSwapMaterials;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_CanSwapMaterials() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CanSwapMaterials;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_CanSwapMaterials(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CanSwapMaterials = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastLineStartWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastLineStartWidth;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastLineStartWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastLineStartWidth;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LastLineStartWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastLineStartWidth = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastLineEndWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastLineEndWidth;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastLineEndWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastLineEndWidth;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LastLineEndWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastLineEndWidth = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_EndPointTypeChangeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPointTypeChangeTime;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_EndPointTypeChangeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndPointTypeChangeTime;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_EndPointTypeChangeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EndPointTypeChangeTime = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastBendRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastBendRatio;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastBendRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastBendRatio;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LastBendRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastBendRatio = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_UseCustomOrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseCustomOrigin;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_UseCustomOrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseCustomOrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_UseCustomOrigin(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseCustomOrigin = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastEndPointType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastEndPointType;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastEndPointType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastEndPointType;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LastEndPointType(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastEndPointType = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastValidSelectState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidSelectState;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LastValidSelectState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastValidSelectState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LastValidSelectState(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastValidSelectState = value;
}
constexpr ::UnityEngine::Gradient*& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LerpGradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LerpGradient;
}
constexpr ::UnityEngine::Gradient* const& UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_get_m_LerpGradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LerpGradient;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::__cordl_internal_set_m_LerpGradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LerpGradient = value;
}
inline ::UnityW<::UnityEngine::LineRenderer> UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_lineRenderer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_lineRenderer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::LineRenderer>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_lineRenderer(::UnityEngine::LineRenderer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_lineRenderer", {}, {::i2c::type_of<::UnityEngine::LineRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_curveInteractionDataProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_curveInteractionDataProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_curveInteractionDataProvider(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_curveInteractionDataProvider", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_overrideLineOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_overrideLineOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_overrideLineOrigin(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_overrideLineOrigin", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_lineOriginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_lineOriginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_lineOriginTransform(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_lineOriginTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_visualPointCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_visualPointCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_visualPointCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_visualPointCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_maxVisualCurveDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_maxVisualCurveDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_maxVisualCurveDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_maxVisualCurveDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_restingVisualLineLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_restingVisualLineLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_restingVisualLineLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_restingVisualLineLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_lineDynamicsMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_lineDynamicsMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_lineDynamicsMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_lineDynamicsMode", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineDynamicsMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_retractDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_retractDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_retractDelay(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_retractDelay", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_retractDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_retractDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_retractDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_retractDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_extendLineToEmptyHit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_extendLineToEmptyHit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_extendLineToEmptyHit(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_extendLineToEmptyHit", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_extensionRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_extensionRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_extensionRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_extensionRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_endPointExpansionRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_endPointExpansionRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_endPointExpansionRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_endPointExpansionRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_computeMidPointWithComplexCurves()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_computeMidPointWithComplexCurves", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_computeMidPointWithComplexCurves(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_computeMidPointWithComplexCurves", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_snapToSelectedAttachIfAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_snapToSelectedAttachIfAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_snapToSelectedAttachIfAvailable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_snapToSelectedAttachIfAvailable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_snapToSnapVolumeIfAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_snapToSnapVolumeIfAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_snapToSnapVolumeIfAvailable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_snapToSnapVolumeIfAvailable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_curveStartOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_curveStartOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_curveStartOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_curveStartOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_curveEndOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_curveEndOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_curveEndOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_curveEndOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_customizeLinePropertiesForState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_customizeLinePropertiesForState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_customizeLinePropertiesForState(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_customizeLinePropertiesForState", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_linePropertyAnimationSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_linePropertyAnimationSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_linePropertyAnimationSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_linePropertyAnimationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_noValidHitProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_noValidHitProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_noValidHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_noValidHitProperties", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_uiHitProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_uiHitProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_uiHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_uiHitProperties", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_uiPressHitProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_uiPressHitProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_uiPressHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_uiPressHitProperties", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_selectHitProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_selectHitProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_selectHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_selectHitProperties", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_hoverHitProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_hoverHitProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_hoverHitProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_hoverHitProperties", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_renderLineInWorldSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_renderLineInWorldSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_renderLineInWorldSpace(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_renderLineInWorldSpace", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_swapMaterials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_swapMaterials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_swapMaterials(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_swapMaterials", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_baseLineMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_baseLineMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_baseLineMaterial(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_baseLineMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::get_emptyHitMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"get_emptyHitMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::set_emptyHitMaterial(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"set_emptyHitMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::OnBeforeRenderLineVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"OnBeforeRenderLineVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::UpdateLineVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"UpdateLineVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::CheckIfVisualStateChanged(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  newPointType, bool  hasValidSelect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"CheckIfVisualStateChanged", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, newPointType, hasValidSelect);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetLineOriginAndDirection(::by_ref<::UnityEngine::Vector3>  worldOrigin, ::by_ref<::UnityEngine::Vector3>  worldDirection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetLineOriginAndDirection", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldOrigin, worldDirection);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetEndpointInformation(::UnityEngine::Vector3  worldOrigin, ::UnityEngine::Vector3  worldDirection, ::by_ref<float_t>  validHitDistance, ::by_ref<::UnityEngine::Vector3>  endPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetEndpointInformation", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(this, ___internal_method, worldOrigin, worldDirection, validHitDistance, endPoint);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::UpdateLinePoints(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType, ::UnityEngine::Vector3  worldOrigin, ::UnityEngine::Vector3  worldEndPoint, ::UnityEngine::Vector3  worldDirection, float_t  startOffset, float_t  endOffset, bool  forceStraightLineFallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"UpdateLinePoints", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endPointType, worldOrigin, worldEndPoint, worldDirection, startOffset, endOffset, forceStraightLineFallback);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::TryGetMidPointFromCurveSamples(/* [IsReadOnly] */ ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*>  curveInteractionDataProvider, ::by_ref<::UnityEngine::Vector3>  midPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"TryGetMidPointFromCurveSamples", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::ICurveInteractionDataProvider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, curveInteractionDataProvider, midPoint);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::TryGetLineProperties(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"TryGetLineProperties", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::LineProperties*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, endPointType, properties);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetLineBendRatio(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetLineBendRatio", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, endPointType);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::DetermineOffsets(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType, float_t  lineDistance, ::by_ref<float_t>  startOffset, ::by_ref<float_t>  endOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"DetermineOffsets", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endPointType, lineDistance, startOffset, endOffset);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::UpdateLineWidth(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType, float_t  targetDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"UpdateLineWidth", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endPointType, targetDistance);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::UpdateGradient(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"UpdateGradient", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endPointType);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::SetLinePositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  targetPoints, int32_t  numPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"SetLinePositions", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPoints, numPoints);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::UpdateTargetDistance(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType, float_t  validHitDistance, float_t  minLength, float_t  maxLength, bool  retractOnHitLoss, float_t  retractionDelay, float_t  retractionDuration, float_t  curveExtensionRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"UpdateTargetDistance", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, endPointType, validHitDistance, minLength, maxLength, retractOnHitLoss, retractionDelay, retractionDuration, curveExtensionRate);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::SwapMaterials(::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType  endPointType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"SwapMaterials", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::EndPointType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, endPointType);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::ValidatePointCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"ValidatePointCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetAdjustedEndPointForMaxDistance(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  maxDistance, ::by_ref<::Unity::Mathematics::float3>  newEndPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetAdjustedEndPointForMaxDistance", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, endPoint, maxDistance, newEndPoint);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetClosestPointOnLine(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  point, ::by_ref<::Unity::Mathematics::float3>  newPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetClosestPointOnLine", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, direction, point, newPoint);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::AdjustCastHitEndPoint(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  hitEndPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  sampleEndPoint, ::by_ref<float_t>  validHitDistance, ::by_ref<::Unity::Mathematics::float3>  endPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"AdjustCastHitEndPoint", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldOrigin, worldDirection, hitEndPoint, sampleEndPoint, validHitDistance, endPoint);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::ComputeFallBackLine(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  startOffset, float_t  endOffset, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  fallBackTargetPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"ComputeFallBackLine", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, curveOrigin, endPoint, startOffset, endOffset, fallBackTargetPoints);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetAdjustedEndPointForMaxDistance$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  maxDistance, ::by_ref<::Unity::Mathematics::float3>  newEndPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetAdjustedEndPointForMaxDistance$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, endPoint, maxDistance, newEndPoint);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::GetClosestPointOnLine$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  point, ::by_ref<::Unity::Mathematics::float3>  newPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"GetClosestPointOnLine$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, direction, point, newPoint);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::AdjustCastHitEndPoint$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  hitEndPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  sampleEndPoint, ::by_ref<float_t>  validHitDistance, ::by_ref<::Unity::Mathematics::float3>  endPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"AdjustCastHitEndPoint$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldOrigin, worldDirection, hitEndPoint, sampleEndPoint, validHitDistance, endPoint);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::ComputeFallBackLine$BurstManaged(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  startOffset, float_t  endOffset, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  fallBackTargetPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>(),
                        {"ComputeFallBackLine$BurstManaged", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, curveOrigin, endPoint, startOffset, endOffset, fallBackTargetPoints);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController::CurveVisualController()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb48748c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb48757c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb486364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  startOffset, float_t  endOffset, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  fallBackTargetPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, curveOrigin, endPoint, startOffset, endOffset, fallBackTargetPoints);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall::CurveVisualController_ComputeFallBackLine_00000D27$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb487284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb487338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, float_t, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb48734c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb487464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  startOffset, float_t  endOffset, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  fallBackTargetPoints)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, curveOrigin, endPoint, startOffset, endOffset, fallBackTargetPoints);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  curveOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  startOffset, float_t  endOffset, ::by_ref<::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>>  fallBackTargetPoints, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_6)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, curveOrigin, endPoint, startOffset, endOffset, fallBackTargetPoints, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_6);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate::CurveVisualController_ComputeFallBackLine_00000D27$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb48717c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb48726c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb48627c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  hitEndPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  sampleEndPoint, ::by_ref<float_t>  validHitDistance, ::by_ref<::Unity::Mathematics::float3>  endPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldOrigin, worldDirection, hitEndPoint, sampleEndPoint, validHitDistance, endPoint);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall::CurveVisualController_AdjustCastHitEndPoint_00000D26$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb486f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb487034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<float_t>, ::by_ref<::Unity::Mathematics::float3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb487048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb487170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  hitEndPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  sampleEndPoint, ::by_ref<float_t>  validHitDistance, ::by_ref<::Unity::Mathematics::float3>  endPoint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldOrigin, worldDirection, hitEndPoint, sampleEndPoint, validHitDistance, endPoint);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldOrigin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  worldDirection, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  hitEndPoint, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  sampleEndPoint, ::by_ref<float_t>  validHitDistance, ::by_ref<::Unity::Mathematics::float3>  endPoint, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_7)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, worldOrigin, worldDirection, hitEndPoint, sampleEndPoint, validHitDistance, endPoint, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_7);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate::CurveVisualController_AdjustCastHitEndPoint_00000D26$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb486e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb486f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb486184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  point, ::by_ref<::Unity::Mathematics::float3>  newPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, direction, point, newPoint);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall::CurveVisualController_GetClosestPointOnLine_00000D25$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb486cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb486d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb486d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb486e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  point, ::by_ref<::Unity::Mathematics::float3>  newPoint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, direction, point, newPoint);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  direction, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  point, ::by_ref<::Unity::Mathematics::float3>  newPoint, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, origin, direction, point, newPoint, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_5);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate::CurveVisualController_GetClosestPointOnLine_00000D25$PostfixBurstDelegate()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall.GetFunctionPointerDiscard
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::System::IntPtr>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall::GetFunctionPointerDiscard)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb486bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall.GetFunctionPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall::GetFunctionPointer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb486ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall::Invoke)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb486024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall::setStaticF_Pointer(::System::IntPtr  value)  {
::cordl_internals::setStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall::getStaticF_Pointer()  {
return ::cordl_internals::getStaticField<::System::IntPtr, "Pointer", ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall::GetFunctionPointerDiscard(::by_ref<::System::IntPtr>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall*>(),
                        {"GetFunctionPointerDiscard", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::System::IntPtr UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall::GetFunctionPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall*>(),
                        {"GetFunctionPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  maxDistance, ::by_ref<::Unity::Mathematics::float3>  newEndPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall*>(),
                        {"Invoke", {}, {::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Unity::Mathematics::float3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, origin, endPoint, maxDistance, newEndPoint);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$BurstDirectCall()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb4869f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb486aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::*)(::by_ref<::Unity::Mathematics::float3>, ::by_ref<::Unity::Mathematics::float3>, float_t, ::by_ref<::Unity::Mathematics::float3>, ::System::AsyncCallback*, ::System::Object*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb486ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::*)(::System::IAsyncResult*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb486bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  maxDistance, ::by_ref<::Unity::Mathematics::float3>  newEndPoint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, endPoint, maxDistance, newEndPoint);
}
inline ::System::IAsyncResult* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::BeginInvoke(/* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  origin, /* [IsReadOnly] */ ::by_ref<::Unity::Mathematics::float3>  endPoint, float_t  maxDistance, ::by_ref<::Unity::Mathematics::float3>  newEndPoint, ::System::AsyncCallback*  _cordl_fixed_empty_name_whitespace, ::System::Object*  _cordl_fixed_empty_name_whitespace_param_5)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, origin, endPoint, maxDistance, newEndPoint, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_5);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::EndInvoke(::System::IAsyncResult*  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate* UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Visuals::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate::CurveVisualController_GetAdjustedEndPointForMaxDistance_00000D24$PostfixBurstDelegate()   {
}
