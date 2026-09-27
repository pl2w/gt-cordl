#pragma once
// IWYU pragma private; include "UnityEngine/Splines/SplineAnimate.hpp"
#include "UnityEngine/Splines/zzzz__SplineAnimate_AlignmentMode_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineAnimate_EasingMode_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineAnimate_LoopMode_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineAnimate_Method_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineComponent_AlignAxis_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineComponent_impl.hpp"
#include "UnityEngine/Splines/zzzz__SplineAnimate_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineAnimate_AlignmentMode_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineAnimate_EasingMode_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineAnimate_LoopMode_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineAnimate_Method_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineComponent_AlignAxis_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineContainer_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineModification_def.hpp"
#include "UnityEngine/Splines/zzzz__SplinePath_1_def.hpp"
#include "UnityEngine/Splines/zzzz__Spline_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_splineContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Splines::SplineContainer> (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_splineContainer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb318ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_splineContainer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Splines::SplineContainer> (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_Container)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb318ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_Container", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.set_Container
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::UnityEngine::Splines::SplineContainer*)>(&::UnityEngine::Splines::SplineAnimate::set_Container)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb318edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_Container", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_playOnAwake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_playOnAwake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_playOnAwake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_PlayOnAwake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_PlayOnAwake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb31912c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_PlayOnAwake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.set_PlayOnAwake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(bool)>(&::UnityEngine::Splines::SplineAnimate::set_PlayOnAwake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_PlayOnAwake", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_loopMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineAnimate_LoopMode (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_loopMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb31913c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_loopMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineAnimate_LoopMode (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_Loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_Loop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.set_Loop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::GlobalNamespace::SplineAnimate_LoopMode)>(&::UnityEngine::Splines::SplineAnimate::set_Loop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb31914c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_Loop", {}, {::i2c::type_of<::GlobalNamespace::SplineAnimate_LoopMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_method
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineAnimate_Method (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_method", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_AnimationMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineAnimate_Method (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_AnimationMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb31915c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_AnimationMethod", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.set_AnimationMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::GlobalNamespace::SplineAnimate_Method)>(&::UnityEngine::Splines::SplineAnimate::set_AnimationMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_AnimationMethod", {}, {::i2c::type_of<::GlobalNamespace::SplineAnimate_Method>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb31916c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_duration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_Duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_Duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_Duration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.set_Duration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(float_t)>(&::UnityEngine::Splines::SplineAnimate::set_Duration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb31917c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_Duration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_maxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_maxSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_maxSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_MaxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_MaxSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3192a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_MaxSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.set_MaxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(float_t)>(&::UnityEngine::Splines::SplineAnimate::set_MaxSpeed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb3192a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_MaxSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_easingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineAnimate_EasingMode (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_easingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3193c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_easingMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_Easing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineAnimate_EasingMode (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_Easing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3193d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_Easing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.set_Easing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::GlobalNamespace::SplineAnimate_EasingMode)>(&::UnityEngine::Splines::SplineAnimate::set_Easing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3193d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_Easing", {}, {::i2c::type_of<::GlobalNamespace::SplineAnimate_EasingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_alignmentMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineAnimate_AlignmentMode (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_alignmentMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3193e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_alignmentMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_Alignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineAnimate_AlignmentMode (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_Alignment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3193e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_Alignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.set_Alignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::GlobalNamespace::SplineAnimate_AlignmentMode)>(&::UnityEngine::Splines::SplineAnimate::set_Alignment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3193f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_Alignment", {}, {::i2c::type_of<::GlobalNamespace::SplineAnimate_AlignmentMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_objectForwardAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineComponent_AlignAxis (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_objectForwardAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3193f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_objectForwardAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_ObjectForwardAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineComponent_AlignAxis (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_ObjectForwardAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_ObjectForwardAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.set_ObjectForwardAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::GlobalNamespace::SplineComponent_AlignAxis)>(&::UnityEngine::Splines::SplineAnimate::set_ObjectForwardAxis)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb319408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_ObjectForwardAxis", {}, {::i2c::type_of<::GlobalNamespace::SplineComponent_AlignAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_objectUpAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineComponent_AlignAxis (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_objectUpAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3194c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_objectUpAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_ObjectUpAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineComponent_AlignAxis (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_ObjectUpAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3194cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_ObjectUpAxis", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.set_ObjectUpAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::GlobalNamespace::SplineComponent_AlignAxis)>(&::UnityEngine::Splines::SplineAnimate::set_ObjectUpAxis)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb3194d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_ObjectUpAxis", {}, {::i2c::type_of<::GlobalNamespace::SplineComponent_AlignAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_normalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_normalizedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_normalizedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_NormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_NormalizedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb31953c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_NormalizedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.set_NormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(float_t)>(&::UnityEngine::Splines::SplineAnimate::set_NormalizedTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb319544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_NormalizedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_elapsedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_elapsedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_elapsedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_ElapsedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_ElapsedTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_ElapsedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.set_ElapsedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(float_t)>(&::UnityEngine::Splines::SplineAnimate::set_ElapsedTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb319730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_ElapsedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_StartOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_StartOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3199bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_StartOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.set_StartOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(float_t)>(&::UnityEngine::Splines::SplineAnimate::set_StartOffset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb3199c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_StartOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_StartOffsetT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_StartOffsetT)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_StartOffsetT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_isPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_isPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_isPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.get_IsPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::get_IsPlaying)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.add_onUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*)>(&::UnityEngine::Splines::SplineAnimate::add_onUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb319b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"add_onUpdated", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.remove_onUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*)>(&::UnityEngine::Splines::SplineAnimate::remove_onUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb319be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"remove_onUpdated", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.add_Updated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*)>(&::UnityEngine::Splines::SplineAnimate::add_Updated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb319c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"add_Updated", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.remove_Updated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*)>(&::UnityEngine::Splines::SplineAnimate::remove_Updated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb319d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"remove_Updated", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.add_Completed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::System::Action*)>(&::UnityEngine::Splines::SplineAnimate::add_Completed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb319df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"add_Completed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.remove_Completed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::System::Action*)>(&::UnityEngine::Splines::SplineAnimate::remove_Completed)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb319e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"remove_Completed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb319f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::OnEnable)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb31a01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::OnDisable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb31a22c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::OnValidate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb31a2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.RecalculateAnimationParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::RecalculateAnimationParameters)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb319f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"RecalculateAnimationParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.IsNullOrEmptyContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::IsNullOrEmptyContainer)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb31a2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"IsNullOrEmptyContainer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::Play)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb31a450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.Pause
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::Pause)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb31a470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"Pause", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.Restart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(bool)>(&::UnityEngine::Splines::SplineAnimate::Restart)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb31a0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"Restart", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::Update)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb31a478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.CalculateNormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(float_t)>(&::UnityEngine::Splines::SplineAnimate::CalculateNormalizedTime)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xb319750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"CalculateNormalizedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.UpdateEndReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(float_t, float_t)>(&::UnityEngine::Splines::SplineAnimate::UpdateEndReached)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb31a4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"UpdateEndReached", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.UpdateStartOffsetT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::UpdateStartOffsetT)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb3190bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"UpdateStartOffsetT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::UpdateTransform)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb31959c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.EvaluatePositionAndRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::UnityEngine::Splines::SplineAnimate::EvaluatePositionAndRotation)> {
  constexpr static std::size_t size = 0x708;
  constexpr static std::size_t addrs = 0xb31a5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"EvaluatePositionAndRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.CalculateDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::CalculateDuration)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb3192cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"CalculateDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.CalculateMaxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::CalculateMaxSpeed)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb31919c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"CalculateMaxSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.RebuildSplinePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::RebuildSplinePath)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xb319a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"RebuildSplinePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.SetObjectAlignAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineComponent_AlignAxis (::UnityEngine::Splines::SplineAnimate::*)(::GlobalNamespace::SplineComponent_AlignAxis, ::by_ref<::GlobalNamespace::SplineComponent_AlignAxis>, ::GlobalNamespace::SplineComponent_AlignAxis)>(&::UnityEngine::Splines::SplineAnimate::SetObjectAlignAxis)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb319468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"SetObjectAlignAxis", {}, {::i2c::type_of<::GlobalNamespace::SplineComponent_AlignAxis>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SplineComponent_AlignAxis>>(), ::i2c::type_of<::GlobalNamespace::SplineComponent_AlignAxis>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.OnSplineChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)(::UnityEngine::Splines::Spline*, int32_t, ::UnityEngine::Splines::SplineModification)>(&::UnityEngine::Splines::SplineAnimate::OnSplineChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb3190b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"OnSplineChange", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::SplineModification>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.GetLoopInterpolation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)(bool)>(&::UnityEngine::Splines::SplineAnimate::GetLoopInterpolation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb31acec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"GetLoopInterpolation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.EaseInQuadratic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)(float_t)>(&::UnityEngine::Splines::SplineAnimate::EaseInQuadratic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb31a5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"EaseInQuadratic", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.EaseOutQuadratic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)(float_t)>(&::UnityEngine::Splines::SplineAnimate::EaseOutQuadratic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb31a5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"EaseOutQuadratic", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate.EaseInOutQuadratic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Splines::SplineAnimate::*)(float_t)>(&::UnityEngine::Splines::SplineAnimate::EaseInOutQuadratic)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb31a5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"EaseInOutQuadratic", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Splines::SplineAnimate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Splines::SplineAnimate::*)()>(&::UnityEngine::Splines::SplineAnimate::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb31ad74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_Target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_Target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Target;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_Target(::UnityW<::UnityEngine::Splines::SplineContainer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Target = value;
}
constexpr bool& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_PlayOnAwake()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayOnAwake;
}
constexpr bool const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_PlayOnAwake() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayOnAwake;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_PlayOnAwake(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayOnAwake = value;
}
constexpr ::GlobalNamespace::SplineAnimate_LoopMode& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_LoopMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoopMode;
}
constexpr ::GlobalNamespace::SplineAnimate_LoopMode const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_LoopMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LoopMode;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_LoopMode(::GlobalNamespace::SplineAnimate_LoopMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LoopMode = value;
}
constexpr ::GlobalNamespace::SplineAnimate_Method& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_Method()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Method;
}
constexpr ::GlobalNamespace::SplineAnimate_Method const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_Method() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Method;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_Method(::GlobalNamespace::SplineAnimate_Method  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Method = value;
}
constexpr float_t& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_Duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Duration;
}
constexpr float_t const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_Duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Duration;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_Duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Duration = value;
}
constexpr float_t& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_MaxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxSpeed;
}
constexpr float_t const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_MaxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxSpeed;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_MaxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxSpeed = value;
}
constexpr ::GlobalNamespace::SplineAnimate_EasingMode& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_EasingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EasingMode;
}
constexpr ::GlobalNamespace::SplineAnimate_EasingMode const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_EasingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EasingMode;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_EasingMode(::GlobalNamespace::SplineAnimate_EasingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EasingMode = value;
}
constexpr ::GlobalNamespace::SplineAnimate_AlignmentMode& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_AlignmentMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlignmentMode;
}
constexpr ::GlobalNamespace::SplineAnimate_AlignmentMode const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_AlignmentMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AlignmentMode;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_AlignmentMode(::GlobalNamespace::SplineAnimate_AlignmentMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AlignmentMode = value;
}
constexpr ::GlobalNamespace::SplineComponent_AlignAxis& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_ObjectForwardAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectForwardAxis;
}
constexpr ::GlobalNamespace::SplineComponent_AlignAxis const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_ObjectForwardAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectForwardAxis;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_ObjectForwardAxis(::GlobalNamespace::SplineComponent_AlignAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ObjectForwardAxis = value;
}
constexpr ::GlobalNamespace::SplineComponent_AlignAxis& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_ObjectUpAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectUpAxis;
}
constexpr ::GlobalNamespace::SplineComponent_AlignAxis const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_ObjectUpAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ObjectUpAxis;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_ObjectUpAxis(::GlobalNamespace::SplineComponent_AlignAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ObjectUpAxis = value;
}
constexpr float_t& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_StartOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartOffset;
}
constexpr float_t const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_StartOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartOffset;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_StartOffset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartOffset = value;
}
constexpr float_t& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_StartOffsetT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartOffsetT;
}
constexpr float_t const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_StartOffsetT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StartOffsetT;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_StartOffsetT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StartOffsetT = value;
}
constexpr bool& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_PlayOnAwakeHandledForSession()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayOnAwakeHandledForSession;
}
constexpr bool const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_PlayOnAwakeHandledForSession() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayOnAwakeHandledForSession;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_PlayOnAwakeHandledForSession(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayOnAwakeHandledForSession = value;
}
constexpr float_t& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_SplineLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplineLength;
}
constexpr float_t const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_SplineLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplineLength;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_SplineLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SplineLength = value;
}
constexpr bool& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_Playing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Playing;
}
constexpr bool const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_Playing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Playing;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_Playing(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Playing = value;
}
constexpr float_t& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_NormalizedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NormalizedTime;
}
constexpr float_t const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_NormalizedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NormalizedTime;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_NormalizedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NormalizedTime = value;
}
constexpr float_t& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_ElapsedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ElapsedTime;
}
constexpr float_t const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_ElapsedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ElapsedTime;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_ElapsedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ElapsedTime = value;
}
constexpr ::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::Spline*>*& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_SplinePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplinePath;
}
constexpr ::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::Spline*>* const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_SplinePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SplinePath;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_SplinePath(::UnityEngine::Splines::SplinePath_1<::UnityEngine::Splines::Spline*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SplinePath = value;
}
constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_onUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUpdated;
}
constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_onUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onUpdated;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_onUpdated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onUpdated = value;
}
constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_Updated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Updated;
}
constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>* const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_Updated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Updated;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_Updated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Updated = value;
}
constexpr bool& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_EndReached()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndReached;
}
constexpr bool const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_m_EndReached() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EndReached;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_m_EndReached(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EndReached = value;
}
constexpr ::System::Action*& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_Completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Completed;
}
constexpr ::System::Action* const& UnityEngine::Splines::SplineAnimate::__cordl_internal_get_Completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Completed;
}
constexpr void UnityEngine::Splines::SplineAnimate::__cordl_internal_set_Completed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Completed = value;
}
inline void UnityEngine::Splines::SplineAnimate::setStaticF_k_EmptyContainerError(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "k_EmptyContainerError", ::UnityEngine::Splines::SplineAnimate*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::Splines::SplineAnimate::getStaticF_k_EmptyContainerError()  {
return ::cordl_internals::getStaticField<::StringW, "k_EmptyContainerError", ::UnityEngine::Splines::SplineAnimate*>();
}
inline ::UnityW<::UnityEngine::Splines::SplineContainer> UnityEngine::Splines::SplineAnimate::get_splineContainer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_splineContainer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Splines::SplineContainer>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Splines::SplineContainer> UnityEngine::Splines::SplineAnimate::get_Container()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_Container", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Splines::SplineContainer>>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::set_Container(::UnityEngine::Splines::SplineContainer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_Container", {}, {::i2c::type_of<::UnityEngine::Splines::SplineContainer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Splines::SplineAnimate::get_playOnAwake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_playOnAwake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Splines::SplineAnimate::get_PlayOnAwake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_PlayOnAwake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::set_PlayOnAwake(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_PlayOnAwake", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SplineAnimate_LoopMode UnityEngine::Splines::SplineAnimate::get_loopMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_loopMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineAnimate_LoopMode>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineAnimate_LoopMode UnityEngine::Splines::SplineAnimate::get_Loop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_Loop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineAnimate_LoopMode>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::set_Loop(::GlobalNamespace::SplineAnimate_LoopMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_Loop", {}, {::i2c::type_of<::GlobalNamespace::SplineAnimate_LoopMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SplineAnimate_Method UnityEngine::Splines::SplineAnimate::get_method()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_method", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineAnimate_Method>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineAnimate_Method UnityEngine::Splines::SplineAnimate::get_AnimationMethod()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_AnimationMethod", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineAnimate_Method>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::set_AnimationMethod(::GlobalNamespace::SplineAnimate_Method  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_AnimationMethod", {}, {::i2c::type_of<::GlobalNamespace::SplineAnimate_Method>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Splines::SplineAnimate::get_duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Splines::SplineAnimate::get_Duration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_Duration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::set_Duration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_Duration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Splines::SplineAnimate::get_maxSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_maxSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Splines::SplineAnimate::get_MaxSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_MaxSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::set_MaxSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_MaxSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SplineAnimate_EasingMode UnityEngine::Splines::SplineAnimate::get_easingMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_easingMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineAnimate_EasingMode>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineAnimate_EasingMode UnityEngine::Splines::SplineAnimate::get_Easing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_Easing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineAnimate_EasingMode>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::set_Easing(::GlobalNamespace::SplineAnimate_EasingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_Easing", {}, {::i2c::type_of<::GlobalNamespace::SplineAnimate_EasingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SplineAnimate_AlignmentMode UnityEngine::Splines::SplineAnimate::get_alignmentMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_alignmentMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineAnimate_AlignmentMode>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineAnimate_AlignmentMode UnityEngine::Splines::SplineAnimate::get_Alignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_Alignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineAnimate_AlignmentMode>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::set_Alignment(::GlobalNamespace::SplineAnimate_AlignmentMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_Alignment", {}, {::i2c::type_of<::GlobalNamespace::SplineAnimate_AlignmentMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SplineComponent_AlignAxis UnityEngine::Splines::SplineAnimate::get_objectForwardAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_objectForwardAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineComponent_AlignAxis>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineComponent_AlignAxis UnityEngine::Splines::SplineAnimate::get_ObjectForwardAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_ObjectForwardAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineComponent_AlignAxis>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::set_ObjectForwardAxis(::GlobalNamespace::SplineComponent_AlignAxis  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_ObjectForwardAxis", {}, {::i2c::type_of<::GlobalNamespace::SplineComponent_AlignAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::SplineComponent_AlignAxis UnityEngine::Splines::SplineAnimate::get_objectUpAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_objectUpAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineComponent_AlignAxis>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineComponent_AlignAxis UnityEngine::Splines::SplineAnimate::get_ObjectUpAxis()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_ObjectUpAxis", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineComponent_AlignAxis>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::set_ObjectUpAxis(::GlobalNamespace::SplineComponent_AlignAxis  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_ObjectUpAxis", {}, {::i2c::type_of<::GlobalNamespace::SplineComponent_AlignAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Splines::SplineAnimate::get_normalizedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_normalizedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Splines::SplineAnimate::get_NormalizedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_NormalizedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::set_NormalizedTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_NormalizedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Splines::SplineAnimate::get_elapsedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_elapsedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::Splines::SplineAnimate::get_ElapsedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_ElapsedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::set_ElapsedTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_ElapsedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Splines::SplineAnimate::get_StartOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_StartOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::set_StartOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"set_StartOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Splines::SplineAnimate::get_StartOffsetT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_StartOffsetT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::Splines::SplineAnimate::get_isPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_isPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Splines::SplineAnimate::get_IsPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"get_IsPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::add_onUpdated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"add_onUpdated", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Splines::SplineAnimate::remove_onUpdated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"remove_onUpdated", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Splines::SplineAnimate::add_Updated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"add_Updated", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Splines::SplineAnimate::remove_Updated(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"remove_Updated", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Quaternion>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Splines::SplineAnimate::add_Completed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"add_Completed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Splines::SplineAnimate::remove_Completed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"remove_Completed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Splines::SplineAnimate::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::RecalculateAnimationParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"RecalculateAnimationParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Splines::SplineAnimate::IsNullOrEmptyContainer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"IsNullOrEmptyContainer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::Pause()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"Pause", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::Restart(bool  autoplay)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"Restart", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, autoplay);
}
inline void UnityEngine::Splines::SplineAnimate::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::CalculateNormalizedTime(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"CalculateNormalizedTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline void UnityEngine::Splines::SplineAnimate::UpdateEndReached(float_t  previousTime, float_t  currentDuration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"UpdateEndReached", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previousTime, currentDuration);
}
inline void UnityEngine::Splines::SplineAnimate::UpdateStartOffsetT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"UpdateStartOffsetT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::EvaluatePositionAndRotation(::by_ref<::UnityEngine::Vector3>  position, ::by_ref<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"EvaluatePositionAndRotation", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline void UnityEngine::Splines::SplineAnimate::CalculateDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"CalculateDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::CalculateMaxSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"CalculateMaxSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Splines::SplineAnimate::RebuildSplinePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"RebuildSplinePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SplineComponent_AlignAxis UnityEngine::Splines::SplineAnimate::SetObjectAlignAxis(::GlobalNamespace::SplineComponent_AlignAxis  newValue, ::by_ref<::GlobalNamespace::SplineComponent_AlignAxis>  targetAxis, ::GlobalNamespace::SplineComponent_AlignAxis  otherAxis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"SetObjectAlignAxis", {}, {::i2c::type_of<::GlobalNamespace::SplineComponent_AlignAxis>(), ::i2c::type_of<::by_ref<::GlobalNamespace::SplineComponent_AlignAxis>>(), ::i2c::type_of<::GlobalNamespace::SplineComponent_AlignAxis>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineComponent_AlignAxis>(this, ___internal_method, newValue, targetAxis, otherAxis);
}
inline void UnityEngine::Splines::SplineAnimate::OnSplineChange(::UnityEngine::Splines::Spline*  spline, int32_t  knotIndex, ::UnityEngine::Splines::SplineModification  modificationType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"OnSplineChange", {}, {::i2c::type_of<::UnityEngine::Splines::Spline*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Splines::SplineModification>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, spline, knotIndex, modificationType);
}
inline float_t UnityEngine::Splines::SplineAnimate::GetLoopInterpolation(bool  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"GetLoopInterpolation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, offset);
}
inline float_t UnityEngine::Splines::SplineAnimate::EaseInQuadratic(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"EaseInQuadratic", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, t);
}
inline float_t UnityEngine::Splines::SplineAnimate::EaseOutQuadratic(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"EaseOutQuadratic", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, t);
}
inline float_t UnityEngine::Splines::SplineAnimate::EaseInOutQuadratic(float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {"EaseInOutQuadratic", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, t);
}
inline void UnityEngine::Splines::SplineAnimate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Splines::SplineAnimate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Splines::SplineAnimate* UnityEngine::Splines::SplineAnimate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Splines::SplineAnimate*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Splines::SplineAnimate::SplineAnimate()   {
}
