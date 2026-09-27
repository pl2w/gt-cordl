#pragma once
// IWYU pragma private; include "Oculus/Interaction/Throw/StandardVelocityCalculator.hpp"
#include "Oculus/Interaction/Input/zzzz__OneEuroFilterPropertyBlock_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Throw/zzzz__StandardVelocityCalculator_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IOneEuroFilter_1_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__IPoseInputDevice_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__IThrowVelocityCalculator_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__IVelocityCalculator_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__ReleaseVelocityInformation_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__StandardVelocityCalculator_SamplePoseData_def.hpp"
#include "Oculus/Interaction/Throw/zzzz__StandardVelocityCalculator_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_ThrowInputDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Throw::IPoseInputDevice* (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_ThrowInputDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4955a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_ThrowInputDevice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_ThrowInputDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::Oculus::Interaction::Throw::IPoseInputDevice*)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_ThrowInputDevice)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4955b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_ThrowInputDevice", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IPoseInputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_UpdateFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_UpdateFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4955b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_UpdateFrequency", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_ReferenceOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_ReferenceOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4955c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_ReferenceOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_ReferenceOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_ReferenceOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4955cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_ReferenceOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_InstantVelocityInfluence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_InstantVelocityInfluence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4955d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_InstantVelocityInfluence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_InstantVelocityInfluence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(float_t)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_InstantVelocityInfluence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4955e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_InstantVelocityInfluence", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_TrendVelocityInfluence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_TrendVelocityInfluence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4955e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_TrendVelocityInfluence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_TrendVelocityInfluence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(float_t)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_TrendVelocityInfluence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4955f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_TrendVelocityInfluence", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_TangentialVelocityInfluence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_TangentialVelocityInfluence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4955f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_TangentialVelocityInfluence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_TangentialVelocityInfluence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(float_t)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_TangentialVelocityInfluence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa495600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_TangentialVelocityInfluence", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_ExternalVelocityInfluence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_ExternalVelocityInfluence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa495608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_ExternalVelocityInfluence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_ExternalVelocityInfluence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(float_t)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_ExternalVelocityInfluence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa495610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_ExternalVelocityInfluence", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_StepBackTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_StepBackTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa495618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_StepBackTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_StepBackTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(float_t)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_StepBackTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa495620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_StepBackTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_MaxPercentZeroSamplesTrendVeloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_MaxPercentZeroSamplesTrendVeloc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa495628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_MaxPercentZeroSamplesTrendVeloc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_MaxPercentZeroSamplesTrendVeloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(float_t)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_MaxPercentZeroSamplesTrendVeloc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa495630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_MaxPercentZeroSamplesTrendVeloc", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa495638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_AddedInstantLinearVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_AddedInstantLinearVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa495640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_AddedInstantLinearVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_AddedInstantLinearVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_AddedInstantLinearVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa49564c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_AddedInstantLinearVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_AddedTrendLinearVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_AddedTrendLinearVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa495658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_AddedTrendLinearVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_AddedTrendLinearVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_AddedTrendLinearVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa495664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_AddedTrendLinearVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_AddedTangentialLinearVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_AddedTangentialLinearVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa495670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_AddedTangentialLinearVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_AddedTangentialLinearVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_AddedTangentialLinearVelocity)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa49567c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_AddedTangentialLinearVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_AxisOfRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_AxisOfRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa495688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_AxisOfRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_AxisOfRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_AxisOfRotation)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa495694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_AxisOfRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_CenterOfMassToObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_CenterOfMassToObject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4956a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_CenterOfMassToObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_CenterOfMassToObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_CenterOfMassToObject)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4956ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_CenterOfMassToObject", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_TangentialDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_TangentialDirection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4956b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_TangentialDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_TangentialDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_TangentialDirection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4956c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_TangentialDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.get_AxisOfRotationOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::get_AxisOfRotationOrigin)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4956d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_AxisOfRotationOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.set_AxisOfRotationOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::set_AxisOfRotationOrigin)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4956dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_AxisOfRotationOrigin", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.add_WhenThrowVelocitiesChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::add_WhenThrowVelocitiesChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4956e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"add_WhenThrowVelocitiesChanged", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.remove_WhenThrowVelocitiesChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::remove_WhenThrowVelocitiesChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa495798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"remove_WhenThrowVelocitiesChanged", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.add_WhenNewSampleAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::add_WhenNewSampleAvailable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa495848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"add_WhenNewSampleAvailable", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.remove_WhenNewSampleAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::remove_WhenNewSampleAvailable)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4958f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"remove_WhenNewSampleAvailable", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4959a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::Start)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa495a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.CalculateThrowVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Throw::ReleaseVelocityInformation (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::CalculateThrowVelocity)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0xa495adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"CalculateThrowVelocity", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.IncludeInstantVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::IncludeInstantVelocities)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa495fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"IncludeInstantVelocities", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.IncludeEstimatedReleaseVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::IncludeEstimatedReleaseVelocities)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa4964a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"IncludeEstimatedReleaseVelocities", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.IncludeTrendVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::IncludeTrendVelocities)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4960b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"IncludeTrendVelocities", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.IncludeTangentialInfluence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::by_ref<::UnityEngine::Vector3>, ::UnityEngine::Vector3)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::IncludeTangentialInfluence)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa496148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"IncludeTangentialInfluence", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.IncludeExternalVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::IncludeExternalVelocities)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0xa49619c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"IncludeExternalVelocities", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.FindPoseIndicesAdjacentToTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<int32_t,int32_t> (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(float_t)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::FindPoseIndicesAdjacentToTime)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xa4966a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"FindPoseIndicesAdjacentToTime", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.ComputeTrendVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::ComputeTrendVelocities)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xa496988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"ComputeTrendVelocities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.BufferedVelocitiesValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::BufferedVelocitiesValid)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa496fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"BufferedVelocitiesValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.FindLargestWindowWithMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::FindLargestWindowWithMovement)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0xa497174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"FindLargestWindowWithMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.FindMostRecentBufferedSampleWithMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::FindMostRecentBufferedSampleWithMovement)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa497594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"FindMostRecentBufferedSampleWithMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.TransferToDestBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*, ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::TransferToDestBuffer)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa497730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"TransferToDestBuffer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.CalculateTangentialVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::CalculateTangentialVector)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0xa496c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"CalculateTangentialVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.LastThrowVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>* (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::LastThrowVelocities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa497920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"LastThrowVelocities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.SetUpdateFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(float_t)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::SetUpdateFrequency)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa497928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"SetUpdateFrequency", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::LateUpdate)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0xa497a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                    {::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.CalculateLatestVelocitiesAndUpdateBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(float_t, float_t, ::UnityEngine::Pose)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::CalculateLatestVelocitiesAndUpdateBuffer)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa497cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"CalculateLatestVelocitiesAndUpdateBuffer", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.UpdateLatestVelocitiesAndPoseValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::UnityEngine::Pose, float_t)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::UpdateLatestVelocitiesAndPoseValues)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa497e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"UpdateLatestVelocitiesAndPoseValues", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.GetLatestLinearAndAngularVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::UnityEngine::Pose, float_t)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::GetLatestLinearAndAngularVelocities)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa4980c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"GetLatestLinearAndAngularVelocities", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.InjectAllStandardVelocityCalculator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::Oculus::Interaction::Throw::IPoseInputDevice*, ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::InjectAllStandardVelocityCalculator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4983d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"InjectAllStandardVelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IPoseInputDevice*>(), ::i2c::type_of<::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.InjectPoseInputDevice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::Oculus::Interaction::Throw::IPoseInputDevice*)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::InjectPoseInputDevice)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4983fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"InjectPoseInputDevice", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IPoseInputDevice*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.InjectBufferingParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::InjectBufferingParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4984cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"InjectBufferingParams", {}, {::i2c::type_of<::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator.InjectOptionalTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::InjectOptionalTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4984d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator::_ctor)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0xa4984dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__throwInputDevice()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throwInputDevice;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__throwInputDevice() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____throwInputDevice;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__throwInputDevice(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____throwInputDevice = value;
}
constexpr ::Oculus::Interaction::Throw::IPoseInputDevice*& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__ThrowInputDevice_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThrowInputDevice_k__BackingField;
}
constexpr ::Oculus::Interaction::Throw::IPoseInputDevice* const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__ThrowInputDevice_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThrowInputDevice_k__BackingField;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__ThrowInputDevice_k__BackingField(::Oculus::Interaction::Throw::IPoseInputDevice*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ThrowInputDevice_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__referenceOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__referenceOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____referenceOffset;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__referenceOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____referenceOffset = value;
}
constexpr ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__bufferingParams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferingParams;
}
constexpr ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams* const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__bufferingParams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferingParams;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__bufferingParams(::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferingParams = value;
}
constexpr float_t& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__instantVelocityInfluence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instantVelocityInfluence;
}
constexpr float_t const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__instantVelocityInfluence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instantVelocityInfluence;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__instantVelocityInfluence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____instantVelocityInfluence = value;
}
constexpr float_t& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__trendVelocityInfluence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trendVelocityInfluence;
}
constexpr float_t const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__trendVelocityInfluence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trendVelocityInfluence;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__trendVelocityInfluence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trendVelocityInfluence = value;
}
constexpr float_t& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__tangentialVelocityInfluence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tangentialVelocityInfluence;
}
constexpr float_t const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__tangentialVelocityInfluence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tangentialVelocityInfluence;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__tangentialVelocityInfluence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tangentialVelocityInfluence = value;
}
constexpr float_t& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__externalVelocityInfluence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____externalVelocityInfluence;
}
constexpr float_t const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__externalVelocityInfluence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____externalVelocityInfluence;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__externalVelocityInfluence(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____externalVelocityInfluence = value;
}
constexpr float_t& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__stepBackTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stepBackTime;
}
constexpr float_t const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__stepBackTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stepBackTime;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__stepBackTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stepBackTime = value;
}
constexpr float_t& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__maxPercentZeroSamplesTrendVeloc()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxPercentZeroSamplesTrendVeloc;
}
constexpr float_t const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__maxPercentZeroSamplesTrendVeloc() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxPercentZeroSamplesTrendVeloc;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__maxPercentZeroSamplesTrendVeloc(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxPercentZeroSamplesTrendVeloc = value;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__filterProps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterProps;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__filterProps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterProps;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__filterProps(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterProps = value;
}
constexpr float_t& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__updateFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateFrequency;
}
constexpr float_t const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__updateFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateFrequency;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__updateFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateFrequency = value;
}
constexpr float_t& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__updateLatency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateLatency;
}
constexpr float_t const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__updateLatency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updateLatency;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__updateLatency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updateLatency = value;
}
constexpr float_t& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__lastUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr float_t const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__lastUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__lastUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUpdateTime = value;
}
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__linearVelocityFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linearVelocityFilter;
}
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>* const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__linearVelocityFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linearVelocityFilter;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__linearVelocityFilter(::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linearVelocityFilter = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__AddedInstantLinearVelocity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddedInstantLinearVelocity_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__AddedInstantLinearVelocity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddedInstantLinearVelocity_k__BackingField;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__AddedInstantLinearVelocity_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AddedInstantLinearVelocity_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__AddedTrendLinearVelocity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddedTrendLinearVelocity_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__AddedTrendLinearVelocity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddedTrendLinearVelocity_k__BackingField;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__AddedTrendLinearVelocity_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AddedTrendLinearVelocity_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__AddedTangentialLinearVelocity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddedTangentialLinearVelocity_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__AddedTangentialLinearVelocity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AddedTangentialLinearVelocity_k__BackingField;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__AddedTangentialLinearVelocity_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AddedTangentialLinearVelocity_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__AxisOfRotation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AxisOfRotation_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__AxisOfRotation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AxisOfRotation_k__BackingField;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__AxisOfRotation_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AxisOfRotation_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__CenterOfMassToObject_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CenterOfMassToObject_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__CenterOfMassToObject_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CenterOfMassToObject_k__BackingField;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__CenterOfMassToObject_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CenterOfMassToObject_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__TangentialDirection_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TangentialDirection_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__TangentialDirection_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TangentialDirection_k__BackingField;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__TangentialDirection_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TangentialDirection_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__AxisOfRotationOrigin_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AxisOfRotationOrigin_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__AxisOfRotationOrigin_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AxisOfRotationOrigin_k__BackingField;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__AxisOfRotationOrigin_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AxisOfRotationOrigin_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__currentThrowVelocities()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentThrowVelocities;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>* const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__currentThrowVelocities() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentThrowVelocities;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__currentThrowVelocities(::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentThrowVelocities = value;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get_WhenThrowVelocitiesChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenThrowVelocitiesChanged;
}
constexpr ::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>* const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get_WhenThrowVelocitiesChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenThrowVelocitiesChanged;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set_WhenThrowVelocitiesChanged(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenThrowVelocitiesChanged = value;
}
constexpr ::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get_WhenNewSampleAvailable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenNewSampleAvailable;
}
constexpr ::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>* const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get_WhenNewSampleAvailable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenNewSampleAvailable;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set_WhenNewSampleAvailable(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenNewSampleAvailable = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__linearVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linearVelocity;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__linearVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linearVelocity;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__linearVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linearVelocity = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__angularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____angularVelocity;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__angularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____angularVelocity;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__angularVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____angularVelocity = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3>& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__previousReferencePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousReferencePosition;
}
constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__previousReferencePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousReferencePosition;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__previousReferencePosition(::System::Nullable_1<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousReferencePosition = value;
}
constexpr ::System::Nullable_1<::UnityEngine::Quaternion>& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__previousReferenceRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousReferenceRotation;
}
constexpr ::System::Nullable_1<::UnityEngine::Quaternion> const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__previousReferenceRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousReferenceRotation;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__previousReferenceRotation(::System::Nullable_1<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousReferenceRotation = value;
}
constexpr float_t& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__accumulatedDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accumulatedDelta;
}
constexpr float_t const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__accumulatedDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accumulatedDelta;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__accumulatedDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____accumulatedDelta = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__bufferedPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferedPoses;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>* const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__bufferedPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferedPoses;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__bufferedPoses(::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferedPoses = value;
}
constexpr int32_t& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__lastWritePos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWritePos;
}
constexpr int32_t const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__lastWritePos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastWritePos;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__lastWritePos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastWritePos = value;
}
constexpr int32_t& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__bufferSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr int32_t const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__bufferSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferSize;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__bufferSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferSize = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__windowWithMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windowWithMovement;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>* const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__windowWithMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____windowWithMovement;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__windowWithMovement(::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____windowWithMovement = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__tempWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempWindow;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>* const& Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_get__tempWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempWindow;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator::__cordl_internal_set__tempWindow(::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempWindow = value;
}
inline ::Oculus::Interaction::Throw::IPoseInputDevice* Oculus::Interaction::Throw::StandardVelocityCalculator::get_ThrowInputDevice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_ThrowInputDevice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Throw::IPoseInputDevice*>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_ThrowInputDevice(::Oculus::Interaction::Throw::IPoseInputDevice*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_ThrowInputDevice", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IPoseInputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Throw::StandardVelocityCalculator::get_UpdateFrequency()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_UpdateFrequency", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::StandardVelocityCalculator::get_ReferenceOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_ReferenceOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_ReferenceOffset(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_ReferenceOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Throw::StandardVelocityCalculator::get_InstantVelocityInfluence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_InstantVelocityInfluence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_InstantVelocityInfluence(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_InstantVelocityInfluence", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Throw::StandardVelocityCalculator::get_TrendVelocityInfluence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_TrendVelocityInfluence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_TrendVelocityInfluence(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_TrendVelocityInfluence", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Throw::StandardVelocityCalculator::get_TangentialVelocityInfluence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_TangentialVelocityInfluence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_TangentialVelocityInfluence(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_TangentialVelocityInfluence", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Throw::StandardVelocityCalculator::get_ExternalVelocityInfluence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_ExternalVelocityInfluence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_ExternalVelocityInfluence(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_ExternalVelocityInfluence", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Throw::StandardVelocityCalculator::get_StepBackTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_StepBackTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_StepBackTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_StepBackTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Throw::StandardVelocityCalculator::get_MaxPercentZeroSamplesTrendVeloc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_MaxPercentZeroSamplesTrendVeloc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_MaxPercentZeroSamplesTrendVeloc(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_MaxPercentZeroSamplesTrendVeloc", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::StandardVelocityCalculator::get_AddedInstantLinearVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_AddedInstantLinearVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_AddedInstantLinearVelocity(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_AddedInstantLinearVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::StandardVelocityCalculator::get_AddedTrendLinearVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_AddedTrendLinearVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_AddedTrendLinearVelocity(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_AddedTrendLinearVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::StandardVelocityCalculator::get_AddedTangentialLinearVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_AddedTangentialLinearVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_AddedTangentialLinearVelocity(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_AddedTangentialLinearVelocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::StandardVelocityCalculator::get_AxisOfRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_AxisOfRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_AxisOfRotation(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_AxisOfRotation", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::StandardVelocityCalculator::get_CenterOfMassToObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_CenterOfMassToObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_CenterOfMassToObject(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_CenterOfMassToObject", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::StandardVelocityCalculator::get_TangentialDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_TangentialDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_TangentialDirection(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_TangentialDirection", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::StandardVelocityCalculator::get_AxisOfRotationOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"get_AxisOfRotationOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::set_AxisOfRotationOrigin(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"set_AxisOfRotationOrigin", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::add_WhenThrowVelocitiesChanged(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"add_WhenThrowVelocitiesChanged", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::remove_WhenThrowVelocitiesChanged(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"remove_WhenThrowVelocitiesChanged", {}, {::i2c::type_of<::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::add_WhenNewSampleAvailable(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"add_WhenNewSampleAvailable", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::remove_WhenNewSampleAvailable(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"remove_WhenNewSampleAvailable", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Throw::ReleaseVelocityInformation Oculus::Interaction::Throw::StandardVelocityCalculator::CalculateThrowVelocity(::UnityEngine::Transform*  objectThrown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"CalculateThrowVelocity", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Throw::ReleaseVelocityInformation>(this, ___internal_method, objectThrown);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::IncludeInstantVelocities(float_t  currentTime, ::by_ref<::UnityEngine::Vector3>  linearVelocity, ::by_ref<::UnityEngine::Vector3>  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"IncludeInstantVelocities", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime, linearVelocity, angularVelocity);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::IncludeEstimatedReleaseVelocities(float_t  currentTime, ::by_ref<::UnityEngine::Vector3>  linearVelocity, ::by_ref<::UnityEngine::Vector3>  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"IncludeEstimatedReleaseVelocities", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentTime, linearVelocity, angularVelocity);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::IncludeTrendVelocities(::by_ref<::UnityEngine::Vector3>  linearVelocity, ::by_ref<::UnityEngine::Vector3>  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"IncludeTrendVelocities", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linearVelocity, angularVelocity);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::IncludeTangentialInfluence(::by_ref<::UnityEngine::Vector3>  linearVelocity, ::UnityEngine::Vector3  interactablePosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"IncludeTangentialInfluence", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linearVelocity, interactablePosition);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::IncludeExternalVelocities(::by_ref<::UnityEngine::Vector3>  linearVelocity, ::by_ref<::UnityEngine::Vector3>  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"IncludeExternalVelocities", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linearVelocity, angularVelocity);
}
inline ::System::ValueTuple_2<int32_t,int32_t> Oculus::Interaction::Throw::StandardVelocityCalculator::FindPoseIndicesAdjacentToTime(float_t  time)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"FindPoseIndicesAdjacentToTime", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t,int32_t>>(this, ___internal_method, time);
}
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> Oculus::Interaction::Throw::StandardVelocityCalculator::ComputeTrendVelocities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"ComputeTrendVelocities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>(this, ___internal_method);
}
inline bool Oculus::Interaction::Throw::StandardVelocityCalculator::BufferedVelocitiesValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"BufferedVelocitiesValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::FindLargestWindowWithMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"FindLargestWindowWithMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> Oculus::Interaction::Throw::StandardVelocityCalculator::FindMostRecentBufferedSampleWithMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"FindMostRecentBufferedSampleWithMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::TransferToDestBuffer(::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  source, ::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*  dest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"TransferToDestBuffer", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::StandardVelocityCalculator_SamplePoseData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, dest);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Throw::StandardVelocityCalculator::CalculateTangentialVector(::UnityEngine::Vector3  objectPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"CalculateTangentialVector", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, objectPosition);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>* Oculus::Interaction::Throw::StandardVelocityCalculator::LastThrowVelocities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"LastThrowVelocities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::SetUpdateFrequency(float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"SetUpdateFrequency", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frequency);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::LateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::CalculateLatestVelocitiesAndUpdateBuffer(float_t  delta, float_t  currentTime, ::UnityEngine::Pose  referencePose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"CalculateLatestVelocitiesAndUpdateBuffer", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, delta, currentTime, referencePose);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::UpdateLatestVelocitiesAndPoseValues(::UnityEngine::Pose  referencePose, float_t  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"UpdateLatestVelocitiesAndPoseValues", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, referencePose, delta);
}
inline ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3> Oculus::Interaction::Throw::StandardVelocityCalculator::GetLatestLinearAndAngularVelocities(::UnityEngine::Pose  referencePose, float_t  delta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"GetLatestLinearAndAngularVelocities", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>(this, ___internal_method, referencePose, delta);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::InjectAllStandardVelocityCalculator(::Oculus::Interaction::Throw::IPoseInputDevice*  poseInputDevice, ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*  bufferingParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"InjectAllStandardVelocityCalculator", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IPoseInputDevice*>(), ::i2c::type_of<::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseInputDevice, bufferingParams);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::InjectPoseInputDevice(::Oculus::Interaction::Throw::IPoseInputDevice*  poseInputDevice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"InjectPoseInputDevice", {}, {::i2c::type_of<::Oculus::Interaction::Throw::IPoseInputDevice*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, poseInputDevice);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::InjectBufferingParams(::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*  bufferingParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"InjectBufferingParams", {}, {::i2c::type_of<::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferingParams);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Throw::StandardVelocityCalculator* Oculus::Interaction::Throw::StandardVelocityCalculator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Throw::StandardVelocityCalculator*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Throw::IVelocityCalculator"
constexpr  Oculus::Interaction::Throw::StandardVelocityCalculator::operator ::Oculus::Interaction::Throw::IVelocityCalculator*() noexcept {
return static_cast<::Oculus::Interaction::Throw::IVelocityCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Throw::IVelocityCalculator"
constexpr ::Oculus::Interaction::Throw::IVelocityCalculator* Oculus::Interaction::Throw::StandardVelocityCalculator::i___Oculus__Interaction__Throw__IVelocityCalculator() noexcept {
return static_cast<::Oculus::Interaction::Throw::IVelocityCalculator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Throw::IThrowVelocityCalculator"
constexpr  Oculus::Interaction::Throw::StandardVelocityCalculator::operator ::Oculus::Interaction::Throw::IThrowVelocityCalculator*() noexcept {
return static_cast<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Throw::IThrowVelocityCalculator"
constexpr ::Oculus::Interaction::Throw::IThrowVelocityCalculator* Oculus::Interaction::Throw::StandardVelocityCalculator::i___Oculus__Interaction__Throw__IThrowVelocityCalculator() noexcept {
return static_cast<::Oculus::Interaction::Throw::IThrowVelocityCalculator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::Throw::StandardVelocityCalculator::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::Throw::StandardVelocityCalculator::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Throw::StandardVelocityCalculator::StandardVelocityCalculator()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator___c::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa498948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator___c.__ctor_b__116_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Throw::StandardVelocityCalculator___c::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator___c::__ctor_b__116_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa498950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>(),
                        {"<.ctor>b__116_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator___c.__ctor_b__116_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator___c::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator___c::__ctor_b__116_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa498958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>(),
                        {"<.ctor>b__116_1", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator___c.__ctor_b__116_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator___c::*)(::Oculus::Interaction::Throw::ReleaseVelocityInformation)>(&::Oculus::Interaction::Throw::StandardVelocityCalculator___c::__ctor_b__116_2)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa49895c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>(),
                        {"<.ctor>b__116_2", {}, {::i2c::type_of<::Oculus::Interaction::Throw::ReleaseVelocityInformation>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Throw::StandardVelocityCalculator___c::setStaticF___9(::Oculus::Interaction::Throw::StandardVelocityCalculator___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Throw::StandardVelocityCalculator___c*, "<>9", ::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>(std::forward<::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>(value));
}
inline ::Oculus::Interaction::Throw::StandardVelocityCalculator___c* Oculus::Interaction::Throw::StandardVelocityCalculator___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Throw::StandardVelocityCalculator___c*, "<>9", ::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>();
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator___c::setStaticF___9__116_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__116_0", ::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::Throw::StandardVelocityCalculator___c::getStaticF___9__116_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__116_0", ::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>();
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator___c::setStaticF___9__116_1(::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*, "<>9__116_1", ::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>(std::forward<::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*>(value));
}
inline ::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>* Oculus::Interaction::Throw::StandardVelocityCalculator___c::getStaticF___9__116_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>*, "<>9__116_1", ::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>();
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator___c::setStaticF___9__116_2(::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*, "<>9__116_2", ::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>(std::forward<::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>(value));
}
inline ::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>* Oculus::Interaction::Throw::StandardVelocityCalculator___c::getStaticF___9__116_2()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*, "<>9__116_2", ::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>();
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Throw::StandardVelocityCalculator___c::__ctor_b__116_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>(),
                        {"<.ctor>b__116_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator___c::__ctor_b__116_1(::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>(),
                        {"<.ctor>b__116_1", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Throw::ReleaseVelocityInformation>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator___c::__ctor_b__116_2(::Oculus::Interaction::Throw::ReleaseVelocityInformation  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>(),
                        {"<.ctor>b__116_2", {}, {::i2c::type_of<::Oculus::Interaction::Throw::ReleaseVelocityInformation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::Throw::StandardVelocityCalculator___c* Oculus::Interaction::Throw::StandardVelocityCalculator___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Throw::StandardVelocityCalculator___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Throw::StandardVelocityCalculator___c::StandardVelocityCalculator___c()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::Validate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa495ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::*)()>(&::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4988cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::__cordl_internal_get_BufferLengthSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BufferLengthSeconds;
}
constexpr float_t const& Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::__cordl_internal_get_BufferLengthSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BufferLengthSeconds;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::__cordl_internal_set_BufferLengthSeconds(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BufferLengthSeconds = value;
}
constexpr float_t& Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::__cordl_internal_get_SampleFrequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleFrequency;
}
constexpr float_t const& Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::__cordl_internal_get_SampleFrequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleFrequency;
}
constexpr void Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::__cordl_internal_set_SampleFrequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SampleFrequency = value;
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams* Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Throw::StandardVelocityCalculator_BufferingParams::StandardVelocityCalculator_BufferingParams()   {
}
