#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/LocomotionProvider.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionPhase_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionProvider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__ApplyBodyTransformationsEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__IXRBodyTransformation_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionMediator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__LocomotionState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRBodyTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionPhase_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__LocomotionSystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.get_mediator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_mediator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb447b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_mediator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.set_mediator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::set_mediator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb447ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"set_mediator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.get_transformationPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_transformationPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb447bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_transformationPriority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.set_transformationPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::set_transformationPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb447bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"set_transformationPriority", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.get_locomotionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_locomotionState)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb447bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_locomotionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.get_isLocomotionActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_isLocomotionActive)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb447c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_isLocomotionActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.get_canStartMoving
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_canStartMoving)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb447c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.add_locomotionStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_locomotionStateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb447c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_locomotionStateChanged", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.remove_locomotionStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_locomotionStateChanged)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb447d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_locomotionStateChanged", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.add_locomotionStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_locomotionStarted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb447dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_locomotionStarted", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.remove_locomotionStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_locomotionStarted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb447e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_locomotionStarted", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.add_locomotionEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_locomotionEnded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb447f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_locomotionEnded", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.remove_locomotionEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_locomotionEnded)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb447fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_locomotionEnded", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.add_beforeStepLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_beforeStepLocomotion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb448080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_beforeStepLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.remove_beforeStepLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_beforeStepLocomotion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb448130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_beforeStepLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.add_afterStepLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_afterStepLocomotion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4481e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_afterStepLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.remove_afterStepLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_afterStepLocomotion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb448290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_afterStepLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.get_locomotionProviders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_locomotionProviders)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb448340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_locomotionProviders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.add_locomotionProvidersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_locomotionProvidersChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb448398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_locomotionProvidersChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.remove_locomotionProvidersChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_locomotionProvidersChanged)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb44848c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_locomotionProvidersChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::Awake)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xb448580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.TryPrepareLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::TryPrepareLocomotion)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb448908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"TryPrepareLocomotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.TryStartLocomotionImmediately
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::TryStartLocomotionImmediately)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb448990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"TryStartLocomotionImmediately", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.TryEndLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::TryEndLocomotion)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb448a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"TryEndLocomotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.OnLocomotionStarting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::OnLocomotionStarting)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb448aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.OnLocomotionEnding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::OnLocomotionEnding)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb448aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.OnLocomotionStateChanging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::OnLocomotionStateChanging)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb448aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.OnLocomotionStateChanging
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::OnLocomotionStateChanging)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb4478a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"OnLocomotionStateChanging", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.TryQueueTransformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::TryQueueTransformation)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb448d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"TryQueueTransformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.TryQueueTransformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::TryQueueTransformation)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb448e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"TryQueueTransformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.CanQueueTransformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::CanQueueTransformation)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb448d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"CanQueueTransformation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::Subscribe)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb448aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"Subscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::Unsubscribe)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb448bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"Unsubscribe", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.OnBeforeApplyTransformations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::OnBeforeApplyTransformations)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb448ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"OnBeforeApplyTransformations", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.OnAfterApplyTransformations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::OnAfterApplyTransformations)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb448ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"OnAfterApplyTransformations", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.add_startLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_startLocomotion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb448f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_startLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.remove_startLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_startLocomotion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb44900c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_startLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.get_system
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_system)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4490bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_system", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.set_system
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::set_system)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4490c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"set_system", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.get_locomotionPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_locomotionPhase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4490cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_locomotionPhase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.set_locomotionPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::set_locomotionPhase)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4490d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"set_locomotionPhase", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.add_beginLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_beginLocomotion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4490dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_beginLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.remove_beginLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_beginLocomotion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb44918c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_beginLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.add_endLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_endLocomotion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb44923c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_endLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.remove_endLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_endLocomotion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4492ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_endLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.CanBeginLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::CanBeginLocomotion)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb44939c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"CanBeginLocomotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.BeginLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::BeginLocomotion)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb449428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"BeginLocomotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider.EndLocomotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::EndLocomotion)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb4494d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"EndLocomotion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb449580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator>& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_m_Mediator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Mediator;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_m_Mediator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Mediator;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_m_Mediator(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Mediator = value;
}
constexpr int32_t& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_m_TransformationPriority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransformationPriority;
}
constexpr int32_t const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_m_TransformationPriority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransformationPriority;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_m_TransformationPriority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TransformationPriority = value;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_locomotionStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locomotionStateChanged;
}
constexpr ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_locomotionStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locomotionStateChanged;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_locomotionStateChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locomotionStateChanged = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_locomotionStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locomotionStarted;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_locomotionStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locomotionStarted;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_locomotionStarted(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locomotionStarted = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_locomotionEnded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locomotionEnded;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_locomotionEnded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___locomotionEnded;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_locomotionEnded(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___locomotionEnded = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_beforeStepLocomotion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beforeStepLocomotion;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_beforeStepLocomotion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beforeStepLocomotion;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_beforeStepLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beforeStepLocomotion = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_afterStepLocomotion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afterStepLocomotion;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_afterStepLocomotion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afterStepLocomotion;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_afterStepLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___afterStepLocomotion = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_m_ActiveBodyTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveBodyTransformer;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_m_ActiveBodyTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveBodyTransformer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_m_ActiveBodyTransformer(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActiveBodyTransformer = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_m_SubscribedTransformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubscribedTransformer;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_m_SubscribedTransformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubscribedTransformer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_m_SubscribedTransformer(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SubscribedTransformer = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_m_AnyTransformationsQueued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnyTransformationsQueued;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_m_AnyTransformationsQueued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AnyTransformationsQueued;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_m_AnyTransformationsQueued(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AnyTransformationsQueued = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_startLocomotion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startLocomotion;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_startLocomotion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startLocomotion;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_startLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startLocomotion = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_m_System()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_System;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_m_System() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_System;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_m_System(::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_System = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get__locomotionPhase_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotionPhase_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get__locomotionPhase_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotionPhase_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set__locomotionPhase_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locomotionPhase_k__BackingField = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_beginLocomotion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beginLocomotion;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_beginLocomotion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beginLocomotion;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_beginLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beginLocomotion = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_endLocomotion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endLocomotion;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_get_endLocomotion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endLocomotion;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::__cordl_internal_set_endLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endLocomotion = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::setStaticF__locomotionProviders_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*, "<locomotionProviders>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::getStaticF__locomotionProviders_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*, "<locomotionProviders>k__BackingField", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::setStaticF_locomotionProvidersChanged(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*, "locomotionProvidersChanged", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(std::forward<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>(value));
}
inline ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::getStaticF_locomotionProvidersChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*, "locomotionProvidersChanged", ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>();
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator> UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_mediator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_mediator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::set_mediator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"set_mediator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionMediator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_transformationPriority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_transformationPriority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::set_transformationPriority(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"set_transformationPriority", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_locomotionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_locomotionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_isLocomotionActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_isLocomotionActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_canStartMoving()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_locomotionStateChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_locomotionStateChanged", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_locomotionStateChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_locomotionStateChanged", {}, {::i2c::type_of<::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>,::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_locomotionStarted(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_locomotionStarted", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_locomotionStarted(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_locomotionStarted", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_locomotionEnded(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_locomotionEnded", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_locomotionEnded(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_locomotionEnded", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_beforeStepLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_beforeStepLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_beforeStepLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_beforeStepLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_afterStepLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_afterStepLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_afterStepLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_afterStepLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>* UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_locomotionProviders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_locomotionProviders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_locomotionProvidersChanged(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_locomotionProvidersChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_locomotionProvidersChanged(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_locomotionProvidersChanged", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::TryPrepareLocomotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"TryPrepareLocomotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::TryStartLocomotionImmediately()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"TryStartLocomotionImmediately", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::TryEndLocomotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"TryEndLocomotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::OnLocomotionStarting()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::OnLocomotionEnding()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::OnLocomotionStateChanging(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::OnLocomotionStateChanging(::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  oldState, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState  state, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  transformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"OnLocomotionStateChanging", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionState>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldState, state, transformer);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::TryQueueTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*  bodyTransformation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"TryQueueTransformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyTransformation);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::TryQueueTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*  bodyTransformation, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"TryQueueTransformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bodyTransformation, priority);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::CanQueueTransformation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"CanQueueTransformation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::Subscribe(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  transformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"Subscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformer);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::Unsubscribe()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"Unsubscribe", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::OnBeforeApplyTransformations(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  transformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"OnBeforeApplyTransformations", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformer);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::OnAfterApplyTransformations(::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"OnAfterApplyTransformations", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_startLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_startLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_startLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_startLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem> UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_system()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_system", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::set_system(::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"set_system", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::get_locomotionPhase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"get_locomotionPhase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::set_locomotionPhase(::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"set_locomotionPhase", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::LocomotionPhase>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_beginLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_beginLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_beginLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_beginLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::add_endLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"add_endLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::remove_endLocomotion(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"remove_endLocomotion", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::LocomotionSystem>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::CanBeginLocomotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"CanBeginLocomotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::BeginLocomotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"BeginLocomotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::EndLocomotion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {"EndLocomotion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider* UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::LocomotionProvider::LocomotionProvider()   {
}
