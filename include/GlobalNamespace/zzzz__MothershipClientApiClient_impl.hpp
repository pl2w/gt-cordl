#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipClientApiClient.hpp"
#include "GlobalNamespace/zzzz__MothershipApiClient_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipClientApiClient_def.hpp"
#include "GlobalNamespace/zzzz__AddSharedGroupMembersCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__AuthRefreshRequiredDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ClientConsumeConsumableCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ClientGetBulkSubscriptionsCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ClientGetMySubscriptionCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ClientGetPermissionsCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__CreateReportCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__CreateSharedGroupCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__DeleteUserDataCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__FinalizeApplePurchaseCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__FinalizeGooglePurchaseCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__FinalizeSteamPurchaseCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetFileCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetMatchmakingStatusCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetMergedInventoryCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetProgressionTreesForPlayerCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetSharedGroupDataCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetStorefrontRequestCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetUserDataCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetUserInventoryCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__InitSteamPurchaseCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ListGameSessionsCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ListMothershipTitleDataCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ListUserDataCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__LoginCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__MatchmakingPlayerVector_def.hpp"
#include "GlobalNamespace/zzzz__MothershipRefreshIAPCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWriteEventsRequest_def.hpp"
#include "GlobalNamespace/zzzz__NotificationsMessageDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__PlatformAndSkuVector_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSteamBeginLoginResponseCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__PurchaseOfferRequestCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__QuestBeginLoginV2RequestCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__RemoveSharedGroupMembersCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__RequestJoinGameSessionCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__SetUserDataCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__StartMatchmakingCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__StopMatchmakingCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__StringKeyValueMap_def.hpp"
#include "GlobalNamespace/zzzz__StringVector_def.hpp"
#include "GlobalNamespace/zzzz__UpdateSharedGroupDataCompleteClientDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ValidateUsernameCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__WriteEventsCompleteClientDelegateWrapper_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MothershipClientApiClient::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x55a14e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipClientApiClient*)>(&::GlobalNamespace::MothershipClientApiClient::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x55a1598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipClientApiClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipClientApiClient*)>(&::GlobalNamespace::MothershipClientApiClient::swigRelease)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x55a15d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipClientApiClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(bool)>(&::GlobalNamespace::MothershipClientApiClient::Dispose)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x55a1670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, bool, ::StringW)>(&::GlobalNamespace::MothershipClientApiClient::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x55a17cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(float_t)>(&::GlobalNamespace::MothershipClientApiClient::Tick)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x55a18e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetAuthRefreshRequiredDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetAuthRefreshRequiredDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a19b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetAuthRefreshRequiredDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::AuthRefreshRequiredDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetLoginCompleteDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::LoginCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetLoginCompleteDelegate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a1ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetLoginCompleteDelegate", {}, {::i2c::type_of<::GlobalNamespace::LoginCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.LoginWithInsecure1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::LoginWithInsecure1)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a1bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithInsecure1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.LoginWithInsecure2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::LoginWithInsecure2)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a1cc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithInsecure2", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.LoginWithQuest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::LoginWithQuest)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a1db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithQuest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.LoginWithRift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::LoginWithRift)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a1eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithRift", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.LoginWithGoogle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::LoginWithGoogle)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a1fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithGoogle", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.LoginWithApple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::LoginWithApple)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x55a2094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithApple", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.LoginWithPSN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::LoginWithPSN)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55a21bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithPSN", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.LoginWithSynthesisVR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(int64_t, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::LoginWithSynthesisVR)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55a22a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithSynthesisVR", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.GetServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MothershipClientApiClient::*)(::StringW)>(&::GlobalNamespace::MothershipClientApiClient::GetServerTime)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x55a2384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetServerTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetSetUserDataCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::SetUserDataCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetSetUserDataCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a2460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetSetUserDataCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::SetUserDataCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, int32_t, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::SetUserData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x55a256c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetGetUserDataCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::GetUserDataCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetGetUserDataCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a2688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetUserDataCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetUserDataCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.GetUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::GetUserData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a2794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetDeleteUserDataCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::DeleteUserDataCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetDeleteUserDataCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a28a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetDeleteUserDataCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::DeleteUserDataCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.DeleteUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::DeleteUserData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a29ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"DeleteUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetListUserDataCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::ListUserDataCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetListUserDataCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a2ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetListUserDataCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListUserDataCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ListUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ListUserData)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a2bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ListUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetCreateReportCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::CreateReportCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetCreateReportCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a2cb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetCreateReportCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::CreateReportCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.CreateReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, int32_t, ::StringW, bool, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::CreateReport)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x55a2dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"CreateReport", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetValidateUsernameCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::ValidateUsernameCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetValidateUsernameCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a2eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetValidateUsernameCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ValidateUsernameCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ValidateUsername
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ValidateUsername)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a2ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ValidateUsername", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetGetUserInventoryCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::GetUserInventoryCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetGetUserInventoryCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a30ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetUserInventoryCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetUserInventoryCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.GetUserInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::GetUserInventory)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55a31f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetUserInventory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetGetMergedInventoryCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::GetMergedInventoryCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetGetMergedInventoryCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a32dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetMergedInventoryCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetMergedInventoryCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.GetMergedInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::GetMergedInventory)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a33e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetMergedInventory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetGetStorefrontCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::GetStorefrontRequestCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetGetStorefrontCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a34dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetStorefrontCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetStorefrontRequestCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.GetStorefront
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::GlobalNamespace::StringVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::GetStorefront)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a35e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetStorefront", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetPurchaseCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::PurchaseOfferRequestCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetPurchaseCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a36f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetPurchaseCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::PurchaseOfferRequestCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.PurchaseOffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, int32_t, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::PurchaseOffer)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a3800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"PurchaseOffer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetConsumeConsumableCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::ClientConsumeConsumableCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetConsumeConsumableCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a390c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetConsumeConsumableCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ClientConsumeConsumableCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ConsumeConsumable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ConsumeConsumable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a3a18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ConsumeConsumable", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetQuestAuthV2BeginRequestCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::QuestBeginLoginV2RequestCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetQuestAuthV2BeginRequestCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a3b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetQuestAuthV2BeginRequestCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::QuestBeginLoginV2RequestCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.BeginQuestV2Auth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::BeginQuestV2Auth)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55a3c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"BeginQuestV2Auth", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.CompleteQuestV2Auth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::CompleteQuestV2Auth)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55a3cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"CompleteQuestV2Auth", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetSteamBeginRequestCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::PlayerSteamBeginLoginResponseCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetSteamBeginRequestCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a3df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetSteamBeginRequestCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::PlayerSteamBeginLoginResponseCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.BeginSteamAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::BeginSteamAuth)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x55a3f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"BeginSteamAuth", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.CompleteSteamAuth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::CompleteSteamAuth)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a3fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"CompleteSteamAuth", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetListMothershipTitleDataCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetListMothershipTitleDataCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a40d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetListMothershipTitleDataCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ListClientMothershipTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::GlobalNamespace::StringVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ListClientMothershipTitleData)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a41e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ListClientMothershipTitleData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetAcceptLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::StringW)>(&::GlobalNamespace::MothershipClientApiClient::SetAcceptLanguage)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x55a42ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetAcceptLanguage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetListGameSessionsCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::ListGameSessionsCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetListGameSessionsCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a43bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetListGameSessionsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListGameSessionsCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ListGameSessions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, int32_t, int32_t, ::StringW, ::StringW, int32_t, int32_t, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ListGameSessions)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x55a44c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ListGameSessions", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetRequestJoinGameSessionCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::RequestJoinGameSessionCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetRequestJoinGameSessionCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a45f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetRequestJoinGameSessionCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::RequestJoinGameSessionCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.RequestJoinGameSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::RequestJoinGameSession)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a4704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"RequestJoinGameSession", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetCreateSharedGroupCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::CreateSharedGroupCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetCreateSharedGroupCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a47f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetCreateSharedGroupCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::CreateSharedGroupCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.CreateSharedGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::CreateSharedGroup)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a4904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"CreateSharedGroup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetGetSharedGroupDataCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::GetSharedGroupDataCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetGetSharedGroupDataCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a4a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetSharedGroupDataCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetSharedGroupDataCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.GetSharedGroupData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::GlobalNamespace::StringVector*, bool, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::GetSharedGroupData)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x55a4b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetSharedGroupData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetUpdateSharedGroupDataCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::UpdateSharedGroupDataCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetUpdateSharedGroupDataCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a4c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetUpdateSharedGroupDataCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::UpdateSharedGroupDataCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.UpdateSharedGroupData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::GlobalNamespace::StringKeyValueMap*, ::GlobalNamespace::StringKeyValueMap*, ::GlobalNamespace::StringVector*, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::UpdateSharedGroupData)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x55a4d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"UpdateSharedGroupData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>(), ::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetAddSharedGroupMembersCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::AddSharedGroupMembersCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetAddSharedGroupMembersCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a4ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetAddSharedGroupMembersCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::AddSharedGroupMembersCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.AddSharedGroupMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::GlobalNamespace::StringVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::AddSharedGroupMembers)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x55a4fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"AddSharedGroupMembers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetRemoveSharedGroupMembersCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::RemoveSharedGroupMembersCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetRemoveSharedGroupMembersCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a511c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetRemoveSharedGroupMembersCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::RemoveSharedGroupMembersCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.RemoveSharedGroupMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::GlobalNamespace::StringVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::RemoveSharedGroupMembers)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x55a5228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"RemoveSharedGroupMembers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetMothershipRefreshIAPCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::MothershipRefreshIAPCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetMothershipRefreshIAPCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a5360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetMothershipRefreshIAPCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::MothershipRefreshIAPCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.RefreshIAP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::RefreshIAP)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55a546c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"RefreshIAP", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetFinalizeGooglePurchaseCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::FinalizeGooglePurchaseCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetFinalizeGooglePurchaseCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a5550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetFinalizeGooglePurchaseCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::FinalizeGooglePurchaseCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.FinalizeGooglePurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::FinalizeGooglePurchase)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a565c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"FinalizeGooglePurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetFinalizeApplePurchaseCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::FinalizeApplePurchaseCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetFinalizeApplePurchaseCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a5750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetFinalizeApplePurchaseCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::FinalizeApplePurchaseCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.FinalizeApplePurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::FinalizeApplePurchase)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a585c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"FinalizeApplePurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetInitSteamPurchaseCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::InitSteamPurchaseCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetInitSteamPurchaseCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a5950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetInitSteamPurchaseCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::InitSteamPurchaseCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.InitSteamPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, int32_t, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::InitSteamPurchase)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a5a5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"InitSteamPurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetFinalizeSteamPurchaseCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::FinalizeSteamPurchaseCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetFinalizeSteamPurchaseCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a5b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetFinalizeSteamPurchaseCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::FinalizeSteamPurchaseCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.FinalizeSteamPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::FinalizeSteamPurchase)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a5c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"FinalizeSteamPurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetWriteEventsCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::WriteEventsCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetWriteEventsCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a5d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetWriteEventsCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::WriteEventsCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.WriteEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::GlobalNamespace::MothershipWriteEventsRequest*, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::WriteEvents)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a5e74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"WriteEvents", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipWriteEventsRequest*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetNotificationsMessageDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::NotificationsMessageDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetNotificationsMessageDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a5f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetNotificationsMessageDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::NotificationsMessageDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.OpenNotificationsSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::OpenNotificationsSocket)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55a608c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"OpenNotificationsSocket", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetGetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetGetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a6170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.GetProgressionTrackValuesForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::GetProgressionTrackValuesForPlayer)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55a627c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetProgressionTrackValuesForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetGetProgressionTreesForPlayerCompleteClientDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::GetProgressionTreesForPlayerCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetGetProgressionTreesForPlayerCompleteClientDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a6360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetProgressionTreesForPlayerCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreesForPlayerCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.GetProgressionTreesForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::GetProgressionTreesForPlayer)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55a646c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetProgressionTreesForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetClientGetPermissionsCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::ClientGetPermissionsCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetClientGetPermissionsCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a6550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientGetPermissionsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ClientGetPermissionsCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ClientGetPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ClientGetPermissions)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55a665c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientGetPermissions", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetClientGetMySubscriptionsDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetClientGetMySubscriptionsDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a6740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientGetMySubscriptionsDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ClientGetMySubscriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ClientGetMySubscriptions)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x55a684c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientGetMySubscriptions", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::ClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a6930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ClientInitSteamSubscriptionPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, int32_t, int32_t, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ClientInitSteamSubscriptionPurchase)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x55a6a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientInitSteamSubscriptionPurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::ClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a6b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ClientFinalizeSteamSubscriptionPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ClientFinalizeSteamSubscriptionPurchase)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a6c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientFinalizeSteamSubscriptionPurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetClientBulkGetSubscriptionsDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::ClientGetBulkSubscriptionsCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetClientBulkGetSubscriptionsDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a6d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientBulkGetSubscriptionsDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ClientGetBulkSubscriptionsCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ClientBulkGetSubscriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::GlobalNamespace::StringVector*, ::GlobalNamespace::PlatformAndSkuVector*, ::GlobalNamespace::StringVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ClientBulkGetSubscriptions)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x55a6e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientBulkGetSubscriptions", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::GlobalNamespace::PlatformAndSkuVector*>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetGetFileCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::GetFileCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetGetFileCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a6fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetFileCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetFileCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ClientGetFileById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ClientGetFileById)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a70cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientGetFileById", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ClientGetFileByNameOrAliasAndVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ClientGetFileByNameOrAliasAndVersion)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x55a71c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientGetFileByNameOrAliasAndVersion", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetClientStartMatchmakingCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::StartMatchmakingCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetClientStartMatchmakingCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a72bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientStartMatchmakingCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::StartMatchmakingCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ClientStartMatchmaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::GlobalNamespace::MatchmakingPlayerVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ClientStartMatchmaking)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x55a73c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientStartMatchmaking", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MatchmakingPlayerVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetClientGetMatchmakingStatusCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::GetMatchmakingStatusCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetClientGetMatchmakingStatusCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a74e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientGetMatchmakingStatusCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetMatchmakingStatusCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ClientGetMatchmakingStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ClientGetMatchmakingStatus)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a75ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientGetMatchmakingStatus", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.SetClientStopMatchmakingCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipClientApiClient::*)(::GlobalNamespace::StopMatchmakingCompleteClientDelegateWrapper*)>(&::GlobalNamespace::MothershipClientApiClient::SetClientStopMatchmakingCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x55a76e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientStopMatchmakingCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::StopMatchmakingCompleteClientDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiClient.ClientStopMatchmaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipClientApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiClient::ClientStopMatchmaking)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x55a77ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientStopMatchmaking", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::MothershipClientApiClient::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::MothershipClientApiClient::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::MothershipClientApiClient::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::MothershipClientApiClient::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipClientApiClient::getCPtr(::GlobalNamespace::MothershipClientApiClient*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipClientApiClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipClientApiClient::swigRelease(::GlobalNamespace::MothershipClientApiClient*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipClientApiClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::MothershipClientApiClient::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::MothershipClientApiClient::_ctor(::StringW  baseUrl, ::StringW  titleId, ::StringW  envId, ::StringW  deploymentId, ::StringW  websocketUrl, bool  enableRetryQueue, ::StringW  sessionIdUUID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseUrl, titleId, envId, deploymentId, websocketUrl, enableRetryQueue, sessionIdUUID);
}
inline void GlobalNamespace::MothershipClientApiClient::Tick(float_t  deltaTimeInSeconds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTimeInSeconds);
}
inline void GlobalNamespace::MothershipClientApiClient::SetAuthRefreshRequiredDelegateWrapper(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetAuthRefreshRequiredDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::AuthRefreshRequiredDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline void GlobalNamespace::MothershipClientApiClient::SetLoginCompleteDelegate(::GlobalNamespace::LoginCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetLoginCompleteDelegate", {}, {::i2c::type_of<::GlobalNamespace::LoginCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::LoginWithInsecure1(::StringW  username, ::StringW  accountId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithInsecure1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, username, accountId, userData);
}
inline bool GlobalNamespace::MothershipClientApiClient::LoginWithInsecure2(::StringW  username, ::StringW  accountId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithInsecure2", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, username, accountId, userData);
}
inline bool GlobalNamespace::MothershipClientApiClient::LoginWithQuest(::StringW  nonce, ::StringW  userId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithQuest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nonce, userId, userData);
}
inline bool GlobalNamespace::MothershipClientApiClient::LoginWithRift(::StringW  nonce, ::StringW  userId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithRift", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nonce, userId, userData);
}
inline bool GlobalNamespace::MothershipClientApiClient::LoginWithGoogle(::StringW  token, ::StringW  userId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithGoogle", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, token, userId, userData);
}
inline bool GlobalNamespace::MothershipClientApiClient::LoginWithApple(::StringW  signature, ::StringW  gamePlayerId, ::StringW  teamPlayerId, ::StringW  certUri, ::StringW  salt, ::StringW  timestamp, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithApple", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, signature, gamePlayerId, teamPlayerId, certUri, salt, timestamp, userData);
}
inline bool GlobalNamespace::MothershipClientApiClient::LoginWithPSN(::StringW  authCode, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithPSN", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, authCode, userData);
}
inline bool GlobalNamespace::MothershipClientApiClient::LoginWithSynthesisVR(int64_t  deviceId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"LoginWithSynthesisVR", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, deviceId, userData);
}
inline int64_t GlobalNamespace::MothershipClientApiClient::GetServerTime(::StringW  callerId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetServerTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, callerId);
}
inline void GlobalNamespace::MothershipClientApiClient::SetSetUserDataCompleteClientDelegateWrapper(::GlobalNamespace::SetUserDataCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetSetUserDataCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::SetUserDataCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::SetUserData(::StringW  callerId, ::StringW  userId, ::StringW  keyName, ::StringW  value, int32_t  generation, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, userId, keyName, value, generation, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetGetUserDataCompleteClientDelegateWrapper(::GlobalNamespace::GetUserDataCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetUserDataCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetUserDataCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::GetUserData(::StringW  callerId, ::StringW  userId, ::StringW  keyName, ::StringW  metadataId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, userId, keyName, metadataId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetDeleteUserDataCompleteClientDelegateWrapper(::GlobalNamespace::DeleteUserDataCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetDeleteUserDataCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::DeleteUserDataCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::DeleteUserData(::StringW  callerId, ::StringW  userId, ::StringW  keyName, ::StringW  metadataId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"DeleteUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, userId, keyName, metadataId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetListUserDataCompleteClientDelegateWrapper(::GlobalNamespace::ListUserDataCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetListUserDataCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListUserDataCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ListUserData(::StringW  callerId, ::StringW  userId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ListUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, userId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetCreateReportCompleteClientDelegateWrapper(::GlobalNamespace::CreateReportCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetCreateReportCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::CreateReportCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::CreateReport(::StringW  callerId, ::StringW  reportedUserId, int32_t  category, ::StringW  platform, bool  moddedClient, ::StringW  metadata, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"CreateReport", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, reportedUserId, category, platform, moddedClient, metadata, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetValidateUsernameCompleteClientDelegateWrapper(::GlobalNamespace::ValidateUsernameCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetValidateUsernameCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ValidateUsernameCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ValidateUsername(::StringW  callerId, ::StringW  username, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ValidateUsername", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, username, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetGetUserInventoryCompleteClientDelegateWrapper(::GlobalNamespace::GetUserInventoryCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetUserInventoryCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetUserInventoryCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::GetUserInventory(::StringW  callerId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetUserInventory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetGetMergedInventoryCompleteClientDelegateWrapper(::GlobalNamespace::GetMergedInventoryCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetMergedInventoryCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetMergedInventoryCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::GetMergedInventory(::StringW  callerId, ::StringW  targetId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetMergedInventory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, targetId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetGetStorefrontCompleteClientDelegateWrapper(::GlobalNamespace::GetStorefrontRequestCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetStorefrontCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetStorefrontRequestCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::GetStorefront(::StringW  callerId, ::GlobalNamespace::StringVector*  offerDisplays, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetStorefront", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, offerDisplays, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetPurchaseCompleteClientDelegateWrapper(::GlobalNamespace::PurchaseOfferRequestCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetPurchaseCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::PurchaseOfferRequestCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::PurchaseOffer(::StringW  callerId, ::StringW  offerDisplayId, ::StringW  offerId, int32_t  displayIndex, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"PurchaseOffer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, offerDisplayId, offerId, displayIndex, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetConsumeConsumableCompleteClientDelegateWrapper(::GlobalNamespace::ClientConsumeConsumableCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetConsumeConsumableCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ClientConsumeConsumableCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ConsumeConsumable(::StringW  callerId, ::StringW  entitlementId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ConsumeConsumable", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, entitlementId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetQuestAuthV2BeginRequestCompleteClientDelegateWrapper(::GlobalNamespace::QuestBeginLoginV2RequestCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetQuestAuthV2BeginRequestCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::QuestBeginLoginV2RequestCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::BeginQuestV2Auth(::StringW  userId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"BeginQuestV2Auth", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userId, userData);
}
inline bool GlobalNamespace::MothershipClientApiClient::CompleteQuestV2Auth(::StringW  userId, ::StringW  attestationToken, ::StringW  metaNonce, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"CompleteQuestV2Auth", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userId, attestationToken, metaNonce, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetSteamBeginRequestCompleteClientDelegateWrapper(::GlobalNamespace::PlayerSteamBeginLoginResponseCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetSteamBeginRequestCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::PlayerSteamBeginLoginResponseCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::BeginSteamAuth(::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"BeginSteamAuth", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userData);
}
inline bool GlobalNamespace::MothershipClientApiClient::CompleteSteamAuth(::StringW  nonce, ::StringW  ticket, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"CompleteSteamAuth", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, nonce, ticket, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetListMothershipTitleDataCompleteClientDelegateWrapper(::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetListMothershipTitleDataCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListMothershipTitleDataCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ListClientMothershipTitleData(::StringW  callerId, ::GlobalNamespace::StringVector*  keys, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ListClientMothershipTitleData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, keys, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetAcceptLanguage(::StringW  language)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetAcceptLanguage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, language);
}
inline void GlobalNamespace::MothershipClientApiClient::SetListGameSessionsCompleteDelegateWrapper(::GlobalNamespace::ListGameSessionsCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetListGameSessionsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListGameSessionsCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ListGameSessions(::StringW  callerId, int32_t  pageSize, int32_t  pageOffset, ::StringW  region, ::StringW  partition, int32_t  minEmptySlots, int32_t  maxEmptySlots, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ListGameSessions", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, pageSize, pageOffset, region, partition, minEmptySlots, maxEmptySlots, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetRequestJoinGameSessionCompleteDelegateWrapper(::GlobalNamespace::RequestJoinGameSessionCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetRequestJoinGameSessionCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::RequestJoinGameSessionCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::RequestJoinGameSession(::StringW  callerId, ::StringW  requestSessionId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"RequestJoinGameSession", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, requestSessionId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetCreateSharedGroupCompleteDelegateWrapper(::GlobalNamespace::CreateSharedGroupCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetCreateSharedGroupCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::CreateSharedGroupCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::CreateSharedGroup(::StringW  callerId, ::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"CreateSharedGroup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, titleId, envId, sharedGroupId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetGetSharedGroupDataCompleteDelegateWrapper(::GlobalNamespace::GetSharedGroupDataCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetSharedGroupDataCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetSharedGroupDataCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::GetSharedGroupData(::StringW  callerId, ::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringVector*  keys, bool  getMembers, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetSharedGroupData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, titleId, envId, sharedGroupId, keys, getMembers, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetUpdateSharedGroupDataCompleteDelegateWrapper(::GlobalNamespace::UpdateSharedGroupDataCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetUpdateSharedGroupDataCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::UpdateSharedGroupDataCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::UpdateSharedGroupData(::StringW  callerId, ::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringKeyValueMap*  data, ::GlobalNamespace::StringKeyValueMap*  customTags, ::GlobalNamespace::StringVector*  keysToRemove, ::StringW  permission, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"UpdateSharedGroupData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>(), ::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, titleId, envId, sharedGroupId, data, customTags, keysToRemove, permission, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetAddSharedGroupMembersCompleteDelegateWrapper(::GlobalNamespace::AddSharedGroupMembersCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetAddSharedGroupMembersCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::AddSharedGroupMembersCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::AddSharedGroupMembers(::StringW  callerId, ::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringVector*  mothershipIds, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"AddSharedGroupMembers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, titleId, envId, sharedGroupId, mothershipIds, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetRemoveSharedGroupMembersCompleteDelegateWrapper(::GlobalNamespace::RemoveSharedGroupMembersCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetRemoveSharedGroupMembersCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::RemoveSharedGroupMembersCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::RemoveSharedGroupMembers(::StringW  callerId, ::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringVector*  mothershipIds, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"RemoveSharedGroupMembers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, titleId, envId, sharedGroupId, mothershipIds, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetMothershipRefreshIAPCompleteDelegateWrapper(::GlobalNamespace::MothershipRefreshIAPCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetMothershipRefreshIAPCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::MothershipRefreshIAPCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::RefreshIAP(::StringW  callerId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"RefreshIAP", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetFinalizeGooglePurchaseCompleteDelegateWrapper(::GlobalNamespace::FinalizeGooglePurchaseCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetFinalizeGooglePurchaseCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::FinalizeGooglePurchaseCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::FinalizeGooglePurchase(::StringW  callerId, ::StringW  purchaseToken, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"FinalizeGooglePurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, purchaseToken, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetFinalizeApplePurchaseCompleteDelegateWrapper(::GlobalNamespace::FinalizeApplePurchaseCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetFinalizeApplePurchaseCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::FinalizeApplePurchaseCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::FinalizeApplePurchase(::StringW  callerId, ::StringW  appleTransactionId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"FinalizeApplePurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, appleTransactionId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetInitSteamPurchaseCompleteDelegateWrapper(::GlobalNamespace::InitSteamPurchaseCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetInitSteamPurchaseCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::InitSteamPurchaseCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::InitSteamPurchase(::StringW  callerId, ::StringW  offerDisplayId, ::StringW  offerId, int32_t  displayIndex, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"InitSteamPurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, offerDisplayId, offerId, displayIndex, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetFinalizeSteamPurchaseCompleteDelegateWrapper(::GlobalNamespace::FinalizeSteamPurchaseCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetFinalizeSteamPurchaseCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::FinalizeSteamPurchaseCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::FinalizeSteamPurchase(::StringW  callerId, ::StringW  steamOrderId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"FinalizeSteamPurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, steamOrderId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetWriteEventsCompleteClientDelegateWrapper(::GlobalNamespace::WriteEventsCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetWriteEventsCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::WriteEventsCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::WriteEvents(::StringW  callerId, ::GlobalNamespace::MothershipWriteEventsRequest*  request, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"WriteEvents", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipWriteEventsRequest*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, request, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetNotificationsMessageDelegateWrapper(::GlobalNamespace::NotificationsMessageDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetNotificationsMessageDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::NotificationsMessageDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::OpenNotificationsSocket(::StringW  playerId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"OpenNotificationsSocket", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetGetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper(::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::GetProgressionTrackValuesForPlayer(::StringW  playerId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetProgressionTrackValuesForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetGetProgressionTreesForPlayerCompleteClientDelegateWrapper(::GlobalNamespace::GetProgressionTreesForPlayerCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetProgressionTreesForPlayerCompleteClientDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreesForPlayerCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::GetProgressionTreesForPlayer(::StringW  playerId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"GetProgressionTreesForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetClientGetPermissionsCompleteDelegateWrapper(::GlobalNamespace::ClientGetPermissionsCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientGetPermissionsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ClientGetPermissionsCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ClientGetPermissions(::StringW  callerId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientGetPermissions", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetClientGetMySubscriptionsDelegateWrapper(::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientGetMySubscriptionsDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ClientGetMySubscriptionCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ClientGetMySubscriptions(::StringW  callerId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientGetMySubscriptions", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper(::GlobalNamespace::ClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ClientInitSteamSubscriptionPurchaseCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ClientInitSteamSubscriptionPurchase(::StringW  callerId, ::StringW  sku, int32_t  priceInUSDCents, int32_t  subscriptionBillingFrequency, ::StringW  subscriptionBillingFrequencyUnit, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientInitSteamSubscriptionPurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, sku, priceInUSDCents, subscriptionBillingFrequency, subscriptionBillingFrequencyUnit, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper(::GlobalNamespace::ClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ClientFinalizeSteamSubscriptionPurchaseCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ClientFinalizeSteamSubscriptionPurchase(::StringW  callerId, ::StringW  steamOrderId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientFinalizeSteamSubscriptionPurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, steamOrderId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetClientBulkGetSubscriptionsDelegateWrapper(::GlobalNamespace::ClientGetBulkSubscriptionsCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientBulkGetSubscriptionsDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ClientGetBulkSubscriptionsCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ClientBulkGetSubscriptions(::StringW  callerId, ::GlobalNamespace::StringVector*  players, ::GlobalNamespace::PlatformAndSkuVector*  platformSkus, ::GlobalNamespace::StringVector*  catalogIds, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientBulkGetSubscriptions", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::GlobalNamespace::PlatformAndSkuVector*>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, players, platformSkus, catalogIds, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetGetFileCompleteDelegateWrapper(::GlobalNamespace::GetFileCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetGetFileCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetFileCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ClientGetFileById(::StringW  callerId, ::StringW  fileId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientGetFileById", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, fileId, userData);
}
inline bool GlobalNamespace::MothershipClientApiClient::ClientGetFileByNameOrAliasAndVersion(::StringW  callerId, ::StringW  fileNameOrAlias, ::StringW  versionOrLatest, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientGetFileByNameOrAliasAndVersion", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, fileNameOrAlias, versionOrLatest, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetClientStartMatchmakingCompleteDelegateWrapper(::GlobalNamespace::StartMatchmakingCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientStartMatchmakingCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::StartMatchmakingCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ClientStartMatchmaking(::StringW  callerId, ::StringW  gamemode, ::GlobalNamespace::MatchmakingPlayerVector*  players, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientStartMatchmaking", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MatchmakingPlayerVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, gamemode, players, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetClientGetMatchmakingStatusCompleteDelegateWrapper(::GlobalNamespace::GetMatchmakingStatusCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientGetMatchmakingStatusCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetMatchmakingStatusCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ClientGetMatchmakingStatus(::StringW  callerId, ::StringW  ticketId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientGetMatchmakingStatus", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, ticketId, userData);
}
inline void GlobalNamespace::MothershipClientApiClient::SetClientStopMatchmakingCompleteDelegateWrapper(::GlobalNamespace::StopMatchmakingCompleteClientDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"SetClientStopMatchmakingCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::StopMatchmakingCompleteClientDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipClientApiClient::ClientStopMatchmaking(::StringW  callerId, ::StringW  ticketId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiClient*>(),
                        {"ClientStopMatchmaking", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, callerId, ticketId, userData);
}
inline ::GlobalNamespace::MothershipClientApiClient* GlobalNamespace::MothershipClientApiClient::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipClientApiClient*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::MothershipClientApiClient* GlobalNamespace::MothershipClientApiClient::New_ctor(::StringW  baseUrl, ::StringW  titleId, ::StringW  envId, ::StringW  deploymentId, ::StringW  websocketUrl, bool  enableRetryQueue, ::StringW  sessionIdUUID)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipClientApiClient*>(baseUrl, titleId, envId, deploymentId, websocketUrl, enableRetryQueue, sessionIdUUID));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipClientApiClient::MothershipClientApiClient()   {
}
