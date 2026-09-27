#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipClientApiUnity.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipClientApiUnity_def.hpp"
#include "GlobalNamespace/zzzz__BulkGetSubscriptionsResponse_def.hpp"
#include "GlobalNamespace/zzzz__CreateReportResponse_def.hpp"
#include "GlobalNamespace/zzzz__FinalizeSteamPurchaseResponse_def.hpp"
#include "GlobalNamespace/zzzz__FinalizeSteamSubscriptionPurchaseResponse_def.hpp"
#include "GlobalNamespace/zzzz__GetMySubscriptionsResponse_def.hpp"
#include "GlobalNamespace/zzzz__GetProgressionTrackValuesForPlayerResponse_def.hpp"
#include "GlobalNamespace/zzzz__GetProgressionTreesForPlayerResponse_def.hpp"
#include "GlobalNamespace/zzzz__InitSteamPurchaseResponse_def.hpp"
#include "GlobalNamespace/zzzz__InitSteamSubscriptionPurchaseResponse_def.hpp"
#include "GlobalNamespace/zzzz__ListClientMothershipTitleDataResponse_def.hpp"
#include "GlobalNamespace/zzzz__LoginResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipAuthCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipAuthRefreshRequiredCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipBeginQuestCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipBeginSteamCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipClientApiClient_def.hpp"
#include "GlobalNamespace/zzzz__MothershipConsumeCompleteCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipConsumeConsumableResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipCreateReportCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipError_def.hpp"
#include "GlobalNamespace/zzzz__MothershipFinalizeSteamSubscriptionPurchaseCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetFileDetailsCompleteCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetInventoryResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetMergedInventoryCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetMergedInventoryResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetMySubscriptionCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetPlayerProgressionCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetPlayerProgressionTressCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetRoomPlayersSubscriptionsCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetStorefrontCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetStorefrontResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetUserDataCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipGetUserInventoryCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipHttpClientUnity_def.hpp"
#include "GlobalNamespace/zzzz__MothershipInitSteamSubscriptionPurchaseCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipListTitleDataCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipLogCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipLogLevel_def.hpp"
#include "GlobalNamespace/zzzz__MothershipNotificationsWrapper_def.hpp"
#include "GlobalNamespace/zzzz__MothershipPurchaseOfferCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipPurchaseOfferResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipRefreshIAPCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipRefreshIAPResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipSetUserDataCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipSharedSettings_def.hpp"
#include "GlobalNamespace/zzzz__MothershipSteamFinalizeTransactionCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipSteamInitTransactionCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipUserData_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketDispatcher_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWebSocketWrapper_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWriteEventsCallback_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWriteEventsRequest_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWriteEventsResponse_def.hpp"
#include "GlobalNamespace/zzzz__NotificationsMessageResponse_def.hpp"
#include "GlobalNamespace/zzzz__PlayerQuestBeginLoginV2Response_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSteamBeginLoginResponse_def.hpp"
#include "GlobalNamespace/zzzz__SetUserDataResponse_def.hpp"
#include "GlobalNamespace/zzzz__SharedDownloadableFileResult_def.hpp"
#include "GlobalNamespace/zzzz__StringVector_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.GetSharedSettingsObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MothershipSharedSettings> (*)()>(&::GlobalNamespace::MothershipClientApiUnity::GetSharedSettingsObject)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x53b95a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetSharedSettingsObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.IsClientLoggedIn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::MothershipClientApiUnity::IsClientLoggedIn)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x53ba52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"IsClientLoggedIn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.ForgetAllCredentials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::MothershipClientApiUnity::ForgetAllCredentials)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x53ba530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.IsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::MothershipClientApiUnity::IsEnabled)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x53ba534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"IsEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::MothershipClientApiUnity::Tick)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x53ba58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.SetLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::MothershipClientApiUnity::SetLanguage)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x53ba670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"SetLanguage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.SetLogCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*)>(&::GlobalNamespace::MothershipClientApiUnity::SetLogCallback)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x53ba740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"SetLogCallback", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.SetAuthRefreshedCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::StringW>*)>(&::GlobalNamespace::MothershipClientApiUnity::SetAuthRefreshedCallback)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x53ba85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"SetAuthRefreshedCallback", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.LogInWithInsecure1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::Action_1<::GlobalNamespace::LoginResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::LogInWithInsecure1)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x53ba970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"LogInWithInsecure1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.LogInWithQuest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::Action_1<::GlobalNamespace::LoginResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::LogInWithQuest)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x53baaf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"LogInWithQuest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.StartLogInWithQuest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Action_1<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::StartLogInWithQuest)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x53bac70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"StartLogInWithQuest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.CompleteLogInWithQuest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::StringW, ::System::Action_1<::GlobalNamespace::LoginResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::CompleteLogInWithQuest)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x53baddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"CompleteLogInWithQuest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.LogInWithRift
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::Action_1<::GlobalNamespace::LoginResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::LogInWithRift)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x53baf64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"LogInWithRift", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.LogInWithGoogle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::Action_1<::GlobalNamespace::LoginResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::LogInWithGoogle)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x53bb0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"LogInWithGoogle", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.LogInWithApple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::Action_1<::GlobalNamespace::LoginResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::LogInWithApple)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x53bb264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"LogInWithApple", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.StartLoginWithSteam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Action_1<::GlobalNamespace::PlayerSteamBeginLoginResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::StartLoginWithSteam)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x53bb41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"StartLoginWithSteam", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::PlayerSteamBeginLoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.CompleteLoginWithSteam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::Action_1<::GlobalNamespace::LoginResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::CompleteLoginWithSteam)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x53bb580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"CompleteLoginWithSteam", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.LogInWithSynthesisVR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int64_t, ::System::Action_1<::GlobalNamespace::LoginResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::LogInWithSynthesisVR)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x53bb700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"LogInWithSynthesisVR", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.GetUserDataValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Action_1<::GlobalNamespace::MothershipUserData*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*, ::StringW)>(&::GlobalNamespace::MothershipClientApiUnity::GetUserDataValue)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x53bb86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetUserDataValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipUserData*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.SetUserDataValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::Action_1<::GlobalNamespace::SetUserDataResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*, ::StringW)>(&::GlobalNamespace::MothershipClientApiUnity::SetUserDataValue)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x53bba4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"SetUserDataValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::SetUserDataResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.CreateReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, int32_t, bool, ::StringW, ::System::Action_1<::GlobalNamespace::CreateReportResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::CreateReport)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x53bbc20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"CreateReport", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::CreateReportResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.GetUserInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Action_1<::GlobalNamespace::MothershipGetInventoryResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::GetUserInventory)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x53bbdfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetUserInventory", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipGetInventoryResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.GetUserInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Action_1<::GlobalNamespace::MothershipGetMergedInventoryResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::GetUserInventory)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x53bbf88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetUserInventory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipGetMergedInventoryResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.GetStorefront
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>, ::System::Action_1<::GlobalNamespace::MothershipGetStorefrontResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::GetStorefront)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x53bc11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetStorefront", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipGetStorefrontResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.PurchaseOffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, int32_t, ::System::Action_1<::GlobalNamespace::MothershipPurchaseOfferResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::PurchaseOffer)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x53bc2e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"PurchaseOffer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipPurchaseOfferResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.ConsumeConsumable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Action_1<::GlobalNamespace::MothershipConsumeConsumableResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::ConsumeConsumable)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x53bc494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"ConsumeConsumable", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipConsumeConsumableResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.RefreshMetaIAP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Action_1<::GlobalNamespace::MothershipRefreshIAPResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::RefreshMetaIAP)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x53bc628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"RefreshMetaIAP", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipRefreshIAPResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.InitSteamPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, int32_t, ::System::Action_1<::GlobalNamespace::InitSteamPurchaseResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::InitSteamPurchase)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x53bc7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"InitSteamPurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::InitSteamPurchaseResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.FinalizeSteamPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Action_1<::GlobalNamespace::FinalizeSteamPurchaseResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::FinalizeSteamPurchase)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x53bc964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"FinalizeSteamPurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::FinalizeSteamPurchaseResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.add_OnOpenNotificationSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::IntPtr>*)>(&::GlobalNamespace::MothershipClientApiUnity::add_OnOpenNotificationSocket)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x53bcaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"add_OnOpenNotificationSocket", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.remove_OnOpenNotificationSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::IntPtr>*)>(&::GlobalNamespace::MothershipClientApiUnity::remove_OnOpenNotificationSocket)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x53bcbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"remove_OnOpenNotificationSocket", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.add_OnMessageNotificationSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*)>(&::GlobalNamespace::MothershipClientApiUnity::add_OnMessageNotificationSocket)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x53bcce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"add_OnMessageNotificationSocket", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.remove_OnMessageNotificationSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*)>(&::GlobalNamespace::MothershipClientApiUnity::remove_OnMessageNotificationSocket)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x53bcdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"remove_OnMessageNotificationSocket", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.add_OnCloseNotificationSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::IntPtr>*)>(&::GlobalNamespace::MothershipClientApiUnity::add_OnCloseNotificationSocket)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x53bcec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"add_OnCloseNotificationSocket", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.remove_OnCloseNotificationSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::IntPtr>*)>(&::GlobalNamespace::MothershipClientApiUnity::remove_OnCloseNotificationSocket)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x53bcfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"remove_OnCloseNotificationSocket", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.add_OnErrorNotificationSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::IntPtr>*)>(&::GlobalNamespace::MothershipClientApiUnity::add_OnErrorNotificationSocket)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x53bd0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"add_OnErrorNotificationSocket", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.remove_OnErrorNotificationSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::System::IntPtr>*)>(&::GlobalNamespace::MothershipClientApiUnity::remove_OnErrorNotificationSocket)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x53bd1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"remove_OnErrorNotificationSocket", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.OpenNotificationsSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::MothershipClientApiUnity::OpenNotificationsSocket)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x53bd298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"OpenNotificationsSocket", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.CloseWebSockets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::MothershipClientApiUnity::CloseWebSockets)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x53bd378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"CloseWebSockets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.TickWebSockets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::GlobalNamespace::MothershipClientApiUnity::TickWebSockets)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x53bd3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"TickWebSockets", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.InvokeOpenNotificationSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiUnity::InvokeOpenNotificationSocket)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x53bd464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"InvokeOpenNotificationSocket", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.InvokeMessageNotificationSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::NotificationsMessageResponse*, ::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiUnity::InvokeMessageNotificationSocket)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x53bd518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"InvokeMessageNotificationSocket", {}, {::i2c::type_of<::GlobalNamespace::NotificationsMessageResponse*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.InvokeCloseNotificationSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiUnity::InvokeCloseNotificationSocket)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x53bd638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"InvokeCloseNotificationSocket", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.InvokeErrorNotificationSocket
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::GlobalNamespace::MothershipClientApiUnity::InvokeErrorNotificationSocket)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x53bd6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"InvokeErrorNotificationSocket", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.GetPlayerProgressionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Action_1<::GlobalNamespace::GetProgressionTrackValuesForPlayerResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::GetPlayerProgressionData)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x53bd7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetPlayerProgressionData", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GetProgressionTrackValuesForPlayerResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.GetPlayerProgressionTreesData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Action_1<::GlobalNamespace::GetProgressionTreesForPlayerResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::GetPlayerProgressionTreesData)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x53bd92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetPlayerProgressionTreesData", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GetProgressionTreesForPlayerResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.WriteEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::GlobalNamespace::MothershipWriteEventsRequest*, ::System::Action_1<::GlobalNamespace::MothershipWriteEventsResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::WriteEvents)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x53bdab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"WriteEvents", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipWriteEventsRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipWriteEventsResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.ListMothershipTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::StringW, ::GlobalNamespace::StringVector*, ::System::Action_1<::GlobalNamespace::ListClientMothershipTitleDataResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::ListMothershipTitleData)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x53bdc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"ListMothershipTitleData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ListClientMothershipTitleDataResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.GetAndRefreshMySubscriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Action_1<::GlobalNamespace::GetMySubscriptionsResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::GetAndRefreshMySubscriptions)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x53bdf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetAndRefreshMySubscriptions", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GetMySubscriptionsResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.GetRoomPlayerSubscriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>, ::System::Action_1<::GlobalNamespace::BulkGetSubscriptionsResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::GetRoomPlayerSubscriptions)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x53be0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetRoomPlayerSubscriptions", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::BulkGetSubscriptionsResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.InitSteamSubscriptionTransaction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, int32_t, int32_t, ::System::Action_1<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::InitSteamSubscriptionTransaction)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x53be210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"InitSteamSubscriptionTransaction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.FinalizeSteamSubscriptionTransaction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Action_1<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseResponse*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::FinalizeSteamSubscriptionTransaction)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x53be3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"FinalizeSteamSubscriptionTransaction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipClientApiUnity.GetDLCFileDetails
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::System::Action_1<::GlobalNamespace::SharedDownloadableFileResult*>*, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*)>(&::GlobalNamespace::MothershipClientApiUnity::GetDLCFileDetails)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x53be568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetDLCFileDetails", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::SharedDownloadableFileResult*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_isEnabled(bool  value)  {
::cordl_internals::setStaticField<bool, "isEnabled", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::MothershipClientApiUnity::getStaticF_isEnabled()  {
return ::cordl_internals::getStaticField<bool, "isEnabled", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_MothershipBaseUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "MothershipBaseUrl", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MothershipClientApiUnity::getStaticF_MothershipBaseUrl()  {
return ::cordl_internals::getStaticField<::StringW, "MothershipBaseUrl", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_TitleId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "TitleId", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MothershipClientApiUnity::getStaticF_TitleId()  {
return ::cordl_internals::getStaticField<::StringW, "TitleId", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_EnvironmentId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "EnvironmentId", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MothershipClientApiUnity::getStaticF_EnvironmentId()  {
return ::cordl_internals::getStaticField<::StringW, "EnvironmentId", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_DeploymentId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "DeploymentId", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MothershipClientApiUnity::getStaticF_DeploymentId()  {
return ::cordl_internals::getStaticField<::StringW, "DeploymentId", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_MothershipWebSocketUrl(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "MothershipWebSocketUrl", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MothershipClientApiUnity::getStaticF_MothershipWebSocketUrl()  {
return ::cordl_internals::getStaticField<::StringW, "MothershipWebSocketUrl", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_SessionId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "SessionId", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::MothershipClientApiUnity::getStaticF_SessionId()  {
return ::cordl_internals::getStaticField<::StringW, "SessionId", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_client(::GlobalNamespace::MothershipClientApiClient*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipClientApiClient*, "client", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipClientApiClient*>(value));
}
inline ::GlobalNamespace::MothershipClientApiClient* GlobalNamespace::MothershipClientApiUnity::getStaticF_client()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipClientApiClient*, "client", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_http(::GlobalNamespace::MothershipHttpClientUnity*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipHttpClientUnity*, "http", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipHttpClientUnity*>(value));
}
inline ::GlobalNamespace::MothershipHttpClientUnity* GlobalNamespace::MothershipClientApiUnity::getStaticF_http()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipHttpClientUnity*, "http", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_websocket(::GlobalNamespace::MothershipWebSocketWrapper*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipWebSocketWrapper*, "websocket", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipWebSocketWrapper*>(value));
}
inline ::GlobalNamespace::MothershipWebSocketWrapper* GlobalNamespace::MothershipClientApiUnity::getStaticF_websocket()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipWebSocketWrapper*, "websocket", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_websocketDispatcher(::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher>, "websocketDispatcher", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher>>(value));
}
inline ::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher> GlobalNamespace::MothershipClientApiUnity::getStaticF_websocketDispatcher()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::MothershipWebSocketDispatcher>, "websocketDispatcher", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_logCallback(::GlobalNamespace::MothershipLogCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipLogCallback*, "logCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipLogCallback*>(value));
}
inline ::GlobalNamespace::MothershipLogCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_logCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipLogCallback*, "logCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_auth(::GlobalNamespace::MothershipAuthCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipAuthCallback*, "auth", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipAuthCallback*>(value));
}
inline ::GlobalNamespace::MothershipAuthCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_auth()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipAuthCallback*, "auth", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_authRefreshRequiredCallback(::GlobalNamespace::MothershipAuthRefreshRequiredCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipAuthRefreshRequiredCallback*, "authRefreshRequiredCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipAuthRefreshRequiredCallback*>(value));
}
inline ::GlobalNamespace::MothershipAuthRefreshRequiredCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_authRefreshRequiredCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipAuthRefreshRequiredCallback*, "authRefreshRequiredCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_beginQuestCallback(::GlobalNamespace::MothershipBeginQuestCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipBeginQuestCallback*, "beginQuestCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipBeginQuestCallback*>(value));
}
inline ::GlobalNamespace::MothershipBeginQuestCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_beginQuestCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipBeginQuestCallback*, "beginQuestCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_beginSteamCallback(::GlobalNamespace::MothershipBeginSteamCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipBeginSteamCallback*, "beginSteamCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipBeginSteamCallback*>(value));
}
inline ::GlobalNamespace::MothershipBeginSteamCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_beginSteamCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipBeginSteamCallback*, "beginSteamCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_getUserdataCallback(::GlobalNamespace::MothershipGetUserDataCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipGetUserDataCallback*, "getUserdataCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipGetUserDataCallback*>(value));
}
inline ::GlobalNamespace::MothershipGetUserDataCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_getUserdataCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipGetUserDataCallback*, "getUserdataCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_setUserDataCallback(::GlobalNamespace::MothershipSetUserDataCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipSetUserDataCallback*, "setUserDataCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipSetUserDataCallback*>(value));
}
inline ::GlobalNamespace::MothershipSetUserDataCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_setUserDataCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipSetUserDataCallback*, "setUserDataCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_createReportCallback(::GlobalNamespace::MothershipCreateReportCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipCreateReportCallback*, "createReportCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipCreateReportCallback*>(value));
}
inline ::GlobalNamespace::MothershipCreateReportCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_createReportCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipCreateReportCallback*, "createReportCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_getUserInventoryCallback(::GlobalNamespace::MothershipGetUserInventoryCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipGetUserInventoryCallback*, "getUserInventoryCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipGetUserInventoryCallback*>(value));
}
inline ::GlobalNamespace::MothershipGetUserInventoryCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_getUserInventoryCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipGetUserInventoryCallback*, "getUserInventoryCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_getMergedInventoryCallback(::GlobalNamespace::MothershipGetMergedInventoryCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipGetMergedInventoryCallback*, "getMergedInventoryCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipGetMergedInventoryCallback*>(value));
}
inline ::GlobalNamespace::MothershipGetMergedInventoryCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_getMergedInventoryCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipGetMergedInventoryCallback*, "getMergedInventoryCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_getStorefrontCallback(::GlobalNamespace::MothershipGetStorefrontCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipGetStorefrontCallback*, "getStorefrontCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipGetStorefrontCallback*>(value));
}
inline ::GlobalNamespace::MothershipGetStorefrontCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_getStorefrontCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipGetStorefrontCallback*, "getStorefrontCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_purchaseOfferCallback(::GlobalNamespace::MothershipPurchaseOfferCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipPurchaseOfferCallback*, "purchaseOfferCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipPurchaseOfferCallback*>(value));
}
inline ::GlobalNamespace::MothershipPurchaseOfferCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_purchaseOfferCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipPurchaseOfferCallback*, "purchaseOfferCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_notificationWrapper(::GlobalNamespace::MothershipNotificationsWrapper*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipNotificationsWrapper*, "notificationWrapper", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipNotificationsWrapper*>(value));
}
inline ::GlobalNamespace::MothershipNotificationsWrapper* GlobalNamespace::MothershipClientApiUnity::getStaticF_notificationWrapper()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipNotificationsWrapper*, "notificationWrapper", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_getProgressionCallback(::GlobalNamespace::MothershipGetPlayerProgressionCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipGetPlayerProgressionCallback*, "getProgressionCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipGetPlayerProgressionCallback*>(value));
}
inline ::GlobalNamespace::MothershipGetPlayerProgressionCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_getProgressionCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipGetPlayerProgressionCallback*, "getProgressionCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_getProgressionTreesCallback(::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*, "getProgressionTreesCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*>(value));
}
inline ::GlobalNamespace::MothershipGetPlayerProgressionTressCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_getProgressionTreesCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipGetPlayerProgressionTressCallback*, "getProgressionTreesCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_writeEventsCallback(::GlobalNamespace::MothershipWriteEventsCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipWriteEventsCallback*, "writeEventsCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipWriteEventsCallback*>(value));
}
inline ::GlobalNamespace::MothershipWriteEventsCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_writeEventsCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipWriteEventsCallback*, "writeEventsCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_listMothershipTitleDataCallback(::GlobalNamespace::MothershipListTitleDataCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipListTitleDataCallback*, "listMothershipTitleDataCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipListTitleDataCallback*>(value));
}
inline ::GlobalNamespace::MothershipListTitleDataCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_listMothershipTitleDataCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipListTitleDataCallback*, "listMothershipTitleDataCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_getMySubscriptionCallback(::GlobalNamespace::MothershipGetMySubscriptionCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipGetMySubscriptionCallback*, "getMySubscriptionCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipGetMySubscriptionCallback*>(value));
}
inline ::GlobalNamespace::MothershipGetMySubscriptionCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_getMySubscriptionCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipGetMySubscriptionCallback*, "getMySubscriptionCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_getRoomPlayersSubscriptionsCallback(::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*, "getRoomPlayersSubscriptionsCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*>(value));
}
inline ::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_getRoomPlayersSubscriptionsCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*, "getRoomPlayersSubscriptionsCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_initSteamSubPurchaseCallback(::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*, "initSteamSubPurchaseCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*>(value));
}
inline ::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_initSteamSubPurchaseCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipInitSteamSubscriptionPurchaseCallback*, "initSteamSubPurchaseCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_finalizeSteamSubPurchaseCallback(::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*, "finalizeSteamSubPurchaseCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*>(value));
}
inline ::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_finalizeSteamSubPurchaseCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipFinalizeSteamSubscriptionPurchaseCallback*, "finalizeSteamSubPurchaseCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_getFileDetailsCompleteCallback(::GlobalNamespace::MothershipGetFileDetailsCompleteCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipGetFileDetailsCompleteCallback*, "getFileDetailsCompleteCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipGetFileDetailsCompleteCallback*>(value));
}
inline ::GlobalNamespace::MothershipGetFileDetailsCompleteCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_getFileDetailsCompleteCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipGetFileDetailsCompleteCallback*, "getFileDetailsCompleteCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_consumeConsumableCompleteCallback(::GlobalNamespace::MothershipConsumeCompleteCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipConsumeCompleteCallback*, "consumeConsumableCompleteCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipConsumeCompleteCallback*>(value));
}
inline ::GlobalNamespace::MothershipConsumeCompleteCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_consumeConsumableCompleteCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipConsumeCompleteCallback*, "consumeConsumableCompleteCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_initSteamPurchaseCallback(::GlobalNamespace::MothershipSteamInitTransactionCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipSteamInitTransactionCallback*, "initSteamPurchaseCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipSteamInitTransactionCallback*>(value));
}
inline ::GlobalNamespace::MothershipSteamInitTransactionCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_initSteamPurchaseCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipSteamInitTransactionCallback*, "initSteamPurchaseCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_finalizeSteamPurchaseCallback(::GlobalNamespace::MothershipSteamFinalizeTransactionCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipSteamFinalizeTransactionCallback*, "finalizeSteamPurchaseCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipSteamFinalizeTransactionCallback*>(value));
}
inline ::GlobalNamespace::MothershipSteamFinalizeTransactionCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_finalizeSteamPurchaseCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipSteamFinalizeTransactionCallback*, "finalizeSteamPurchaseCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_refreshIAPCallback(::GlobalNamespace::MothershipRefreshIAPCallback*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MothershipRefreshIAPCallback*, "refreshIAPCallback", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::GlobalNamespace::MothershipRefreshIAPCallback*>(value));
}
inline ::GlobalNamespace::MothershipRefreshIAPCallback* GlobalNamespace::MothershipClientApiUnity::getStaticF_refreshIAPCallback()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MothershipRefreshIAPCallback*, "refreshIAPCallback", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_OnOpenNotificationSocket(::System::Action_1<::System::IntPtr>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::IntPtr>*, "OnOpenNotificationSocket", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::System::Action_1<::System::IntPtr>*>(value));
}
inline ::System::Action_1<::System::IntPtr>* GlobalNamespace::MothershipClientApiUnity::getStaticF_OnOpenNotificationSocket()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::IntPtr>*, "OnOpenNotificationSocket", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_OnMessageNotificationSocket(::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*, "OnMessageNotificationSocket", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*>(value));
}
inline ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>* GlobalNamespace::MothershipClientApiUnity::getStaticF_OnMessageNotificationSocket()  {
return ::cordl_internals::getStaticField<::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*, "OnMessageNotificationSocket", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_OnCloseNotificationSocket(::System::Action_1<::System::IntPtr>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::IntPtr>*, "OnCloseNotificationSocket", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::System::Action_1<::System::IntPtr>*>(value));
}
inline ::System::Action_1<::System::IntPtr>* GlobalNamespace::MothershipClientApiUnity::getStaticF_OnCloseNotificationSocket()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::IntPtr>*, "OnCloseNotificationSocket", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline void GlobalNamespace::MothershipClientApiUnity::setStaticF_OnErrorNotificationSocket(::System::Action_1<::System::IntPtr>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::IntPtr>*, "OnErrorNotificationSocket", ::GlobalNamespace::MothershipClientApiUnity*>(std::forward<::System::Action_1<::System::IntPtr>*>(value));
}
inline ::System::Action_1<::System::IntPtr>* GlobalNamespace::MothershipClientApiUnity::getStaticF_OnErrorNotificationSocket()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::IntPtr>*, "OnErrorNotificationSocket", ::GlobalNamespace::MothershipClientApiUnity*>();
}
inline ::UnityW<::GlobalNamespace::MothershipSharedSettings> GlobalNamespace::MothershipClientApiUnity::GetSharedSettingsObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetSharedSettingsObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MothershipSharedSettings>>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::MothershipClientApiUnity::IsClientLoggedIn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"IsClientLoggedIn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MothershipClientApiUnity::ForgetAllCredentials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"ForgetAllCredentials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::MothershipClientApiUnity::IsEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"IsEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MothershipClientApiUnity::Tick(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deltaTime);
}
inline void GlobalNamespace::MothershipClientApiUnity::SetLanguage(::StringW  newLanguage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"SetLanguage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newLanguage);
}
inline void GlobalNamespace::MothershipClientApiUnity::SetLogCallback(::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"SetLogCallback", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipLogLevel,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline void GlobalNamespace::MothershipClientApiUnity::SetAuthRefreshedCallback(::System::Action_1<::StringW>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"SetAuthRefreshedCallback", {}, {::i2c::type_of<::System::Action_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
inline bool GlobalNamespace::MothershipClientApiUnity::LogInWithInsecure1(::StringW  Username, ::StringW  AccountId, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"LogInWithInsecure1", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, Username, AccountId, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::LogInWithQuest(::StringW  nonce, ::StringW  userId, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"LogInWithQuest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nonce, userId, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::StartLogInWithQuest(::StringW  userId, ::System::Action_1<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"StartLogInWithQuest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::PlayerQuestBeginLoginV2Response*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, userId, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::CompleteLogInWithQuest(::StringW  userId, ::StringW  attestationToken, ::StringW  nonce, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"CompleteLogInWithQuest", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, userId, attestationToken, nonce, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::LogInWithRift(::StringW  nonce, ::StringW  userId, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"LogInWithRift", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nonce, userId, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::LogInWithGoogle(::StringW  token, ::StringW  userId, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"LogInWithGoogle", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, token, userId, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::LogInWithApple(::StringW  signature, ::StringW  gamePlayerId, ::StringW  teamPlayerId, ::StringW  certUri, ::StringW  salt, ::StringW  timestamp, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"LogInWithApple", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, signature, gamePlayerId, teamPlayerId, certUri, salt, timestamp, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::StartLoginWithSteam(::System::Action_1<::GlobalNamespace::PlayerSteamBeginLoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"StartLoginWithSteam", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::PlayerSteamBeginLoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::CompleteLoginWithSteam(::StringW  nonce, ::StringW  steamTicket, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"CompleteLoginWithSteam", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, nonce, steamTicket, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::LogInWithSynthesisVR(int64_t  DeviceId, ::System::Action_1<::GlobalNamespace::LoginResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"LogInWithSynthesisVR", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::LoginResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, DeviceId, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::GetUserDataValue(::StringW  keyName, ::System::Action_1<::GlobalNamespace::MothershipUserData*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction, ::StringW  targetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetUserDataValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipUserData*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keyName, successAction, errorAction, targetId);
}
inline bool GlobalNamespace::MothershipClientApiUnity::SetUserDataValue(::StringW  keyName, ::StringW  value, ::System::Action_1<::GlobalNamespace::SetUserDataResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction, ::StringW  targetId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"SetUserDataValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::SetUserDataResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, keyName, value, successAction, errorAction, targetId);
}
inline bool GlobalNamespace::MothershipClientApiUnity::CreateReport(::StringW  reportedUserId, int32_t  category, bool  moddedClient, ::StringW  metadata, ::System::Action_1<::GlobalNamespace::CreateReportResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"CreateReport", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::CreateReportResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, reportedUserId, category, moddedClient, metadata, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::GetUserInventory(::System::Action_1<::GlobalNamespace::MothershipGetInventoryResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetUserInventory", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipGetInventoryResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::GetUserInventory(::StringW  TargetPlayerMothershipId, ::System::Action_1<::GlobalNamespace::MothershipGetMergedInventoryResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetUserInventory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipGetMergedInventoryResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, TargetPlayerMothershipId, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::GetStorefront(::ArrayW<::StringW>  offerDisplays, ::System::Action_1<::GlobalNamespace::MothershipGetStorefrontResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetStorefront", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipGetStorefrontResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, offerDisplays, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::PurchaseOffer(::StringW  offerDisplayId, ::StringW  offerId, int32_t  displayIndex, ::System::Action_1<::GlobalNamespace::MothershipPurchaseOfferResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"PurchaseOffer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipPurchaseOfferResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, offerDisplayId, offerId, displayIndex, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::ConsumeConsumable(::StringW  entitlementId, ::System::Action_1<::GlobalNamespace::MothershipConsumeConsumableResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"ConsumeConsumable", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipConsumeConsumableResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, entitlementId, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::RefreshMetaIAP(::System::Action_1<::GlobalNamespace::MothershipRefreshIAPResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"RefreshMetaIAP", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipRefreshIAPResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::InitSteamPurchase(::StringW  displayId, ::StringW  offerId, int32_t  displayIndex, ::System::Action_1<::GlobalNamespace::InitSteamPurchaseResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"InitSteamPurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::InitSteamPurchaseResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, displayId, offerId, displayIndex, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::FinalizeSteamPurchase(::StringW  steamOrderId, ::System::Action_1<::GlobalNamespace::FinalizeSteamPurchaseResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"FinalizeSteamPurchase", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::FinalizeSteamPurchaseResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamOrderId, successAction, errorAction);
}
inline void GlobalNamespace::MothershipClientApiUnity::add_OnOpenNotificationSocket(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"add_OnOpenNotificationSocket", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MothershipClientApiUnity::remove_OnOpenNotificationSocket(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"remove_OnOpenNotificationSocket", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MothershipClientApiUnity::add_OnMessageNotificationSocket(/* [NativeInteger] */ ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"add_OnMessageNotificationSocket", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MothershipClientApiUnity::remove_OnMessageNotificationSocket(/* [NativeInteger] */ ::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"remove_OnMessageNotificationSocket", {}, {::i2c::type_of<::System::Action_2<::GlobalNamespace::NotificationsMessageResponse*,::System::IntPtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MothershipClientApiUnity::add_OnCloseNotificationSocket(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"add_OnCloseNotificationSocket", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MothershipClientApiUnity::remove_OnCloseNotificationSocket(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"remove_OnCloseNotificationSocket", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MothershipClientApiUnity::add_OnErrorNotificationSocket(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"add_OnErrorNotificationSocket", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::MothershipClientApiUnity::remove_OnErrorNotificationSocket(/* [NativeInteger] */ ::System::Action_1<::System::IntPtr>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"remove_OnErrorNotificationSocket", {}, {::i2c::type_of<::System::Action_1<::System::IntPtr>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool GlobalNamespace::MothershipClientApiUnity::OpenNotificationsSocket()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"OpenNotificationsSocket", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MothershipClientApiUnity::CloseWebSockets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"CloseWebSockets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MothershipClientApiUnity::TickWebSockets(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"TickWebSockets", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deltaTime);
}
inline void GlobalNamespace::MothershipClientApiUnity::InvokeOpenNotificationSocket(/* [NativeInteger] */ ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"InvokeOpenNotificationSocket", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userData);
}
inline void GlobalNamespace::MothershipClientApiUnity::InvokeMessageNotificationSocket(::GlobalNamespace::NotificationsMessageResponse*  notification, /* [NativeInteger] */ ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"InvokeMessageNotificationSocket", {}, {::i2c::type_of<::GlobalNamespace::NotificationsMessageResponse*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, notification, userData);
}
inline void GlobalNamespace::MothershipClientApiUnity::InvokeCloseNotificationSocket(/* [NativeInteger] */ ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"InvokeCloseNotificationSocket", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userData);
}
inline void GlobalNamespace::MothershipClientApiUnity::InvokeErrorNotificationSocket(/* [NativeInteger] */ ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"InvokeErrorNotificationSocket", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userData);
}
inline bool GlobalNamespace::MothershipClientApiUnity::GetPlayerProgressionData(::System::Action_1<::GlobalNamespace::GetProgressionTrackValuesForPlayerResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetPlayerProgressionData", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GetProgressionTrackValuesForPlayerResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::GetPlayerProgressionTreesData(::System::Action_1<::GlobalNamespace::GetProgressionTreesForPlayerResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetPlayerProgressionTreesData", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GetProgressionTreesForPlayerResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::WriteEvents(::StringW  callerId, ::GlobalNamespace::MothershipWriteEventsRequest*  req, ::System::Action_1<::GlobalNamespace::MothershipWriteEventsResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"WriteEvents", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MothershipWriteEventsRequest*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::MothershipWriteEventsResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, callerId, req, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::ListMothershipTitleData(::StringW  titleId, ::StringW  envId, ::StringW  deploymentId, ::GlobalNamespace::StringVector*  keys, ::System::Action_1<::GlobalNamespace::ListClientMothershipTitleDataResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"ListMothershipTitleData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::ListClientMothershipTitleDataResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, titleId, envId, deploymentId, keys, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::GetAndRefreshMySubscriptions(::System::Action_1<::GlobalNamespace::GetMySubscriptionsResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetAndRefreshMySubscriptions", {}, {::i2c::type_of<::System::Action_1<::GlobalNamespace::GetMySubscriptionsResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::GetRoomPlayerSubscriptions(::ArrayW<::StringW>  playerIds, ::System::Action_1<::GlobalNamespace::BulkGetSubscriptionsResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetRoomPlayerSubscriptions", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::BulkGetSubscriptionsResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, playerIds, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::InitSteamSubscriptionTransaction(::StringW  sku, ::StringW  frequencyUnit, int32_t  frequency, int32_t  priceInUSDCents, ::System::Action_1<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"InitSteamSubscriptionTransaction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::InitSteamSubscriptionPurchaseResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sku, frequencyUnit, frequency, priceInUSDCents, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::FinalizeSteamSubscriptionTransaction(::StringW  steamOrderId, ::System::Action_1<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseResponse*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"FinalizeSteamSubscriptionTransaction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::FinalizeSteamSubscriptionPurchaseResponse*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, steamOrderId, successAction, errorAction);
}
inline bool GlobalNamespace::MothershipClientApiUnity::GetDLCFileDetails(::StringW  fileId, ::System::Action_1<::GlobalNamespace::SharedDownloadableFileResult*>*  successAction, ::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*  errorAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipClientApiUnity*>(),
                        {"GetDLCFileDetails", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_1<::GlobalNamespace::SharedDownloadableFileResult*>*>(), ::i2c::type_of<::System::Action_2<::GlobalNamespace::MothershipError*,int32_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fileId, successAction, errorAction);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipClientApiUnity::MothershipClientApiUnity()   {
}
