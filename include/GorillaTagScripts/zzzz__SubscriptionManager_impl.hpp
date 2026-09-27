#pragma once
// IWYU pragma private; include "GorillaTagScripts/SubscriptionManager.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionDetails_impl.hpp"
#include "System/zzzz__DateTimeOffset_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionDetails_def.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionFeatures_def.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionStatus_def.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_SubscriptionTerm_def.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager__Awake_d__29_def.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager__InitializePersonalSubscriptionData_d__37_def.hpp"
#include "GorillaTagScripts/zzzz__SubscriptionManager_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.get_LocalSubscriptionDataInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::SubscriptionManager::get_LocalSubscriptionDataInitialized)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bd414c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"get_LocalSubscriptionDataInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.get_LocalSubscriptionDataResolved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::SubscriptionManager::get_LocalSubscriptionDataResolved)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5bd41a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"get_LocalSubscriptionDataResolved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.get_SubsOnlyMatchmaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::SubscriptionManager::get_SubsOnlyMatchmaking)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5bd41fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"get_SubsOnlyMatchmaking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.set_SubsOnlyMatchmaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaTagScripts::SubscriptionManager::set_SubsOnlyMatchmaking)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5bd424c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"set_SubsOnlyMatchmaking", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.GetSubsFeatureKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures)>(&::GorillaTagScripts::SubscriptionManager::GetSubsFeatureKey)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bd42a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetSubsFeatureKey", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SubscriptionManager::*)()>(&::GorillaTagScripts::SubscriptionManager::Awake)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5bd431c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SubscriptionManager::*)()>(&::GorillaTagScripts::SubscriptionManager::OnEnable)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5bd43c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.InitializePersonalSubscriptionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::SubscriptionManager::InitializePersonalSubscriptionData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5bd4540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"InitializePersonalSubscriptionData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SubscriptionManager::*)()>(&::GorillaTagScripts::SubscriptionManager::OnDisable)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5bd45d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.GetSubscriptionDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubscriptionManager_SubscriptionDetails (*)(::GlobalNamespace::VRRig*)>(&::GorillaTagScripts::SubscriptionManager::GetSubscriptionDetails)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x5bd4720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetSubscriptionDetails", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.GetSubscriptionDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubscriptionManager_SubscriptionDetails (*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::SubscriptionManager::GetSubscriptionDetails)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5bd4890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetSubscriptionDetails", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.IsPlayerSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::VRRig*)>(&::GorillaTagScripts::SubscriptionManager::IsPlayerSubscribed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bd49bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"IsPlayerSubscribed", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.IsPlayerSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::SubscriptionManager::IsPlayerSubscribed)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bd4a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"IsPlayerSubscribed", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.GetSubscriptionDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubscriptionManager_SubscriptionDetails (*)()>(&::GorillaTagScripts::SubscriptionManager::GetSubscriptionDetails)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5bd4a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetSubscriptionDetails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.LocalSubscriptionStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubscriptionManager_SubscriptionStatus (*)()>(&::GorillaTagScripts::SubscriptionManager::LocalSubscriptionStatus)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5bd4c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"LocalSubscriptionStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.LocalSubscriptionDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SubscriptionManager_SubscriptionDetails (*)()>(&::GorillaTagScripts::SubscriptionManager::LocalSubscriptionDetails)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5bd4d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"LocalSubscriptionDetails", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.IsLocalSubscribed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTagScripts::SubscriptionManager::IsLocalSubscribed)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5bd4e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"IsLocalSubscribed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.ForceRecheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::SubscriptionManager::ForceRecheck)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bd5048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"ForceRecheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.OnPlayerJoinedRoom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SubscriptionManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::SubscriptionManager::OnPlayerJoinedRoom)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5bd50a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"OnPlayerJoinedRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.UpdatePlayerSubsDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SubscriptionManager::*)(::GlobalNamespace::NetPlayer*, ::System::Nullable_1<bool>, ::System::Nullable_1<int32_t>)>(&::GorillaTagScripts::SubscriptionManager::UpdatePlayerSubsDetails)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5bd524c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"UpdatePlayerSubsDetails", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::System::Nullable_1<bool>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.OnPlayerLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SubscriptionManager::*)(::GlobalNamespace::NetPlayer*)>(&::GorillaTagScripts::SubscriptionManager::OnPlayerLeft)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5bd54c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.GetLowestNetPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NetPlayer* (::GorillaTagScripts::SubscriptionManager::*)(::ArrayW<::GlobalNamespace::NetPlayer*>)>(&::GorillaTagScripts::SubscriptionManager::GetLowestNetPlayer)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5bd5748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetLowestNetPlayer", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::NetPlayer*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.OnGetViewerPurchasesStartup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SubscriptionManager::*)(::Oculus::Platform::Message*)>(&::GorillaTagScripts::SubscriptionManager::OnGetViewerPurchasesStartup)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x5bd5804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"OnGetViewerPurchasesStartup", {}, {::i2c::type_of<::Oculus::Platform::Message*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.SetSubscriptionSettingValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures, int32_t)>(&::GorillaTagScripts::SubscriptionManager::SetSubscriptionSettingValue)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5bd5cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"SetSubscriptionSettingValue", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.GetSubscriptionSettingValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures)>(&::GorillaTagScripts::SubscriptionManager::GetSubscriptionSettingValue)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x5bd5d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetSubscriptionSettingValue", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.GetSubscriptionSettingBool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures)>(&::GorillaTagScripts::SubscriptionManager::GetSubscriptionSettingBool)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5bd5ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetSubscriptionSettingBool", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.IsSubscriptionFeatureAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures)>(&::GorillaTagScripts::SubscriptionManager::IsSubscriptionFeatureAvailable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5bd5f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"IsSubscriptionFeatureAvailable", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.CheckSubscriptionFeaturePermission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures)>(&::GorillaTagScripts::SubscriptionManager::CheckSubscriptionFeaturePermission)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5bd5fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"CheckSubscriptionFeaturePermission", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.OnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::SubscriptionManager::OnLoad)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bd6008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"OnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager.UpdatePlayerSubscriptionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NetPlayer*, bool, int32_t)>(&::GorillaTagScripts::SubscriptionManager::UpdatePlayerSubscriptionData)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5bd600c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"UpdatePlayerSubscriptionData", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SubscriptionManager::*)()>(&::GorillaTagScripts::SubscriptionManager::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5bd6210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager._InitializePersonalSubscriptionData_g__MarkInitialized_37_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::SubscriptionManager::_InitializePersonalSubscriptionData_g__MarkInitialized_37_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5bd63ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"<InitializePersonalSubscriptionData>g__MarkInitialized|37_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager._InitializePersonalSubscriptionData_g__MarkResolved_37_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTagScripts::SubscriptionManager::_InitializePersonalSubscriptionData_g__MarkResolved_37_1)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5bd6430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"<InitializePersonalSubscriptionData>g__MarkResolved|37_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::SubscriptionManager_SubscriptionDetails>*& GorillaTagScripts::SubscriptionManager::__cordl_internal_get_subData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subData;
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::SubscriptionManager_SubscriptionDetails>* const& GorillaTagScripts::SubscriptionManager::__cordl_internal_get_subData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___subData;
}
constexpr void GorillaTagScripts::SubscriptionManager::__cordl_internal_set_subData(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetPlayer*,::GlobalNamespace::SubscriptionManager_SubscriptionDetails>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___subData = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::GlobalNamespace::NetPlayer*>*& GorillaTagScripts::SubscriptionManager::__cordl_internal_get_rigs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigs;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::GlobalNamespace::NetPlayer*>* const& GorillaTagScripts::SubscriptionManager::__cordl_internal_get_rigs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigs;
}
constexpr void GorillaTagScripts::SubscriptionManager::__cordl_internal_set_rigs(::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::VRRig>,::GlobalNamespace::NetPlayer*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigs = value;
}
constexpr int32_t& GorillaTagScripts::SubscriptionManager::__cordl_internal_get_attempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attempts;
}
constexpr int32_t const& GorillaTagScripts::SubscriptionManager::__cordl_internal_get_attempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___attempts;
}
constexpr void GorillaTagScripts::SubscriptionManager::__cordl_internal_set_attempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___attempts = value;
}
inline void GorillaTagScripts::SubscriptionManager::setStaticF_SUBSCRIBER_NAME_COLOR(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "SUBSCRIBER_NAME_COLOR", ::GorillaTagScripts::SubscriptionManager*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color GorillaTagScripts::SubscriptionManager::getStaticF_SUBSCRIBER_NAME_COLOR()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "SUBSCRIBER_NAME_COLOR", ::GorillaTagScripts::SubscriptionManager*>();
}
inline void GorillaTagScripts::SubscriptionManager::setStaticF_DEFAULT_SEND_RATE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "DEFAULT_SEND_RATE", ::GorillaTagScripts::SubscriptionManager*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::SubscriptionManager::getStaticF_DEFAULT_SEND_RATE()  {
return ::cordl_internals::getStaticField<int32_t, "DEFAULT_SEND_RATE", ::GorillaTagScripts::SubscriptionManager*>();
}
inline void GorillaTagScripts::SubscriptionManager::setStaticF_PERF_CHANGE_ROOMSIZE(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "PERF_CHANGE_ROOMSIZE", ::GorillaTagScripts::SubscriptionManager*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::SubscriptionManager::getStaticF_PERF_CHANGE_ROOMSIZE()  {
return ::cordl_internals::getStaticField<int32_t, "PERF_CHANGE_ROOMSIZE", ::GorillaTagScripts::SubscriptionManager*>();
}
inline void GorillaTagScripts::SubscriptionManager::setStaticF_Instance(::UnityW<::GorillaTagScripts::SubscriptionManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::GorillaTagScripts::SubscriptionManager>, "Instance", ::GorillaTagScripts::SubscriptionManager*>(std::forward<::UnityW<::GorillaTagScripts::SubscriptionManager>>(value));
}
inline ::UnityW<::GorillaTagScripts::SubscriptionManager> GorillaTagScripts::SubscriptionManager::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GorillaTagScripts::SubscriptionManager>, "Instance", ::GorillaTagScripts::SubscriptionManager*>();
}
inline void GorillaTagScripts::SubscriptionManager::setStaticF_OnSubscriptionData(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnSubscriptionData", ::GorillaTagScripts::SubscriptionManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GorillaTagScripts::SubscriptionManager::getStaticF_OnSubscriptionData()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnSubscriptionData", ::GorillaTagScripts::SubscriptionManager*>();
}
inline void GorillaTagScripts::SubscriptionManager::setStaticF_OnLocalSubscriptionData(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnLocalSubscriptionData", ::GorillaTagScripts::SubscriptionManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GorillaTagScripts::SubscriptionManager::getStaticF_OnLocalSubscriptionData()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnLocalSubscriptionData", ::GorillaTagScripts::SubscriptionManager*>();
}
inline void GorillaTagScripts::SubscriptionManager::setStaticF_OnLocalSubscriptionDataResolved(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnLocalSubscriptionDataResolved", ::GorillaTagScripts::SubscriptionManager*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* GorillaTagScripts::SubscriptionManager::getStaticF_OnLocalSubscriptionDataResolved()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnLocalSubscriptionDataResolved", ::GorillaTagScripts::SubscriptionManager*>();
}
inline void GorillaTagScripts::SubscriptionManager::setStaticF_localSubscriptionDetails(::GlobalNamespace::SubscriptionManager_SubscriptionDetails  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::SubscriptionManager_SubscriptionDetails, "localSubscriptionDetails", ::GorillaTagScripts::SubscriptionManager*>(std::forward<::GlobalNamespace::SubscriptionManager_SubscriptionDetails>(value));
}
inline ::GlobalNamespace::SubscriptionManager_SubscriptionDetails GorillaTagScripts::SubscriptionManager::getStaticF_localSubscriptionDetails()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::SubscriptionManager_SubscriptionDetails, "localSubscriptionDetails", ::GorillaTagScripts::SubscriptionManager*>();
}
inline void GorillaTagScripts::SubscriptionManager::setStaticF__localSubscriptionDataInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "_localSubscriptionDataInitialized", ::GorillaTagScripts::SubscriptionManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::SubscriptionManager::getStaticF__localSubscriptionDataInitialized()  {
return ::cordl_internals::getStaticField<bool, "_localSubscriptionDataInitialized", ::GorillaTagScripts::SubscriptionManager*>();
}
inline void GorillaTagScripts::SubscriptionManager::setStaticF__localSubscriptionDataResolved(bool  value)  {
::cordl_internals::setStaticField<bool, "_localSubscriptionDataResolved", ::GorillaTagScripts::SubscriptionManager*>(std::forward<bool>(value));
}
inline bool GorillaTagScripts::SubscriptionManager::getStaticF__localSubscriptionDataResolved()  {
return ::cordl_internals::getStaticField<bool, "_localSubscriptionDataResolved", ::GorillaTagScripts::SubscriptionManager*>();
}
inline void GorillaTagScripts::SubscriptionManager::setStaticF_SUBS_KEYS(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "SUBS_KEYS", ::GorillaTagScripts::SubscriptionManager*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> GorillaTagScripts::SubscriptionManager::getStaticF_SUBS_KEYS()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "SUBS_KEYS", ::GorillaTagScripts::SubscriptionManager*>();
}
inline void GorillaTagScripts::SubscriptionManager::setStaticF_maxRetries(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "maxRetries", ::GorillaTagScripts::SubscriptionManager*>(std::forward<int32_t>(value));
}
inline int32_t GorillaTagScripts::SubscriptionManager::getStaticF_maxRetries()  {
return ::cordl_internals::getStaticField<int32_t, "maxRetries", ::GorillaTagScripts::SubscriptionManager*>();
}
inline void GorillaTagScripts::SubscriptionManager::setStaticF_subSettings(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "subSettings", ::GorillaTagScripts::SubscriptionManager*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,int32_t>* GorillaTagScripts::SubscriptionManager::getStaticF_subSettings()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*, "subSettings", ::GorillaTagScripts::SubscriptionManager*>();
}
inline bool GorillaTagScripts::SubscriptionManager::get_LocalSubscriptionDataInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"get_LocalSubscriptionDataInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::SubscriptionManager::get_LocalSubscriptionDataResolved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"get_LocalSubscriptionDataResolved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::SubscriptionManager::get_SubsOnlyMatchmaking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"get_SubsOnlyMatchmaking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::SubscriptionManager::set_SubsOnlyMatchmaking(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"set_SubsOnlyMatchmaking", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW GorillaTagScripts::SubscriptionManager::GetSubsFeatureKey(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetSubsFeatureKey", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, feature);
}
inline void GorillaTagScripts::SubscriptionManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::SubscriptionManager::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::SubscriptionManager::InitializePersonalSubscriptionData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"InitializePersonalSubscriptionData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::SubscriptionManager::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SubscriptionManager_SubscriptionDetails GorillaTagScripts::SubscriptionManager::GetSubscriptionDetails(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetSubscriptionDetails", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubscriptionManager_SubscriptionDetails>(nullptr, ___internal_method, rig);
}
inline ::GlobalNamespace::SubscriptionManager_SubscriptionDetails GorillaTagScripts::SubscriptionManager::GetSubscriptionDetails(::GlobalNamespace::NetPlayer*  np)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetSubscriptionDetails", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubscriptionManager_SubscriptionDetails>(nullptr, ___internal_method, np);
}
inline bool GorillaTagScripts::SubscriptionManager::IsPlayerSubscribed(::GlobalNamespace::VRRig*  rig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"IsPlayerSubscribed", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rig);
}
inline bool GorillaTagScripts::SubscriptionManager::IsPlayerSubscribed(::GlobalNamespace::NetPlayer*  np)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"IsPlayerSubscribed", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, np);
}
inline ::GlobalNamespace::SubscriptionManager_SubscriptionDetails GorillaTagScripts::SubscriptionManager::GetSubscriptionDetails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetSubscriptionDetails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubscriptionManager_SubscriptionDetails>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SubscriptionManager_SubscriptionStatus GorillaTagScripts::SubscriptionManager::LocalSubscriptionStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"LocalSubscriptionStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubscriptionManager_SubscriptionStatus>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SubscriptionManager_SubscriptionDetails GorillaTagScripts::SubscriptionManager::LocalSubscriptionDetails()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"LocalSubscriptionDetails", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SubscriptionManager_SubscriptionDetails>(nullptr, ___internal_method);
}
inline bool GorillaTagScripts::SubscriptionManager::IsLocalSubscribed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"IsLocalSubscribed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::SubscriptionManager::ForceRecheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"ForceRecheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::SubscriptionManager::OnPlayerJoinedRoom(::GlobalNamespace::NetPlayer*  npl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"OnPlayerJoinedRoom", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, npl);
}
inline void GorillaTagScripts::SubscriptionManager::UpdatePlayerSubsDetails(::GlobalNamespace::NetPlayer*  player, ::System::Nullable_1<bool>  isSubscribed, ::System::Nullable_1<int32_t>  daysAccrued)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"UpdatePlayerSubsDetails", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<::System::Nullable_1<bool>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, isSubscribed, daysAccrued);
}
inline void GorillaTagScripts::SubscriptionManager::OnPlayerLeft(::GlobalNamespace::NetPlayer*  pl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"OnPlayerLeft", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pl);
}
inline ::GlobalNamespace::NetPlayer* GorillaTagScripts::SubscriptionManager::GetLowestNetPlayer(::ArrayW<::GlobalNamespace::NetPlayer*>  players)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetLowestNetPlayer", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::NetPlayer*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NetPlayer*>(this, ___internal_method, players);
}
inline void GorillaTagScripts::SubscriptionManager::OnGetViewerPurchasesStartup(::Oculus::Platform::Message*  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"OnGetViewerPurchasesStartup", {}, {::i2c::type_of<::Oculus::Platform::Message*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void GorillaTagScripts::SubscriptionManager::SetSubscriptionSettingValue(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature, int32_t  settingValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"SetSubscriptionSettingValue", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, feature, settingValue);
}
inline int32_t GorillaTagScripts::SubscriptionManager::GetSubscriptionSettingValue(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetSubscriptionSettingValue", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, feature);
}
inline bool GorillaTagScripts::SubscriptionManager::GetSubscriptionSettingBool(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"GetSubscriptionSettingBool", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, feature);
}
inline bool GorillaTagScripts::SubscriptionManager::IsSubscriptionFeatureAvailable(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"IsSubscriptionFeatureAvailable", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, feature);
}
inline bool GorillaTagScripts::SubscriptionManager::CheckSubscriptionFeaturePermission(::GlobalNamespace::SubscriptionManager_SubscriptionFeatures  feature)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"CheckSubscriptionFeaturePermission", {}, {::i2c::type_of<::GlobalNamespace::SubscriptionManager_SubscriptionFeatures>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, feature);
}
inline void GorillaTagScripts::SubscriptionManager::OnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"OnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::SubscriptionManager::UpdatePlayerSubscriptionData(::GlobalNamespace::NetPlayer*  player, bool  isSubscribed, int32_t  daysAccrued)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"UpdatePlayerSubscriptionData", {}, {::i2c::type_of<::GlobalNamespace::NetPlayer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, isSubscribed, daysAccrued);
}
inline void GorillaTagScripts::SubscriptionManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::SubscriptionManager::_InitializePersonalSubscriptionData_g__MarkInitialized_37_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"<InitializePersonalSubscriptionData>g__MarkInitialized|37_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GorillaTagScripts::SubscriptionManager::_InitializePersonalSubscriptionData_g__MarkResolved_37_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager*>(),
                        {"<InitializePersonalSubscriptionData>g__MarkResolved|37_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GorillaTagScripts::SubscriptionManager* GorillaTagScripts::SubscriptionManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::SubscriptionManager*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::SubscriptionManager::SubscriptionManager()   {
}
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::*)()>(&::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bd64c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription*>*& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::__cordl_internal_get_Subscriptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Subscriptions;
}
constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription*>* const& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::__cordl_internal_get_Subscriptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Subscriptions;
}
constexpr void GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::__cordl_internal_set_Subscriptions(::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Subscriptions = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::__cordl_internal_get_PreviouslyGrantedBenefitsBySubscriptionSku()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviouslyGrantedBenefitsBySubscriptionSku;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>* const& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::__cordl_internal_get_PreviouslyGrantedBenefitsBySubscriptionSku() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviouslyGrantedBenefitsBySubscriptionSku;
}
constexpr void GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::__cordl_internal_set_PreviouslyGrantedBenefitsBySubscriptionSku(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviouslyGrantedBenefitsBySubscriptionSku = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::__cordl_internal_get_NewlyGrantedBenefitsBySubscriptionSku()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewlyGrantedBenefitsBySubscriptionSku;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>* const& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::__cordl_internal_get_NewlyGrantedBenefitsBySubscriptionSku() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NewlyGrantedBenefitsBySubscriptionSku;
}
constexpr void GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::__cordl_internal_set_NewlyGrantedBenefitsBySubscriptionSku(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NewlyGrantedBenefitsBySubscriptionSku = value;
}
constexpr ::System::Nullable_1<bool>& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::__cordl_internal_get_SharedGroupDataUpdateSucceeded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedGroupDataUpdateSucceeded;
}
constexpr ::System::Nullable_1<bool> const& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::__cordl_internal_get_SharedGroupDataUpdateSucceeded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SharedGroupDataUpdateSucceeded;
}
constexpr void GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::__cordl_internal_set_SharedGroupDataUpdateSucceeded(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SharedGroupDataUpdateSucceeded = value;
}
inline void GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse* GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsResponse()   {
}
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::*)()>(&::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bd64bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_Refresh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Refresh;
}
constexpr bool const& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_Refresh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Refresh;
}
constexpr void GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_set_Refresh(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Refresh = value;
}
constexpr ::System::Nullable_1<bool>& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_SkipBenefitsCheck()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipBenefitsCheck;
}
constexpr ::System::Nullable_1<bool> const& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_SkipBenefitsCheck() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipBenefitsCheck;
}
constexpr void GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_set_SkipBenefitsCheck(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipBenefitsCheck = value;
}
constexpr ::System::Nullable_1<bool>& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_SkipSharedGroupDataUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipSharedGroupDataUpdate;
}
constexpr ::System::Nullable_1<bool> const& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_SkipSharedGroupDataUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipSharedGroupDataUpdate;
}
constexpr void GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_set_SkipSharedGroupDataUpdate(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipSharedGroupDataUpdate = value;
}
constexpr ::StringW& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_MothershipId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr ::StringW const& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_MothershipId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipId;
}
constexpr void GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_set_MothershipId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipId = value;
}
constexpr ::StringW& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_MothershipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr ::StringW const& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_MothershipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipToken;
}
constexpr void GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_set_MothershipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipToken = value;
}
constexpr ::StringW& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_MothershipEnvId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipEnvId;
}
constexpr ::StringW const& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_MothershipEnvId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipEnvId;
}
constexpr void GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_set_MothershipEnvId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipEnvId = value;
}
constexpr ::StringW& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_MothershipDeploymentId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipDeploymentId;
}
constexpr ::StringW const& GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_get_MothershipDeploymentId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MothershipDeploymentId;
}
constexpr void GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::__cordl_internal_set_MothershipDeploymentId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MothershipDeploymentId = value;
}
inline void GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest* GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest::SubscriptionManager_GetMySubscriptionsAndTheirBenefitsRequest()   {
}
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::*)()>(&::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bd64b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::__cordl_internal_get_BenefitId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BenefitId;
}
constexpr ::StringW const& GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::__cordl_internal_get_BenefitId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BenefitId;
}
constexpr void GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::__cordl_internal_set_BenefitId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BenefitId = value;
}
constexpr ::System::DateTimeOffset& GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::__cordl_internal_get_GrantedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrantedTime;
}
constexpr ::System::DateTimeOffset const& GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::__cordl_internal_get_GrantedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GrantedTime;
}
constexpr void GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::__cordl_internal_set_GrantedTime(::System::DateTimeOffset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GrantedTime = value;
}
constexpr ::StringW& GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::__cordl_internal_get_PlayFabItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabItemId;
}
constexpr ::StringW const& GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::__cordl_internal_get_PlayFabItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabItemId;
}
constexpr void GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::__cordl_internal_set_PlayFabItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabItemId = value;
}
inline void GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit* GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::SubscriptionManager_GrantedSubscriptionBenefit::SubscriptionManager_GrantedSubscriptionBenefit()   {
}
//  Writing Method size for method: ::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::*)()>(&::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bd64ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_SubscriptionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionId;
}
constexpr ::StringW const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_SubscriptionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionId;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_SubscriptionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubscriptionId = value;
}
constexpr ::System::DateTimeOffset& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_EarliestStartDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EarliestStartDate;
}
constexpr ::System::DateTimeOffset const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_EarliestStartDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EarliestStartDate;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_EarliestStartDate(::System::DateTimeOffset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EarliestStartDate = value;
}
constexpr ::System::DateTimeOffset& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_CurrentStartDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentStartDate;
}
constexpr ::System::DateTimeOffset const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_CurrentStartDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CurrentStartDate;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_CurrentStartDate(::System::DateTimeOffset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CurrentStartDate = value;
}
constexpr ::System::DateTimeOffset& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_MostRecentBillingCycleStartDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MostRecentBillingCycleStartDate;
}
constexpr ::System::DateTimeOffset const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_MostRecentBillingCycleStartDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MostRecentBillingCycleStartDate;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_MostRecentBillingCycleStartDate(::System::DateTimeOffset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MostRecentBillingCycleStartDate = value;
}
constexpr ::System::DateTimeOffset& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_MostRecentBillingCycleEndDate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MostRecentBillingCycleEndDate;
}
constexpr ::System::DateTimeOffset const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_MostRecentBillingCycleEndDate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MostRecentBillingCycleEndDate;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_MostRecentBillingCycleEndDate(::System::DateTimeOffset  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MostRecentBillingCycleEndDate = value;
}
constexpr ::System::Nullable_1<::System::DateTimeOffset>& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_ExpirationTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpirationTime;
}
constexpr ::System::Nullable_1<::System::DateTimeOffset> const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_ExpirationTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExpirationTime;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_ExpirationTime(::System::Nullable_1<::System::DateTimeOffset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExpirationTime = value;
}
constexpr int32_t& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_TotalLifetimeSeconds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalLifetimeSeconds;
}
constexpr int32_t const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_TotalLifetimeSeconds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TotalLifetimeSeconds;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_TotalLifetimeSeconds(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TotalLifetimeSeconds = value;
}
constexpr bool& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_IsActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsActive;
}
constexpr bool const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_IsActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsActive;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_IsActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsActive = value;
}
constexpr bool& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_IsCancelling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsCancelling;
}
constexpr bool const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_IsCancelling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsCancelling;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_IsCancelling(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsCancelling = value;
}
constexpr ::StringW& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_Sku()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sku;
}
constexpr ::StringW const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_Sku() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Sku;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_Sku(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Sku = value;
}
constexpr ::StringW& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_PlayerId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerId;
}
constexpr ::StringW const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_PlayerId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayerId;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_PlayerId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayerId = value;
}
constexpr ::StringW& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_TrialType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrialType;
}
constexpr ::StringW const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_TrialType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TrialType;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_TrialType(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TrialType = value;
}
constexpr ::StringW& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_ExternalServiceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalServiceName;
}
constexpr ::StringW const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_ExternalServiceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalServiceName;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_ExternalServiceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExternalServiceName = value;
}
constexpr ::StringW& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_ExternalSubscriptionId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalSubscriptionId;
}
constexpr ::StringW const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_ExternalSubscriptionId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExternalSubscriptionId;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_ExternalSubscriptionId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExternalSubscriptionId = value;
}
constexpr ::StringW& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_SubscriptionCatalogItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionCatalogItemId;
}
constexpr ::StringW const& GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_get_SubscriptionCatalogItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubscriptionCatalogItemId;
}
constexpr void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::__cordl_internal_set_SubscriptionCatalogItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubscriptionCatalogItemId = value;
}
inline void GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription* GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::SubscriptionManager_GorillaTagSubscription::SubscriptionManager_GorillaTagSubscription()   {
}
