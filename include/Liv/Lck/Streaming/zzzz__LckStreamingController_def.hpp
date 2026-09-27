#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamingController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LckStreamingController)
namespace GlobalNamespace {
struct LckMonoBehaviourMediator_ApplicationLifecycleEventType;
}
namespace GlobalNamespace {
struct LckStreamingController__StartStreamIfNoLivHubChanges_d__74;
}
namespace Liv::Lck::Core::Cosmetics {
class ILckCosmeticsCoordinator;
}
namespace Liv::Lck::Core {
class ILckCore;
}
namespace Liv::Lck::Streaming {
class LckInternalErrorState;
}
namespace Liv::Lck::Streaming {
class LckInvalidArgumentState;
}
namespace Liv::Lck::Streaming {
class LckMissingTrackingIdState;
}
namespace Liv::Lck::Streaming {
class LckRateLimiterBackoffState;
}
namespace Liv::Lck::Streaming {
class LckServiceUnavailableState;
}
namespace Liv::Lck::Streaming {
class LckStreamingBaseState;
}
namespace Liv::Lck::Streaming {
class LckStreamingConfiguredCorrectlyState;
}
namespace Liv::Lck::Streaming {
class LckStreamingGetCurrentState;
}
namespace Liv::Lck::Streaming {
class LckStreamingShowCodeState;
}
namespace Liv::Lck::Streaming {
class LckStreamingWaitingForConfigureState;
}
namespace Liv::Lck::Tablet {
class LckNotificationController;
}
namespace Liv::Lck::Tablet {
class LckTopButtonsController;
}
namespace Liv::Lck::Tablet {
struct NotificationType;
}
namespace Liv::Lck {
class ILckService;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Liv::Lck::Streaming {
class LckStreamingController;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::LckStreamingController*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckStreamingController*, "Liv.Lck.Streaming", "LckStreamingController");
// Dependencies UnityEngine.MonoBehaviour
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckStreamingController
class CORDL_TYPE LckStreamingController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _StartStreamIfNoLivHubChanges_d__74 = ::GlobalNamespace::LckStreamingController__StartStreamIfNoLivHubChanges_d__74;

 __declspec(property(get=get_CancellationTokenSource, put=set_CancellationTokenSource)) ::System::Threading::CancellationTokenSource*  CancellationTokenSource;

 __declspec(property(get=get_ConfiguredCorrectlyState, put=set_ConfiguredCorrectlyState)) ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*  ConfiguredCorrectlyState;

 __declspec(property(get=get_CurrentState, put=set_CurrentState)) ::Liv::Lck::Streaming::LckStreamingBaseState*  CurrentState;

 __declspec(property(get=get_GetCurrentState, put=set_GetCurrentState)) ::Liv::Lck::Streaming::LckStreamingGetCurrentState*  GetCurrentState;

 __declspec(property(get=get_InternalErrorState, put=set_InternalErrorState)) ::Liv::Lck::Streaming::LckInternalErrorState*  InternalErrorState;

 __declspec(property(get=get_InvalidArgumentState, put=set_InvalidArgumentState)) ::Liv::Lck::Streaming::LckInvalidArgumentState*  InvalidArgumentState;

 __declspec(property(get=get_IsConfiguredCorrectly, put=set_IsConfiguredCorrectly)) bool  IsConfiguredCorrectly;

/// @brief [InjectLck]
 __declspec(property(get=get_LckCore, put=set_LckCore)) ::Liv::Lck::Core::ILckCore*  LckCore;

/// @brief [InjectLck]
 __declspec(property(get=get_LckCosmeticsCoordinator, put=set_LckCosmeticsCoordinator)) ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  LckCosmeticsCoordinator;

 __declspec(property(get=get_MissingTrackingIdState, put=set_MissingTrackingIdState)) ::Liv::Lck::Streaming::LckMissingTrackingIdState*  MissingTrackingIdState;

 __declspec(property(get=get_RateLimiterBackoffState, put=set_RateLimiterBackoffState)) ::Liv::Lck::Streaming::LckRateLimiterBackoffState*  RateLimiterBackoffState;

 __declspec(property(get=get_ServiceUnavailableState, put=set_ServiceUnavailableState)) ::Liv::Lck::Streaming::LckServiceUnavailableState*  ServiceUnavailableState;

 __declspec(property(get=get_ShowCodeState, put=set_ShowCodeState)) ::Liv::Lck::Streaming::LckStreamingShowCodeState*  ShowCodeState;

 __declspec(property(get=get_WaitingForConfigureState, put=set_WaitingForConfigureState)) ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*  WaitingForConfigureState;

/// @brief Field <CancellationTokenSource>k__BackingField, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__CancellationTokenSource_k__BackingField, put=__cordl_internal_set__CancellationTokenSource_k__BackingField)) ::System::Threading::CancellationTokenSource*  _CancellationTokenSource_k__BackingField;

/// @brief Field <ConfiguredCorrectlyState>k__BackingField, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__ConfiguredCorrectlyState_k__BackingField, put=__cordl_internal_set__ConfiguredCorrectlyState_k__BackingField)) ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*  _ConfiguredCorrectlyState_k__BackingField;

/// @brief Field <CurrentState>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__CurrentState_k__BackingField, put=__cordl_internal_set__CurrentState_k__BackingField)) ::Liv::Lck::Streaming::LckStreamingBaseState*  _CurrentState_k__BackingField;

/// @brief Field <GetCurrentState>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__GetCurrentState_k__BackingField, put=__cordl_internal_set__GetCurrentState_k__BackingField)) ::Liv::Lck::Streaming::LckStreamingGetCurrentState*  _GetCurrentState_k__BackingField;

/// @brief Field <InternalErrorState>k__BackingField, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__InternalErrorState_k__BackingField, put=__cordl_internal_set__InternalErrorState_k__BackingField)) ::Liv::Lck::Streaming::LckInternalErrorState*  _InternalErrorState_k__BackingField;

/// @brief Field <InvalidArgumentState>k__BackingField, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__InvalidArgumentState_k__BackingField, put=__cordl_internal_set__InvalidArgumentState_k__BackingField)) ::Liv::Lck::Streaming::LckInvalidArgumentState*  _InvalidArgumentState_k__BackingField;

/// @brief Field <IsConfiguredCorrectly>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsConfiguredCorrectly_k__BackingField, put=__cordl_internal_set__IsConfiguredCorrectly_k__BackingField)) bool  _IsConfiguredCorrectly_k__BackingField;

/// @brief Field <LckCore>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__LckCore_k__BackingField, put=__cordl_internal_set__LckCore_k__BackingField)) ::Liv::Lck::Core::ILckCore*  _LckCore_k__BackingField;

/// @brief Field <LckCosmeticsCoordinator>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__LckCosmeticsCoordinator_k__BackingField, put=__cordl_internal_set__LckCosmeticsCoordinator_k__BackingField)) ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  _LckCosmeticsCoordinator_k__BackingField;

/// @brief Field <MissingTrackingIdState>k__BackingField, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__MissingTrackingIdState_k__BackingField, put=__cordl_internal_set__MissingTrackingIdState_k__BackingField)) ::Liv::Lck::Streaming::LckMissingTrackingIdState*  _MissingTrackingIdState_k__BackingField;

/// @brief Field <RateLimiterBackoffState>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__RateLimiterBackoffState_k__BackingField, put=__cordl_internal_set__RateLimiterBackoffState_k__BackingField)) ::Liv::Lck::Streaming::LckRateLimiterBackoffState*  _RateLimiterBackoffState_k__BackingField;

/// @brief Field <ServiceUnavailableState>k__BackingField, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ServiceUnavailableState_k__BackingField, put=__cordl_internal_set__ServiceUnavailableState_k__BackingField)) ::Liv::Lck::Streaming::LckServiceUnavailableState*  _ServiceUnavailableState_k__BackingField;

/// @brief Field <ShowCodeState>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShowCodeState_k__BackingField, put=__cordl_internal_set__ShowCodeState_k__BackingField)) ::Liv::Lck::Streaming::LckStreamingShowCodeState*  _ShowCodeState_k__BackingField;

/// @brief Field <WaitingForConfigureState>k__BackingField, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaitingForConfigureState_k__BackingField, put=__cordl_internal_set__WaitingForConfigureState_k__BackingField)) ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*  _WaitingForConfigureState_k__BackingField;

/// @brief Field _lckService, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _livHubButton, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__livHubButton, put=__cordl_internal_set__livHubButton)) ::UnityW<::UnityEngine::GameObject>  _livHubButton;

/// @brief Field _notificationController, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__notificationController, put=__cordl_internal_set__notificationController)) ::UnityW<::Liv::Lck::Tablet::LckNotificationController>  _notificationController;

/// @brief Field _onStreamButtonError, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStreamButtonError, put=__cordl_internal_set__onStreamButtonError)) ::UnityEngine::Events::UnityEvent*  _onStreamButtonError;

/// @brief Field _onStreamButtonPressWithCorrectConfig, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__onStreamButtonPressWithCorrectConfig, put=__cordl_internal_set__onStreamButtonPressWithCorrectConfig)) ::UnityEngine::Events::UnityEvent*  _onStreamButtonPressWithCorrectConfig;

/// @brief Field _showDebugLogs, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__showDebugLogs, put=__cordl_internal_set__showDebugLogs)) bool  _showDebugLogs;

/// @brief Field _topButtonsController, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__topButtonsController, put=__cordl_internal_set__topButtonsController)) ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  _topButtonsController;

/// @brief Field _topButtonsControllerGameObject, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__topButtonsControllerGameObject, put=__cordl_internal_set__topButtonsControllerGameObject)) ::UnityW<::UnityEngine::GameObject>  _topButtonsControllerGameObject;

/// @brief Method CheckCurrentState, addr 0x9d3c928, size 0x8, virtual false, abstract: false, final false
inline void CheckCurrentState() ;

/// @brief Method GoToErrorState, addr 0x9d3cc0c, size 0x8, virtual false, abstract: false, final false
inline void GoToErrorState() ;

/// @brief Method HideNotifications, addr 0x9d39758, size 0x18, virtual false, abstract: false, final false
inline void HideNotifications() ;

/// @brief Method Log, addr 0x9d37658, size 0x9c, virtual false, abstract: false, final false
inline void Log(::StringW  message) ;

/// @brief Method LogError, addr 0x9d37b04, size 0x9c, virtual false, abstract: false, final false
inline void LogError(::StringW  error) ;

static inline ::Liv::Lck::Streaming::LckStreamingController* New_ctor() ;

/// @brief Method OnApplicationLifecycle, addr 0x9d3c4e4, size 0x3c, virtual false, abstract: false, final false
inline void OnApplicationLifecycle(::GlobalNamespace::LckMonoBehaviourMediator_ApplicationLifecycleEventType  eventType) ;

/// @brief Method OnDestroy, addr 0x9d3ccf8, size 0x278, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnHMDActive, addr 0x9d3c83c, size 0x68, virtual false, abstract: false, final false
inline void OnHMDActive() ;

/// @brief Method OnHMDIdle, addr 0x9d3c7ec, size 0x50, virtual false, abstract: false, final false
inline void OnHMDIdle() ;

/// @brief Method OnStreamingStarted, addr 0x9d3cbd8, size 0x34, virtual false, abstract: false, final false
inline void OnStreamingStarted(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnSystemPaused, addr 0x9d3c520, size 0x188, virtual false, abstract: false, final false
inline void OnSystemPaused() ;

/// @brief Method OnSystemResumed, addr 0x9d3c6a8, size 0x144, virtual false, abstract: false, final false
inline void OnSystemResumed() ;

/// @brief Method OnValidate, addr 0x9d3cc14, size 0xe4, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetNotificationStreamCode, addr 0x9d3a190, size 0x18, virtual false, abstract: false, final false
inline void SetNotificationStreamCode(::StringW  code) ;

/// @brief Method ShowNotification, addr 0x9d36c4c, size 0x18, virtual false, abstract: false, final false
inline void ShowNotification(::Liv::Lck::Tablet::NotificationType  type) ;

/// @brief Method Start, addr 0x9d3c378, size 0x16c, virtual false, abstract: false, final false
inline void Start() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckStreamingController::<StartStreamIfNoLivHubChanges>d__74))]
/// @brief Method StartStreamIfNoLivHubChanges, addr 0x9d3c954, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartStreamIfNoLivHubChanges() ;

/// @brief Method StartStreaming, addr 0x9d3c930, size 0x24, virtual false, abstract: false, final false
inline void StartStreaming() ;

/// @brief Method StopCheckingStates, addr 0x9d3c8a4, size 0x84, virtual false, abstract: false, final false
inline void StopCheckingStates() ;

/// @brief Method StopStreaming, addr 0x9d3ca2c, size 0x1ac, virtual false, abstract: false, final false
inline void StopStreaming() ;

/// @brief Method SwitchState, addr 0x9d376f4, size 0x410, virtual false, abstract: false, final false
inline void SwitchState(::Liv::Lck::Streaming::LckStreamingBaseState*  state) ;

/// @brief Method ToggleCameraPage, addr 0x9d3a418, size 0x34, virtual false, abstract: false, final false
inline void ToggleCameraPage() ;

constexpr ::System::Threading::CancellationTokenSource* const& __cordl_internal_get__CancellationTokenSource_k__BackingField() const;

constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__CancellationTokenSource_k__BackingField() ;

constexpr ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState* const& __cordl_internal_get__ConfiguredCorrectlyState_k__BackingField() const;

constexpr ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*& __cordl_internal_get__ConfiguredCorrectlyState_k__BackingField() ;

constexpr ::Liv::Lck::Streaming::LckStreamingBaseState* const& __cordl_internal_get__CurrentState_k__BackingField() const;

constexpr ::Liv::Lck::Streaming::LckStreamingBaseState*& __cordl_internal_get__CurrentState_k__BackingField() ;

constexpr ::Liv::Lck::Streaming::LckStreamingGetCurrentState* const& __cordl_internal_get__GetCurrentState_k__BackingField() const;

constexpr ::Liv::Lck::Streaming::LckStreamingGetCurrentState*& __cordl_internal_get__GetCurrentState_k__BackingField() ;

constexpr ::Liv::Lck::Streaming::LckInternalErrorState* const& __cordl_internal_get__InternalErrorState_k__BackingField() const;

constexpr ::Liv::Lck::Streaming::LckInternalErrorState*& __cordl_internal_get__InternalErrorState_k__BackingField() ;

constexpr ::Liv::Lck::Streaming::LckInvalidArgumentState* const& __cordl_internal_get__InvalidArgumentState_k__BackingField() const;

constexpr ::Liv::Lck::Streaming::LckInvalidArgumentState*& __cordl_internal_get__InvalidArgumentState_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsConfiguredCorrectly_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsConfiguredCorrectly_k__BackingField() ;

constexpr ::Liv::Lck::Core::ILckCore* const& __cordl_internal_get__LckCore_k__BackingField() const;

constexpr ::Liv::Lck::Core::ILckCore*& __cordl_internal_get__LckCore_k__BackingField() ;

constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator* const& __cordl_internal_get__LckCosmeticsCoordinator_k__BackingField() const;

constexpr ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*& __cordl_internal_get__LckCosmeticsCoordinator_k__BackingField() ;

constexpr ::Liv::Lck::Streaming::LckMissingTrackingIdState* const& __cordl_internal_get__MissingTrackingIdState_k__BackingField() const;

constexpr ::Liv::Lck::Streaming::LckMissingTrackingIdState*& __cordl_internal_get__MissingTrackingIdState_k__BackingField() ;

constexpr ::Liv::Lck::Streaming::LckRateLimiterBackoffState* const& __cordl_internal_get__RateLimiterBackoffState_k__BackingField() const;

constexpr ::Liv::Lck::Streaming::LckRateLimiterBackoffState*& __cordl_internal_get__RateLimiterBackoffState_k__BackingField() ;

constexpr ::Liv::Lck::Streaming::LckServiceUnavailableState* const& __cordl_internal_get__ServiceUnavailableState_k__BackingField() const;

constexpr ::Liv::Lck::Streaming::LckServiceUnavailableState*& __cordl_internal_get__ServiceUnavailableState_k__BackingField() ;

constexpr ::Liv::Lck::Streaming::LckStreamingShowCodeState* const& __cordl_internal_get__ShowCodeState_k__BackingField() const;

constexpr ::Liv::Lck::Streaming::LckStreamingShowCodeState*& __cordl_internal_get__ShowCodeState_k__BackingField() ;

constexpr ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState* const& __cordl_internal_get__WaitingForConfigureState_k__BackingField() const;

constexpr ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*& __cordl_internal_get__WaitingForConfigureState_k__BackingField() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__livHubButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__livHubButton() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController> const& __cordl_internal_get__notificationController() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController>& __cordl_internal_get__notificationController() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onStreamButtonError() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onStreamButtonError() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__onStreamButtonPressWithCorrectConfig() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__onStreamButtonPressWithCorrectConfig() ;

constexpr bool const& __cordl_internal_get__showDebugLogs() const;

constexpr bool& __cordl_internal_get__showDebugLogs() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController> const& __cordl_internal_get__topButtonsController() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>& __cordl_internal_get__topButtonsController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__topButtonsControllerGameObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__topButtonsControllerGameObject() ;

constexpr void __cordl_internal_set__CancellationTokenSource_k__BackingField(::System::Threading::CancellationTokenSource*  value) ;

constexpr void __cordl_internal_set__ConfiguredCorrectlyState_k__BackingField(::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*  value) ;

constexpr void __cordl_internal_set__CurrentState_k__BackingField(::Liv::Lck::Streaming::LckStreamingBaseState*  value) ;

constexpr void __cordl_internal_set__GetCurrentState_k__BackingField(::Liv::Lck::Streaming::LckStreamingGetCurrentState*  value) ;

constexpr void __cordl_internal_set__InternalErrorState_k__BackingField(::Liv::Lck::Streaming::LckInternalErrorState*  value) ;

constexpr void __cordl_internal_set__InvalidArgumentState_k__BackingField(::Liv::Lck::Streaming::LckInvalidArgumentState*  value) ;

constexpr void __cordl_internal_set__IsConfiguredCorrectly_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LckCore_k__BackingField(::Liv::Lck::Core::ILckCore*  value) ;

constexpr void __cordl_internal_set__LckCosmeticsCoordinator_k__BackingField(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  value) ;

constexpr void __cordl_internal_set__MissingTrackingIdState_k__BackingField(::Liv::Lck::Streaming::LckMissingTrackingIdState*  value) ;

constexpr void __cordl_internal_set__RateLimiterBackoffState_k__BackingField(::Liv::Lck::Streaming::LckRateLimiterBackoffState*  value) ;

constexpr void __cordl_internal_set__ServiceUnavailableState_k__BackingField(::Liv::Lck::Streaming::LckServiceUnavailableState*  value) ;

constexpr void __cordl_internal_set__ShowCodeState_k__BackingField(::Liv::Lck::Streaming::LckStreamingShowCodeState*  value) ;

constexpr void __cordl_internal_set__WaitingForConfigureState_k__BackingField(::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__livHubButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__notificationController(::UnityW<::Liv::Lck::Tablet::LckNotificationController>  value) ;

constexpr void __cordl_internal_set__onStreamButtonError(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__onStreamButtonPressWithCorrectConfig(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__showDebugLogs(bool  value) ;

constexpr void __cordl_internal_set__topButtonsController(::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  value) ;

constexpr void __cordl_internal_set__topButtonsControllerGameObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9d3cf70, size 0x284, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CancellationTokenSource, addr 0x9d3c368, size 0x8, virtual false, abstract: false, final false
inline ::System::Threading::CancellationTokenSource* get_CancellationTokenSource() ;

/// [CompilerGenerated]
/// @brief Method get_ConfiguredCorrectlyState, addr 0x9d3c308, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState* get_ConfiguredCorrectlyState() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentState, addr 0x9d3c2c8, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::Streaming::LckStreamingBaseState* get_CurrentState() ;

/// [CompilerGenerated]
/// @brief Method get_GetCurrentState, addr 0x9d3c2d8, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::Streaming::LckStreamingGetCurrentState* get_GetCurrentState() ;

/// [CompilerGenerated]
/// @brief Method get_InternalErrorState, addr 0x9d3c318, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::Streaming::LckInternalErrorState* get_InternalErrorState() ;

/// [CompilerGenerated]
/// @brief Method get_InvalidArgumentState, addr 0x9d3c338, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::Streaming::LckInvalidArgumentState* get_InvalidArgumentState() ;

/// [CompilerGenerated]
/// @brief Method get_IsConfiguredCorrectly, addr 0x9d3c2b8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsConfiguredCorrectly() ;

/// [CompilerGenerated]
/// @brief Method get_LckCore, addr 0x9d3c298, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::Core::ILckCore* get_LckCore() ;

/// [CompilerGenerated]
/// @brief Method get_LckCosmeticsCoordinator, addr 0x9d3c2a8, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator* get_LckCosmeticsCoordinator() ;

/// [CompilerGenerated]
/// @brief Method get_MissingTrackingIdState, addr 0x9d3c328, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::Streaming::LckMissingTrackingIdState* get_MissingTrackingIdState() ;

/// [CompilerGenerated]
/// @brief Method get_RateLimiterBackoffState, addr 0x9d3c348, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::Streaming::LckRateLimiterBackoffState* get_RateLimiterBackoffState() ;

/// [CompilerGenerated]
/// @brief Method get_ServiceUnavailableState, addr 0x9d3c358, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::Streaming::LckServiceUnavailableState* get_ServiceUnavailableState() ;

/// [CompilerGenerated]
/// @brief Method get_ShowCodeState, addr 0x9d3c2e8, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::Streaming::LckStreamingShowCodeState* get_ShowCodeState() ;

/// [CompilerGenerated]
/// @brief Method get_WaitingForConfigureState, addr 0x9d3c2f8, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState* get_WaitingForConfigureState() ;

/// [CompilerGenerated]
/// @brief Method set_CancellationTokenSource, addr 0x9d3c370, size 0x8, virtual false, abstract: false, final false
inline void set_CancellationTokenSource(::System::Threading::CancellationTokenSource*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ConfiguredCorrectlyState, addr 0x9d3c310, size 0x8, virtual false, abstract: false, final false
inline void set_ConfiguredCorrectlyState(::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentState, addr 0x9d3c2d0, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentState(::Liv::Lck::Streaming::LckStreamingBaseState*  value) ;

/// [CompilerGenerated]
/// @brief Method set_GetCurrentState, addr 0x9d3c2e0, size 0x8, virtual false, abstract: false, final false
inline void set_GetCurrentState(::Liv::Lck::Streaming::LckStreamingGetCurrentState*  value) ;

/// [CompilerGenerated]
/// @brief Method set_InternalErrorState, addr 0x9d3c320, size 0x8, virtual false, abstract: false, final false
inline void set_InternalErrorState(::Liv::Lck::Streaming::LckInternalErrorState*  value) ;

/// [CompilerGenerated]
/// @brief Method set_InvalidArgumentState, addr 0x9d3c340, size 0x8, virtual false, abstract: false, final false
inline void set_InvalidArgumentState(::Liv::Lck::Streaming::LckInvalidArgumentState*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsConfiguredCorrectly, addr 0x9d3c2c0, size 0x8, virtual false, abstract: false, final false
inline void set_IsConfiguredCorrectly(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LckCore, addr 0x9d3c2a0, size 0x8, virtual false, abstract: false, final false
inline void set_LckCore(::Liv::Lck::Core::ILckCore*  value) ;

/// [CompilerGenerated]
/// @brief Method set_LckCosmeticsCoordinator, addr 0x9d3c2b0, size 0x8, virtual false, abstract: false, final false
inline void set_LckCosmeticsCoordinator(::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MissingTrackingIdState, addr 0x9d3c330, size 0x8, virtual false, abstract: false, final false
inline void set_MissingTrackingIdState(::Liv::Lck::Streaming::LckMissingTrackingIdState*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RateLimiterBackoffState, addr 0x9d3c350, size 0x8, virtual false, abstract: false, final false
inline void set_RateLimiterBackoffState(::Liv::Lck::Streaming::LckRateLimiterBackoffState*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ServiceUnavailableState, addr 0x9d3c360, size 0x8, virtual false, abstract: false, final false
inline void set_ServiceUnavailableState(::Liv::Lck::Streaming::LckServiceUnavailableState*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ShowCodeState, addr 0x9d3c2f0, size 0x8, virtual false, abstract: false, final false
inline void set_ShowCodeState(::Liv::Lck::Streaming::LckStreamingShowCodeState*  value) ;

/// [CompilerGenerated]
/// @brief Method set_WaitingForConfigureState, addr 0x9d3c300, size 0x8, virtual false, abstract: false, final false
inline void set_WaitingForConfigureState(::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckStreamingController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckStreamingController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckStreamingController(LckStreamingController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckStreamingController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckStreamingController(LckStreamingController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24842};

/// [Tooltip("Enable this to see detailed logs from this controller in the Unity console. Recommended for development.")]
/// [SerializeField]
/// @brief Field _showDebugLogs, offset: 0x20, size: 0x1, def value: None
 bool  ____showDebugLogs;

/// [InjectLck]
/// @brief Field _lckService, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [CompilerGenerated]
/// @brief Field <LckCore>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::Core::ILckCore*  ____LckCore_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LckCosmeticsCoordinator>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Liv::Lck::Core::Cosmetics::ILckCosmeticsCoordinator*  ____LckCosmeticsCoordinator_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsConfiguredCorrectly>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____IsConfiguredCorrectly_k__BackingField;

/// [Tooltip("A reference to the controller responsible for displaying UI notifications (e.g., \'Enter this code:\', \'Please subscribe\'). Assign this in the Inspector.")]
/// [SerializeField]
/// @brief Field _notificationController, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LckNotificationController>  ____notificationController;

/// [Tooltip("Reference to the Top Buttons Controller which handles switching to Camera or Stream modes on the tablet UI")]
/// [SerializeField]
/// @brief Field _topButtonsController, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  ____topButtonsController;

/// [Tooltip("This event is invoked when the user presses the stream button but the setup is not yet complete. Use this to trigger visual feedback, like a button shake or an error icon.")]
/// [SerializeField]
/// @brief Field _onStreamButtonError, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onStreamButtonError;

/// [Tooltip("This event is invoked when the user presses the stream button and the setup is complete, just before streaming starts. Use this to trigger positive feedback, like a button color change.")]
/// [SerializeField]
/// @brief Field _onStreamButtonPressWithCorrectConfig, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____onStreamButtonPressWithCorrectConfig;

/// [Header("Game Objects disabled when streaming package removed")]
/// [SerializeField]
/// @brief Field _topButtonsControllerGameObject, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____topButtonsControllerGameObject;

/// [SerializeField]
/// @brief Field _livHubButton, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____livHubButton;

/// [CompilerGenerated]
/// @brief Field <CurrentState>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::Liv::Lck::Streaming::LckStreamingBaseState*  ____CurrentState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GetCurrentState>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::Liv::Lck::Streaming::LckStreamingGetCurrentState*  ____GetCurrentState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ShowCodeState>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::Liv::Lck::Streaming::LckStreamingShowCodeState*  ____ShowCodeState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WaitingForConfigureState>k__BackingField, offset: 0x90, size: 0x8, def value: None
 ::Liv::Lck::Streaming::LckStreamingWaitingForConfigureState*  ____WaitingForConfigureState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ConfiguredCorrectlyState>k__BackingField, offset: 0x98, size: 0x8, def value: None
 ::Liv::Lck::Streaming::LckStreamingConfiguredCorrectlyState*  ____ConfiguredCorrectlyState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <InternalErrorState>k__BackingField, offset: 0xa0, size: 0x8, def value: None
 ::Liv::Lck::Streaming::LckInternalErrorState*  ____InternalErrorState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MissingTrackingIdState>k__BackingField, offset: 0xa8, size: 0x8, def value: None
 ::Liv::Lck::Streaming::LckMissingTrackingIdState*  ____MissingTrackingIdState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <InvalidArgumentState>k__BackingField, offset: 0xb0, size: 0x8, def value: None
 ::Liv::Lck::Streaming::LckInvalidArgumentState*  ____InvalidArgumentState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RateLimiterBackoffState>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::Liv::Lck::Streaming::LckRateLimiterBackoffState*  ____RateLimiterBackoffState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ServiceUnavailableState>k__BackingField, offset: 0xc0, size: 0x8, def value: None
 ::Liv::Lck::Streaming::LckServiceUnavailableState*  ____ServiceUnavailableState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CancellationTokenSource>k__BackingField, offset: 0xc8, size: 0x8, def value: None
 ::System::Threading::CancellationTokenSource*  ____CancellationTokenSource_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____showDebugLogs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____lckService) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____LckCore_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____LckCosmeticsCoordinator_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____IsConfiguredCorrectly_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____notificationController) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____topButtonsController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____onStreamButtonError) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____onStreamButtonPressWithCorrectConfig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____topButtonsControllerGameObject) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____livHubButton) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____CurrentState_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____GetCurrentState_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____ShowCodeState_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____WaitingForConfigureState_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____ConfiguredCorrectlyState_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____InternalErrorState_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____MissingTrackingIdState_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____InvalidArgumentState_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____RateLimiterBackoffState_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____ServiceUnavailableState_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamingController, ____CancellationTokenSource_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Streaming::LckStreamingController) == 0xd0, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
