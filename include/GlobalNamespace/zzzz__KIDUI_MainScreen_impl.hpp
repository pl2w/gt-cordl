#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUI_MainScreen.hpp"
#include "GlobalNamespace/zzzz__EKIDFeatures_impl.hpp"
#include "GlobalNamespace/zzzz__EMainScreenStatus_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_Controller_Metrics_ShowReason_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen_def.hpp"
#include "GlobalNamespace/zzzz__EGetPermissionsStatus_def.hpp"
#include "GlobalNamespace/zzzz__EKIDFeatures_def.hpp"
#include "GlobalNamespace/zzzz__EMainScreenStatus_def.hpp"
#include "GlobalNamespace/zzzz__KIDUIButton_def.hpp"
#include "GlobalNamespace/zzzz__KIDUIFeatureSetting_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_AnimatedEllipsis_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_Controller_Metrics_ShowReason_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen_FeatureToggleSetup_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen__OnAskForPermission_d__52_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen__UpdateAndCheckForMissingPermissions_d__55_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_MainScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_SendUpgradeEmailScreen_def.hpp"
#include "GlobalNamespace/zzzz__KIDUI_SetupScreen_def.hpp"
#include "KID/Model/zzzz__Permission_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::Awake)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5a56768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::OnEnable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5a568fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::OnDisable)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5a571e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a57304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.ConstructFeatureSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::ConstructFeatureSettings)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5a57308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"ConstructFeatureSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.CreateNewFeatureDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup)>(&::GlobalNamespace::KIDUI_MainScreen::CreateNewFeatureDisplay)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x5a57434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"CreateNewFeatureDisplay", {}, {::i2c::type_of<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.ConstructAdditionalSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)(::GlobalNamespace::EKIDFeatures, ::UnityEngine::GameObject*)>(&::GlobalNamespace::KIDUI_MainScreen::ConstructAdditionalSetup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a579f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"ConstructAdditionalSetup", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.UpdatePermissionsAndFeaturesScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::UpdatePermissionsAndFeaturesScreen)> {
  constexpr static std::size_t size = 0x7d8;
  constexpr static std::size_t addrs = 0x5a56a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"UpdatePermissionsAndFeaturesScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.IsFeatureToggledOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KIDUI_MainScreen::*)(::GlobalNamespace::EKIDFeatures)>(&::GlobalNamespace::KIDUI_MainScreen::IsFeatureToggledOn)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x5a57b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"IsFeatureToggledOn", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.InitialiseMainScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::InitialiseMainScreen)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a55390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"InitialiseMainScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.ShowMainScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)(::GlobalNamespace::EMainScreenStatus, ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason)>(&::GlobalNamespace::KIDUI_MainScreen::ShowMainScreen)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x5a55e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"ShowMainScreen", {}, {::i2c::type_of<::GlobalNamespace::EMainScreenStatus>(), ::i2c::type_of<::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.ShowMainScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)(::GlobalNamespace::EMainScreenStatus)>(&::GlobalNamespace::KIDUI_MainScreen::ShowMainScreen)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a5644c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"ShowMainScreen", {}, {::i2c::type_of<::GlobalNamespace::EMainScreenStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.UpdateScreenStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)(::GlobalNamespace::EMainScreenStatus, bool)>(&::GlobalNamespace::KIDUI_MainScreen::UpdateScreenStatus)> {
  constexpr static std::size_t size = 0x6e0;
  constexpr static std::size_t addrs = 0x5a53f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"UpdateScreenStatus", {}, {::i2c::type_of<::GlobalNamespace::EMainScreenStatus>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.HideMainScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::HideMainScreen)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a53cb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"HideMainScreen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.OnAskForPermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::OnAskForPermission)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a5845c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnAskForPermission", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.OnSaveAndExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::OnSaveAndExit)> {
  constexpr static std::size_t size = 0x8b0;
  constexpr static std::size_t addrs = 0x5a58504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnSaveAndExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.GetFeatureListingCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::GetFeatureListingCount)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5a554b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"GetFeatureListingCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.UpdateAndCheckForMissingPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::UpdateAndCheckForMissingPermissions)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a58f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"UpdateAndCheckForMissingPermissions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.OnLanguageChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::OnLanguageChanged)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5a59064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnLanguageChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.UpdateOptInSetting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)(::KID::Model::Permission*, ::GlobalNamespace::EKIDFeatures, ::System::Action_3<bool,::KID::Model::Permission*,bool>*)>(&::GlobalNamespace::KIDUI_MainScreen::UpdateOptInSetting)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5a58db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"UpdateOptInSetting", {}, {::i2c::type_of<::KID::Model::Permission*>(), ::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<::System::Action_3<bool,::KID::Model::Permission*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.OnConfirmedEmailAddress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)(::StringW)>(&::GlobalNamespace::KIDUI_MainScreen::OnConfirmedEmailAddress)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5a52de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnConfirmedEmailAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.CollectPermissionsToUpgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::CollectPermissionsToUpgrade)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5a59298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"CollectPermissionsToUpgrade", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.ConfigurePermissionsButtons
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::ConfigurePermissionsButtons)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5a57d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"ConfigurePermissionsButtons", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.SetButtonContainersVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)(::GlobalNamespace::EGetPermissionsStatus)>(&::GlobalNamespace::KIDUI_MainScreen::SetButtonContainersVisibility)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5a579f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"SetButtonContainersVisibility", {}, {::i2c::type_of<::GlobalNamespace::EGetPermissionsStatus>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.GetActiveStatusObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::GetActiveStatusObject)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x5a57f64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"GetActiveStatusObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.GetPermissionState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EGetPermissionsStatus (*)()>(&::GlobalNamespace::KIDUI_MainScreen::GetPermissionState)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5a5830c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"GetPermissionState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.OnFeatureToggleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)(::GlobalNamespace::EKIDFeatures)>(&::GlobalNamespace::KIDUI_MainScreen::OnFeatureToggleChanged)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5a59484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnFeatureToggleChanged", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.OnMultiplayerToggled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::OnMultiplayerToggled)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a5964c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnMultiplayerToggled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.OnVoiceChatToggled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::OnVoiceChatToggled)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a59728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnVoiceChatToggled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.OnGroupToggleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::OnGroupToggleChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a59804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnGroupToggleChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.OnModToggleChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::OnModToggleChanged)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a598e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnModToggleChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen.OnCustomNametagsToggled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::OnCustomNametagsToggled)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a599bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnCustomNametagsToggled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen::*)()>(&::GlobalNamespace::KIDUI_MainScreen::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a59a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__kidScreensGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____kidScreensGroup;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__kidScreensGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____kidScreensGroup;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__kidScreensGroup(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____kidScreensGroup = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_SetupScreen>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__setupKidScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupKidScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_SetupScreen> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__setupKidScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupKidScreen;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__setupKidScreen(::UnityW<::GlobalNamespace::KIDUI_SetupScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setupKidScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__sendUpgradeEmailScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendUpgradeEmailScreen;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__sendUpgradeEmailScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sendUpgradeEmailScreen;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__sendUpgradeEmailScreen(::UnityW<::GlobalNamespace::KIDUI_SendUpgradeEmailScreen>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sendUpgradeEmailScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__animatedEllipsis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatedEllipsis;
}
constexpr ::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__animatedEllipsis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animatedEllipsis;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__animatedEllipsis(::UnityW<::GlobalNamespace::KIDUI_AnimatedEllipsis>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animatedEllipsis = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__getPermissionsButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getPermissionsButton;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__getPermissionsButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getPermissionsButton;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__getPermissionsButton(::UnityW<::GlobalNamespace::KIDUIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____getPermissionsButton = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__gettingPermissionsButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gettingPermissionsButton;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__gettingPermissionsButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gettingPermissionsButton;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__gettingPermissionsButton(::UnityW<::GlobalNamespace::KIDUIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gettingPermissionsButton = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__requestPermissionsButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestPermissionsButton;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__requestPermissionsButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____requestPermissionsButton;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__requestPermissionsButton(::UnityW<::GlobalNamespace::KIDUIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____requestPermissionsButton = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__defaultButtonsContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultButtonsContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__defaultButtonsContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____defaultButtonsContainer;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__defaultButtonsContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____defaultButtonsContainer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__permissionsRequestingButtonContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____permissionsRequestingButtonContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__permissionsRequestingButtonContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____permissionsRequestingButtonContainer;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__permissionsRequestingButtonContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____permissionsRequestingButtonContainer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__permissionsRequestedButtonContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____permissionsRequestedButtonContainer;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__permissionsRequestedButtonContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____permissionsRequestedButtonContainer;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__permissionsRequestedButtonContainer(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____permissionsRequestedButtonContainer = value;
}
constexpr bool& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__hasAllPermissions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasAllPermissions;
}
constexpr bool const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__hasAllPermissions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasAllPermissions;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__hasAllPermissions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasAllPermissions = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__featurePrefab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featurePrefab;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__featurePrefab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featurePrefab;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__featurePrefab(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featurePrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__featureRootTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureRootTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__featureRootTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureRootTransform;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__featureRootTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureRootTransform = value;
}
constexpr ::ArrayW<::GlobalNamespace::EKIDFeatures>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__displayOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayOrder;
}
constexpr ::ArrayW<::GlobalNamespace::EKIDFeatures> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__displayOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayOrder;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__displayOrder(::ArrayW<::GlobalNamespace::EKIDFeatures>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____displayOrder = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>*& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__featureSetups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureSetups;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>* const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__featureSetups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____featureSetups;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__featureSetups(::System::Collections::Generic::List_1<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____featureSetups = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__voiceChatLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceChatLabel;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__voiceChatLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceChatLabel;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__voiceChatLabel(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceChatLabel = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__permissionsTip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____permissionsTip;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__permissionsTip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____permissionsTip;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__permissionsTip(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____permissionsTip = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__titleFeaturePermissions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleFeaturePermissions;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__titleFeaturePermissions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleFeaturePermissions;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__titleFeaturePermissions(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____titleFeaturePermissions = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__titleGameFeatures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleGameFeatures;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__titleGameFeatures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____titleGameFeatures;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__titleGameFeatures(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____titleGameFeatures = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__missingStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missingStatus;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__missingStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missingStatus;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__missingStatus(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____missingStatus = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__updatedStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updatedStatus;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__updatedStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____updatedStatus;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__updatedStatus(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____updatedStatus = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__declinedStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____declinedStatus;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__declinedStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____declinedStatus;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__declinedStatus(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____declinedStatus = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__pendingStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingStatus;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__pendingStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingStatus;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__pendingStatus(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingStatus = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__timeoutStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeoutStatus;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__timeoutStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____timeoutStatus;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__timeoutStatus(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____timeoutStatus = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__setupRequiredStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupRequiredStatus;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__setupRequiredStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____setupRequiredStatus;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__setupRequiredStatus(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____setupRequiredStatus = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__fullPlayerControlStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fullPlayerControlStatus;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__fullPlayerControlStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fullPlayerControlStatus;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__fullPlayerControlStatus(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fullPlayerControlStatus = value;
}
constexpr ::StringW& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__emailAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailAddress;
}
constexpr ::StringW const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__emailAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emailAddress;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__emailAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emailAddress = value;
}
constexpr bool& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__multiplayerEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiplayerEnabled;
}
constexpr bool const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__multiplayerEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiplayerEnabled;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__multiplayerEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____multiplayerEnabled = value;
}
constexpr bool& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__customNameEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customNameEnabled;
}
constexpr bool const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__customNameEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customNameEnabled;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__customNameEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customNameEnabled = value;
}
constexpr bool& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__voiceChatEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceChatEnabled;
}
constexpr bool const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__voiceChatEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____voiceChatEnabled;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__voiceChatEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____voiceChatEnabled = value;
}
constexpr bool& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__initialised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialised;
}
constexpr bool const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__initialised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialised;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__initialised(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialised = value;
}
constexpr ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__mainScreenOpenedReason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainScreenOpenedReason;
}
constexpr ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__mainScreenOpenedReason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mainScreenOpenedReason;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__mainScreenOpenedReason(::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mainScreenOpenedReason = value;
}
constexpr ::GlobalNamespace::EMainScreenStatus& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__screenStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenStatus;
}
constexpr ::GlobalNamespace::EMainScreenStatus const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__screenStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____screenStatus;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__screenStatus(::GlobalNamespace::EMainScreenStatus  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____screenStatus = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__eventSystemObj()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventSystemObj;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::KIDUI_MainScreen::__cordl_internal_get__eventSystemObj() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventSystemObj;
}
constexpr void GlobalNamespace::KIDUI_MainScreen::__cordl_internal_set__eventSystemObj(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventSystemObj = value;
}
inline void GlobalNamespace::KIDUI_MainScreen::setStaticF_ShownSettingsScreen(bool  value)  {
::cordl_internals::setStaticField<bool, "ShownSettingsScreen", ::GlobalNamespace::KIDUI_MainScreen*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDUI_MainScreen::getStaticF_ShownSettingsScreen()  {
return ::cordl_internals::getStaticField<bool, "ShownSettingsScreen", ::GlobalNamespace::KIDUI_MainScreen*>();
}
inline void GlobalNamespace::KIDUI_MainScreen::setStaticF__featuresList(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::KIDUIFeatureSetting>>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::KIDUIFeatureSetting>>*>*, "_featuresList", ::GlobalNamespace::KIDUI_MainScreen*>(std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::KIDUIFeatureSetting>>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::KIDUIFeatureSetting>>*>* GlobalNamespace::KIDUI_MainScreen::getStaticF__featuresList()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EKIDFeatures,::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::KIDUIFeatureSetting>>*>*, "_featuresList", ::GlobalNamespace::KIDUI_MainScreen*>();
}
inline void GlobalNamespace::KIDUI_MainScreen::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::ConstructFeatureSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"ConstructFeatureSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::CreateNewFeatureDisplay(::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup  setup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"CreateNewFeatureDisplay", {}, {::i2c::type_of<::GlobalNamespace::KIDUI_MainScreen_FeatureToggleSetup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, setup);
}
inline void GlobalNamespace::KIDUI_MainScreen::ConstructAdditionalSetup(::GlobalNamespace::EKIDFeatures  feature, ::UnityEngine::GameObject*  featureObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"ConstructAdditionalSetup", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature, featureObject);
}
inline void GlobalNamespace::KIDUI_MainScreen::UpdatePermissionsAndFeaturesScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"UpdatePermissionsAndFeaturesScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::KIDUI_MainScreen::IsFeatureToggledOn(::GlobalNamespace::EKIDFeatures  permissionFeature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"IsFeatureToggledOn", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, permissionFeature);
}
inline void GlobalNamespace::KIDUI_MainScreen::InitialiseMainScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"InitialiseMainScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::ShowMainScreen(::GlobalNamespace::EMainScreenStatus  showStatus, ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason  reason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"ShowMainScreen", {}, {::i2c::type_of<::GlobalNamespace::EMainScreenStatus>(), ::i2c::type_of<::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showStatus, reason);
}
inline void GlobalNamespace::KIDUI_MainScreen::ShowMainScreen(::GlobalNamespace::EMainScreenStatus  showStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"ShowMainScreen", {}, {::i2c::type_of<::GlobalNamespace::EMainScreenStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showStatus);
}
inline void GlobalNamespace::KIDUI_MainScreen::UpdateScreenStatus(::GlobalNamespace::EMainScreenStatus  showStatus, bool  sendMetrics)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"UpdateScreenStatus", {}, {::i2c::type_of<::GlobalNamespace::EMainScreenStatus>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, showStatus, sendMetrics);
}
inline void GlobalNamespace::KIDUI_MainScreen::HideMainScreen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"HideMainScreen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::OnAskForPermission()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnAskForPermission", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::OnSaveAndExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnSaveAndExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::KIDUI_MainScreen::GetFeatureListingCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"GetFeatureListingCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::KIDUI_MainScreen::UpdateAndCheckForMissingPermissions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"UpdateAndCheckForMissingPermissions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::OnLanguageChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnLanguageChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::UpdateOptInSetting(::KID::Model::Permission*  permissionData, ::GlobalNamespace::EKIDFeatures  feature, ::System::Action_3<bool,::KID::Model::Permission*,bool>*  onOptedIn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"UpdateOptInSetting", {}, {::i2c::type_of<::KID::Model::Permission*>(), ::i2c::type_of<::GlobalNamespace::EKIDFeatures>(), ::i2c::type_of<::System::Action_3<bool,::KID::Model::Permission*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permissionData, feature, onOptedIn);
}
inline void GlobalNamespace::KIDUI_MainScreen::OnConfirmedEmailAddress(::StringW  emailAddress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnConfirmedEmailAddress", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emailAddress);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* GlobalNamespace::KIDUI_MainScreen::CollectPermissionsToUpgrade()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"CollectPermissionsToUpgrade", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::ConfigurePermissionsButtons()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"ConfigurePermissionsButtons", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::SetButtonContainersVisibility(::GlobalNamespace::EGetPermissionsStatus  permissionStatus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"SetButtonContainersVisibility", {}, {::i2c::type_of<::GlobalNamespace::EGetPermissionsStatus>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, permissionStatus);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::KIDUI_MainScreen::GetActiveStatusObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"GetActiveStatusObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::GlobalNamespace::EGetPermissionsStatus GlobalNamespace::KIDUI_MainScreen::GetPermissionState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"GetPermissionState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EGetPermissionsStatus>(nullptr, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::OnFeatureToggleChanged(::GlobalNamespace::EKIDFeatures  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnFeatureToggleChanged", {}, {::i2c::type_of<::GlobalNamespace::EKIDFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, feature);
}
inline void GlobalNamespace::KIDUI_MainScreen::OnMultiplayerToggled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnMultiplayerToggled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::OnVoiceChatToggled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnVoiceChatToggled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::OnGroupToggleChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnGroupToggleChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::OnModToggleChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnModToggleChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::OnCustomNametagsToggled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {"OnCustomNametagsToggled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUI_MainScreen* GlobalNamespace::KIDUI_MainScreen::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_MainScreen*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_MainScreen::KIDUI_MainScreen()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::*)()>(&::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a59dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0._UpdateAndCheckForMissingPermissions_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::*)(bool)>(&::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::_UpdateAndCheckForMissingPermissions_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5a59dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0*>(),
                        {"<UpdateAndCheckForMissingPermissions>b__0", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::__cordl_internal_get_hasUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasUpdated;
}
constexpr bool const& GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::__cordl_internal_get_hasUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasUpdated;
}
constexpr void GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::__cordl_internal_set_hasUpdated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasUpdated = value;
}
constexpr bool& GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::__cordl_internal_get_wasSuccess()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSuccess;
}
constexpr bool const& GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::__cordl_internal_get_wasSuccess() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wasSuccess;
}
constexpr void GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::__cordl_internal_set_wasSuccess(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wasSuccess = value;
}
inline void GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::_UpdateAndCheckForMissingPermissions_b__0(bool  success)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0*>(),
                        {"<UpdateAndCheckForMissingPermissions>b__0", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success);
}
inline ::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0* GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_MainScreen___c__DisplayClass55_0::KIDUI_MainScreen___c__DisplayClass55_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen___c::*)()>(&::GlobalNamespace::KIDUI_MainScreen___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a59c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen___c._OnSaveAndExit_b__53_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen___c::*)(bool, ::KID::Model::Permission*, bool)>(&::GlobalNamespace::KIDUI_MainScreen___c::_OnSaveAndExit_b__53_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a59c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c*>(),
                        {"<OnSaveAndExit>b__53_0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::KID::Model::Permission*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen___c._OnSaveAndExit_b__53_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUI_MainScreen___c::*)(bool, ::KID::Model::Permission*, bool)>(&::GlobalNamespace::KIDUI_MainScreen___c::_OnSaveAndExit_b__53_1)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a59cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c*>(),
                        {"<OnSaveAndExit>b__53_1", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::KID::Model::Permission*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen___c._CollectPermissionsToUpgrade_b__59_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KIDUI_MainScreen___c::*)(::KID::Model::Permission*)>(&::GlobalNamespace::KIDUI_MainScreen___c::_CollectPermissionsToUpgrade_b__59_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5a59d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c*>(),
                        {"<CollectPermissionsToUpgrade>b__59_0", {}, {::i2c::type_of<::KID::Model::Permission*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUI_MainScreen___c._CollectPermissionsToUpgrade_b__59_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::KIDUI_MainScreen___c::*)(::KID::Model::Permission*)>(&::GlobalNamespace::KIDUI_MainScreen___c::_CollectPermissionsToUpgrade_b__59_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a59dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c*>(),
                        {"<CollectPermissionsToUpgrade>b__59_1", {}, {::i2c::type_of<::KID::Model::Permission*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::KIDUI_MainScreen___c::setStaticF___9(::GlobalNamespace::KIDUI_MainScreen___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::KIDUI_MainScreen___c*, "<>9", ::GlobalNamespace::KIDUI_MainScreen___c*>(std::forward<::GlobalNamespace::KIDUI_MainScreen___c*>(value));
}
inline ::GlobalNamespace::KIDUI_MainScreen___c* GlobalNamespace::KIDUI_MainScreen___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::KIDUI_MainScreen___c*, "<>9", ::GlobalNamespace::KIDUI_MainScreen___c*>();
}
inline void GlobalNamespace::KIDUI_MainScreen___c::setStaticF___9__53_0(::System::Action_3<bool,::KID::Model::Permission*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<bool,::KID::Model::Permission*,bool>*, "<>9__53_0", ::GlobalNamespace::KIDUI_MainScreen___c*>(std::forward<::System::Action_3<bool,::KID::Model::Permission*,bool>*>(value));
}
inline ::System::Action_3<bool,::KID::Model::Permission*,bool>* GlobalNamespace::KIDUI_MainScreen___c::getStaticF___9__53_0()  {
return ::cordl_internals::getStaticField<::System::Action_3<bool,::KID::Model::Permission*,bool>*, "<>9__53_0", ::GlobalNamespace::KIDUI_MainScreen___c*>();
}
inline void GlobalNamespace::KIDUI_MainScreen___c::setStaticF___9__53_1(::System::Action_3<bool,::KID::Model::Permission*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Action_3<bool,::KID::Model::Permission*,bool>*, "<>9__53_1", ::GlobalNamespace::KIDUI_MainScreen___c*>(std::forward<::System::Action_3<bool,::KID::Model::Permission*,bool>*>(value));
}
inline ::System::Action_3<bool,::KID::Model::Permission*,bool>* GlobalNamespace::KIDUI_MainScreen___c::getStaticF___9__53_1()  {
return ::cordl_internals::getStaticField<::System::Action_3<bool,::KID::Model::Permission*,bool>*, "<>9__53_1", ::GlobalNamespace::KIDUI_MainScreen___c*>();
}
inline void GlobalNamespace::KIDUI_MainScreen___c::setStaticF___9__59_0(::System::Func_2<::KID::Model::Permission*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::KID::Model::Permission*,bool>*, "<>9__59_0", ::GlobalNamespace::KIDUI_MainScreen___c*>(std::forward<::System::Func_2<::KID::Model::Permission*,bool>*>(value));
}
inline ::System::Func_2<::KID::Model::Permission*,bool>* GlobalNamespace::KIDUI_MainScreen___c::getStaticF___9__59_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::KID::Model::Permission*,bool>*, "<>9__59_0", ::GlobalNamespace::KIDUI_MainScreen___c*>();
}
inline void GlobalNamespace::KIDUI_MainScreen___c::setStaticF___9__59_1(::System::Func_2<::KID::Model::Permission*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::KID::Model::Permission*,::StringW>*, "<>9__59_1", ::GlobalNamespace::KIDUI_MainScreen___c*>(std::forward<::System::Func_2<::KID::Model::Permission*,::StringW>*>(value));
}
inline ::System::Func_2<::KID::Model::Permission*,::StringW>* GlobalNamespace::KIDUI_MainScreen___c::getStaticF___9__59_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::KID::Model::Permission*,::StringW>*, "<>9__59_1", ::GlobalNamespace::KIDUI_MainScreen___c*>();
}
inline void GlobalNamespace::KIDUI_MainScreen___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUI_MainScreen___c::_OnSaveAndExit_b__53_0(bool  b, ::KID::Model::Permission*  p, bool  hasOptedInPreviously)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c*>(),
                        {"<OnSaveAndExit>b__53_0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::KID::Model::Permission*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b, p, hasOptedInPreviously);
}
inline void GlobalNamespace::KIDUI_MainScreen___c::_OnSaveAndExit_b__53_1(bool  b, ::KID::Model::Permission*  p, bool  hasOptedInPreviously)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c*>(),
                        {"<OnSaveAndExit>b__53_1", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::KID::Model::Permission*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, b, p, hasOptedInPreviously);
}
inline bool GlobalNamespace::KIDUI_MainScreen___c::_CollectPermissionsToUpgrade_b__59_0(::KID::Model::Permission*  permission)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c*>(),
                        {"<CollectPermissionsToUpgrade>b__59_0", {}, {::i2c::type_of<::KID::Model::Permission*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, permission);
}
inline ::StringW GlobalNamespace::KIDUI_MainScreen___c::_CollectPermissionsToUpgrade_b__59_1(::KID::Model::Permission*  permission)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUI_MainScreen___c*>(),
                        {"<CollectPermissionsToUpgrade>b__59_1", {}, {::i2c::type_of<::KID::Model::Permission*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, permission);
}
inline ::GlobalNamespace::KIDUI_MainScreen___c* GlobalNamespace::KIDUI_MainScreen___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUI_MainScreen___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUI_MainScreen___c::KIDUI_MainScreen___c()   {
}
