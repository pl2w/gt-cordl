#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/BaseAffordanceStateProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__AffordanceStateData_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__BaseAffordanceStateProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__BindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/Variables/zzzz__IReadOnlyBindableVariable_1_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/zzzz__BindingsGroup_def.hpp"
#include "Unity/XR/CoreUtils/Bindings/zzzz__IEventBinding_def.hpp"
#include "Unity/XR/CoreUtils/Collections/zzzz__HashSetList_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__IAffordanceStateReceiver_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__IAsyncAffordanceStateReceiver_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/zzzz__ISynchronousAffordanceStateReceiver_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/State/zzzz__AffordanceStateData_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.get_transitionDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::get_transitionDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d2714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"get_transitionDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.set_transitionDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::set_transitionDuration)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4d271c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"set_transitionDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.get_isCurrentlyTransitioning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::get_isCurrentlyTransitioning)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb4d276c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"get_isCurrentlyTransitioning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.get_currentAffordanceStateData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>* (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::get_currentAffordanceStateData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4d27cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"get_currentAffordanceStateData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::OnValidate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4d27d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::OnEnable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4d27fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4d282c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::Update)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb4d2838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.BindToProviders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::BindToProviders)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb4d2e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.ClearBindings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::ClearBindings)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4d2ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.AddBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)(::Unity::XR::CoreUtils::Bindings::IEventBinding*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::AddBinding)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4d2ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"AddBinding", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.UpdateAffordanceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::UpdateAffordanceState)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4d2f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"UpdateAffordanceState", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.OnAffordanceStateUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::OnAffordanceStateUpdated)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb4d28d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"OnAffordanceStateUpdated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.RegisterAffordanceReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::RegisterAffordanceReceiver)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb4d2f7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"RegisterAffordanceReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.RegisterAffordanceReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::RegisterAffordanceReceiver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4d30b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"RegisterAffordanceReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.RegisterAffordanceReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::RegisterAffordanceReceiver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4d3110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"RegisterAffordanceReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.UnregisterAffordanceReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::UnregisterAffordanceReceiver)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb4d3168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"UnregisterAffordanceReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.UnregisterAffordanceReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::UnregisterAffordanceReceiver)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb4d32a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"UnregisterAffordanceReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.UnregisterAffordanceReceiver
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::UnregisterAffordanceReceiver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb4d3304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"UnregisterAffordanceReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.CompleteJobs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::CompleteJobs)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb4d335c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"CompleteJobs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.DoTween
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::DoTween)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xb4d2ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"DoTween", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider.RefreshTransitionDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::RefreshTransitionDuration)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4d2744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"RefreshTransitionDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::_ctor)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xb4d341c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_TransitionDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransitionDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_TransitionDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransitionDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_set_m_TransitionDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TransitionDuration = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_AffordanceStateData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffordanceStateData;
}
constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_AffordanceStateData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffordanceStateData;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_set_m_AffordanceStateData(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AffordanceStateData = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_AffordanceStateDataBeforeSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffordanceStateDataBeforeSet;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_AffordanceStateDataBeforeSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AffordanceStateDataBeforeSet;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_set_m_AffordanceStateDataBeforeSet(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AffordanceStateDataBeforeSet = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_PreviousAffordanceStateData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousAffordanceStateData;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_PreviousAffordanceStateData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousAffordanceStateData;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_set_m_PreviousAffordanceStateData(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreviousAffordanceStateData = value;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_AsyncAffordanceReceivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AsyncAffordanceReceivers;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_AsyncAffordanceReceivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AsyncAffordanceReceivers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_set_m_AsyncAffordanceReceivers(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AsyncAffordanceReceivers = value;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_SynchronousAffordanceReceivers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronousAffordanceReceivers;
}
constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_SynchronousAffordanceReceivers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SynchronousAffordanceReceivers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_set_m_SynchronousAffordanceReceivers(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SynchronousAffordanceReceivers = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_ScheduledJobs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScheduledJobs;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_ScheduledJobs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScheduledJobs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_set_m_ScheduledJobs(::System::Collections::Generic::List_1<::Unity::Jobs::JobHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScheduledJobs = value;
}
constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup*& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_BindingsGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsGroup;
}
constexpr ::Unity::XR::CoreUtils::Bindings::BindingsGroup* const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_BindingsGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BindingsGroup;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_set_m_BindingsGroup(::Unity::XR::CoreUtils::Bindings::BindingsGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BindingsGroup = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_TimeSinceLastStateUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeSinceLastStateUpdate;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_TimeSinceLastStateUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeSinceLastStateUpdate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_set_m_TimeSinceLastStateUpdate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TimeSinceLastStateUpdate = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_IsFirstFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsFirstFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_IsFirstFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsFirstFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_set_m_IsFirstFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsFirstFrame = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_CompletingTweens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CompletingTweens;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_CompletingTweens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CompletingTweens;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_set_m_CompletingTweens(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CompletingTweens = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_InterpolationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InterpolationSpeed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_InterpolationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InterpolationSpeed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_set_m_InterpolationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InterpolationSpeed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_MaxTransitionDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxTransitionDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_get_m_MaxTransitionDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxTransitionDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::__cordl_internal_set_m_MaxTransitionDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxTransitionDuration = value;
}
inline float_t UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::get_transitionDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"get_transitionDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::set_transitionDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"set_transitionDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::get_isCurrentlyTransitioning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"get_isCurrentlyTransitioning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::get_currentAffordanceStateData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"get_currentAffordanceStateData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::BindToProviders()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::ClearBindings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::AddBinding(::Unity::XR::CoreUtils::Bindings::IEventBinding*  binding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"AddBinding", {}, {::i2c::type_of<::Unity::XR::CoreUtils::Bindings::IEventBinding*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, binding);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::UpdateAffordanceState(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  newAffordanceStateData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"UpdateAffordanceState", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAffordanceStateData);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::OnAffordanceStateUpdated(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData  newAffordanceStateData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"OnAffordanceStateUpdated", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::AffordanceStateData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newAffordanceStateData);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::RegisterAffordanceReceiver(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"RegisterAffordanceReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, receiver);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::RegisterAffordanceReceiver(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"RegisterAffordanceReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, receiver);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::RegisterAffordanceReceiver(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"RegisterAffordanceReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, receiver);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::UnregisterAffordanceReceiver(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"UnregisterAffordanceReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAffordanceStateReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, receiver);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::UnregisterAffordanceReceiver(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"UnregisterAffordanceReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::IAsyncAffordanceStateReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, receiver);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::UnregisterAffordanceReceiver(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*  receiver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"UnregisterAffordanceReceiver", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::ISynchronousAffordanceStateReceiver*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, receiver);
}
inline bool UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::CompleteJobs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"CompleteJobs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::DoTween(float_t  tweenTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"DoTween", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tweenTarget);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::RefreshTransitionDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {"RefreshTransitionDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider* UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::State::BaseAffordanceStateProvider::BaseAffordanceStateProvider()   {
}
