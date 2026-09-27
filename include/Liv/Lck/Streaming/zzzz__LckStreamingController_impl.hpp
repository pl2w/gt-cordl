#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingController_def.hpp"
#include "Liv/Lck/Core/Cosmetics/zzzz__ILckCosmeticsCoordinator_def.hpp"
#include "Liv/Lck/Core/zzzz__ILckCore_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckInternalErrorState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckInvalidArgumentState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckMissingTrackingIdState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckRateLimiterBackoffState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckServiceUnavailableState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingBaseState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingConfiguredCorrectlyState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingController__StartStreamIfNoLivHubChanges_d__74_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingGetCurrentState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingShowCodeState_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamingWaitingForConfigureState_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckNotificationController_def.hpp"
#include "Liv/Lck/Tablet/zzzz__LckTopButtonsController_def.hpp"
#include "Liv/Lck/Tablet/zzzz__NotificationType_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__LckMonoBehaviourMediator_ApplicationLifecycleEventType_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_LckCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::ILckCore* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_LckCore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_LckCore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_LckCore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Core::ILckCore*)>(&::Liv::Lck::Streaming::LckStreamingController::set_LckCore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_LckCore", {}, {::i2c::type_of<::Liv::Lck::Core::ILckCore*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_LckCosmeticsCoordinator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_LckCosmeticsCoordinator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_LckCosmeticsCoordinator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_LckCosmeticsCoordinator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*)>(&::Liv::Lck::Streaming::LckStreamingController::set_LckCosmeticsCoordinator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c2b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_LckCosmeticsCoordinator", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_IsConfiguredCorrectly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_IsConfiguredCorrectly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_IsConfiguredCorrectly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_IsConfiguredCorrectly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(bool)>(&::Liv::Lck::Streaming::LckStreamingController::set_IsConfiguredCorrectly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_IsConfiguredCorrectly", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Streaming::LckStreamingBaseState* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_CurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_CurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Streaming::LckStreamingBaseState*)>(&::Liv::Lck::Streaming::LckStreamingController::set_CurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingBaseState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_GetCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Streaming::LckStreamingGetCurrentState* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_GetCurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_GetCurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_GetCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Streaming::LckStreamingGetCurrentState*)>(&::Liv::Lck::Streaming::LckStreamingController::set_GetCurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_GetCurrentState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingGetCurrentState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_ShowCodeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Streaming::LckStreamingShowCodeState* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_ShowCodeState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_ShowCodeState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_ShowCodeState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Streaming::LckStreamingShowCodeState*)>(&::Liv::Lck::Streaming::LckStreamingController::set_ShowCodeState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_ShowCodeState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingShowCodeState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_WaitingForConfigureState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_WaitingForConfigureState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_WaitingForConfigureState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_WaitingForConfigureState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*)>(&::Liv::Lck::Streaming::LckStreamingController::set_WaitingForConfigureState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_WaitingForConfigureState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_ConfiguredCorrectlyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_ConfiguredCorrectlyState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_ConfiguredCorrectlyState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_ConfiguredCorrectlyState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*)>(&::Liv::Lck::Streaming::LckStreamingController::set_ConfiguredCorrectlyState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_ConfiguredCorrectlyState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_InternalErrorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Streaming::LckInternalErrorState* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_InternalErrorState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_InternalErrorState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_InternalErrorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Streaming::LckInternalErrorState*)>(&::Liv::Lck::Streaming::LckStreamingController::set_InternalErrorState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_InternalErrorState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckInternalErrorState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_MissingTrackingIdState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Streaming::LckMissingTrackingIdState* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_MissingTrackingIdState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_MissingTrackingIdState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_MissingTrackingIdState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Streaming::LckMissingTrackingIdState*)>(&::Liv::Lck::Streaming::LckStreamingController::set_MissingTrackingIdState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_MissingTrackingIdState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckMissingTrackingIdState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_InvalidArgumentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Streaming::LckInvalidArgumentState* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_InvalidArgumentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_InvalidArgumentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_InvalidArgumentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Streaming::LckInvalidArgumentState*)>(&::Liv::Lck::Streaming::LckStreamingController::set_InvalidArgumentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_InvalidArgumentState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckInvalidArgumentState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_RateLimiterBackoffState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Streaming::LckRateLimiterBackoffState* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_RateLimiterBackoffState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_RateLimiterBackoffState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_RateLimiterBackoffState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Streaming::LckRateLimiterBackoffState*)>(&::Liv::Lck::Streaming::LckStreamingController::set_RateLimiterBackoffState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_RateLimiterBackoffState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckRateLimiterBackoffState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_ServiceUnavailableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Streaming::LckServiceUnavailableState* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_ServiceUnavailableState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_ServiceUnavailableState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_ServiceUnavailableState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Streaming::LckServiceUnavailableState*)>(&::Liv::Lck::Streaming::LckStreamingController::set_ServiceUnavailableState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_ServiceUnavailableState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckServiceUnavailableState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.get_CancellationTokenSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::CancellationTokenSource* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::get_CancellationTokenSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_CancellationTokenSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.set_CancellationTokenSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::System::Threading::CancellationTokenSource*)>(&::Liv::Lck::Streaming::LckStreamingController::set_CancellationTokenSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_CancellationTokenSource", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::Start)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x9d3c378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.OnApplicationLifecycle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType)>(&::Liv::Lck::Streaming::LckStreamingController::OnApplicationLifecycle)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9d3c4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnApplicationLifecycle", {}, {::i2c::type_of<::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.OnSystemPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::OnSystemPaused)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9d3c520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnSystemPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.OnSystemResumed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::OnSystemResumed)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x9d3c6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnSystemResumed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.OnHMDIdle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::OnHMDIdle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9d3c7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnHMDIdle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.OnHMDActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::OnHMDActive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9d3c83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnHMDActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.CheckCurrentState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::CheckCurrentState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3c928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"CheckCurrentState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.StopCheckingStates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::StopCheckingStates)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d3c8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"StopCheckingStates", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.SwitchState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Streaming::LckStreamingBaseState*)>(&::Liv::Lck::Streaming::LckStreamingController::SwitchState)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x9d376f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"SwitchState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingBaseState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.StartStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::StartStreaming)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d3c930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"StartStreaming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.StartStreamIfNoLivHubChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::StartStreamIfNoLivHubChanges)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d3c954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"StartStreamIfNoLivHubChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.StopStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::StopStreaming)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x9d3ca2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"StopStreaming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.OnStreamingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Streaming::LckStreamingController::OnStreamingStarted)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d3cbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnStreamingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.GoToErrorState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::GoToErrorState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3cc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"GoToErrorState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::StringW)>(&::Liv::Lck::Streaming::LckStreamingController::LogError)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d37b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::StringW)>(&::Liv::Lck::Streaming::LckStreamingController::Log)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9d37658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.ShowNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::Liv::Lck::Tablet::NotificationType)>(&::Liv::Lck::Streaming::LckStreamingController::ShowNotification)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d36c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"ShowNotification", {}, {::i2c::type_of<::Liv::Lck::Tablet::NotificationType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.HideNotifications
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::HideNotifications)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d39758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"HideNotifications", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.SetNotificationStreamCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)(::StringW)>(&::Liv::Lck::Streaming::LckStreamingController::SetNotificationStreamCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d3a190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"SetNotificationStreamCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.ToggleCameraPage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::ToggleCameraPage)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d3a418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"ToggleCameraPage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::OnValidate)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9d3cc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::OnDestroy)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x9d3ccf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamingController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamingController::*)()>(&::Liv::Lck::Streaming::LckStreamingController::_ctor)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x9d3cf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__showDebugLogs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showDebugLogs;
}
constexpr bool const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__showDebugLogs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____showDebugLogs;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__showDebugLogs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____showDebugLogs = value;
}
constexpr ::Liv::Lck::ILckService*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__lckService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr ::Liv::Lck::ILckService* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__lckService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lckService;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__lckService(::Liv::Lck::ILckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lckService = value;
}
constexpr ::Liv::Lck::Core::ILckCore*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__LckCore_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LckCore_k__BackingField;
}
constexpr ::Liv::Lck::Core::ILckCore* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__LckCore_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LckCore_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__LckCore_k__BackingField(::Liv::Lck::Core::ILckCore*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LckCore_k__BackingField = value;
}
constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__LckCosmeticsCoordinator_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LckCosmeticsCoordinator_k__BackingField;
}
constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__LckCosmeticsCoordinator_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LckCosmeticsCoordinator_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__LckCosmeticsCoordinator_k__BackingField(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LckCosmeticsCoordinator_k__BackingField = value;
}
constexpr bool& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__IsConfiguredCorrectly_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsConfiguredCorrectly_k__BackingField;
}
constexpr bool const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__IsConfiguredCorrectly_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsConfiguredCorrectly_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__IsConfiguredCorrectly_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsConfiguredCorrectly_k__BackingField = value;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController>& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__notificationController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notificationController;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController> const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__notificationController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____notificationController;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__notificationController(::UnityW<::Liv::Lck::Tablet::LckNotificationController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____notificationController = value;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__topButtonsController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButtonsController;
}
constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController> const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__topButtonsController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButtonsController;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__topButtonsController(::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____topButtonsController = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__onStreamButtonError()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStreamButtonError;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__onStreamButtonError() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStreamButtonError;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__onStreamButtonError(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onStreamButtonError = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__onStreamButtonPressWithCorrectConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStreamButtonPressWithCorrectConfig;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__onStreamButtonPressWithCorrectConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onStreamButtonPressWithCorrectConfig;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__onStreamButtonPressWithCorrectConfig(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onStreamButtonPressWithCorrectConfig = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__topButtonsControllerGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButtonsControllerGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__topButtonsControllerGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topButtonsControllerGameObject;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__topButtonsControllerGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____topButtonsControllerGameObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__livHubButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____livHubButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__livHubButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____livHubButton;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__livHubButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____livHubButton = value;
}
constexpr ::Liv::Lck::Streaming::LckStreamingBaseState*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__CurrentState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentState_k__BackingField;
}
constexpr ::Liv::Lck::Streaming::LckStreamingBaseState* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__CurrentState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentState_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__CurrentState_k__BackingField(::Liv::Lck::Streaming::LckStreamingBaseState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentState_k__BackingField = value;
}
constexpr ::Liv::Lck::Streaming::LckStreamingGetCurrentState*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__GetCurrentState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GetCurrentState_k__BackingField;
}
constexpr ::Liv::Lck::Streaming::LckStreamingGetCurrentState* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__GetCurrentState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____GetCurrentState_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__GetCurrentState_k__BackingField(::Liv::Lck::Streaming::LckStreamingGetCurrentState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____GetCurrentState_k__BackingField = value;
}
constexpr ::Liv::Lck::Streaming::LckStreamingShowCodeState*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__ShowCodeState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowCodeState_k__BackingField;
}
constexpr ::Liv::Lck::Streaming::LckStreamingShowCodeState* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__ShowCodeState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ShowCodeState_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__ShowCodeState_k__BackingField(::Liv::Lck::Streaming::LckStreamingShowCodeState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ShowCodeState_k__BackingField = value;
}
constexpr ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__WaitingForConfigureState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaitingForConfigureState_k__BackingField;
}
constexpr ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__WaitingForConfigureState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____WaitingForConfigureState_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__WaitingForConfigureState_k__BackingField(::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____WaitingForConfigureState_k__BackingField = value;
}
constexpr ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__ConfiguredCorrectlyState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConfiguredCorrectlyState_k__BackingField;
}
constexpr ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__ConfiguredCorrectlyState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ConfiguredCorrectlyState_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__ConfiguredCorrectlyState_k__BackingField(::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ConfiguredCorrectlyState_k__BackingField = value;
}
constexpr ::Liv::Lck::Streaming::LckInternalErrorState*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__InternalErrorState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InternalErrorState_k__BackingField;
}
constexpr ::Liv::Lck::Streaming::LckInternalErrorState* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__InternalErrorState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InternalErrorState_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__InternalErrorState_k__BackingField(::Liv::Lck::Streaming::LckInternalErrorState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InternalErrorState_k__BackingField = value;
}
constexpr ::Liv::Lck::Streaming::LckMissingTrackingIdState*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__MissingTrackingIdState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MissingTrackingIdState_k__BackingField;
}
constexpr ::Liv::Lck::Streaming::LckMissingTrackingIdState* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__MissingTrackingIdState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MissingTrackingIdState_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__MissingTrackingIdState_k__BackingField(::Liv::Lck::Streaming::LckMissingTrackingIdState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MissingTrackingIdState_k__BackingField = value;
}
constexpr ::Liv::Lck::Streaming::LckInvalidArgumentState*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__InvalidArgumentState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InvalidArgumentState_k__BackingField;
}
constexpr ::Liv::Lck::Streaming::LckInvalidArgumentState* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__InvalidArgumentState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InvalidArgumentState_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__InvalidArgumentState_k__BackingField(::Liv::Lck::Streaming::LckInvalidArgumentState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InvalidArgumentState_k__BackingField = value;
}
constexpr ::Liv::Lck::Streaming::LckRateLimiterBackoffState*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__RateLimiterBackoffState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RateLimiterBackoffState_k__BackingField;
}
constexpr ::Liv::Lck::Streaming::LckRateLimiterBackoffState* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__RateLimiterBackoffState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RateLimiterBackoffState_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__RateLimiterBackoffState_k__BackingField(::Liv::Lck::Streaming::LckRateLimiterBackoffState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RateLimiterBackoffState_k__BackingField = value;
}
constexpr ::Liv::Lck::Streaming::LckServiceUnavailableState*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__ServiceUnavailableState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServiceUnavailableState_k__BackingField;
}
constexpr ::Liv::Lck::Streaming::LckServiceUnavailableState* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__ServiceUnavailableState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ServiceUnavailableState_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__ServiceUnavailableState_k__BackingField(::Liv::Lck::Streaming::LckServiceUnavailableState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ServiceUnavailableState_k__BackingField = value;
}
constexpr ::System::Threading::CancellationTokenSource*& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__CancellationTokenSource_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CancellationTokenSource_k__BackingField;
}
constexpr ::System::Threading::CancellationTokenSource* const& Liv::Lck::Streaming::LckStreamingController::__cordl_internal_get__CancellationTokenSource_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CancellationTokenSource_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamingController::__cordl_internal_set__CancellationTokenSource_k__BackingField(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CancellationTokenSource_k__BackingField = value;
}
inline ::Liv::Lck::Core::ILckCore* Liv::Lck::Streaming::LckStreamingController::get_LckCore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_LckCore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::ILckCore*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_LckCore(::Liv::Lck::Core::ILckCore*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_LckCore", {}, {::i2c::type_of<::Liv::Lck::Core::ILckCore*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator* Liv::Lck::Streaming::LckStreamingController::get_LckCosmeticsCoordinator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_LckCosmeticsCoordinator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_LckCosmeticsCoordinator(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_LckCosmeticsCoordinator", {}, {::i2c::type_of<::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Liv::Lck::Streaming::LckStreamingController::get_IsConfiguredCorrectly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_IsConfiguredCorrectly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_IsConfiguredCorrectly(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_IsConfiguredCorrectly", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::Streaming::LckStreamingBaseState* Liv::Lck::Streaming::LckStreamingController::get_CurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_CurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Streaming::LckStreamingBaseState*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_CurrentState(::Liv::Lck::Streaming::LckStreamingBaseState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_CurrentState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingBaseState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::Streaming::LckStreamingGetCurrentState* Liv::Lck::Streaming::LckStreamingController::get_GetCurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_GetCurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Streaming::LckStreamingGetCurrentState*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_GetCurrentState(::Liv::Lck::Streaming::LckStreamingGetCurrentState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_GetCurrentState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingGetCurrentState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::Streaming::LckStreamingShowCodeState* Liv::Lck::Streaming::LckStreamingController::get_ShowCodeState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_ShowCodeState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Streaming::LckStreamingShowCodeState*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_ShowCodeState(::Liv::Lck::Streaming::LckStreamingShowCodeState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_ShowCodeState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingShowCodeState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState* Liv::Lck::Streaming::LckStreamingController::get_WaitingForConfigureState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_WaitingForConfigureState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_WaitingForConfigureState(::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_WaitingForConfigureState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState* Liv::Lck::Streaming::LckStreamingController::get_ConfiguredCorrectlyState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_ConfiguredCorrectlyState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_ConfiguredCorrectlyState(::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_ConfiguredCorrectlyState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::Streaming::LckInternalErrorState* Liv::Lck::Streaming::LckStreamingController::get_InternalErrorState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_InternalErrorState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Streaming::LckInternalErrorState*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_InternalErrorState(::Liv::Lck::Streaming::LckInternalErrorState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_InternalErrorState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckInternalErrorState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::Streaming::LckMissingTrackingIdState* Liv::Lck::Streaming::LckStreamingController::get_MissingTrackingIdState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_MissingTrackingIdState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Streaming::LckMissingTrackingIdState*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_MissingTrackingIdState(::Liv::Lck::Streaming::LckMissingTrackingIdState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_MissingTrackingIdState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckMissingTrackingIdState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::Streaming::LckInvalidArgumentState* Liv::Lck::Streaming::LckStreamingController::get_InvalidArgumentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_InvalidArgumentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Streaming::LckInvalidArgumentState*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_InvalidArgumentState(::Liv::Lck::Streaming::LckInvalidArgumentState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_InvalidArgumentState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckInvalidArgumentState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::Streaming::LckRateLimiterBackoffState* Liv::Lck::Streaming::LckStreamingController::get_RateLimiterBackoffState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_RateLimiterBackoffState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Streaming::LckRateLimiterBackoffState*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_RateLimiterBackoffState(::Liv::Lck::Streaming::LckRateLimiterBackoffState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_RateLimiterBackoffState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckRateLimiterBackoffState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::Streaming::LckServiceUnavailableState* Liv::Lck::Streaming::LckStreamingController::get_ServiceUnavailableState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_ServiceUnavailableState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Streaming::LckServiceUnavailableState*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_ServiceUnavailableState(::Liv::Lck::Streaming::LckServiceUnavailableState*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_ServiceUnavailableState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckServiceUnavailableState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::CancellationTokenSource* Liv::Lck::Streaming::LckStreamingController::get_CancellationTokenSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"get_CancellationTokenSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::CancellationTokenSource*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::set_CancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"set_CancellationTokenSource", {}, {::i2c::type_of<::System::Threading::CancellationTokenSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Streaming::LckStreamingController::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::OnApplicationLifecycle(::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType  eventType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnApplicationLifecycle", {}, {::i2c::type_of<::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType);
}
inline void Liv::Lck::Streaming::LckStreamingController::OnSystemPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnSystemPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::OnSystemResumed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnSystemResumed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::OnHMDIdle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnHMDIdle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::OnHMDActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnHMDActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::CheckCurrentState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"CheckCurrentState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::StopCheckingStates()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"StopCheckingStates", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::SwitchState(::Liv::Lck::Streaming::LckStreamingBaseState*  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"SwitchState", {}, {::i2c::type_of<::Liv::Lck::Streaming::LckStreamingBaseState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Liv::Lck::Streaming::LckStreamingController::StartStreaming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"StartStreaming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Streaming::LckStreamingController::StartStreamIfNoLivHubChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"StartStreamIfNoLivHubChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::StopStreaming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"StopStreaming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::OnStreamingStarted(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnStreamingStarted", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Streaming::LckStreamingController::GoToErrorState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"GoToErrorState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::LogError(::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void Liv::Lck::Streaming::LckStreamingController::Log(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Liv::Lck::Streaming::LckStreamingController::ShowNotification(::Liv::Lck::Tablet::NotificationType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"ShowNotification", {}, {::i2c::type_of<::Liv::Lck::Tablet::NotificationType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void Liv::Lck::Streaming::LckStreamingController::HideNotifications()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"HideNotifications", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::SetNotificationStreamCode(::StringW  code)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"SetNotificationStreamCode", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline void Liv::Lck::Streaming::LckStreamingController::ToggleCameraPage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"ToggleCameraPage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamingController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamingController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Streaming::LckStreamingController* Liv::Lck::Streaming::LckStreamingController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Streaming::LckStreamingController*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Streaming::LckStreamingController::LckStreamingController()   {
}
