#pragma once
// IWYU pragma private; include "GorillaTagScripts/Subscription/SubscriptionKiosk.hpp"
#include "GorillaTagScripts/Subscription/zzzz__SubscriptionKiosk_PurchaseResult_impl.hpp"
#include "GorillaTagScripts/Subscription/zzzz__SubscriptionKiosk_ScreenState_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/Subscription/zzzz__SubscriptionKiosk_def.hpp"
#include "GlobalNamespace/zzzz__FinalizeSteamSubscriptionPurchaseResponse_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
#include "GlobalNamespace/zzzz__ITouchScreenStation_def.hpp"
#include "GlobalNamespace/zzzz__InitSteamSubscriptionPurchaseResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__ObservableBehaviorRule_def.hpp"
#include "GlobalNamespace/zzzz__ObservableBehavior_def.hpp"
#include "GlobalNamespace/zzzz__SIScreenRegion_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButtonContainer_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_def.hpp"
#include "GorillaTagScripts/Subscription/zzzz__SubscriptionKiosk_PurchaseResult_def.hpp"
#include "GorillaTagScripts/Subscription/zzzz__SubscriptionKiosk_ScreenState_def.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionFeatures_def.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionTerm_def.hpp"
#include "Oculus/Platform/Models/zzzz__Purchase_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Steamworks/zzzz__Callback_1_def.hpp"
#include "Steamworks/zzzz__MicroTxnAuthorizationResponse_t_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/Video/zzzz__VideoClip_def.hpp"
#include "UnityEngine/Video/zzzz__VideoPlayer_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.get_ProcessingSubscriptionPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::get_ProcessingSubscriptionPurchase)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c0c740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"get_ProcessingSubscriptionPurchase", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.set_ProcessingSubscriptionPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::set_ProcessingSubscriptionPurchase)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5c0c788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"set_ProcessingSubscriptionPurchase", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.get_ScreenRegion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SIScreenRegion> (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::get_ScreenRegion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0c7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"get_ScreenRegion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::Awake)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5c0c7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::OnEnable)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x5c0caac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::OnDisable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c0cd74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.HandScanAborted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::HandScanAborted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c0ceb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"HandScanAborted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.KioskAbandoned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::KioskAbandoned)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0cecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"KioskAbandoned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.HandScanStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::HandScanStarted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c0ced4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"HandScanStarted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.HandScanned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::HandScanned)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c0ceec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"HandScanned", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.UpdateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::GlobalNamespace::SubscriptionKiosk_ScreenState)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateState)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c0cc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionKiosk_ScreenState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.ActivateScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::GlobalNamespace::SubscriptionKiosk_ScreenState)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::ActivateScreen)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5c0cfa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"ActivateScreen", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionKiosk_ScreenState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.AddButton
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::GlobalNamespace::SITouchscreenButton*, bool)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::AddButton)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c0d85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"AddButton", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.TouchscreenButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::TouchscreenButtonPressed)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5c0d860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"TouchscreenButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.TouchscreenToggleButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t, bool)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::TouchscreenToggleButtonPressed)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5c0dcfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"TouchscreenToggleButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.OnToggleFeaturesExitButtonPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::OnToggleFeaturesExitButtonPressed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5c0dd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"OnToggleFeaturesExitButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.UpdateToggleButtonState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(int32_t, bool)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateToggleButtonState)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5c0de18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateToggleButtonState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.GetSubscriptionFeatureState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(int32_t)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::GetSubscriptionFeatureState)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5c0df78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"GetSubscriptionFeatureState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.UpdateGoldNameTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(bool)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateGoldNameTag)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5c0e0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateGoldNameTag", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.UpdateIOTBExperimentalFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(bool)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateIOTBExperimentalFeature)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c0e254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateIOTBExperimentalFeature", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.UpdateHandTrackingExperimentalFeature
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(bool)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateHandTrackingExperimentalFeature)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c0e318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateHandTrackingExperimentalFeature", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.ToggleSubscriptionSettingValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures, bool)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::ToggleSubscriptionSettingValue)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c0e1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"ToggleSubscriptionSettingValue", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.UpdateSubscribedMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateSubscribedMenu)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5c0d108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateSubscribedMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.UpdateUnsubscribedMenu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateUnsubscribedMenu)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5c0d340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateUnsubscribedMenu", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.UpdateSubscriptionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateSubscriptionData)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x5c0d42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateSubscriptionData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.UpdatePurchaseResultScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::GlobalNamespace::SubscriptionKiosk_PurchaseResult)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::UpdatePurchaseResultScreen)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c0e324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdatePurchaseResultScreen", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionKiosk_PurchaseResult>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.ProcessSteamCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::Steamworks::MicroTxnAuthorizationResponse_t)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::ProcessSteamCallback)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5c0e498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"ProcessSteamCallback", {}, {::i2c::type_of<::Steamworks::MicroTxnAuthorizationResponse_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.PurchaseSubscription
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::GlobalNamespace::SubscriptionManager_SubscriptionTerm)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::PurchaseSubscription)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x5c0da4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"PurchaseSubscription", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionTerm>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.LaunchCheckoutFlowCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::LaunchCheckoutFlowCallback)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5c0e5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"LaunchCheckoutFlowCallback", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.LocalSubscriptionDataUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::LocalSubscriptionDataUpdated)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c0e7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"LocalSubscriptionDataUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.UpdateSubsVideo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateSubsVideo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c0e8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateSubsVideo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::SliceUpdate)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x5c0e9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5c0ecd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5c0ed20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk.ITouchScreenStation_get_gameObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)()>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::ITouchScreenStation_get_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c0ed88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"ITouchScreenStation.get_gameObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk._ProcessSteamCallback_b__76_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::GlobalNamespace::FinalizeSteamSubscriptionPurchaseResponse*)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::_ProcessSteamCallback_b__76_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c0ed90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"<ProcessSteamCallback>b__76_0", {}, {::i2c::type_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk._ProcessSteamCallback_b__76_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::_ProcessSteamCallback_b__76_1)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c0ee30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"<ProcessSteamCallback>b__76_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk._PurchaseSubscription_b__77_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::_PurchaseSubscription_b__77_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5c0ef50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"<PurchaseSubscription>b__77_0", {}, {::i2c::type_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Subscription::SubscriptionKiosk._PurchaseSubscription_b__77_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Subscription::SubscriptionKiosk::*)(::GlobalNamespace::MothershipError*, int32_t)>(&::GorillaTagScripts::Subscription::SubscriptionKiosk::_PurchaseSubscription_b__77_1)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5c0ef80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"<PurchaseSubscription>b__77_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Video::VideoPlayer>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subsVideoPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsVideoPlayer;
}
constexpr ::UnityW<::UnityEngine::Video::VideoPlayer> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subsVideoPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsVideoPlayer;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_subsVideoPlayer(::UnityW<::UnityEngine::Video::VideoPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subsVideoPlayer = value;
}
constexpr ::UnityW<::GlobalNamespace::ObservableBehavior>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subsVideoObservable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsVideoObservable;
}
constexpr ::UnityW<::GlobalNamespace::ObservableBehavior> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subsVideoObservable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subsVideoObservable;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_subsVideoObservable(::UnityW<::GlobalNamespace::ObservableBehavior>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subsVideoObservable = value;
}
constexpr ::UnityW<::UnityEngine::Video::VideoClip>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_defaultVideoClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultVideoClip;
}
constexpr ::UnityW<::UnityEngine::Video::VideoClip> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_defaultVideoClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultVideoClip;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_defaultVideoClip(::UnityW<::UnityEngine::Video::VideoClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultVideoClip = value;
}
constexpr ::UnityW<::UnityEngine::Video::VideoClip>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_steamSubsVideoClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamSubsVideoClip;
}
constexpr ::UnityW<::UnityEngine::Video::VideoClip> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_steamSubsVideoClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamSubsVideoClip;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_steamSubsVideoClip(::UnityW<::UnityEngine::Video::VideoClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steamSubsVideoClip = value;
}
constexpr float_t& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_videoViewableDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___videoViewableDist;
}
constexpr float_t const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_videoViewableDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___videoViewableDist;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_videoViewableDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___videoViewableDist = value;
}
constexpr ::UnityW<::GlobalNamespace::ObservableBehaviorRule>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_defaultObservableRule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultObservableRule;
}
constexpr ::UnityW<::GlobalNamespace::ObservableBehaviorRule> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_defaultObservableRule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultObservableRule;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_defaultObservableRule(::UnityW<::GlobalNamespace::ObservableBehaviorRule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultObservableRule = value;
}
constexpr ::UnityW<::GlobalNamespace::ObservableBehaviorRule>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_steamObservableRule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamObservableRule;
}
constexpr ::UnityW<::GlobalNamespace::ObservableBehaviorRule> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_steamObservableRule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamObservableRule;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_steamObservableRule(::UnityW<::GlobalNamespace::ObservableBehaviorRule>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steamObservableRule = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_steamComingSoon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamComingSoon;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_steamComingSoon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamComingSoon;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_steamComingSoon(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steamComingSoon = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_safeAccountScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___safeAccountScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_safeAccountScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___safeAccountScreen;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_safeAccountScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___safeAccountScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_waitingForScanScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForScanScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_waitingForScanScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForScanScreen;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_waitingForScanScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingForScanScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_scanningScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanningScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_scanningScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scanningScreen;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_scanningScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scanningScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subStatusUnknownScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subStatusUnknownScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subStatusUnknownScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subStatusUnknownScreen;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_subStatusUnknownScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subStatusUnknownScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_mainMenuSubscribedScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainMenuSubscribedScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_mainMenuSubscribedScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainMenuSubscribedScreen;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_mainMenuSubscribedScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainMenuSubscribedScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_mainMenuUnsubscribedScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainMenuUnsubscribedScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_mainMenuUnsubscribedScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainMenuUnsubscribedScreen;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_mainMenuUnsubscribedScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainMenuUnsubscribedScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_mainMenuUnsubscribedQuestText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainMenuUnsubscribedQuestText;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_mainMenuUnsubscribedQuestText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainMenuUnsubscribedQuestText;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_mainMenuUnsubscribedQuestText(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainMenuUnsubscribedQuestText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_mainMenuUnsubscribedSteamText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainMenuUnsubscribedSteamText;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_mainMenuUnsubscribedSteamText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mainMenuUnsubscribedSteamText;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_mainMenuUnsubscribedSteamText(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mainMenuUnsubscribedSteamText = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataScreen;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_subDataScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subDataScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_purchaseSubScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseSubScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_purchaseSubScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseSubScreen;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_purchaseSubScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseSubScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_purchaseProgressScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseProgressScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_purchaseProgressScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseProgressScreen;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_purchaseProgressScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseProgressScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_purchaseResultScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseResultScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_purchaseResultScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseResultScreen;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_purchaseResultScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseResultScreen = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_featureTogglesScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featureTogglesScreen;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_featureTogglesScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___featureTogglesScreen;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_featureTogglesScreen(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___featureTogglesScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::SIScreenRegion>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get__ScreenRegion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScreenRegion_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::SIScreenRegion> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get__ScreenRegion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ScreenRegion_k__BackingField;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set__ScreenRegion_k__BackingField(::UnityW<::GlobalNamespace::SIScreenRegion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ScreenRegion_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>>*& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_toggleButtonContainers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleButtonContainers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>>* const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_toggleButtonContainers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleButtonContainers;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_toggleButtonContainers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SITouchscreenButtonContainer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleButtonContainers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SubscriptionKiosk_ScreenState,::UnityW<::UnityEngine::GameObject>>*& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_screensByState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screensByState;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SubscriptionKiosk_ScreenState,::UnityW<::UnityEngine::GameObject>>* const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_screensByState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___screensByState;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_screensByState(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::SubscriptionKiosk_ScreenState,::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___screensByState = value;
}
constexpr ::StringW& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_steamOrderId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamOrderId;
}
constexpr ::StringW const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_steamOrderId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___steamOrderId;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_steamOrderId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___steamOrderId = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subMenuPlayerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMenuPlayerName;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subMenuPlayerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMenuPlayerName;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_subMenuPlayerName(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subMenuPlayerName = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subMenuDaysAccrued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMenuDaysAccrued;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subMenuDaysAccrued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subMenuDaysAccrued;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_subMenuDaysAccrued(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subMenuDaysAccrued = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_unsubscribedMenuPlayerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsubscribedMenuPlayerName;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_unsubscribedMenuPlayerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___unsubscribedMenuPlayerName;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_unsubscribedMenuPlayerName(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___unsubscribedMenuPlayerName = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataPlayerName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataPlayerName;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataPlayerName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataPlayerName;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_subDataPlayerName(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subDataPlayerName = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataDaysAccrued()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataDaysAccrued;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataDaysAccrued() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataDaysAccrued;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_subDataDaysAccrued(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subDataDaysAccrued = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataDaysRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataDaysRemaining;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataDaysRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataDaysRemaining;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_subDataDaysRemaining(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subDataDaysRemaining = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataAutoRenew()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataAutoRenew;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataAutoRenew() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataAutoRenew;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_subDataAutoRenew(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subDataAutoRenew = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataRenewDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataRenewDate;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataRenewDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataRenewDate;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_subDataRenewDate(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subDataRenewDate = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataSubscriptionTerm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataSubscriptionTerm;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataSubscriptionTerm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataSubscriptionTerm;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_subDataSubscriptionTerm(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subDataSubscriptionTerm = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataSubscribeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataSubscribeButton;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_subDataSubscribeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subDataSubscribeButton;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_subDataSubscribeButton(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subDataSubscribeButton = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_purchaseResultText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseResultText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_purchaseResultText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___purchaseResultText;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_purchaseResultText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___purchaseResultText = value;
}
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_currentState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_currentState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentState;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_currentState(::GlobalNamespace::SubscriptionKiosk_ScreenState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentState = value;
}
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_lastState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr ::GlobalNamespace::SubscriptionKiosk_ScreenState const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_lastState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastState;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_lastState(::GlobalNamespace::SubscriptionKiosk_ScreenState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastState = value;
}
constexpr ::GlobalNamespace::SubscriptionKiosk_PurchaseResult& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_lastPurchase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPurchase;
}
constexpr ::GlobalNamespace::SubscriptionKiosk_PurchaseResult const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get_lastPurchase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPurchase;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set_lastPurchase(::GlobalNamespace::SubscriptionKiosk_PurchaseResult  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPurchase = value;
}
constexpr ::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>*& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get__steamMicroTransactionAuthorizationResponse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steamMicroTransactionAuthorizationResponse;
}
constexpr ::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>* const& GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_get__steamMicroTransactionAuthorizationResponse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steamMicroTransactionAuthorizationResponse;
}
constexpr void GorillaTagScripts::Subscription::SubscriptionKiosk::__cordl_internal_set__steamMicroTransactionAuthorizationResponse(::Steamworks::Callback_1<::Steamworks::MicroTxnAuthorizationResponse_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____steamMicroTransactionAuthorizationResponse = value;
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::setStaticF__ProcessingSubscriptionPurchase_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<ProcessingSubscriptionPurchase>k__BackingField", ::GorillaTagScripts::Subscription::SubscriptionKiosk*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::Subscription::SubscriptionKiosk::getStaticF__ProcessingSubscriptionPurchase_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<ProcessingSubscriptionPurchase>k__BackingField", ::GorillaTagScripts::Subscription::SubscriptionKiosk*>();
}
inline bool GorillaTagScripts::Subscription::SubscriptionKiosk::get_ProcessingSubscriptionPurchase()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"get_ProcessingSubscriptionPurchase", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::set_ProcessingSubscriptionPurchase(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"set_ProcessingSubscriptionPurchase", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::SIScreenRegion> GorillaTagScripts::Subscription::SubscriptionKiosk::get_ScreenRegion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"get_ScreenRegion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SIScreenRegion>>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::HandScanAborted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"HandScanAborted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::KioskAbandoned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"KioskAbandoned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::HandScanStarted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"HandScanStarted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::HandScanned()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"HandScanned", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateState(::GlobalNamespace::SubscriptionKiosk_ScreenState  newState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateState", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionKiosk_ScreenState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::ActivateScreen(::GlobalNamespace::SubscriptionKiosk_ScreenState  activeScreen)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"ActivateScreen", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionKiosk_ScreenState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeScreen);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::AddButton(::GlobalNamespace::SITouchscreenButton*  button, bool  isPopupButton)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"AddButton", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, isPopupButton);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::TouchscreenButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"TouchscreenButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, data, actorNr);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::TouchscreenToggleButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr, bool  isToggledOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"TouchscreenToggleButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, data, actorNr, isToggledOn);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::OnToggleFeaturesExitButtonPressed(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  buttonType, int32_t  data, int32_t  actorNr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"OnToggleFeaturesExitButtonPressed", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonType, data, actorNr);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateToggleButtonState(int32_t  buttonData, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateToggleButtonState", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buttonData, state);
}
inline bool GorillaTagScripts::Subscription::SubscriptionKiosk::GetSubscriptionFeatureState(int32_t  buttonData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"GetSubscriptionFeatureState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, buttonData);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateGoldNameTag(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateGoldNameTag", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateIOTBExperimentalFeature(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateIOTBExperimentalFeature", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateHandTrackingExperimentalFeature(bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateHandTrackingExperimentalFeature", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::ToggleSubscriptionSettingValue(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"ToggleSubscriptionSettingValue", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, state);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateSubscribedMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateSubscribedMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateUnsubscribedMenu()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateUnsubscribedMenu", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateSubscriptionData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateSubscriptionData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::UpdatePurchaseResultScreen(::GlobalNamespace::SubscriptionKiosk_PurchaseResult  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdatePurchaseResultScreen", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionKiosk_PurchaseResult>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::ProcessSteamCallback(::Steamworks::MicroTxnAuthorizationResponse_t  callBackResponse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"ProcessSteamCallback", {}, {::i2c::type_of<::Steamworks::MicroTxnAuthorizationResponse_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, callBackResponse);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::PurchaseSubscription(::GlobalNamespace::SubscriptionManager_SubscriptionTerm  subTerm)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"PurchaseSubscription", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionTerm>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, subTerm);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::LaunchCheckoutFlowCallback(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"LaunchCheckoutFlowCallback", {}, {::i2c::type_of<::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::LocalSubscriptionDataUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"LocalSubscriptionDataUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::UpdateSubsVideo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"UpdateSubsVideo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> GorillaTagScripts::Subscription::SubscriptionKiosk::ITouchScreenStation_get_gameObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"ITouchScreenStation.get_gameObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::_ProcessSteamCallback_b__76_0(::GlobalNamespace::FinalizeSteamSubscriptionPurchaseResponse*  Response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"<ProcessSteamCallback>b__76_0", {}, {::i2c::type_of<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Response);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::_ProcessSteamCallback_b__76_1(::GlobalNamespace::MothershipError*  Error, int32_t  Status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"<ProcessSteamCallback>b__76_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Error, Status);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::_PurchaseSubscription_b__77_0(::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*  Response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"<PurchaseSubscription>b__77_0", {}, {::i2c::type_of<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Response);
}
inline void GorillaTagScripts::Subscription::SubscriptionKiosk::_PurchaseSubscription_b__77_1(::GlobalNamespace::MothershipError*  Error, int32_t  Status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Subscription::SubscriptionKiosk*>(),
                        {"<PurchaseSubscription>b__77_1", {}, {::i2c::type_of<::GlobalNamespace::MothershipError*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, Error, Status);
}
inline ::GorillaTagScripts::Subscription::SubscriptionKiosk* GorillaTagScripts::Subscription::SubscriptionKiosk::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Subscription::SubscriptionKiosk*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITouchScreenStation"
constexpr  GorillaTagScripts::Subscription::SubscriptionKiosk::operator ::GlobalNamespace::ITouchScreenStation*() noexcept {
return static_cast<::GlobalNamespace::ITouchScreenStation*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITouchScreenStation"
constexpr ::GlobalNamespace::ITouchScreenStation* GorillaTagScripts::Subscription::SubscriptionKiosk::i___GlobalNamespace__ITouchScreenStation() noexcept {
return static_cast<::GlobalNamespace::ITouchScreenStation*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GorillaTagScripts::Subscription::SubscriptionKiosk::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GorillaTagScripts::Subscription::SubscriptionKiosk::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Subscription::SubscriptionKiosk::SubscriptionKiosk()   {
}
