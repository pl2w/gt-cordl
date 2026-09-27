#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureStateProvider.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFinger_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IHand_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ReadOnlyHandJointPoses_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateActiveMode_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureStateDictionary_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureStateProvider_FingerStateThresholds_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeature_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__FingerShapes_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__IFingerFeatureStateProvider_def.hpp"
#include "Oculus/Interaction/zzzz__ITimeConsumer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.get_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::IHand* (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::get_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49b93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"get_Hand", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.set_Hand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::set_Hand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49b944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.SetTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::SetTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49b94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.get_DefaultFingerShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::FingerShapes* (*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::get_DefaultFingerShapes)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa49b954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"get_DefaultFingerShapes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::Awake)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa49b9ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa49baac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::OnEnable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa49bad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::OnDisable)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa49bf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                    {::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.ReadStateThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::ReadStateThresholds)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0xa49bbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"ReadStateThresholds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.HandDataAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::HandDataAvailable)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa49c110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"HandDataAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.GetCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature, ::by_ref<::StringW>)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetCurrentState)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa49c2b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"GetCurrentState", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.GetCurrentFingerFeatureState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetCurrentFingerFeatureState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa49c354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"GetCurrentFingerFeatureState", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.GetFeatureValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetFeatureValue)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa49c3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"GetFeatureValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.IsDataValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::IsDataValid)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa49c32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"IsDataValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.GetValueProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::PoseDetection::FingerShapes* (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::HandFinger)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetValueProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49c464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"GetValueProvider", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.IsStateActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::HandFinger, ::Oculus::Interaction::PoseDetection::FingerFeature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode, ::StringW)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::IsStateActive)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa49c46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"IsStateActive", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FeatureStateActiveMode>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.InjectAllFingerFeatureStateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::IHand*, ::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*, ::Oculus::Interaction::PoseDetection::FingerShapes*, bool)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectAllFingerFeatureStateProvider)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa49c4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"InjectAllFingerFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.InjectHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::Input::IHand*)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa49c518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.InjectFingerStateThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectFingerStateThresholds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49c5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"InjectFingerStateThresholds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.InjectFingerShapes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::Oculus::Interaction::PoseDetection::FingerShapes*)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectFingerShapes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49c5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"InjectFingerShapes", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerShapes*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.InjectDisableProactiveEvaluation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(bool)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectDisableProactiveEvaluation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49c5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"InjectDisableProactiveEvaluation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider.InjectOptionalTimeProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)(::System::Func_1<float_t>*)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectOptionalTimeProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49c600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa49c608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider._ReadStateThresholds_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::_ReadStateThresholds_b__21_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa49c7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"<ReadStateThresholds>b__21_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__hand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__hand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hand;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hand = value;
}
constexpr ::Oculus::Interaction::Input::IHand*& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__Hand_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::IHand* const& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__Hand_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Hand_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Hand_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__fingerStateThresholds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerStateThresholds;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>* const& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__fingerStateThresholds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerStateThresholds;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_set__fingerStateThresholds(::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerStateThresholds = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__disableProactiveEvaluation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableProactiveEvaluation;
}
constexpr bool const& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__disableProactiveEvaluation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disableProactiveEvaluation;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_set__disableProactiveEvaluation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disableProactiveEvaluation = value;
}
constexpr bool& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr ::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary* const& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_set__state(::Oculus::Interaction::PoseDetection::FingerFeatureStateDictionary*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
constexpr ::System::Func_1<float_t>*& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__timeProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr ::System::Func_1<float_t>* const& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__timeProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeProvider;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeProvider = value;
}
constexpr ::Oculus::Interaction::PoseDetection::FingerShapes*& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__fingerShapes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerShapes;
}
constexpr ::Oculus::Interaction::PoseDetection::FingerShapes* const& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__fingerShapes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingerShapes;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_set__fingerShapes(::Oculus::Interaction::PoseDetection::FingerShapes*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingerShapes = value;
}
constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses*& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__handJointPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handJointPoses;
}
constexpr ::Oculus::Interaction::Input::ReadOnlyHandJointPoses* const& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_get__handJointPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handJointPoses;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::__cordl_internal_set__handJointPoses(::Oculus::Interaction::Input::ReadOnlyHandJointPoses*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handJointPoses = value;
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::setStaticF__DefaultFingerShapes_k__BackingField(::Oculus::Interaction::PoseDetection::FingerShapes*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::PoseDetection::FingerShapes*, "<DefaultFingerShapes>k__BackingField", ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(std::forward<::Oculus::Interaction::PoseDetection::FingerShapes*>(value));
}
inline ::Oculus::Interaction::PoseDetection::FingerShapes* Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::getStaticF__DefaultFingerShapes_k__BackingField()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::PoseDetection::FingerShapes*, "<DefaultFingerShapes>k__BackingField", ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>();
}
inline ::Oculus::Interaction::Input::IHand* Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::get_Hand()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"get_Hand", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::IHand*>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::set_Hand(::Oculus::Interaction::Input::IHand*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"set_Hand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::SetTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"SetTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline ::Oculus::Interaction::PoseDetection::FingerShapes* Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::get_DefaultFingerShapes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"get_DefaultFingerShapes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::FingerShapes*>(nullptr, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::ReadStateThresholds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"ReadStateThresholds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::HandDataAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"HandDataAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetCurrentState(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature, ::by_ref<::StringW>  currentState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"GetCurrentState", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger, fingerFeature, currentState);
}
inline ::StringW Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetCurrentFingerFeatureState(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"GetCurrentFingerFeatureState", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, finger, fingerFeature);
}
inline ::System::Nullable_1<float_t> Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetFeatureValue(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  fingerFeature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"GetFeatureValue", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method, finger, fingerFeature);
}
inline bool Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::IsDataValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"IsDataValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::FingerShapes* Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::GetValueProvider(::Oculus::Interaction::Input::HandFinger  finger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"GetValueProvider", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::PoseDetection::FingerShapes*>(this, ___internal_method, finger);
}
inline bool Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::IsStateActive(::Oculus::Interaction::Input::HandFinger  finger, ::Oculus::Interaction::PoseDetection::FingerFeature  feature, ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode  mode, ::StringW  stateId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"IsStateActive", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandFinger>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FeatureStateActiveMode>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, finger, feature, mode, stateId);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectAllFingerFeatureStateProvider(::Oculus::Interaction::Input::IHand*  hand, ::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*  fingerStateThresholds, ::Oculus::Interaction::PoseDetection::FingerShapes*  fingerShapes, bool  disableProactiveEvaluation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"InjectAllFingerFeatureStateProvider", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*>(), ::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerShapes*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand, fingerStateThresholds, fingerShapes, disableProactiveEvaluation);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectHand(::Oculus::Interaction::Input::IHand*  hand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"InjectHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::IHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hand);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectFingerStateThresholds(::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*  fingerStateThresholds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"InjectFingerStateThresholds", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::FingerFeatureStateProvider_FingerStateThresholds>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerStateThresholds);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectFingerShapes(::Oculus::Interaction::PoseDetection::FingerShapes*  fingerShapes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"InjectFingerShapes", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerShapes*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fingerShapes);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectDisableProactiveEvaluation(bool  disableProactiveEvaluation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"InjectDisableProactiveEvaluation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disableProactiveEvaluation);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"InjectOptionalTimeProvider", {}, {::i2c::type_of<::System::Func_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeProvider);
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::_ReadStateThresholds_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>(),
                        {"<ReadStateThresholds>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider* Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider*>());
}
/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider"
constexpr  Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::operator ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider"
constexpr ::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider* Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::i___Oculus__Interaction__PoseDetection__IFingerFeatureStateProvider() noexcept {
return static_cast<::Oculus::Interaction::PoseDetection::IFingerFeatureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr  Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::operator ::Oculus::Interaction::ITimeConsumer*() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::i___Oculus__Interaction__ITimeConsumer() noexcept {
return static_cast<::Oculus::Interaction::ITimeConsumer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider::FingerFeatureStateProvider()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49c108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0._ReadStateThresholds_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::*)(::Oculus::Interaction::PoseDetection::FingerFeature)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::_ReadStateThresholds_b__1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa49c890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0*>(),
                        {"<ReadStateThresholds>b__1", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::HandFinger& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::__cordl_internal_get_finger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finger;
}
constexpr ::Oculus::Interaction::Input::HandFinger const& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::__cordl_internal_get_finger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finger;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::__cordl_internal_set_finger(::Oculus::Interaction::Input::HandFinger  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finger = value;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider>& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider> const& Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::__cordl_internal_set___4__this(::UnityW<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<float_t> Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::_ReadStateThresholds_b__1(::Oculus::Interaction::PoseDetection::FingerFeature  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0*>(),
                        {"<ReadStateThresholds>b__1", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method, feature);
}
inline ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0* Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c__DisplayClass21_0::FingerFeatureStateProvider___c__DisplayClass21_0()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49c878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c._ReadStateThresholds_b__21_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::*)(::Oculus::Interaction::PoseDetection::FingerFeature)>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::_ReadStateThresholds_b__21_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49c880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>(),
                        {"<ReadStateThresholds>b__21_2", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c.__ctor_b__35_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::*)()>(&::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::__ctor_b__35_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa49c888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>(),
                        {"<.ctor>b__35_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::setStaticF___9(::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*, "<>9", ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>(std::forward<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>(value));
}
inline ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c* Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*, "<>9", ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>();
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::setStaticF___9__21_2(::System::Func_2<::Oculus::Interaction::PoseDetection::FingerFeature,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Oculus::Interaction::PoseDetection::FingerFeature,int32_t>*, "<>9__21_2", ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>(std::forward<::System::Func_2<::Oculus::Interaction::PoseDetection::FingerFeature,int32_t>*>(value));
}
inline ::System::Func_2<::Oculus::Interaction::PoseDetection::FingerFeature,int32_t>* Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::getStaticF___9__21_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Oculus::Interaction::PoseDetection::FingerFeature,int32_t>*, "<>9__21_2", ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>();
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::setStaticF___9__35_0(::System::Func_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<float_t>*, "<>9__35_0", ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>(std::forward<::System::Func_1<float_t>*>(value));
}
inline ::System::Func_1<float_t>* Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::getStaticF___9__35_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<float_t>*, "<>9__35_0", ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>();
}
inline void Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::_ReadStateThresholds_b__21_2(::Oculus::Interaction::PoseDetection::FingerFeature  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>(),
                        {"<ReadStateThresholds>b__21_2", {}, {::i2c::type_of<::Oculus::Interaction::PoseDetection::FingerFeature>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature);
}
inline float_t Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::__ctor_b__35_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>(),
                        {"<.ctor>b__35_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c* Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::FingerFeatureStateProvider___c::FingerFeatureStateProvider___c()   {
}
