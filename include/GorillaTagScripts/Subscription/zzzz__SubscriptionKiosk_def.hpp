#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/SubscriptionKiosk.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Subscription/zzzz__SubscriptionKiosk_PurchaseResult_def.hpp"
#include "GorillaTagScripts/Subscription/zzzz__SubscriptionKiosk_ScreenState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SubscriptionKiosk)
namespace GlobalNamespace {
class FinalizeSteamSubscriptionPurchaseResponse;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class ITouchScreenStation;
}
namespace GlobalNamespace {
class InitSteamSubscriptionPurchaseResponse;
}
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class ObservableBehaviorRule;
}
namespace GlobalNamespace {
class ObservableBehavior;
}
namespace GlobalNamespace {
class SIScreenRegion;
}
namespace GlobalNamespace {
class SITouchscreenButtonContainer;
}
namespace GlobalNamespace {
struct SITouchscreenButton_SITouchscreenButtonType;
}
namespace GlobalNamespace {
class SITouchscreenButton;
}
namespace GlobalNamespace {
struct SubscriptionKiosk_PurchaseResult;
}
namespace GlobalNamespace {
struct SubscriptionKiosk_ScreenState;
}
namespace GlobalNamespace {
struct SubscriptionManager_SubscriptionFeatures;
}
namespace GlobalNamespace {
struct SubscriptionManager_SubscriptionTerm;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace Steamworks {
template<typename T>
class Callback_1;
}
namespace Steamworks {
struct MicroTxnAuthorizationResponse_t;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Video {
class VideoClip;
}
namespace UnityEngine::Video {
class VideoPlayer;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GorillaTagScripts::Subscription {
class SubscriptionKiosk;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Subscription::SubscriptionKiosk*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Subscription::SubscriptionKiosk*, "GorillaTagScripts.Subscription", "SubscriptionKiosk");
// Dependencies GorillaTagScripts.Subscription.SubscriptionKiosk::PurchaseResult, GorillaTagScripts.Subscription.SubscriptionKiosk::ScreenState, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Subscription {
// Is value type: false
// CS Name: GorillaTagScripts.Subscription.SubscriptionKiosk
class CORDL_TYPE SubscriptionKiosk : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PurchaseResult = ::GlobalNamespace::SubscriptionKiosk_PurchaseResult;

using ScreenState = ::GlobalNamespace::SubscriptionKiosk_ScreenState;

 __declspec(property(get=get_ScreenRegion)) ::UnityW<::GlobalNamespace::SIScreenRegion>  ScreenRegion;

/// @brief Field <ProcessingSubscriptionPurchase>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__ProcessingSubscriptionPurchase_k__BackingField, put=setStaticF__ProcessingSubscriptionPurchase_k__BackingField)) bool  _ProcessingSubscriptionPurchase_k__BackingField;

/// @brief Field <ScreenRegion>k__BackingField, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ScreenRegion_k__BackingField, put=__cordl_internal_set__ScreenRegion_k__BackingField)) ::UnityW<::GlobalNamespace::SIScreenRegion>  _ScreenRegion_k__BackingField;

/// @brief Field _steamMicroTransactionAuthorizationResponse, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__steamMicroTransactionAuthorizationResponse, put=__cordl_internal_set__steamMicroTransactionAuthorizationResponse)) ::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>*  _steamMicroTransactionAuthorizationResponse;

/// @brief Field currentState, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::SubscriptionKiosk_ScreenState  currentState;

/// @brief Field defaultObservableRule, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultObservableRule, put=__cordl_internal_set_defaultObservableRule)) ::UnityW<::GlobalNamespace::ObservableBehaviorRule>  defaultObservableRule;

/// @brief Field defaultVideoClip, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultVideoClip, put=__cordl_internal_set_defaultVideoClip)) ::UnityW<::UnityEngine::Video::VideoClip>  defaultVideoClip;

/// @brief Field featureTogglesScreen, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_featureTogglesScreen, put=__cordl_internal_set_featureTogglesScreen)) ::UnityW<::UnityEngine::GameObject>  featureTogglesScreen;

/// @brief Field lastPurchase, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPurchase, put=__cordl_internal_set_lastPurchase)) ::GlobalNamespace::SubscriptionKiosk_PurchaseResult  lastPurchase;

/// @brief Field lastState, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastState, put=__cordl_internal_set_lastState)) ::GlobalNamespace::SubscriptionKiosk_ScreenState  lastState;

/// @brief Field mainMenuSubscribedScreen, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainMenuSubscribedScreen, put=__cordl_internal_set_mainMenuSubscribedScreen)) ::UnityW<::UnityEngine::GameObject>  mainMenuSubscribedScreen;

/// @brief Field mainMenuUnsubscribedQuestText, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainMenuUnsubscribedQuestText, put=__cordl_internal_set_mainMenuUnsubscribedQuestText)) ::UnityW<::UnityEngine::GameObject>  mainMenuUnsubscribedQuestText;

/// @brief Field mainMenuUnsubscribedScreen, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainMenuUnsubscribedScreen, put=__cordl_internal_set_mainMenuUnsubscribedScreen)) ::UnityW<::UnityEngine::GameObject>  mainMenuUnsubscribedScreen;

/// @brief Field mainMenuUnsubscribedSteamText, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainMenuUnsubscribedSteamText, put=__cordl_internal_set_mainMenuUnsubscribedSteamText)) ::UnityW<::UnityEngine::GameObject>  mainMenuUnsubscribedSteamText;

/// @brief Field purchaseProgressScreen, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseProgressScreen, put=__cordl_internal_set_purchaseProgressScreen)) ::UnityW<::UnityEngine::GameObject>  purchaseProgressScreen;

/// @brief Field purchaseResultScreen, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseResultScreen, put=__cordl_internal_set_purchaseResultScreen)) ::UnityW<::UnityEngine::GameObject>  purchaseResultScreen;

/// @brief Field purchaseResultText, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseResultText, put=__cordl_internal_set_purchaseResultText)) ::UnityW<::TMPro::TextMeshPro>  purchaseResultText;

/// @brief Field purchaseSubScreen, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseSubScreen, put=__cordl_internal_set_purchaseSubScreen)) ::UnityW<::UnityEngine::GameObject>  purchaseSubScreen;

/// @brief Field safeAccountScreen, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_safeAccountScreen, put=__cordl_internal_set_safeAccountScreen)) ::UnityW<::UnityEngine::GameObject>  safeAccountScreen;

/// @brief Field scanningScreen, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_scanningScreen, put=__cordl_internal_set_scanningScreen)) ::UnityW<::UnityEngine::GameObject>  scanningScreen;

/// @brief Field screensByState, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_screensByState, put=__cordl_internal_set_screensByState)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SubscriptionKiosk_ScreenState,::UnityW<::UnityEngine::GameObject>>*  screensByState;

/// @brief Field steamComingSoon, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_steamComingSoon, put=__cordl_internal_set_steamComingSoon)) ::UnityW<::UnityEngine::GameObject>  steamComingSoon;

/// @brief Field steamObservableRule, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_steamObservableRule, put=__cordl_internal_set_steamObservableRule)) ::UnityW<::GlobalNamespace::ObservableBehaviorRule>  steamObservableRule;

/// @brief Field steamOrderId, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_steamOrderId, put=__cordl_internal_set_steamOrderId)) ::StringW  steamOrderId;

/// @brief Field steamSubsVideoClip, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_steamSubsVideoClip, put=__cordl_internal_set_steamSubsVideoClip)) ::UnityW<::UnityEngine::Video::VideoClip>  steamSubsVideoClip;

/// @brief Field subDataAutoRenew, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_subDataAutoRenew, put=__cordl_internal_set_subDataAutoRenew)) ::UnityW<::TMPro::TextMeshPro>  subDataAutoRenew;

/// @brief Field subDataDaysAccrued, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_subDataDaysAccrued, put=__cordl_internal_set_subDataDaysAccrued)) ::UnityW<::TMPro::TextMeshPro>  subDataDaysAccrued;

/// @brief Field subDataDaysRemaining, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_subDataDaysRemaining, put=__cordl_internal_set_subDataDaysRemaining)) ::UnityW<::TMPro::TextMeshPro>  subDataDaysRemaining;

/// @brief Field subDataPlayerName, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_subDataPlayerName, put=__cordl_internal_set_subDataPlayerName)) ::UnityW<::TMPro::TextMeshPro>  subDataPlayerName;

/// @brief Field subDataRenewDate, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_subDataRenewDate, put=__cordl_internal_set_subDataRenewDate)) ::UnityW<::TMPro::TextMeshPro>  subDataRenewDate;

/// @brief Field subDataScreen, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_subDataScreen, put=__cordl_internal_set_subDataScreen)) ::UnityW<::UnityEngine::GameObject>  subDataScreen;

/// @brief Field subDataSubscribeButton, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_subDataSubscribeButton, put=__cordl_internal_set_subDataSubscribeButton)) ::UnityW<::UnityEngine::GameObject>  subDataSubscribeButton;

/// @brief Field subDataSubscriptionTerm, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_subDataSubscriptionTerm, put=__cordl_internal_set_subDataSubscriptionTerm)) ::UnityW<::TMPro::TextMeshPro>  subDataSubscriptionTerm;

/// @brief Field subMenuDaysAccrued, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_subMenuDaysAccrued, put=__cordl_internal_set_subMenuDaysAccrued)) ::UnityW<::TMPro::TextMeshPro>  subMenuDaysAccrued;

/// @brief Field subMenuPlayerName, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_subMenuPlayerName, put=__cordl_internal_set_subMenuPlayerName)) ::UnityW<::TMPro::TextMeshPro>  subMenuPlayerName;

/// @brief Field subStatusUnknownScreen, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_subStatusUnknownScreen, put=__cordl_internal_set_subStatusUnknownScreen)) ::UnityW<::UnityEngine::GameObject>  subStatusUnknownScreen;

/// @brief Field subsVideoObservable, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_subsVideoObservable, put=__cordl_internal_set_subsVideoObservable)) ::UnityW<::GlobalNamespace::ObservableBehavior>  subsVideoObservable;

/// @brief Field subsVideoPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_subsVideoPlayer, put=__cordl_internal_set_subsVideoPlayer)) ::UnityW<::UnityEngine::Video::VideoPlayer>  subsVideoPlayer;

/// @brief Field toggleButtonContainers, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_toggleButtonContainers, put=__cordl_internal_set_toggleButtonContainers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>>*  toggleButtonContainers;

/// @brief Field unsubscribedMenuPlayerName, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unsubscribedMenuPlayerName, put=__cordl_internal_set_unsubscribedMenuPlayerName)) ::UnityW<::TMPro::TextMeshPro>  unsubscribedMenuPlayerName;

/// @brief Field videoViewableDist, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_videoViewableDist, put=__cordl_internal_set_videoViewableDist)) float_t  videoViewableDist;

/// @brief Field waitingForScanScreen, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitingForScanScreen, put=__cordl_internal_set_waitingForScanScreen)) ::UnityW<::UnityEngine::GameObject>  waitingForScanScreen;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITouchScreenStation"
constexpr operator  ::GlobalNamespace::ITouchScreenStation*() noexcept;

/// @brief Method ActivateScreen, addr 0x5c0cfa4, size 0x164, virtual false, abstract: false, final false
inline void ActivateScreen(::GlobalNamespace::SubscriptionKiosk_ScreenState  activeScreen) ;

/// @brief Method AddButton, addr 0x5c0d85c, size 0x4, virtual true, abstract: false, final true
inline void AddButton(::GlobalNamespace::SITouchscreenButton*  button, bool  isPopupButton) ;

/// @brief Method Awake, addr 0x5c0c7e0, size 0x2cc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetSubscriptionFeatureState, addr 0x5c0df78, size 0x134, virtual false, abstract: false, final false
inline bool GetSubscriptionFeatureState(int32_t  buttonData) ;

/// @brief Method HandScanAborted, addr 0x5c0ceb4, size 0x18, virtual false, abstract: false, final false
inline void HandScanAborted() ;

/// @brief Method HandScanStarted, addr 0x5c0ced4, size 0x18, virtual false, abstract: false, final false
inline void HandScanStarted() ;

/// @brief Method HandScanned, addr 0x5c0ceec, size 0xb8, virtual false, abstract: false, final false
inline void HandScanned() ;

/// @brief Method ITouchScreenStation.get_gameObject, addr 0x5c0ed88, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::GameObject> ITouchScreenStation_get_gameObject() ;

/// @brief Method KioskAbandoned, addr 0x5c0cecc, size 0x8, virtual false, abstract: false, final false
inline void KioskAbandoned() ;

/// @brief Method LaunchCheckoutFlowCallback, addr 0x5c0e5fc, size 0x1fc, virtual false, abstract: false, final false
inline void LaunchCheckoutFlowCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*  msg) ;

/// @brief Method LocalSubscriptionDataUpdated, addr 0x5c0e7f8, size 0xf4, virtual false, abstract: false, final false
inline void LocalSubscriptionDataUpdated() ;

static inline ::GorillaTagScripts::Subscription::SubscriptionKiosk* New_ctor() ;

/// @brief Method OnDisable, addr 0x5c0cd74, size 0x140, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5c0ecd4, size 0x4c, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

/// @brief Method OnEnable, addr 0x5c0caac, size 0x1a8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnToggleFeaturesExitButtonPressed, addr 0x5c0dd70, size 0xa8, virtual false, abstract: false, final false
inline void OnToggleFeaturesExitButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr) ;

/// @brief Method ProcessSteamCallback, addr 0x5c0e498, size 0x164, virtual false, abstract: false, final false
inline void ProcessSteamCallback(::Steamworks::MicroTxnAuthorizationResponse_t  callBackResponse) ;

/// @brief Method PurchaseSubscription, addr 0x5c0da4c, size 0x2b0, virtual false, abstract: false, final false
inline void PurchaseSubscription(::GlobalNamespace::SubscriptionManager_SubscriptionTerm  subTerm) ;

/// @brief Method SliceUpdate, addr 0x5c0e9a0, size 0x334, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method ToggleSubscriptionSettingValue, addr 0x5c0e1ec, size 0x68, virtual false, abstract: false, final false
inline void ToggleSubscriptionSettingValue(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature, bool  state) ;

/// @brief Method TouchscreenButtonPressed, addr 0x5c0d860, size 0x1ec, virtual true, abstract: false, final true
inline void TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr) ;

/// @brief Method TouchscreenToggleButtonPressed, addr 0x5c0dcfc, size 0x74, virtual true, abstract: false, final true
inline void TouchscreenToggleButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr, bool  isToggledOn) ;

/// @brief Method UpdateGoldNameTag, addr 0x5c0e0ac, size 0x140, virtual false, abstract: false, final false
inline void UpdateGoldNameTag(bool  state) ;

/// @brief Method UpdateHandTrackingExperimentalFeature, addr 0x5c0e318, size 0xc, virtual false, abstract: false, final false
inline void UpdateHandTrackingExperimentalFeature(bool  state) ;

/// @brief Method UpdateIOTBExperimentalFeature, addr 0x5c0e254, size 0xc4, virtual false, abstract: false, final false
inline void UpdateIOTBExperimentalFeature(bool  state) ;

/// @brief Method UpdatePurchaseResultScreen, addr 0x5c0e324, size 0x174, virtual false, abstract: false, final false
inline void UpdatePurchaseResultScreen(::GlobalNamespace::SubscriptionKiosk_PurchaseResult  result) ;

/// @brief Method UpdateState, addr 0x5c0cc54, size 0x120, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::SubscriptionKiosk_ScreenState  newState) ;

/// @brief Method UpdateSubsVideo, addr 0x5c0e8ec, size 0xb4, virtual false, abstract: false, final false
inline void UpdateSubsVideo() ;

/// @brief Method UpdateSubscribedMenu, addr 0x5c0d108, size 0x238, virtual false, abstract: false, final false
inline void UpdateSubscribedMenu() ;

/// @brief Method UpdateSubscriptionData, addr 0x5c0d42c, size 0x430, virtual false, abstract: false, final false
inline void UpdateSubscriptionData() ;

/// @brief Method UpdateToggleButtonState, addr 0x5c0de18, size 0x160, virtual false, abstract: false, final false
inline void UpdateToggleButtonState(int32_t  buttonData, bool  state) ;

/// @brief Method UpdateUnsubscribedMenu, addr 0x5c0d340, size 0xec, virtual false, abstract: false, final false
inline void UpdateUnsubscribedMenu() ;

/// [CompilerGenerated]
/// @brief Method <ProcessSteamCallback>b__76_0, addr 0x5c0ed90, size 0xa0, virtual false, abstract: false, final false
inline void _ProcessSteamCallback_b__76_0(::GlobalNamespace::FinalizeSteamSubscriptionPurchaseResponse*  Response) ;

/// [CompilerGenerated]
/// @brief Method <ProcessSteamCallback>b__76_1, addr 0x5c0ee30, size 0x120, virtual false, abstract: false, final false
inline void _ProcessSteamCallback_b__76_1(::GlobalNamespace::MothershipError*  Error, int32_t  Status) ;

/// [CompilerGenerated]
/// @brief Method <PurchaseSubscription>b__77_0, addr 0x5c0ef50, size 0x30, virtual false, abstract: false, final false
inline void _PurchaseSubscription_b__77_0(::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*  Response) ;

/// [CompilerGenerated]
/// @brief Method <PurchaseSubscription>b__77_1, addr 0x5c0ef80, size 0x124, virtual false, abstract: false, final false
inline void _PurchaseSubscription_b__77_1(::GlobalNamespace::MothershipError*  Error, int32_t  Status) ;

constexpr ::UnityW<::GlobalNamespace::SIScreenRegion> const& __cordl_internal_get__ScreenRegion_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::SIScreenRegion>& __cordl_internal_get__ScreenRegion_k__BackingField() ;

constexpr ::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>* const& __cordl_internal_get__steamMicroTransactionAuthorizationResponse() const;

constexpr ::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>*& __cordl_internal_get__steamMicroTransactionAuthorizationResponse() ;

constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState& __cordl_internal_get_currentState() ;

constexpr ::UnityW<::GlobalNamespace::ObservableBehaviorRule> const& __cordl_internal_get_defaultObservableRule() const;

constexpr ::UnityW<::GlobalNamespace::ObservableBehaviorRule>& __cordl_internal_get_defaultObservableRule() ;

constexpr ::UnityW<::UnityEngine::Video::VideoClip> const& __cordl_internal_get_defaultVideoClip() const;

constexpr ::UnityW<::UnityEngine::Video::VideoClip>& __cordl_internal_get_defaultVideoClip() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_featureTogglesScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_featureTogglesScreen() ;

constexpr ::GlobalNamespace::SubscriptionKiosk_PurchaseResult const& __cordl_internal_get_lastPurchase() const;

constexpr ::GlobalNamespace::SubscriptionKiosk_PurchaseResult& __cordl_internal_get_lastPurchase() ;

constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState const& __cordl_internal_get_lastState() const;

constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState& __cordl_internal_get_lastState() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_mainMenuSubscribedScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_mainMenuSubscribedScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_mainMenuUnsubscribedQuestText() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_mainMenuUnsubscribedQuestText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_mainMenuUnsubscribedScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_mainMenuUnsubscribedScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_mainMenuUnsubscribedSteamText() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_mainMenuUnsubscribedSteamText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_purchaseProgressScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_purchaseProgressScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_purchaseResultScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_purchaseResultScreen() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_purchaseResultText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_purchaseResultText() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_purchaseSubScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_purchaseSubScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_safeAccountScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_safeAccountScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_scanningScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_scanningScreen() ;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SubscriptionKiosk_ScreenState,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_screensByState() const;

constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SubscriptionKiosk_ScreenState,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_screensByState() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_steamComingSoon() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_steamComingSoon() ;

constexpr ::UnityW<::GlobalNamespace::ObservableBehaviorRule> const& __cordl_internal_get_steamObservableRule() const;

constexpr ::UnityW<::GlobalNamespace::ObservableBehaviorRule>& __cordl_internal_get_steamObservableRule() ;

constexpr ::StringW const& __cordl_internal_get_steamOrderId() const;

constexpr ::StringW& __cordl_internal_get_steamOrderId() ;

constexpr ::UnityW<::UnityEngine::Video::VideoClip> const& __cordl_internal_get_steamSubsVideoClip() const;

constexpr ::UnityW<::UnityEngine::Video::VideoClip>& __cordl_internal_get_steamSubsVideoClip() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_subDataAutoRenew() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_subDataAutoRenew() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_subDataDaysAccrued() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_subDataDaysAccrued() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_subDataDaysRemaining() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_subDataDaysRemaining() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_subDataPlayerName() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_subDataPlayerName() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_subDataRenewDate() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_subDataRenewDate() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_subDataScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_subDataScreen() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_subDataSubscribeButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_subDataSubscribeButton() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_subDataSubscriptionTerm() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_subDataSubscriptionTerm() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_subMenuDaysAccrued() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_subMenuDaysAccrued() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_subMenuPlayerName() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_subMenuPlayerName() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_subStatusUnknownScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_subStatusUnknownScreen() ;

constexpr ::UnityW<::GlobalNamespace::ObservableBehavior> const& __cordl_internal_get_subsVideoObservable() const;

constexpr ::UnityW<::GlobalNamespace::ObservableBehavior>& __cordl_internal_get_subsVideoObservable() ;

constexpr ::UnityW<::UnityEngine::Video::VideoPlayer> const& __cordl_internal_get_subsVideoPlayer() const;

constexpr ::UnityW<::UnityEngine::Video::VideoPlayer>& __cordl_internal_get_subsVideoPlayer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>>* const& __cordl_internal_get_toggleButtonContainers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>>*& __cordl_internal_get_toggleButtonContainers() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_unsubscribedMenuPlayerName() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_unsubscribedMenuPlayerName() ;

constexpr float_t const& __cordl_internal_get_videoViewableDist() const;

constexpr float_t& __cordl_internal_get_videoViewableDist() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waitingForScanScreen() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waitingForScanScreen() ;

constexpr void __cordl_internal_set__ScreenRegion_k__BackingField(::UnityW<::GlobalNamespace::SIScreenRegion>  value) ;

constexpr void __cordl_internal_set__steamMicroTransactionAuthorizationResponse(::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>*  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::SubscriptionKiosk_ScreenState  value) ;

constexpr void __cordl_internal_set_defaultObservableRule(::UnityW<::GlobalNamespace::ObservableBehaviorRule>  value) ;

constexpr void __cordl_internal_set_defaultVideoClip(::UnityW<::UnityEngine::Video::VideoClip>  value) ;

constexpr void __cordl_internal_set_featureTogglesScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_lastPurchase(::GlobalNamespace::SubscriptionKiosk_PurchaseResult  value) ;

constexpr void __cordl_internal_set_lastState(::GlobalNamespace::SubscriptionKiosk_ScreenState  value) ;

constexpr void __cordl_internal_set_mainMenuSubscribedScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_mainMenuUnsubscribedQuestText(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_mainMenuUnsubscribedScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_mainMenuUnsubscribedSteamText(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_purchaseProgressScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_purchaseResultScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_purchaseResultText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_purchaseSubScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_safeAccountScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_scanningScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_screensByState(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SubscriptionKiosk_ScreenState,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_steamComingSoon(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_steamObservableRule(::UnityW<::GlobalNamespace::ObservableBehaviorRule>  value) ;

constexpr void __cordl_internal_set_steamOrderId(::StringW  value) ;

constexpr void __cordl_internal_set_steamSubsVideoClip(::UnityW<::UnityEngine::Video::VideoClip>  value) ;

constexpr void __cordl_internal_set_subDataAutoRenew(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_subDataDaysAccrued(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_subDataDaysRemaining(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_subDataPlayerName(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_subDataRenewDate(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_subDataScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_subDataSubscribeButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_subDataSubscriptionTerm(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_subMenuDaysAccrued(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_subMenuPlayerName(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_subStatusUnknownScreen(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_subsVideoObservable(::UnityW<::GlobalNamespace::ObservableBehavior>  value) ;

constexpr void __cordl_internal_set_subsVideoPlayer(::UnityW<::UnityEngine::Video::VideoPlayer>  value) ;

constexpr void __cordl_internal_set_toggleButtonContainers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>>*  value) ;

constexpr void __cordl_internal_set_unsubscribedMenuPlayerName(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_videoViewableDist(float_t  value) ;

constexpr void __cordl_internal_set_waitingForScanScreen(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5c0ed20, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__ProcessingSubscriptionPurchase_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_ProcessingSubscriptionPurchase, addr 0x5c0c740, size 0x48, virtual false, abstract: false, final false
static inline bool get_ProcessingSubscriptionPurchase() ;

/// [CompilerGenerated]
/// @brief Method get_ScreenRegion, addr 0x5c0c7d8, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::SIScreenRegion> get_ScreenRegion() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Convert to "::GlobalNamespace::ITouchScreenStation"
constexpr ::GlobalNamespace::ITouchScreenStation* i___GlobalNamespace__ITouchScreenStation() noexcept;

static inline void setStaticF__ProcessingSubscriptionPurchase_k__BackingField(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ProcessingSubscriptionPurchase, addr 0x5c0c788, size 0x50, virtual false, abstract: false, final false
static inline void set_ProcessingSubscriptionPurchase(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubscriptionKiosk() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionKiosk", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SubscriptionKiosk(SubscriptionKiosk && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubscriptionKiosk", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubscriptionKiosk(SubscriptionKiosk const& ) = delete;

/// @brief Field PURCHASE_CANCEL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PURCHASE_CANCEL_KEY{u"SUBKIOSKPURCHASE_CANCEL"};

/// @brief Field PURCHASE_FAIL_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PURCHASE_FAIL_KEY{u"SUBKIOSKPURCHASE_FAIL"};

/// @brief Field PURCHASE_SUCCESS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PURCHASE_SUCCESS_KEY{u"SUBKIOSKPURCHASE_SUCCESS"};

/// @brief Field SUBSCRIPTION_KIOSK_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  SUBSCRIPTION_KIOSK_PREFIX{u"SUBKIOSK"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4095};

/// @brief Field subSKU offset 0xffffffff size 0x8
static constexpr ::ConstString  subSKU{u"fan_club"};

/// [Space]
/// [SerializeField]
/// @brief Field subsVideoPlayer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Video::VideoPlayer>  ___subsVideoPlayer;

/// [SerializeField]
/// @brief Field subsVideoObservable, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ObservableBehavior>  ___subsVideoObservable;

/// [SerializeField]
/// @brief Field defaultVideoClip, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Video::VideoClip>  ___defaultVideoClip;

/// [SerializeField]
/// @brief Field steamSubsVideoClip, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Video::VideoClip>  ___steamSubsVideoClip;

/// [SerializeField]
/// @brief Field videoViewableDist, offset: 0x40, size: 0x4, def value: None
 float_t  ___videoViewableDist;

/// [SerializeField]
/// @brief Field defaultObservableRule, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ObservableBehaviorRule>  ___defaultObservableRule;

/// [SerializeField]
/// @brief Field steamObservableRule, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ObservableBehaviorRule>  ___steamObservableRule;

/// [Space]
/// [SerializeField]
/// @brief Field steamComingSoon, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___steamComingSoon;

/// [SerializeField]
/// @brief Field safeAccountScreen, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___safeAccountScreen;

/// [SerializeField]
/// @brief Field waitingForScanScreen, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waitingForScanScreen;

/// [SerializeField]
/// @brief Field scanningScreen, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___scanningScreen;

/// [SerializeField]
/// @brief Field subStatusUnknownScreen, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___subStatusUnknownScreen;

/// [SerializeField]
/// @brief Field mainMenuSubscribedScreen, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___mainMenuSubscribedScreen;

/// [Space]
/// [SerializeField]
/// @brief Field mainMenuUnsubscribedScreen, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___mainMenuUnsubscribedScreen;

/// [SerializeField]
/// @brief Field mainMenuUnsubscribedQuestText, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___mainMenuUnsubscribedQuestText;

/// [SerializeField]
/// @brief Field mainMenuUnsubscribedSteamText, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___mainMenuUnsubscribedSteamText;

/// [Space]
/// [SerializeField]
/// @brief Field subDataScreen, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___subDataScreen;

/// [SerializeField]
/// @brief Field purchaseSubScreen, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___purchaseSubScreen;

/// [SerializeField]
/// @brief Field purchaseProgressScreen, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___purchaseProgressScreen;

/// [SerializeField]
/// @brief Field purchaseResultScreen, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___purchaseResultScreen;

/// [SerializeField]
/// @brief Field featureTogglesScreen, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___featureTogglesScreen;

/// [CompilerGenerated]
/// @brief Field <ScreenRegion>k__BackingField, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIScreenRegion>  ____ScreenRegion_k__BackingField;

/// @brief Field toggleButtonContainers, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>>*  ___toggleButtonContainers;

/// @brief Field screensByState, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SubscriptionKiosk_ScreenState,::UnityW<::UnityEngine::GameObject>>*  ___screensByState;

/// @brief Field steamOrderId, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ___steamOrderId;

/// [SerializeField]
/// @brief Field subMenuPlayerName, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___subMenuPlayerName;

/// [SerializeField]
/// @brief Field subMenuDaysAccrued, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___subMenuDaysAccrued;

/// [SerializeField]
/// @brief Field unsubscribedMenuPlayerName, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___unsubscribedMenuPlayerName;

/// [SerializeField]
/// @brief Field subDataPlayerName, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___subDataPlayerName;

/// [SerializeField]
/// @brief Field subDataDaysAccrued, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___subDataDaysAccrued;

/// [SerializeField]
/// @brief Field subDataDaysRemaining, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___subDataDaysRemaining;

/// [SerializeField]
/// @brief Field subDataAutoRenew, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___subDataAutoRenew;

/// [SerializeField]
/// @brief Field subDataRenewDate, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___subDataRenewDate;

/// [SerializeField]
/// @brief Field subDataSubscriptionTerm, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___subDataSubscriptionTerm;

/// [SerializeField]
/// @brief Field subDataSubscribeButton, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___subDataSubscribeButton;

/// [SerializeField]
/// @brief Field purchaseResultText, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___purchaseResultText;

/// @brief Field currentState, offset: 0x140, size: 0x4, def value: None
 ::GlobalNamespace::SubscriptionKiosk_ScreenState  ___currentState;

/// @brief Field lastState, offset: 0x144, size: 0x4, def value: None
 ::GlobalNamespace::SubscriptionKiosk_ScreenState  ___lastState;

/// @brief Field lastPurchase, offset: 0x148, size: 0x4, def value: None
 ::GlobalNamespace::SubscriptionKiosk_PurchaseResult  ___lastPurchase;

/// @brief Field _steamMicroTransactionAuthorizationResponse, offset: 0x150, size: 0x8, def value: None
 ::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>*  ____steamMicroTransactionAuthorizationResponse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___subsVideoPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___subsVideoObservable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___defaultVideoClip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___steamSubsVideoClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___videoViewableDist) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___defaultObservableRule) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___steamObservableRule) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___steamComingSoon) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___safeAccountScreen) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___waitingForScanScreen) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___scanningScreen) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___subStatusUnknownScreen) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___mainMenuSubscribedScreen) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___mainMenuUnsubscribedScreen) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___mainMenuUnsubscribedQuestText) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___mainMenuUnsubscribedSteamText) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___subDataScreen) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___purchaseSubScreen) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___purchaseProgressScreen) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___purchaseResultScreen) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___featureTogglesScreen) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ____ScreenRegion_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___toggleButtonContainers) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___screensByState) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___steamOrderId) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___subMenuPlayerName) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___subMenuDaysAccrued) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___unsubscribedMenuPlayerName) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___subDataPlayerName) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___subDataDaysAccrued) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___subDataDaysRemaining) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___subDataAutoRenew) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___subDataRenewDate) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___subDataSubscriptionTerm) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___subDataSubscribeButton) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___purchaseResultText) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___currentState) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___lastState) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ___lastPurchase) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Subscription::SubscriptionKiosk, ____steamMicroTransactionAuthorizationResponse) == 0x150, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Subscription::SubscriptionKiosk) == 0x158, "Size mismatch!");

} // namespace end def GorillaTagScripts::Subscription
