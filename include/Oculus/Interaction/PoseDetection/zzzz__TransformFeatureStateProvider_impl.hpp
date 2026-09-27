#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureStateProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHmd_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateActiveMode_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__ITransformFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformConfig_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureStateCollection_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformJointData_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a7414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a741c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.get_Hmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHmd* (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::get_Hmd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a7424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"get_Hmd", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.set_Hmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::set_Hmd)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a742c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"set_Hmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.get_TrackingToWorldTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::ITrackingToWorldTransformer* (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::get_TrackingToWorldTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a7434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"get_TrackingToWorldTransformer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.set_TrackingToWorldTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::Input::ITrackingToWorldTransformer*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::set_TrackingToWorldTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a743c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"set_TrackingToWorldTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a7444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::Awake)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa4a744c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.RegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::RegisterConfig)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa4a7548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"RegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.UnRegisterConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::UnRegisterConfig)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4a75dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"UnRegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4a75f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::OnEnable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4a761c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4a771c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.HandDataAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::HandDataAvailable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4a781c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"HandDataAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.UpdateJointData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::UpdateJointData)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0xa4a7834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"UpdateJointData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.UpdateStateForHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::UpdateStateForHand)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4a7b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"UpdateStateForHand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.IsHandDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::IsHandDataValid)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4a7bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"IsHandDataValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.IsStateActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode, ::StringW)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::IsStateActive)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4a7bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"IsStateActive", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FeatureStateActiveMode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.GetCurrentFeatureState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetCurrentFeatureState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4a7c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"GetCurrentFeatureState", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.GetCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature, ::by_ref<::StringW>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetCurrentState)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4a7cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"GetCurrentState", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.GetFeatureValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetFeatureValue)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4a7d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"GetFeatureValue", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.GetFeatureVectorAndWristPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::TransformConfig*, ::Oculus::Interaction::PoseDetection::TransformFeature, bool, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetFeatureVectorAndWristPos)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4a7da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"GetFeatureVectorAndWristPos", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.InjectAllTransformFeatureStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::Input::IHmd*, bool)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectAllTransformFeatureStateProvider)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa4a7f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"InjectAllTransformFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHmd*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4a7f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.InjectHmd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::Oculus::Interaction::Input::IHmd*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectHmd)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4a806c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"InjectHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.InjectDisableProactiveEvaluation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(bool)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectDisableProactiveEvaluation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a813c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"InjectDisableProactiveEvaluation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider.InjectOptionalTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectOptionalTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a8144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa4a814c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider._RegisterConfig_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::_RegisterConfig_b__22_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa4a827c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"<RegisterConfig>b__22_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__hmd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__hmd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hmd;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_set__hmd(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hmd = value;
}
constexpr ::Oculus::Interaction::Input::IHmd*& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__Hmd_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hmd_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHmd* const& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__Hmd_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hmd_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_set__Hmd_k__BackingField(::Oculus::Interaction::Input::IHmd*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hmd_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__trackingToWorldTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingToWorldTransformer;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__trackingToWorldTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____trackingToWorldTransformer;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_set__trackingToWorldTransformer(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____trackingToWorldTransformer = value;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__TrackingToWorldTransformer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackingToWorldTransformer_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__TrackingToWorldTransformer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackingToWorldTransformer_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_set__TrackingToWorldTransformer_k__BackingField(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrackingToWorldTransformer_k__BackingField = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__disableProactiveEvaluation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableProactiveEvaluation;
}
constexpr bool const& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__disableProactiveEvaluation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableProactiveEvaluation;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_set__disableProactiveEvaluation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableProactiveEvaluation = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformJointData*& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__jointData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointData;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformJointData* const& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__jointData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointData;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_set__jointData(::Oculus::Interaction::PoseDetection::TransformJointData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointData = value;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__transformFeatureStateCollection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformFeatureStateCollection;
}
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection* const& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__transformFeatureStateCollection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformFeatureStateCollection;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_set__transformFeatureStateCollection(::Oculus::Interaction::PoseDetection::TransformFeatureStateCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformFeatureStateCollection = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::IHmd* Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::get_Hmd()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"get_Hmd", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHmd*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::set_Hmd(::Oculus::Interaction::Input::IHmd*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"set_Hmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::ITrackingToWorldTransformer* Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::get_TrackingToWorldTransformer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"get_TrackingToWorldTransformer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"set_TrackingToWorldTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::RegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"RegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformConfig);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::UnRegisterConfig(::Oculus::Interaction::PoseDetection::TransformConfig*  transformConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"UnRegisterConfig", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformConfig);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::HandDataAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"HandDataAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::UpdateJointData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"UpdateJointData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::UpdateStateForHand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"UpdateStateForHand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::IsHandDataValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"IsHandDataValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::IsStateActive(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::StringW  stateId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"IsStateActive", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FeatureStateActiveMode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, config, feature, mode, stateId);
}
inline ::StringW Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetCurrentFeatureState(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"GetCurrentFeatureState", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, config, feature);
}
inline bool Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetCurrentState(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, ::by_ref<::StringW>  currentState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"GetCurrentState", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, config, transformFeature, currentState);
}
inline ::System::Nullable_1<float_t> Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetFeatureValue(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"GetFeatureValue", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method, config, transformFeature);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::GetFeatureVectorAndWristPos(::Oculus::Interaction::PoseDetection::TransformConfig*  config, ::Oculus::Interaction::PoseDetection::TransformFeature  transformFeature, bool  isHandVector, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  featureVec, ::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>  wristPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"GetFeatureVectorAndWristPos", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::TransformFeature>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>(), ::i2c::type_of<::by_ref<::System::Nullable_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, config, transformFeature, isHandVector, featureVec, wristPos);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectAllTransformFeatureStateProvider(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::Input::IHmd*  hmd, bool  disableProactiveEvaluation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"InjectAllTransformFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::Oculus::Interaction::Input::IHmd*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, hmd, disableProactiveEvaluation);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectHmd(::Oculus::Interaction::Input::IHmd*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"InjectHmd", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHmd*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectDisableProactiveEvaluation(bool  disabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"InjectDisableProactiveEvaluation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disabled);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::_RegisterConfig_b__22_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>(),
                        {"<RegisterConfig>b__22_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider* Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider*>());
}
/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider"
constexpr  Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::operator ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider"
constexpr ::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider* Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::i___Oculus__Interaction__PoseDetection__ITransformFeatureStateProvider() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::ITransformFeatureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider::TransformFeatureStateProvider()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a8304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c.__ctor_b__41_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c::*)()>(&::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c::__ctor_b__41_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a830c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*>(),
                        {"<.ctor>b__41_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c::setStaticF___9(::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*, "<>9", ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*>(std::forward<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*>(value));
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c* Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*, "<>9", ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*>();
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c::setStaticF___9__41_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__41_0", ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c::getStaticF___9__41_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__41_0", ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*>();
}
inline void Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c::__ctor_b__41_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*>(),
                        {"<.ctor>b__41_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c* Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformFeatureStateProvider___c::TransformFeatureStateProvider___c()   {
}
